#include <iostream>

using namespace std;

int main()
{
  int input, hour, minute, second;
  cin >> input;

  hour = input / 3600;
  minute = input % 3600 / 60;
  second = input % 60;

  cout << hour << ":" << minute << ":" << second << endl;
}