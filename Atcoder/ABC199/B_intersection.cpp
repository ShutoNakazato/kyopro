#include <iostream>

using namespace std;

int main()
{
  int n, a, b, a_max = 0, b_min = 1001;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (a > a_max)
    {
      a_max = a;
    }
  };
  for (int i = 0; i < n; i++)
  {
    cin >> b;
    if (b < b_min)
    {
      b_min = b;
    }
  };
  int out = b_min - a_max + 1;
  if (out < 0)
  {
    out = 0;
  }
  cout << out << endl;
}