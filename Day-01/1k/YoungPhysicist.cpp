#include <bits/stdc++.h>

using namespace std;




void solve() {
  int n;
  cin>>n;
	int s1=0,s2=0,s3=0;
	int x,y,z;
  for(int i=0;i<n;i++){
  	
  	cin>>x>>y>>z;
  	s1+=x;
  	s2+=y;
  	s3+=z;
  }  
  if(s1==0 && s2==0 && s3==0){
  	cout<<"YES"<<endl;
  }else cout<<"NO"<<endl;

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