#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
/* flag: */
    unsigned long po;
    char a;
    /* bool b; */
    while(cin >> a)
    {
    /* b = (cin >> po); */
        /* cout << "a:" << b << endl; */
        cin >> po;
        cout << "p:" << po << endl;
        /* cin >> b; */
        cin.clear();
        /* cin.ignore(); */
        goto flag; 
    }
    return 0;
}
flag:
cout << "a";
