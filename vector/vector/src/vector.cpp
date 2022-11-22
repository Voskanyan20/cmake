#include <iostream>
#include "vector.h"
using namespace std;

vector::vector(){
    capacity = 1;
    size = 0;
    arr = new int[capacity];
}

vector::vector(int newSize){
    this->capacity = newSize;
    arr = new int[capacity];
}

vector::~vector(){}

int vector::get_capacity() const{
    return this -> capacity;
}

int vector::get_size() const{
    return this -> size;
}

void vector::push_back(int value){
    if (this -> size == this -> capacity)
    {
        int * temp = new int [capacity * 2];
        for (int i = 0; i < this -> size; i++)
        {
            temp[i] = arr[i];
        }
        delete [] arr;
        arr = temp;
        this -> capacity = capacity * 2;
    }
    arr[this -> size] = value;
    this -> size++;
}

// void vector::push_front(int value){
//     if (this -> size == this -> capacity)
//     {
//         int * temp = new int [capacity * 2];
//         for (int i = 0; i < this -> size; i++)
//         {
//             temp[i+1] = arr[i];
//         }
//         arr = temp;
//         this -> capacity = capacity * 2;
//         arr[0] = value;
//     }
//     arr[size] = value;
//     size++;
// }

void vector::erase(int index){
    if (this -> size - 1 == index)
    {
        this -> size--;
    }else if(this -> size - 1 > index){
        for (int i = index; i < this -> size; i++)
        {
            arr[i] = arr[i + 1];
        }
        this -> size--;
    }else{
        cout << "Error" << endl;    
    }
    
}

void vector::insert(int index , int value){
    if (this -> size == this -> capacity)
    {
        int * temp = new int [capacity * 2];
        for (int i = 0; i < this -> size + 1; i++)
        {
            if(i < index){
                temp[i] = arr[i];
            }
            if (i > arr[i])
            {
                temp[i + 1] = arr[i - 1];
            }
        }
        arr = temp;
        this -> capacity = capacity * 2;
    }
    arr[index] = value;
    size++;
}

int vector::operator [] (int index) {
    return arr[index];    
}

vector vector::operator = (const vector &vect){
	if(capacity < vect.capacity) {
		capacity = vect.capacity;
		delete [] arr;
		arr = new int[capacity];
	}
	this -> size = vect.size;
	for (int i = 0; i % size ;i++){
		arr[i] = vect.arr[i];
	}
	return *this;
}