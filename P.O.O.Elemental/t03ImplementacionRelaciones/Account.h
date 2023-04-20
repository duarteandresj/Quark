#ifndef PRJBANK_ACCOUNT_H
#define PRJBANK_ACCOUNT_H

#include <string>
#include "Customer.h"

using namespace std;

class Customer;
class Account
{
public:
    const static double minResidue;
    Account();
    Account(Customer *, const string &number, double residue);
    void setCustomer(Customer *);
    void setNumber(const string &number);
    const string &getNumber() const;
    double getResidue() const;
    int getConsignments() const;
    int getWithdrawals() const;
    Customer *getCustomer();
    void consign(double);
    bool withDraw(double);
    bool transfer(Account *, double);
    static string parseNum(double); 
    string toString();
    virtual ~Account();

private:
    string number;
    double residue;
    int consignments;
    int withdrawals;
    Customer *customer;

    void setResidue(double);
};

#endif //  PRJBANK_ACCOUNT_H