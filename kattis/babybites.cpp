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

int to_number(string str) {
  try {
    int d = stoi(str);
    return d;
  } catch (...) {
    return -1;
  }
}

void solve() {
  // Your problem-solving logic goes here
  int n;
  cin >> n;

  int d;
  string k;
  cin >> k;
  d = to_number(k);
  if (d == 1 || d == -1) {
    d = 1;
  } else {
    cout << "something is fishy";
    return;
  }
  rep(i, 1, n) {
    cin >> k;
    int d1 = to_number(k);

    if (d1 == -1) {
      d++;
    } else {
      if (d1 - d != 1) {
        cout << "something is fishy";
        return;
      } else {
        d = d1;
      }
    }
  }

  cout << "makes sense";
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
