#include "classes.h"
//конструктор
Stack::Stack(){
        arr = nullptr;
        size = 0;
        countofelements=0;
}
//деструктор
Stack::~Stack(){
        if(arr!=nullptr){
            delete arr;
        }
}
//додавання елементу в стек
//створюємо вказівник, в якому буде на один більше елементів, залишаємо місце для вершини, після чого присвоюємо
//нульовому елементу(вершині стеку) нове значення
//присвоюємо головному вказівнику вказівник створений у функції
void Stack::push(int value){
        int* tmp = new int[size+1];
        for(int i=1, k=0;i<size+1;i++,k++){
            tmp[i] = arr[k];
        }
        tmp[0] = value;
        delete[] arr;
        arr = tmp;
        delete[] tmp;
        size++;
        countofelements++;
}
//видалення елементу зі стеку
//створюємо вказівник, який має на один менше елемент, заповнюємо його значення з попереднього стеку
//потім присвоюємо нашому вказівнику вказівник, створений у ф-ції
void Stack::pop(){
        if(size==0){
            return;
        }
        if(size==1){
            delete arr;
            countofelements--;
            size=0;
            return;
        }
        int* tmp = new int[size-1];
        for(int i=0, k=1;i<size-1;i++, k++){
            tmp[i] = arr[k];
        }
        delete[]arr;
        arr = tmp;
        delete[] tmp;
        size--;
        countofelements--;
}
//знаходження максимального
int Stack::getmax(){
        if(size==0){
            return -1;
        }
        int max = arr[0];
        for(int i=0;i<this->size;i++){
            if(max<arr[i]){
                max = arr[i];
            }
        }
        return max;
}
//знаходження мінімального
int Stack::getmin(){
        if(size==0){
            return -1;
        }
        int min = arr[0];
        for(int i=0;i<this->size;i++){
            if(min>arr[i]){
                min = arr[i];
            }
        }
        return min;
}
//к-сть елементів
int Stack::getcount(){
    return countofelements;
}
//виведення стеку
void Stack::put(){
    if(this->size==0){
            return;
    }
    for(int i=0;i<this->size;i++){
            cout<<arr[i]<<endl;
    }
}

