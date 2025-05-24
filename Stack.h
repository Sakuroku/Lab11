#pragma once
#include <iostream>
#include<fstream>

template <typename T>
class Stack {
private:
	struct Node {
		T data;
		Node* prev;
	};
	Node* top;
public:
	Stack();
	~Stack();
	bool push(T newData);
	T pop();
	T searchbyvalue(T value);
	void deletebyvalue(T value);
	void sortbyvalue();
	bool readfromfile(std::string& filename);
	bool writetofile(std::string& filename);
	void print();
};


extern template class Stack<int>;
extern template class Stack<float>;
extern template class Stack<char>;
extern template class Stack<std::string>;
