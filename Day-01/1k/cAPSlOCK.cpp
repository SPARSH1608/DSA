#include <bits/stdc++.h>

using namespace std;


void solve() {
    string s;
    cin>>s;
    if(s.length()==1 && s[0]>='a' && s[0]<='z') cout<< char(s[0]-32);
    else if(s[0]>='a' && s[0]<'z'){
    	for(int i=1;i<s.length();i++){
    		if(s[i]>='A' && s[i]<='X'){
    			s[i]=char(s[i]+32);
    		}
    	}
    	s[0]=char(s[0]-32);
    	cout<<s<<endl;
    }else if(s[0]>='A' && s[0]<='Z' && s[1]>='A' && s[1]<='Z'){
    	for(int i=1;i<s.length();i++){
    		if(s[i]>='A' && s[i]<='X'){
    			s[i]=char(s[i]+32);
    		}
    	}
    	cout<<s<<endl;
    }else {
    	cout<<s<<endl;
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