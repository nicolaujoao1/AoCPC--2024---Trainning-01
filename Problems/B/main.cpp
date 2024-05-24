#include <bits/stdc++.h>

using namespace std;

void solve(int a, int b, int c){
  if(a<b && b<c){
    cout<<"STAIR\n";
  }
  else if(a<b &&b>c){
    cout<<"PEAK\n";
  }
   else
    {
    cout<<"NONE\n";
   }
}
int main()
{
    int T, a,b,c;
    cin>>T;
    while(T--){
            cin>>a>>b>>c;
        solve(a,b,c);
    }
    return 0;
}
