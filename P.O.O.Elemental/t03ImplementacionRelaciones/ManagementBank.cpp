#include "ManagementBank.h"
using namespace std;

ManagementBank::ManagementBank()
{
}
Customer *ManagementBank::findCustomer(string idCustomer)
{
    for (Customer *customer : customers)
    {
        if (customer->getIdCustomer().compare(idCustomer) == 0)
        {
            return customer;
        }
    }
    return NULL;
}

bool ManagementBank::addCustomer(string idCustomer, string firstname, string lastname, EGender gender, string phone)
{
    if (!findCustomer(idCustomer))
    {
        customers.push_back(new Customer(idCustomer, firstname, lastname, gender, phone));
        return true;
    }
    return false;
}

Account *ManagementBank::findAccount(string number)
{
    for (Account *account : accounts)
    {
        if (account->getNumber().compare(number) == 0)
        {
            return account;
        }
    }
    return NULL;
}
bool ManagementBank::addAccount(string idCustomer, string number, double value)
{
    Customer *customer = findCustomer(idCustomer);
    if (customer)
    {
        if (!findAccount(number))
        {
            Account *account = new Account(customer, number, value);
            accounts.push_back(account);
            customer->addAccount(account);
            return true;
        }
        return false;
    }
    return false;
}

bool ManagementBank::consign(string number, double value)
{
    Account *account = findAccount(number);
    if (account)
    {
        account->consign(value);
        return true;
    }
    return false;
}

bool ManagementBank::whitDrawn(string number, double value)
{
    Account *account = findAccount(number);
    if (account)
    {
        account->withDraw(value);
        return true;
    }
    return false;
}
bool ManagementBank::transfer(string source, string target, double value)
{
    Account *ctaSource = findAccount(source);
    Account *ctaTarget = findAccount(target);
    if (ctaSource && ctaTarget)
    {
        return ctaSource->transfer(ctaTarget, value);
    }
    return false;
}

vector<Customer *> ManagementBank::getCustomers()
{
    return vector<Customer *>(customers);
}

vector<Account *> ManagementBank::getAccounts()
{
    return vector<Account *>(accounts);
}
ManagementBank::~ManagementBank()
{
}
