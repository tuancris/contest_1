#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		int x[k+1];
		for (int i = 1; i <= k; i++)
			 cin>>x[i];
		int i = k;
		while (i > 0 && x[i] == n - k + i) i--;
		if (i > 0){
			x[i]++;
			for (int j = i + 1; j <= k; j++)
				  x[j] = x[i] + j - i;
			for (int m = 1; m <= k; m++){
				cout << x[m] << " ";
			}
		}
		else {
			for (int i = 1; i<= k; i++){
				cout << i << " ";
			}
		}
		cout<<endl;
	}
}
