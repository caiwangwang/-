#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    char po;
    cout << "please enter A to add \n"
        << "p to process \n";
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            cout << "this is error input, again\n";
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':
                cout << "a -- enter\n";
                cin >> po;
                if(st.isfull())
                    cout << "a --  is full\n";
                else 
                    cout << "po:" << po << endl;
                    st.push(po);
                break;
            case 'p':
         /*   case 'P':
                if(st.isempty())
                    cout << "p -- stack already emtpy\n";
                else 
                {
                    st.pop(po);
                    cout << "p----po #" << po << "popped \n";
                }*/
                break;
        }
        cout << "z--add \n"
            << "z-- quit\n";
    }
    cout << "f--bye\n";
    return 0;
        
}
