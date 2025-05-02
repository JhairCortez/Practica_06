#include<iostream>
using namespace std;

void cuadradosDescendente(int n)
{
   cout << n * n << " "
   if(n > 1)
      cuadradosDescendente(n - 1)
}

int main()
{
   int n
   cin >> n
   cuadradosDescendente(n)
}
