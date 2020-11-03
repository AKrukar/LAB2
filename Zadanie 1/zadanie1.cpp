#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

void zamiana(int * a1, int * b1)
{
    if(*b1>*a1)
    {
        int tmp=*a1;
        *a1=*b1;
        *b1=tmp;
    }

}
int main()
{   int a, b;
    int* a1=NULL,* b1=NULL;

    cout << "Zadanie 1, Arkadiusz Krukar "<< endl <<"podaj a: " << endl;
    cin >> a;
    cout << "podaj b: " << endl;
    cin >> b;
    a1=&a;
    b1=&b;

   zamiana(a1,b1);
   cout <<"Liczby po zamianie:" << endl <<  "a= " <<*a1<< endl << "b= "<<*b1<<endl;

   return 0;
}