#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void sinh(int a, int n, vector<int> v){
	if(a<=0){
		if(a==0){
		  	cout << "(" << v[0];
			for(int i=1; i<v.size(); i++){
		  		cout << " " << v[i];
			}
			cout << ") ";
		}
		return;
	}
	for(int i=n;i>=1;i--){
		v.push_back(i);
		sinh(a-i, min(a-i,i), v);
		v.erase(v.end()-1, v.end());
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int a; cin >> a;
		for(int i=a; i>=1; i--){
		    vector<int> v;
		    v.push_back(i);
		    sinh(a-i, min(a-i,i), v);
		}
		cout<<endl;
	}
	return 0;
}
