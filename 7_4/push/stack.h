#ifndef _STACK_H_
#define _STACK_H_

typedef unsigned long Ulong;

class Stack
{
private:
    enum {MAX = 10};
    Ulong items[MAX];
    int top;
public:
    Stack();
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const char & a);
    bool pop(Ulong & a);
};





#endif
