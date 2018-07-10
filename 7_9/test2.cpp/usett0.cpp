#include <iostream>
#include "tabtenn0.h"

using namespace std;

int main(void)
{
    TableTennisPlayer player1("chunk", "blizzard", true);
    TableTennisPlayer player2("tara", "boomdea", false);
    
    player1.Name();
    if(player1.HasTable())
        cout << ": has a table. \n";
    else
        cout << ": hasn't a table .\n";
    
    player2.Name();
    if(player2.HasTable())
        cout << ": has a table. \n";
    else
        cout << ": hasn't a table .\n";
    
    return 0;
}
