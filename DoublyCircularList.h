#pragma once
#include <iostream>
#include <fstream>

template <typename T>
class DoublyCircularList {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;
    };
    Node* head;
    int size;

public:
    DoublyCircularList();
    ~DoublyCircularList();
    bool add(const T& newData);
    bool remove(const T& value);
    T* search(const T& value);
    void sort();
    void printForward() const;
    void printBackward() const;
    bool readFromFile(const std::string& filename);
    bool writeToFile(const std::string& filename);
};
extern template class DoublyCircularList<int>;
extern template class DoublyCircularList<float>;
extern template class DoublyCircularList<char>;
extern template class DoublyCircularList<std::string>;

//template <>
//bool DoublyCircularList<std::string>::readFromFile(const std::string& filename);
//template <>
//bool DoublyCircularList<std::string>::writeToFile(const std::string& filename);