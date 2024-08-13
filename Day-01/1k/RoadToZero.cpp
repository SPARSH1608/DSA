#include <bits/stdc++.h>

using namespace std;
using ll =long long;
void solve() {
    ll x,y;
    cin>>x>>y;
    ll a, b;
    cin>>a>>b;
    if(x==0 && y==0) {
    	cout<<"0"<<endl;
		return ;
	}

    ll ans=0;
    if(a>b){
    	// b jyaada use karna hai
    	if(x>y){
    		while(x!=y){
    			ans+=b;
    			x--;
    		}
    		while(x!=0){
    			ans+=a;
    			x--;
    		}
    	}else{
			while(x!=y){
    			ans+=b;
    			y--;
    		}
    		while(y!=0){
    			ans+=a;
    			y--;
    		}
    	}
    }else{
    	//jyaada use karna hai
    	if(x>y){
    		while(x!=y){
    			ans+=a;
    			x--;
    		}
    		while(x!=0){
    			ans+=b;
    			x--;
    		}
    	}else{
			while(x!=y){
    			ans+=a;
    			y--;
    		}
    		while(y!=0){
    			ans+=b;
    			y--;
    		}
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