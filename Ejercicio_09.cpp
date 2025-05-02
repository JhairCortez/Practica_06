#include<iostream>
using namespace std;

int sumaCubos(int n)
{
   if(n == 1)
   {
      cout << "1 -> 1 = 1" << endl
      return 1
   }
   int sumaAnterior = sumaCubos(n - 1)
   int cubo = n * n * n
   int sumaActual = sumaAnterior + cubo
   cout << n << " -> " << cubo << " = " << sumaActual << endl
   return sumaActual
}

int main()
{
   int n
   cin >> n
   sumaCubos(n)
}
