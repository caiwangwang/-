#include <iostream>
#include "mytime1.h"

using namespace std;

int main()
{   
    Time a(2,3);
    Time b(3,2);
    Time c;
    c = a + b;
    /* cout << "add: " << c.hours << "\n" << c.minutes  << endl; */
    c.show();

    return 0;
}
