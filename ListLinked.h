#include <ostream>
#include <iostream>
#include "List.h"
#include "Node.h"

template <typename T>
class ListLinked : public List<T> {

    private:
 
        Node <T>* first;
		int n;

    public:
		ListLinked();
		~ListLinked();
		T operator[](int pos);

		template <typename U>
		friend std::ostream& operator<<(std::ostream& out, const ListLinked<T> &list);
		void insert(int pos, T e) override final;
		void append(T e) override final;
		void prepend(T e) override final;
		T remove(int pos) override final;
		T get(int pos) override final;
		int search(T e) override final;
		bool empty() override final;
		int size() override final;
};      


template <typename T>

ListLinked<T>::ListLinked(){
	this->n = 0;
	this->first = nullptr;
}

template <typename T>

ListLinked<T>::~ListLinked(){
	
	Node<T>* aux;	
	while(first != nullptr){ //while ( hasta que first sea null)
		aux = first->next;
		delete[] first;
		first = aux;
	}
}  


template <typename T>

T ListLinked<T>::operator[](int pos){
	if(pos < 0 || pos > ListLinked::size()-1){
		throw std::out_of_range("La posicion esta fuera de rango");
	}else{
		return pos;
	}
}

template <typename T>

std::ostream& operator<<(std::ostream& out, const ListLinked<T> &list){
	Node<T>* current = list.first;
	while(current != nullptr){
		out << current->data << " ";
		current == current->next;
	}
	return out;	
}

template <typename T>

void ListLinked<T>::insert(int pos, T e){
    Node<T>* current = first;
	if(pos < 0 || pos > size()){
        throw std::out_of_range("No esta en rango");
    }else{
        for(int i = 0; i < pos; i++){
			current = current->next;
		}
		current->data = e;
    }
}

template <typename T>

void ListLinked<T>::append(T e){
    insert(n, e);
}

template <typename T>

void ListLinked<T>::prepend(T e){
    insert( 0, e);
}

template <typename T>

T ListLinked<T>::remove(int pos){
   Node<T>* current = first;

	 if( pos < 0 || pos > size()-1){
        throw std::out_of_range("La posición está fuera de rango");
    }else{
        if(current == nullptr){
			std::cout<<"La lista esta vacia"<<std::endl;
			return -1;
		}else{
			if(pos == 0){
				int data = current->data;
				current = current->next;
				delete[] current;
				return data;
			}
			for(int i = 0; current != nullptr && i < pos;i++){
				current = current -> next;
				if(i == pos){
					Node<T>* eliminar = current;
					int data = eliminar->data;
					current = eliminar->next;
					delete[] eliminar;
					return data;	
				}
			} 			 	
		}
    }
}

template <typename T>

T ListLinked<T>::get(int pos){
Node<T>* current = first;

    if( pos < 0 || pos > size-1){
        throw std::out_of_range("La posición está fuera de rango");
    }else{
        for(int i = 0; i < pos; i++){
			current = current->next;
			if(i == pos){
				int data = current->data;
				return data;
			}
		}
    }
}

template <typename T>

int ListLinked<T>::search(T e){
    Node<T>* current = first;

	while(current =! nullptr){
            if(current == e){
                return n;
            }                                  // Node* current = first; otra manera preguntar a jorge
		current = current->next;
		n++;
    }

    return -1;
}

template <typename T>

bool ListLinked<T>::empty(){
    if(n == 0){
        return true;
    }
    return false;
}

template <typename T>

int ListLinked<T>::size(){
    return n;
}
