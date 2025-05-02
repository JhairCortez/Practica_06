#include<iostream>
using namespace std;

int multiplicar(int a, int b)
{
   if(b == 0)
      return 0
   return a + multiplicar(a, b - 1)
}

int main()
{
   int a, b
   cin >> a >> b
   cout << multiplicar(a, b)
}
