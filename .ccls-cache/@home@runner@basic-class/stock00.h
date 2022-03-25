// stockoo.h Stock class 
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>
// class combine data and operation in the same definition
class Stock
{
  private:  // default type 
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val; }

  public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
    void show_old();
};
#endif