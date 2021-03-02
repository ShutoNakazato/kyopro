#include <iostream>

using namespace std;

int main()
{
  int k;
  int counter = 0;
  cin >> k;
  for (int a = 1; a <= k; a++)
  {
    for (int b = 1; b <= k / a; b++)
    {
      counter += k / a / b;
    }
  }
  cout << counter << endl;
}