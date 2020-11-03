#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

void zamiana(int &a, int &b)
{
        int tmp=a;
        a=b;
        b=tmp;
}
int main()
{   
    int a=0, b=0;

    cout <<"Zadanie 2, Arkadiusz Krukar "<< endl << "podaj a: " << endl;
    cin >> a;
    cout << "podaj b: " << endl;
    cin >> b;
    

   zamiana(a,b);
   cout <<"Liczby po zamianie:" << endl <<  "a= " <<a<< endl << "b= "<<b<<endl;

   return 0;
}