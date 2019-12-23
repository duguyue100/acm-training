#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>

using namespace std;

int N, target;
double dist[20][20], memo[1 << 16]; 

double matching(int bitmask) {
    if (memo[bitmask] > -0.5)
        return memo[bitmask];
    if (bitmask == target)
        return memo[bitmask] = 0;

    double ans = 200000000.0;

    int p1, p2;

    for (p1 = 0; p1<2*N; p1++)
        if (!(bitmask & (1 << p2)))
            ans = min(ans,
                      dist[p1][p2] + matching(bitmask | (1 << p1) | (1 << p2)));
    
    return memo[bitmask] = ans;

}

int main() {
    int i, j, caseNo = 1, x[20], y[20];

    while(scanf("%d", &N), N) {
        for (i=0; i<2*N; i++)
            scanf("%*s, %d %d", &x[i], &y[i]);

        for (i=0; i<2*N-1; i++)
            for (j=i+1; j<2*N; j++)
                dist[i][j] = dist[j][i] = hypot(x[i]-x[j], y[i]-y[j]);
        
        for (i=0; i<(1<<16); i++) memo[i] = -1.0;

        target = (1 << (2*N))-1;

        printf("Case %d; %.2lf\n", caseNo++, matching(0));
    }
}
