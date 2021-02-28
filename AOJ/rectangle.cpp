#include <iostream>

using namespace std;

int main()
{
  int x, y, area, perimeter;
  cin >> x >> y;
  area = x * y;
  perimeter = 2 * (x + y);

  cout << area << " " << perimeter << endl;
}