//
//  main.cpp
//  stackDS
//
//  Created by ashraf on 15/11/2022.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

template <class t>
class Stack {
    int top;
    t items[MAX_SIZE];
    
public:
    Stack(): top (-1) {}
    
    void push(int Element){
        if (top>=MAX_SIZE - 1){
            cout << "Stack full on push";
        }
        else {
            top += 1;
            items[top] = Element;
        }
    }
    
    bool isEmpty(){
        return top < 0;
    }
    
    void pop(){
        if (isEmpty()){
            cout << "Stack empty on pop";
        }
        else
            top--;
    }
    
    void pop(int& Element){
        if (isEmpty()){
            cout << "Stack empty on pop";
        }
        else {
            Element = items[top];
            top--;
        }
    }
    
    void removeElements (){
        top = -1;
    }
    
    void print (){
        if (!isEmpty()) {
            for (size_t i = 0; i <= top; i++){
                cout << items[i] << "\t";
            }
            cout << endl;
        } else {
            cout << "Stack is empty!" << endl;
        }
    }
};


int main(int argc, const char * argv[]) {
    
    Stack<int> stack;
    stack.push(54);
    stack.push(23);
    stack.push(34);
    stack.pop();
    stack.push(12);
    stack.print();
    stack.removeElements();
    stack.print();
    
    return 0;
}
