#include <iostream>
#include "stock00.h"

int main()
{
    Stock flu_cat;
    flu_cat.ac("wangzai", 20 , 12.50);
    flu_cat.show();
    flu_cat.buy(15, 18.125);
    flu_cat.show();
    flu_cat.sell(400, 20.00);
    flu_cat.show();
    flu_cat.buy(30000, 40.125);
    flu_cat.show();
    flu_cat.sell(3000, 0.125);
    flu_cat.show();
    return 0;
}
