#include <iostream>
#include <string>
using namespace std;

int main() {
  long n, m, max = -1000000001, the_i = 0;
  cin >> n;
  long r[n];
  for (long i = 0; i < n; i++) {
    cin >> r[i];
  }
  for (long i = 0; i < n; i++) {
    if (r[i] > r[the_i]) {
      continue;
    }
    for (long j = i + 1; j < n; j++) {
      m = r[j] - r[i];
      if (m > max) {
        max = m;
        the_i = i;
      }
    }
  }
  cout << max << endl;
}