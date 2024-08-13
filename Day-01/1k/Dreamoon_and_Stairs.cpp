#include <bits/stdc++.h>

using namespace std;
using ll=long long;
ll f_ans=INT_MAX;

void fun(ll i,vector<int>&ans,ll m){

	if(i==0){
		if(ans.size()%m==0){
			f_ans=min(f_ans,(ll)ans.size());
		}
		return;
	}
	if(i>=2){
	ans.push_back(2);
	fun(i-2,ans,m);
	ans.pop_back();
	}

	if(i>=1){
	ans.push_back(1);
	fun(i-1,ans,m);
	ans.pop_back();	
	}
	

}


void solve() {
   	ll n, m;
   	cin>>n>>m;
   	ll ans=0;
   	if(m>n) ans=-1;	
   	if(n%2==0){
   		ans=n/2;
   	}else{
   		ans=(n/2)+1;
   	
   	while(ans%m!=0) ans++;
   }

   	cout<<ans;
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