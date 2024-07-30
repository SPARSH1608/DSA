#include <bits/stdc++.h>

using namespace std;


void solve() {
   long long n,m,a;
   cin>>n>>m>>a;

   // int ans=((m*n)%(a*a)==0 )? (m*n/a*a):((n/a)+1)*((m/a)+1);
   long long ans = (ceil((double)m/a))*(ceil((double)n/a));
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