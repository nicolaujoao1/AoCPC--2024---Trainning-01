#include <bits/stdc++.h>
using namespace std;

long long int sum[200001] = {0};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int T = 1;
    cin >> T;
    for (int i = 1; i <= 200000; i++)
    {
        long long int sum_ac = 0;
        int num = i;

        while (num > 0)
        {
            sum_ac += (num % 10);
            num /= 10;
        }

        sum[i] = sum[i - 1] + sum_ac;
    }

    while (T--)
    {
        long long int n;
        cin >> n;

        cout << sum[n] << endl;
    }

}
