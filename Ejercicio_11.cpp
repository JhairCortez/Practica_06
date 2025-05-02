#include<iostream>
using namespace std;

void convertirABaseDos(int n)
{
   if(n > 1)
      convertirABaseDos(n / 2)
   cout << n % 2
}

int main()
{
   int n
   cin >> n
   convertirABaseDos(n)
}
