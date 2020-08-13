// UVa 394 Mapmaker

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N, R;

    cin >> N >> R;

    map<string, vector<int> > arr_specs;

    for (int i=0; i<N; i++)
    {
        string name;
        cin >> name;
        vector<int> temp_specs;
        int B, CD, D;
        cin >> B >> CD >> D;
        temp_specs.push_back(B);
        temp_specs.push_back(CD);
        temp_specs.push_back(D);

        for (int j=0; j<D; j++)
        {
            int Ld, Ud;
            cin >> Ld >> Ud;
            temp_specs.push_back(Ld);
            temp_specs.push_back(Ud);
        }

        arr_specs[name]= temp_specs;
    }

    for (int i=0; i<R; i++)
    {
        string name;
        cin >> name;
        vector<int> idices;
        for (int j=0; j<arr_specs[name][2]; j++)
        {
            int n; cin >> n;
            idices.push_back(n);
        }

        cout << name << "[" << idices[0];
        for (int j=1; j<arr_specs[name][2]; j++)
        {
            cout << ", " << idices[j];
        }
        cout << "] = ";

        // calculate
        int Cs[10] = {0};

        Cs[arr_specs[name][2]] = arr_specs[name][1];
        for (int j=arr_specs[name][2]-1; j>=1; j--)
        {
            Cs[j] = Cs[j+1]*(arr_specs[name][(j+1)*2+2]-arr_specs[name][(j+1)*2+1]+1);
        }

        Cs[0] = arr_specs[name][0];
        for (int j=1; j<=arr_specs[name][2]; j++)
        {
            Cs[0] -= Cs[j]*arr_specs[name][j*2+1];
        }


        int sum = Cs[0];
        for (int j=1; j<=arr_specs[name][2]; j++)
        {
            sum += idices[j-1]*Cs[j];
        }

        cout << sum << endl;
    }

    return 0;
}
