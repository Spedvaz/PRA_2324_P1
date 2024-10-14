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
<<<<<<< HEAD
	template <typename U>
	friend std::ostream& operator<<(std::ostream &out, const ListArray<U> &list);
	void insert(int pos, T e) override final;
	void append(T e) override final;
	void prepend(T e) override final;		
	T remove(int pos) override final;		
	T get(int pos) override final;
	int search(T e) override final;		
	bool empty() override final;		
	int size() override final;		
};

template<typename T>
const int ListArray<T>::MINSIZE = 2;

template <typename T>

ListArray<T>::ListArray(){
	this->arr = new T[MINSIZE];
	this->max = MINSIZE;
	this->n = 0;
}
=======
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

>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
template <typename T>

ListArray<T>::~ListArray(){
	delete[] arr;
}

template <typename T>

<<<<<<< HEAD
T ListArray<T>::operator[](int pos){
	if(pos < 0 || pos > size()-1){
		throw std::out_of_range("Esta fuera del intervalo");
	}
	return arr[pos];
=======
ListArray<T>::operator[](int pos){
	if(pos < 0 || pos > ListArray::size()-1){
		throw std::out_of_range("Esta fuera del intervalo");
	}
	return pos;
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
}

template <typename T>

<<<<<<< HEAD
std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){
	for( int i = 0; i < list.n ; i++){
		out << list.arr[i] << " ";
	}
	return out;
=======
ListArray::std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){
	for( int i = 0; i < n ; i++){
		out << arr[i] << " ";
		return out;
	}
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
}

template <typename T>

<<<<<<< HEAD
void ListArray<T>::resize(int new_size){
	T* new_arr = new T[new_size];
	for(int i = 0;i < n; i++){
		 new_arr[i] = arr[i];
	}
	delete[] arr;
	arr = new_arr;
	max = new_size;
}

template <typename T>

void ListArray<T>::insert(int pos, T e){
=======
void ListArray<T>::insert (int pos, T e){
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
	if(pos < 0 || pos > size()){
		throw std::out_of_range("No esta en rango");
	}else{
		ListArray<T>::resize(max+1);
<<<<<<< HEAD
		for(int i = max; i > pos; i--){
			arr[i] = arr[i-1];
		}
		arr[pos] = e;
=======
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
	}
}

template <typename T>

void ListArray<T>::append(T e){
<<<<<<< HEAD
	insert(max+1, e);  
=======
	
	insert(n, T e);  
	n++;
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
}

template <typename T>

<<<<<<< HEAD
void ListArray<T>::prepend(T e){
	insert( 0, e);
}

template <typename T>

T ListArray<T>::remove(int pos){
	if( pos < 0 || pos > size()-1){
		throw std::out_of_range("La posición está fuera de rango");
	}else{
		int valor = arr[pos];
		delete[] arr[pos];//si se elimina como puedo reservarlo
		resize(max-1);
		return valor;
	}
=======
void ListArray<T>prepend(T e){
	for(int i = 0; i < size; i++){
		data[i+1] = data[i];
	}
	insert( 0 , T e);
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
}

template <typename T>

<<<<<<< HEAD
T ListArray<T>::get(int pos){
	if( pos < 0 || pos > size-1){
		throw std::out_of_range("La posición está fuera de rango");
	}else{
		return arr[pos];
	}
=======
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
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
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
