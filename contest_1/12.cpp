#include<bits/stdc++.h>
using namespace std;

int n,k,x[20];
int s = 0;
void init(){
	for(int i = 1; i <= n; i++){
		cout << x[i] << "";
	}
	cout << endl;
}
void qlnp(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		s += j;
		if(i == n && s == k) init();
		else if(i<n) qlnp(i+1);
		s -= j;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		qlnp(1);
	}
	return 0;
}
