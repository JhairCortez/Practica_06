#include<iostream>
using namespace std;

void divisores(int n, int i = 1)
{
   if(i > n)
      return
   if(n % i == 0)
      cout << i << " "
   divisores(n, i + 1)
}

int main()
{
   int n
   cin >> n
   divisores(n)
}
