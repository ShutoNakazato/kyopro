#include <iostream>

using namespace std;

int main()
{
  int x, y, z;
  cin >> x >> y;
  if (x < y)
  {
    swap(x, y);
  }
  while (y > 0)
  {
    z = x;
    x = y;
    y = z % y;
  }
  cout << x << endl;
}