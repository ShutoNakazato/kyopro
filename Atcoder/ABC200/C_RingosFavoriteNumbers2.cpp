#include <iostream>
using namespace std;

int main() {
  int n;
  long long count = 0;
  cin >> n;
  long a[n];
  bool checked[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    checked[i] = false;
  }
  for (int i = 0; i < n - 1; i++) {
    if (checked[i]) {
      continue;
    }
    int x = 0;
    for (int j = i + 1; j < n; j++) {
      if (checked[j]) {
        continue;
      }
      if ((a[i] - a[j]) % 200 == 0) {
        x++;
        checked[j] = true;
      }
    }
    count += 0.5 * x * (x + 1);
  }
  cout << count << endl;
}
