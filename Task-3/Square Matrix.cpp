#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n][n];
    long long sumd = 0;
    long long sumo = 0;
    for (int i = 0 ; i < n ; i++)
            for (int j = 0 ; j < n ; j++){
                cin >> arr[i][j];
                if (i == j) sumd += arr[i][j];
                if ( i == (n - 1) - j) sumo +=arr[i][j];
            }

    long long total = sumd - sumo;
    if (total < 0) cout << -total << endl;
    else cout << total << endl;
}
