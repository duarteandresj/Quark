#include <string>
#include <sstream>
#include "Account.h"
using namespace std;

const double Account::minResidue = 50000;
Account::Account()
{
    this->number = string();
    this->customer = NULL;
    this->residue = 0;
    this->consignments = 0;
    this->withdrawals = 0;
}

Account::Account(Customer *customer, const string &number, double residue) : number(number), residue(residue)
{
    setNumber(number);
    setCustomer(customer);
    setResidue(residue);
    this->consignments = 0;
    this->withdrawals = 0;
}
void Account::setNumber(const string &number)
{
    this->number = number;
}
void Account::setCustomer(Customer *customer)
{
    this->customer = customer;
}

void Account::setResidue(double residue)
{
    this->residue = residue;
}
string Account::parseNum(double value)
{
    ostringstream aux;
    aux << value;
    return aux.str();
}

const string &Account::getNumber() const
{
    return number;
}
double Account::getResidue() const
{
    return residue;
}
int Account::getConsignments() const
{
    return consignments;
}
int Account::getWithdrawals() const
{
    return withdrawals;
}

void Account::consign(double value)
{
    setResidue(getResidue() + value);
    consignments++;
}
bool Account::withDraw(double value)
{
    if (value <= getResidue() - minResidue)
    {
        setResidue(getResidue() - value);
        withdrawals++;
        return true;
    }
    return false;
}

bool Account::transfer(Account *account, double value)
{
    if (withDraw(value))
    {
        account->consign(value);
        return true;
    }
    return false;
}

string Account::toString()
{
    return "Account [number=" + number + ", residue=" + parseNum(residue) + " ,consignments=" + parseNum(consignments) + " ,withdrawals=" + parseNum(withdrawals) + "]";
}
Customer *Account::getCustomer() {
    return customer;
}

Account::~Account()
{
}