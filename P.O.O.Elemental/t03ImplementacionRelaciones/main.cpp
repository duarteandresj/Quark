#include <iostream>
#include "ManagementBank.h"

//PARA COMPILAR EN C++ TENGO QUE HACER G++ *.Cpp ya que al solo incluir la informacion del fichero no compila los demas archivos. Si no deberia realizar todos los encabezados en archivos cpp y me ahoraria este problema
/* #include solo copia las cabeceras en el main, no su implementación.*/
using namespace std;
ManagementBank *bank;

void setup()
{
    bank = new ManagementBank();
    bank->addCustomer("897645","Juan Pablo","Perez Gomez", EGender::MALE,"353534334");
    bank->addCustomer("947465","Dolores","Barrera",EGender::FEMALE,"3224536701");
    bank->addCustomer("897645","Juan Pable","Perez Gomez",EGender::MALE,"353534334");
    bank->addAccount("897645","55555",600000);
    bank->addAccount("897645","66666",500000);
    bank->addAccount("947465","77777",350000);
}

void addClients(){
    setup();
    for(Customer *customer: bank->getCustomers()){
        cout << customer->toString();
    }
}
int main(int argc, char const *argv[])
{
    addClients();
    return EXIT_SUCCESS;
}
