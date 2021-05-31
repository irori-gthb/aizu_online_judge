#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << min(a, min(b, c)) << " "
       << a + b + c - min(a, min(b, c)) - max(a, max(b, c)) << " "
       << max(a, max(b, c)) << endl;
  return 0;
}