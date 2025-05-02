#include<iostream>
using namespace std;

void mostrarDescendente(int n)
{
   cout << n << " "
   if(n > 1)
      mostrarDescendente(n - 1)
}

int main()
{
   int n
   cin >> n
   mostrarDescendente(n)
}
