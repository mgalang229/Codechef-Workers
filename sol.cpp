#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int c[n], t[n];
	for(int i=0; i<n; ++i)
		cin >> c[i];
	for(int i=0; i<n; ++i)
		cin >> t[i];
	int val1=INT_MAX;
	for(int i=0; i<n; ++i)
		if(t[i]==1) {
			for(int j=0; j<n; ++j) {
				if(i==j)
					continue;
				if(t[j]==2)
					val1=min(val1, c[i]+c[j]);
			}
		}
	int val2=INT_MAX;
	for(int i=0; i<n; ++i)
		if(t[i]==3)
			val2=min(val2, c[i]);
	cout << min(val1, val2) << "\n";
}
