#ifndef STOCK_H_
#define STOCK_H_

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot();
public:
    void ac(const std:: string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

inline void Stock::set_tot()
{
    total_val = shares * share_val;
}
#endif
