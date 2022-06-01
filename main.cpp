#include<iostream>
#include<stdio.h>
using namespace std;
class Stack
{
private:
    int capacity;
    int top;
    int *arr;
public:
    Stack();
    Stack(int);
    void createStack(int cap);
    bool isEmpty();
    bool isFull();
    void push(int data);
    void pop();
    int peek();
};
Stack::Stack()
{
    top=-1;arr=NULL;capacity=0;
}
Stack::Stack(int cap)
{
    if(cap>0)
    {
    capacity=cap;
    top=-1;
    arr=new int[capacity];
    }
}
void Stack::createStack(int cap)
{
    if(cap>0)
    {
        if(arr!=NULL)
        {
            delete []arr;
        }
        capacity=cap;
        top=-1;
        arr=new int[capacity];
    }
}
bool Stack::isFull()
{
    return top==capacity-1;
}
bool Stack::isEmpty()
{
    return top==-1;
}
void Stack::push(int data)
{
    if(isFull())
    {
        cout<<"OPERATION FAILED:STACK OVERFLOW!\n";
    }
    else
    {
        arr[++top]=data;
    }
}
void Stack::pop()
{
    if(isEmpty())
    {
        cout<<"OPERATION FAILED:STACK UNDERFLOW!\n";
    }
    else
    {
        --top;
    }
}
int Stack::peek()
{
    if(isEmpty())
    {
        cout<<"OPERATION FAILED:STACK IS EMPTY!\n";
    }
    else
    {
        return arr[top];
    }
}
