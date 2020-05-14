#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	string a; cin >> a;
    	for(int i=a.length()-2; i>=0; i--){
    		if(a[i]=='1') a[i+1] = (1-(a[i+1]-'0')) + '0';
		}
		cout << a << endl;
	}
    return 0;
}
