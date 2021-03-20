#include <iostream>
#include <string>

using namespace std;

int main()
{
  long long n, ans = 0;
  cin >> n;
  long long i = 1;
  while (true)
  {
    string s = to_string(i);
    string ss = s + s;
    if (stoll(ss) > n)
    {
      break;
    }
    ans++;
    i++;
  }
  cout << ans << endl;
}