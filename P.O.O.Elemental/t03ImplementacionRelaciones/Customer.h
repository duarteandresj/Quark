#ifndef PRJBANK_CUSTOMER_H
#define PRJBANK_CUSTOMER_H

#include <vector>
#include <string>
#include "Account.h"
#include "EGender.h"
using namespace std;
class Account;

class Customer
{
public:
    Customer();
    Customer(const string &idCustomer, const string &firstName, const string &lastName, EGender gender, const string &phone);
    const string &getIdCustomer() const;
    void setIdCustomer(const string &idCustomer);
    const string &getFirstName() const;
    void setFirstName(const string &firstName);
    const string &getLastName() const;
    void setLastName(const string &lastName);
    EGender getGender() const;
    void setGender(EGender gender);
    const string &getPhone() const;
    void setPhone(const string &phone);
    Account *findAccount(string);
    void addAccount(Account *);
    vector<Account *> getAccounts();
    string toString();

    virtual ~Customer();

private:
    string idCustomer;
    string firstName;
    string lastName;
    EGender gender;
    string phone;
    vector<Account *> accounts;
};

#endif // PRJBANK_CUSTOMER_H
