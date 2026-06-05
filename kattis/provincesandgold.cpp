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
  int g, s, c;
  cin >> g >> s >> c;

  int total = g * 3 + s * 2 + c * 1;

  string victory = "";
  if (total >= 8)
    victory = "Province";
  else if (total >= 5)
    victory = "Duchy";
  else if (total >= 2)
    victory = "Estate";

  string tresure = "";
  if (total >= 6)
    tresure = "Gold";
  else if (total >= 3)
    tresure = "Silver";
  else
    tresure = "Copper";

  if (victory == "") {
    cout << tresure;
    return;
  }

  cout << victory << " or " << tresure;
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
