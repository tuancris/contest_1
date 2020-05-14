#include<bits/stdc++.h>
using namespace std;
 
int n;
int Bool[50];
int a[50];
 
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
 
void ql(int k) {
    for (int i = 1; i <= n; i++) {
        if (!Bool[i]) {
            a[k] = i; 
            Bool[i] = 1;
            if (k == n) xuat();
            else ql(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
    int t; cin >> t;
    while(t--){
    	cin >> n;
    	ql(1);
    	cout << endl;
	}
	return 0;
}
 
