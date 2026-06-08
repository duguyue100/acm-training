#include <bits/stdc++.h>
using namespace std;

// Type Aliases for faster typing
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Macros for cleaner loops and common actions
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

void solve() {
  // Your problem-solving logic goes here
  int n;
  cin >> n;

  rep(i, 0, n) {
    int g;
    cin >> g;

    int k;
    cin >> k;
    int idx = 1;
    bool found = false;
    rep(j, 2, g + 1) {
      int d;
      cin >> d;

      if (d - k == 1 && found == false) {
        k = d;
        idx = j;
      } else {
        found = true;
      }
    }
    cout << idx + 1 << endl;
  }
}

int main() {
  // Fast I/O: Crucial for avoiding Time Limit Exceeded (TLE)
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t; // Uncomment if the problem specifies the number of test cases
  while (t--) {
    solve();
  }
  return 0;
}
