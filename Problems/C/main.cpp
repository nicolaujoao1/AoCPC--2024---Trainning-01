#include <bits/stdc++.h>
#define ll long long
using namespace std;

 void solve() {
    string s;
    cin>>s;
    string a;
    a+=s[0];
    a+=s[1];
    if(a=="00"){
        s[0]='1';
        s[1]='2';
        cout<<s<<" "<<"AM"<<"\n";
    }
    else if(stoi(a)>=12){
        if(stoi(a)==12){
            cout<<s<<" "<<"PM"<<"\n";
            return ;
        }else{
        int x=stoi(a)-12;
        if(x<10){
            cout<<0<<x<<":"<<s[3]<<s[4]<<" "<<"PM"<<"\n";
            return ;
        }
        cout<<x<<":"<<s[3]<<s[4]<<" "<<"PM"<<"\n";
        return ;
        }
    }

    else{
        cout<<s<<" "<<"AM"<<"\n";
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
