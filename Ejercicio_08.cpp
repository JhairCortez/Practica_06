#include<iostream>
using namespace std;

int sumaDigitos(int n)
{
   if(n < 10)
      return n
   return n % 10 + sumaDigitos(n / 10)
}

int main()
{
   int n
   cin >> n
   cout << sumaDigitos(n)
}
