#include <bits/stdc++.h>

using namespace std;



void solve() {
    int a,b,c;
    cin>>a>>b>>c;

    int exp1= a+b+c;
    int exp2 = a*b*c;
    int exp3 = (a+b)*c;
    int exp4=a*(b+c);
    int exp5=a+(b*c);
    int exp6=(a*b)+c;
    int ans=max(exp1,max(exp2,max(exp3,max(exp4,max(exp5,exp6)))));
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