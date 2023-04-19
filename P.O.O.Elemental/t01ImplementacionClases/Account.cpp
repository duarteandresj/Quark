#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class Account
{
private:
    string number;
    double residue;
    short int consignments;
    short int withdrawals;

    void setResidue(double);
    string parseString(double);

public:
    const static double minResidue;
    Account(string, double);
    virtual ~Account();
    void setNumber(string);
    string getNumber();
    double getResidue();
    short int getConsignments();
    short int getWithdrawals();
    void consign(double);
    bool withDraw(double);
    bool transfer(Account *, double);
    string toString();
};
const double Account::minResidue = 50000;

Account::Account(string number, double residue)
{
    setNumber(number);
    setResidue(residue);
    this->consignments = 0;
    this->withdrawals = 0;
}
void Account::setNumber(string number)
{
    this->number = number;
}

void Account::setResidue(double residue)
{
    this->residue = residue;
}

string Account::getNumber()
{
    return this->number;
}
double Account::getResidue()
{
    return this->residue;
}
short int Account::getConsignments()
{
    return this->consignments;
}
short int Account::getWithdrawals()
{
    return this->withdrawals;
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
string Account::parseString(double value)
{
    ostringstream aux;
    aux << value;

    return aux.str();
}
string Account::toString()
{
    return "Account [number=" + number + ", residue=" + parseString(residue) + " ,consignments=" + parseString(consignments) +" ,withdrawals="+parseString(withdrawals)+"]";
}

Account::~Account()
{
    cout<<"Byte -->"<<number<<endl;
}