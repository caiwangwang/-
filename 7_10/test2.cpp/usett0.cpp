#include <iostream>
#include "tabtenn0.h"

using namespace std;

int main(void)
{
    TableTennisPlayer player1("chunk", "blizzard", true);
    TableTennisPlayer player2("tara", "boomdea", false);
    RatedPlayer rplayer1(1140, "wang", "duck", true);
    RatedPlayer rplayer2(110, player2);

    rplayer1.Name();
    if(rplayer1.HasTable())
        cout << ": has a table. \n";
    else
        cout << ": hasn't a table .\n";
    
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
    
    rplayer2.Name();
    if(rplayer2.HasTable())
        cout << ": has a table. \n";
    else
        cout << ": hasn't a table .\n";
    return 0;
}
