#include<iostream>
using namespace std;

double sumaSerie(int n)
{
   if(n == 1)
      return 1
   return 1.0 / n + sumaSerie(n - 1)
}

int main()
{
   int n
   cin >> n
   cout << sumaSerie(n)
}
