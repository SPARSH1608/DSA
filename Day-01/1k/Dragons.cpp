#include <bits/stdc++.h>

using namespace std;



void solve() {
   int s,n;
   cin>>s>>n;
   bool flag=true;// win
  vector<pair<int,int>>v;
     for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
   v.push_back({x,y});
    
   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
    if(s<=v[i].first){
        flag=false;
    }else{
        s+=v[i].second;
    }
   }
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}