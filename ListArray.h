#include <ostream>
#include "List.h"

template <typename T> 
class ListArray : public List<T> {

    private:
	void resize(int new_size);
	T* arr;
	int max;
	int n;
	static const int MINSIZE;
    public:
    ListArray();
	~ListArray();
	T operator[](int pos);
	friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list);
	void insert(int pos, T e) const override final;
	void append(T e) const override final;
	void prepend(int pos) const override final;		
	T remove(int pos) const override final;		
	T get(int pos) const override final;
	int search(T e) const override final;		
	bool empty() const override final;		
	int size() const override final;		
};

template <typename T>

ListArray<T>::ListArray(){
	T* arr;
	int max;
	int n;
	static const int MINSIZE;
	arr = new T [MINSIZE];i
}

template <typename T>

ListArray<T>::~ListArray(){
	delete[] arr;
}

template <typename T>

ListArray<T>::operator[](int pos){
	if(pos < 0 || pos > ListArray::size()-1){
		throw std::out_of_range("Esta fuera del intervalo");
	}
	return pos;
}

template <typename T>

ListArray::std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){
	for( int i = 0; i < n ; i++){
		out << arr[i] << " ";
		return out;
	}
}

template <typename T>

void ListArray<T>::insert (int pos, T e){
	if(pos < 0 || pos > size()){
		throw std::out_of_range("No esta en rango");
	}else{
		ListArray<T>::resize(max+1);
	}
}

template <typename T>

void ListArray<T>::append(T e){
	
	insert(n, T e);  
	n++;
}

template <typename T>

void ListArray<T>prepend(T e){
	for(int i = 0; i < size; i++){
		data[i+1] = data[i];
	}
	insert( 0 , T e);
}

template <typename T>

ListArray::T remove(int pos){
	if( pos < 0 || pos > size-1){
		throw std::out_of_range("La posición está fuera de rango");
	}
	int valor = arr[pos];
	delete[] arr[pos];//si se elimina como puedo reservarlo
	return valor;
}

template <typename T>

ListArray::T get(int pos){
	if( pos < 0 || pos > size-1){
		throw std::out_of_range("La posición está fuera de rango");
	}
	return arr[pos];
}

template <typename T>

int ListArray<T>::search(T e){
	for(int i = 0; i < n; i++){
			if(arr[i] == e){
				return i;
			}
	}
	
	return -1;
}	

template <typename T>

bool ListArray<T>::empty(){
	if(n == 0){
		return true;
	}
	return false;
}

template <typename T>

int ListArray<T>::size(){
	return n;
}
