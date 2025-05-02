#include<iostream>
using namespace std;

int sumaCuadrados(int n)
{
   if(n == 1)
      return 1
   return n * n + sumaCuadrados(n - 1)
}

int main()
{
   int n
   cin >> n
   cout << sumaCuadrados(n)
}
