#include <iostream>
#include "tabtenn0.h"

using namespace std;

void TableTennisPlayer::Name() const
{
    cout << lastname << ", " << firstname;
}

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) 
: firstname(fn), lastname(ln), hasTable(ht) {}

RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
                         const string & ln, bool ht) : rating(r)
{
}


