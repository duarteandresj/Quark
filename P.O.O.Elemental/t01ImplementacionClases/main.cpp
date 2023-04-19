#include <iostream>
#include "account.cpp"
using namespace std;
int main(int argc, char const *argv[])
{
    Account ctaOne("453634-7", 780000);
    ctaOne.consign(120000);
    ctaOne.consign(50000);
    Account *ctaTwo = new Account("453-56464", 500000);
    if (ctaOne.withDraw(750000))
    {
        cout << ctaOne.getNumber() << "---> Retiro exitoso" << endl;
    }
    else
    {
        cout << ctaOne.getNumber() << "---> Retiro fallido" << endl;
    }

    if (ctaOne.withDraw(151000))
    {
        cout << ctaOne.getNumber() << "---> Retiro exitoso" << endl;
    }
    else
    {
        cout << ctaOne.getNumber() << "---> Retiro fallido" << endl;
    }

    if (ctaTwo->transfer(&ctaOne,100000))
    {
        cout<<ctaOne.getNumber()<<"---> Transferencia exitosa"<<endl;
    }else{
        cout<<ctaOne.getNumber()<<"---> Transferencia fallida"<<endl;

    }
    

    cout << ctaOne.toString() << endl;
    cout << ctaTwo->toString() << endl;
    delete ctaTwo;
    return 0;
}
