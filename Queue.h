#pragma once
#include <iostream>
#include <fstream>
using namespace std;

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* front;
    Node* end;
public:
    Queue();
    ~Queue();
    bool enqueue(T newCar);
    T dequeue();
    T searchByValue(T& phone);
    void deleteByValue(T& phone);
    void sortByValue();
    bool readFromFile(std::string& filename);
    bool writeToFile(std::string& filename);
    void print();
};

extern template class Queue<int>;
extern template class Queue<float>;
extern template class Queue<char>;
extern template class Queue<std::string>;
