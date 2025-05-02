#include<iostream>
using namespace std;

int dividir(int a, int b, int contador = 0)
{
   if(a < b)
      return contador
   return dividir(a - b, b, contador + 1)
}

int main()
{
   int a, b
   cin >> a >> b
   cout << dividir(a, b)
}
