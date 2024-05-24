#include <bits/stdc++.h>

using namespace std;

const int inf = (int)1e5 + 5;
const int green = 0, red = 1, white = 2;

class Tree {
  public:
    int n;
    vector<vector<int>> adj, dp;
    string str;

    Tree(int n) {
        this->n = n;
        adj.resize(n);
        dp.resize(n, vector<int>(3, inf));
    }

    void dfs(int src, int par) {

        if (str[src] == 'P') {
            dp[src][green] = 0;
        }
        if (str[src] == 'S') {
            dp[src][red] = 0;
        }
        if (str[src] == 'C') {
            dp[src][white] = 0;
        }

        for (auto child : adj[src]) {
            if (child == par) {
                continue;
            }
            dfs(child, src);
            vector<int> ndp(3, inf);
            for (int d : {green, red, white}) {
                for (int now : {green, red, white}) {

                    ndp[d] = min(ndp[d], 1 + dp[src][d] + dp[child][now]);

                    int nxt = -1;
                    if (d == white) {
                        nxt = now;
                    } else if (now == white) {
                        nxt = d;
                    } else {
                        if (d == now) {
                            nxt = d;
                        }
                    }
                    if (nxt == -1) {
                        continue;
                    }
                    ndp[nxt] = min(ndp[nxt], dp[src][d] + dp[child][now]);
                }
            }
            swap(dp[src], ndp);
        }
    }
};

void solve() {
    int n;
    cin >> n;
    Tree t(n);
    for (int i = 1; i < n; i++) {
        int p;
        cin >> p;
        p--;
        t.adj[i].push_back(p);
        t.adj[p].push_back(i);
    }
    cin >> t.str;

    t.dfs(0, -1);
    auto &dp = t.dp;
    cout << min({dp[0][green], dp[0][red], dp[0][white]}) << "\n";
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
