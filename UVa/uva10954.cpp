// UVa 10954 Add All

#include <bits/stdc++.h>

using namespace std;

int main() {
  // freopen("input.in", "r", stdin);
  // freopen("output.out", "w", stdout);

  int N;

  while (cin >> N && N != 0) {
    priority_queue<int, vector<int>, greater<int>> a;
    for (int i = 0; i < N; i++) {
      int M;
      cin >> M;
      a.push(M);
    }

    long long cost = 0;
    for (size_t i = 1; i < N; i++) {
      int n1 = a.top();
      a.pop();
      int n2 = a.top();
      a.pop();
      int sum = n1 + n2;
      a.push(sum);
      cost += sum;
    }

    cout << cost << endl;
  }

  return 0;
}
