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
  string sample;
  getline(cin, sample);

  bool negative = false;
  if (sample[0] == '-') {
    negative = true;
    sample = sample.substr(1, sample.length() - 1);
  }

  // parsing numbers
  string d = "/";

  size_t pos = sample.find(d);

  int a = stoi(sample.substr(0, pos));
  int b = stoi(sample.substr(pos + 1, sample.length() - 1));
  if (negative)
    a = -a;

  int a_out = (a - 32 * b) * 5;
  int b_out = b * 9;

  int deno = gcd(a_out, b_out);

  cout << a_out / deno << "/" << b_out / deno;
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
