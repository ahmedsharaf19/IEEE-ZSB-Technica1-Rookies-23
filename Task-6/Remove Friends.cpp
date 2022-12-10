#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		stack<long long>st;
		for(int i=0; i<n; i++){
			long long x;
			cin >> x;
			while(!(st.empty()) && st.top() < x && k>0){
				st.pop();
				k--;
			}
			st.push(x);
		}
		vector<long long>v;
		while(!(st.empty())){
			v.push_back(st.top());
			st.pop();
		}
		reverse(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << '\n';
	}
}
