#include <iostream>
#include <string.h>
using namespace std;
class Stack{
private:
    int* arr;
    int size;
    int countofelements;
public:
    Stack();
    ~Stack();
    void push(int value);
    void pop();
    int getmax();
    int getmin();
    int getcount();
    void put();
};
