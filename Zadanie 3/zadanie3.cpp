#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

void zamiana(int &a, int *b)
{
        int tmp=a;
        a=*b;
        *b=tmp;
}
int main()
{   int a, b1;
    int * b=NULL;

    cout << "Zadanie 3, Arkadiusz Krukar "<< endl <<"podaj a: " << endl;
    cin >> a;
    cout << "podaj b: " << endl;
    cin >> b1;
    
    b=&b1;

   zamiana(a,b);
   cout <<"Liczby po zamianie:" << endl <<  "a= " <<a<< endl << "b= "<<*b<<endl;

   return 0;
}