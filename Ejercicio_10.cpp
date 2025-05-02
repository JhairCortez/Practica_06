#include<iostream>
using namespace std;

void invertirNumero(int n, int reverso = 0)
{
   if(n == 0)
   {
      cout << reverso
      return
   }
   invertirNumero(n / 10, reverso * 10 + n % 10)
}

int main()
{
   int n
   cin >> n
   invertirNumero(n)
}
