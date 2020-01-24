// UVa 793 Network Connections

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>
#include <map>
#include <algorithm>
#include <utility>
#include <stack>
#include <tuple>
#include <cmath>
#include <vector>
#include <bitset>

using namespace std;

class UnionFind {
private:
    vector<int> p, rank, setSize;
    int numSets;
public:
    UnionFind(int N) {
        p.assign(N, 0); for (int i = 0; i < N; ++i) p[i] = i;
        rank.assign(N, 0);                           // optional speedup
        setSize.assign(N, 1);                        // optional feature
        numSets = N;                                 // optional feature
    }

    int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
    bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

    int numDisjointSets() { return numSets; }      // optional
    int sizeOfSet(int i) { return setSize[findSet(i)]; } // optional

    void unionSet(int i, int j) {
        if (isSameSet(i, j)) return;                 // i and j are in same set
        int x = findSet(i), y = findSet(j);          // find both rep items
        if (rank[x] > rank[y]) swap(x, y);           // keep x 'shorter' than y
        p[x] = y;                                    // set x under y
        if (rank[x] == rank[y]) ++rank[y];           // optional speedup
        setSize[y] += setSize[x];                    // combine set sizes at y
        --numSets;                                   // a union reduces numSets
    }
};

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n_case;
    cin >> n_case;

    string input = "";
    getline(cin, input); cin.ignore();
    for (int cases=0; cases<n_case; cases++)
    {
        int n; cin >> n;
        UnionFind conn(n+1);

        cin.ignore();

        int success = 0, unsuccess = 0;
        while (true)
        {
            getline(cin, input);
            if (input == "") break;

            int a, b;
            string a_str = "";
            for (int i=2; i<input.length(); i++)
            {
                if (input[i] != ' ')
                    a_str += input[i];
                else
                {
                    a = stoi(a_str);
                    a_str = "";
                }
            }
            b = stoi(a_str);
            
            if (input[0] == 'c' && a != b)
                conn.unionSet(a, b);
            else if (input[0] == 'q')
            {
                if (conn.isSameSet(a, b)) success ++;
                else unsuccess ++;
            }
        }
        cout << success << "," << unsuccess << endl;

        if (cases != n_case-1) cout << endl;
    }


    return 0;
}
