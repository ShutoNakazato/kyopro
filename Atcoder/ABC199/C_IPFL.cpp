#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, q, t, a, b;
  bool reversed = false;
  string s;
  cin >> n >> s >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> t >> a >> b;
    if (t == 1)
    {
      if (reversed)
      {
        a = a > n ? a - n : a + n;
        b = b > n ? b - n : b + n;
      }
      char c = s[a - 1];
      s[a - 1] = s[b - 1];
      s[b - 1] = c;
    }
    else
    {
      reversed = !reversed;
    }
  };
  if (reversed)
  {
    s = s.substr(n) + s.substr(0, n);
  }
  cout << s << endl;
}