#include<iostream>
using namespace std;

void mostrarDigitos(int n)
{
   if(n >= 10)
      mostrarDigitos(n / 10)
   cout << n % 10 << " "
}

int main()
{
   int n
   cin >> n
   mostrarDigitos(n)
}
