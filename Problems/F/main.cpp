#include<bits/stdc++.h>
#define ll  long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
     ll n, m;
    cin >> n >> m;

    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll t = 1;
    ll sum = 0;

    for (ll i = 0; i < m; i++) {
        ll x;
        cin >> x;


        while (sum + a[t] < x) {
            sum += a[t];
            t++;
        }


        printf("%lld %lld\n", t, x - sum);
    }

    return 0;
}
