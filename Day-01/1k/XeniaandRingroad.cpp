#include <bits/stdc++.h>

using namespace std;
using  ll=long long ;

void solve() {
    ll n, m;
    cin>>n>>m;
    vector<ll>v;
    for(ll i=0;i<m;i++){
    	ll x;
    	cin>>x;
    	v.push_back(x);
    }
    ll start=1;
    ll ans=0;
    for(ll i=0;i<m;i++){
    	if(start<v[i] && v[i]<=n){
    		ans+=v[i]-start;
    		start=v[i];
    	}else if(start>v[i]){
    		ans+=n-start+v[i];
    		start=v[i];
    	}

    }
    cout<<ans<<endl;
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