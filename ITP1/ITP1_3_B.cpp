#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  string x;
  rep(i, 10000) {
    getline(cin, x);
    if (x != "0")
      cout << "Case " << i + 1 << ": " << x << endl;
    else
      return 0;
  }
  return 0;
}