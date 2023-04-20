#ifndef PRJBANK_MANAGMENT_H
#define PRJBANK_MANAGMENT_H

#include "Account.h"
#include "Customer.h"
using namespace std;

class ManagementBank
{
public:
    ManagementBank();
    Customer *findCustomer(string);
    bool addCustomer(string, string, string, EGender, string);
    Account *findAccount(string);
    bool addAccount(string, string, double);
    bool consign(string, double);
    bool whitDrawn(string, double);
    bool transfer(string, string, double);
    vector<Customer *> getCustomers();
    vector<Account *> getAccounts();

    virtual ~ManagementBank();

private:
    vector<Account *> accounts;
    vector<Customer *> customers;
};

#endif // !PRJBANK_MANAGMENT_H
