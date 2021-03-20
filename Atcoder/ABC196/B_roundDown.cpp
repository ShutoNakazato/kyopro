#include <iostream>
#include <string>

using namespace std;

int main()
{
  string x;
  cin >> x;
  int index = x.find(".");
  if (index)
  {
    x = x.substr(0, index);
  }
  cout << x << endl;
}