#include <iostream>
#include "stock10.h"

using namespace std;
int main()
{
    {   
        using std::cout;
        cout << "using constructors to create \n";
        Stock stock1("nanosmart", 12, 20.0);
        stock1.show();
        

    }
        cout << "mark..........." << endl;
    return 0;
}
