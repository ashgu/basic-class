// stockoo.h Stock class 
#ifndef STOCK10_H_
#define STOCK10_H_

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
    //void acquire(const std::string & co, long n, double pr);
    Stock();      // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();     // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;   // const member function
    void show_old();
    const Stock & topval(const Stock & s) const;
};
#endif