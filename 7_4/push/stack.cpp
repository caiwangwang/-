#include <iostream>
#include "stack.h"
using namespace std;
Stack::Stack()
{
    top = 0;    
}
Stack::~Stack()
{
    cout << "delete \n";
}


bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const char & a)
{
    cout << "a:" << a << endl;
    if(top < MAX)
    {
        items[top++] = a;
        cout << "this push num :" << items[top - 1] << endl;
        return true;
    }
    else 
        return false;
}

bool Stack::pop(Ulong & a)
{
    if(top > 0)
    {
        a = items[--top];
        return true;
    }
    else false;
}
