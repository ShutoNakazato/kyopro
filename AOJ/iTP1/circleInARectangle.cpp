#include <iostream>

using namespace std;

int main()
{
  int width, height, x, y, r;
  cin >> width >> height >> x >> y >> r;
  if ((x + r <= width) && (x - r >= 0) && (y + r <= height) && (y - r >= 0))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}