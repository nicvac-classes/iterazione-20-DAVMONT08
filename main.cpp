#include <iostream>
using namespace std;

int main() {
              int altezza,blocchiusati,blocchinecessari,blocchi;
              cout<<"quanti blocchi sono necessari?"<<endl;
              cin>> blocchi;
              altezza=0;
              blocchiusati=0;
              blocchinecessari=0;
              while(blocchiusati+blocchinecessari<=blocchi)
              {
                 blocchiusati=blocchiusati+blocchinecessari;
                 altezza=altezza+1;
                 blocchinecessari=blocchinecessari+1;
              }
              cout<<"l'alrezza della piramide è" << altezza <<endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
