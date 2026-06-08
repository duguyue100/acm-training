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

  int c = 1;
  while (cin >> n) {
    int max = -1000001;
    int min = 1000001;

    rep(i, 0, n) {
      int k;
      cin >> k;
      if (k > max)
        max = k;
      if (k < min)
        min = k;
    }

    cout << "Case " << c << ": " << min << " " << max << " " << max - min
         << endl;
    c++;
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
