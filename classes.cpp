#include "classes.h"
//�����������
Stack::Stack(){
        arr = nullptr;
        size = 0;
        countofelements=0;
}
//����������
Stack::~Stack(){
        if(arr!=nullptr){
            delete arr;
        }
}
//��������� �������� � ����
//��������� ��������, � ����� ���� �� ���� ����� ��������, �������� ���� ��� �������, ���� ���� ����������
//��������� ��������(������ �����) ���� ��������
//���������� ��������� ��������� �������� ��������� � �������
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
//��������� �������� � �����
//��������� ��������, ���� �� �� ���� ����� �������, ���������� ���� �������� � ������������ �����
//���� ���������� ������ ��������� ��������, ��������� � �-���
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
//����������� �������������
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
//����������� ����������
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
//�-��� ��������
int Stack::getcount(){
    return countofelements;
}
//��������� �����
void Stack::put(){
    if(this->size==0){
            return;
    }
    for(int i=0;i<this->size;i++){
            cout<<arr[i]<<endl;
    }
}

