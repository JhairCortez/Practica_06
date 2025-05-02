#include<iostream>
using namespace std;

int sumaNumeros()
{
   int n
   cin >> n
   if(n == 0)
      return 0
   return n + sumaNumeros()
}

int main()
{
   cout << sumaNumeros()
}
