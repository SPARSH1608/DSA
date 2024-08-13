#include <bits/stdc++.h>

using namespace std;



void solve() {
	long long n;
	cin>>n;
	int arr[4]={6,8,4,2};
	if(n==0){
		cout<<"1"<<endl;
		return;
	}
	cout<<arr[n%4]<<endl;

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