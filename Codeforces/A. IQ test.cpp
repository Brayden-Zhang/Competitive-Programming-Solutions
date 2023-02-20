#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n; cin >> n;
  int even = 0;
  int odd = 0;
  vector<int> a(n);
  for (auto& i : a) {
    cin >> i;
 
    if (i % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }
  for (int i = 0; i < n; ++i) {
    if ((even == 1 && a[i] % 2 == 0) || (odd == 1 && a[i] % 2 != 0))
      cout << i + 1;
  }
}
