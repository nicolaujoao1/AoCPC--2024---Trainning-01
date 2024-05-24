#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
    cin >> n;
    string s;
    cin >> s;


    if(n < 3) {
        cout << 0;
        return 0;
    }

    int resp = 0;


    for(int i = 0; i < n - 2; i++){

        if(s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x') {
            resp++;
        }
    }


    cout << resp;


    return 0;
}
