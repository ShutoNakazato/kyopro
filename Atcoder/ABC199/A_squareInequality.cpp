#include <iostream>
#include <string>

using namespace std;

int main()
{
  int a, b, c;
  string output = "Yes";
  cin >> a >> b >> c;
  if (a * a + b * b >= c * c)
  {
    output = "No";
  };
  cout << output << endl;
}