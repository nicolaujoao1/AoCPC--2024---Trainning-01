#include <bits/stdc++.h>

using namespace std;

void solve(string S){
   int a=0, b=0;
   for(int i=0;i<S.length();i++){
      if(S[i]=='A')
        a++;
      else
        b++;
   }
   if(a>b)
    cout<<"A\n";
   else
   cout<<"B\n";
}


int main()
{
    int T;
    cin>>T;
    string S;
    while(T--){
       cin>>S;
       solve(S);
    }
    return 0;
}
