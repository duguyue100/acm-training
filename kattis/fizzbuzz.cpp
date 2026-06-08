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
  int x, y, n;

  cin >> x >> y >> n;

  rep(i, 1, n + 1) {
    if (i % x == 0 && i % y == 0) {
      cout << "FizzBuzz" << endl;
    } else if (i % x == 0) {
      cout << "Fizz" << endl;
    } else if (i % y == 0) {
      cout << "Buzz" << endl;
    } else
      cout << i << endl;
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
