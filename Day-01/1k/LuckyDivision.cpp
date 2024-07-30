#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin>>n;
	int arr[12]={4,7,47,74,777,477,747,774,744,474,447,444};

	
	for(int i=0;i<12;i++){

		if(n%arr[i]==0){
			cout<<"YES"<<endl;
			return;
		}
	} 
  cout<<"NO"<<endl;   
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