#include <algorithm>

using namespace std;

int gcd(int x, int y)
{
  int z;
  if (x < y)
  {
    swap(x, y);
  }
  //xをyで割った余りが0になるまで繰り返し、その時のxが最大公約数。
  while (y > 0)
  {
    z = x;
    x = y;
    y = z % y;
  }
  return x
}