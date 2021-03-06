#include <iostream>

using namespace std;

int main()
{
  int n;
  long long a_sum = 0, squared_a_sum = 0, out = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    a_sum += a[i];
    squared_a_sum += a[i] * a[i];
  }
  out = n * squared_a_sum - a_sum * a_sum;
  cout << out << endl;
}