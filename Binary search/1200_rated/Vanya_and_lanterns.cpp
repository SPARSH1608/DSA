#include <bits/stdc++.h>

using namespace std;


using ll=long long;

bool fn(vector<ll>arr,double mid){
    for(int i=1;i<arr.size()-1;i++){
        if ( arr[i]-mid>=arr[i-1]+mid || arr[i]+mid<=arr[i+1]-mid){
            return false;
        }
    }
    return true;
}

void solve() {
   ll n,l;
   cin>>n>>l;
   vector<ll>arr;
   for(int i=0;i<n;i++){
       ll x;
       cin>>x;
       arr.push_back(x);
   }
   sort(arr.begin(),arr.end());
   
   ll left=0;
   ll right=1e9;
   double ans=0;
   double precison=1e-8;
   while(right-left>=precison){
    double mid=(right+left)/2.0;
    if(fn(arr,mid)==true){
        ans=mid;
        right=mid-precison;
    }else{
        left=mid+precison;
    }
   }
   cout<<setprecision(10)<<fixed;
   cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc =1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}