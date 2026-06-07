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
  int x, y;

  while (true) {
    cin >> x >> y;

    if (x == 0 && y == 0) {
      break;
    }

    if (x + y == 13) {
      cout << "Never speak again." << endl;
    } else if (x > y) {
      cout << "To the convention." << endl;
    } else if (x < y) {
      cout << "Left beehind." << endl;
    } else if (x == y) {
      cout << "Undecided." << endl;
    }
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
