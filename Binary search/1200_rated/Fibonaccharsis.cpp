#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    int ans=0;

    for(int i=1;i<=n;i++){
    	int second=n;
    	int first=i;
    	bool valid=true;
    	for(int j=0;j<k-2;j++){
    		int temp=first;
    		first=second-first;
    		second=temp;
    		valid&=first<=second;
    		valid&=min(first,second)>=0;
    		if(valid==false) break;
    	}
    	if(valid==true) ans++;
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