#include<bits/stdc++.h>
using namespace std;

int n, k, x[50];
void xem(){
	for(int i=1; i<=k; i++){
		cout << x[i];
	}
	cout << " ";
}
void ql(int i){
	for(int j=x[i-1]+1; j<=n-k+i; j++){
		x[i] = j;
		if(i == k){
	       xem();
		}
		else ql(i+1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ql(1);
		cout << endl;
	}
    return 0;
}

