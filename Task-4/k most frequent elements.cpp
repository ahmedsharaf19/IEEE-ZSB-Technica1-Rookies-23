#include <bits/stdc++.h>
using namespace std;
 void print_N_mostFrequentNumber(int arr[], int N, int K);
 bool compare(pair<int, int> p1, pair<int, int> p2);
int main()
{
    int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    print_N_mostFrequentNumber(arr, n, k);

    return 0;
}

 bool compare(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first > p2.first;
     return p1.second > p2.second;
}

 void print_N_mostFrequentNumber(int arr[], int N, int K)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
        mp[arr[i]]++;

    vector<pair<int, int> > freq_arr(mp.begin(), mp.end());

    sort(freq_arr.begin(), freq_arr.end(), compare);

    for (int i = 0; i < K; i++)
        cout << freq_arr[i].first << " ";
}
