#include<iostream>
using namespace std;

int potencia(int base, int exponente)
{
   if(exponente == 0)
      return 1
   return base * potencia(base, exponente - 1)
}

int main()
{
   int base, exponente
   cin >> base >> exponente
   cout << potencia(base, exponente)
}
