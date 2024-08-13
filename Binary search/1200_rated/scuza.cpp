
#include <bits/stdc++.h>

using namespace std;
using ll= long long;
void solve() {
    
    ll n,q;
    cin>>n>>q;
 	vector<ll>pre;
 	vector<ll>prefmax;
 	pre.push_back(0);
 	for(int i=0;i<n;i++){
 		ll x; cin>>x;
 		pre.push_back(pre.back()+x);// prefix sum
 		if(i==0) prefmax.push_back(x);
 		else prefmax.push_back(max(prefmax.back(),x));
 	}
 	for(int i=0;i<q;i++){
 		ll k;
 		cin>>k;
 		int index=upper_bound(prefmax.begin(),prefmax.end(),k)-prefmax.begin();
 		cout<<pre[index]<<" ";
 	}cout<<endl;

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