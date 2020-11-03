#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[1000000]={0};
	for(int i=2; i<=1000000; ++i)
		if(arr[i]==0)
			for(int j=2; i*j<=1000000; ++j)
				arr[i*j]=1;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		ll a, sq;
		cin >> a;
		sq=sqrt(a);
		if(a==1)
			cout << "NO\n";
		else if(sq*sq==a&&arr[sq]==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
