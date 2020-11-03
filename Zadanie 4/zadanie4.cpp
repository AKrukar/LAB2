#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

void licz(int *a, int *b)
{       
        int tmp1, tmp2;
        tmp1=*a;
        tmp2=*b;
        *a=tmp1+tmp2;
        *b=tmp1*tmp2;
        
}
int main()
{   int a1, b1;
    int * b=NULL,* a=NULL;

    cout << "Zadanie 4, Arkadiusz Krukar "<< endl <<"podaj a: " << endl;
    cin >> a1;
    cout << "podaj b: " << endl;
    cin >> b1;
    
    b=&b1;
    a=&a1;
   licz(a,b);
   cout <<"Liczby po wykonaniu funkcji: " << endl <<  "Suma = " <<*a<< endl << "Iloczyn = "<<*b<<endl;

   return 0;
}