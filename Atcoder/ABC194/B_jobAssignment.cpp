#include <iostream>

using namespace std;

int main()
{
  int n, out = 100001;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int time;
      if (j == i)
      {
        time = a[i] + b[j];
      }
      else
      {
        time = max(a[i], b[j]);
      }
      if (time < out)
      {
        out = time;
      }
    }
  }
  cout << out << endl;
}