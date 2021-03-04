#include <iostream>
#include <math.h>

using namespace std;

//TLEくらった><
int main()
{
  int n, max = 0, counter = 0;

  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > max)
      max = a[i];
  }
  bool isPrime[max + 1];
  isPrime[0] = false;
  isPrime[1] = false;
  for (int i = 2; i <= max; i++)
  {
    if (i % 2 == 0)
    {
      isPrime[i] = false;
    }
    else
    {
      isPrime[i] = true;
    }
  }
  for (int i = 2; i <= sqrt(max); i++)
  {
    if (isPrime[i])
    {
      for (int j = 2; i * j <= max; j++)
      {
        isPrime[i * j] = false;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (isPrime[a[i]])
    {
      counter++;
    }
  }
  cout << counter << endl;
}