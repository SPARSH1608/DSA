#include <bits/stdc++.h>

using namespace std;





void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int x;
    cin>>x;
    v.push_back({1,x});
    for(int i=0;i<n-1;i++){
    	int y;
    	cin>>y;
    	v.push_back({v.back().second+1,v.back().second+y});
    }
    int low=0;
    int high=n-1;
   	int m;
   	cin>>m;
   	vector<int>ans;
   	for(int i=0;i<m;i++){
   		int f; cin>>f;
   		int low=0,high=n-1;
   		while(low<=high){
   			int mid=(low+high)/2;
   			if(v[mid].first<=f && v[mid].second>=f){
   				ans.push_back(mid+1);
   				break;
   			}
   			else if(v[mid].second<f){
   				low=mid+1;
   			}else if(v[mid].first>f){
   				high=mid-1;
   			}
   		}
   	}
   	for(int i=0;i<ans.size();i++){
   		cout<<ans[i]<<" ";
   	}
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