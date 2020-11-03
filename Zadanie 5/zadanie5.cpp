#include <iostream>
#include <math.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

void zamiana(int &a, int &b)
{
    swap(a,b);
}
void test(int &a, int &b)
{       
        int tmp;
        tmp=a;
        a=b;
        b=tmp;
}

int main()
{   int a, b, a1, b1;

    cout << "Zadanie 5, Arkadiusz Krukar "<< endl <<"podaj a: " << endl;
    cin >> a;
    cout << "podaj b: " << endl;
    cin >> b;
    a1=a;
    b1=b;
  
   zamiana(a,b);
   cout <<"Liczby po wykonaniu zamiany: " << endl <<  "a = " << a << endl << "b = "<< b <<endl;

   test(a1,b1);
   cout <<"Liczby po wykonaniu programu testowego: " << endl <<  "a = " << a1 << endl << "b = "<< b1 <<endl;

   if(a1==a && b1==b)
    {
       cout << "program zamiana dziala poprawnie" << endl;

    }
   else 
    {
        cout << "program nie dziala poprawnie" << endl;
    }
   return 0;
}