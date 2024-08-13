#include <bits/stdc++.h>

using namespace std;
#define ll long long
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()

void solve() {
    ll n,s;
    cin>>n>>s;
    vector<ll>arr(n);
    ll sm=0;
    for(int i=0;i<n;i++) 
   { 
	   	cin>>arr[i];
		sm+=arr[i];
	}
	if(sm<s) { cout<<"-1"<<endl; return;}
	if(sm==s){ cout<<"0"<<endl; return ;}
        vector<ll> pre(n + 1, 0);
    ll ans=INT_MAX;
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + arr[i - 1];
    }
    for(int i=0;i<=n;i++){
    	int req_sum=pre[i]+s;
    	if(req_sum>pre[n]) continue;
    	else{
    		auto it=upper_bound(pre.begin(),pre.end(),req_sum);
    		it--;
    		int end=it-pre.begin();
    		ans=min(ans,n-(end-i));
    	}
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc ;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}