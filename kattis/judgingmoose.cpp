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
  int left, right;
  cin >> left >> right;

  if (left == 0 && right == 0) {
    cout << "Not a moose";
    return;
  }

  if (left == right) {
    cout << "Even " << left + right;
  } else {
    int h = max(left, right);
    cout << "Odd " << h * 2;
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
