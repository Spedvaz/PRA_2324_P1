#ifndef LIST_H
#define LIST_H

template <typename T> 
class List {
    public:
<<<<<<< HEAD
    virtual void insert(int pos, T e) = 0;
=======
        virtual void insert(int pos, T e) = 0;
>>>>>>> 1a57e8c6a1ed493323181b3799558a048ab609aa
	virtual void append(T e) = 0;
	virtual void prepend(T e) = 0;
	virtual T remove(int pos) = 0;
	virtual T get(int pos) = 0;
	virtual int search(T e) = 0;
	virtual bool empty() = 0;
	virtual int size() = 0;
};

#endif
