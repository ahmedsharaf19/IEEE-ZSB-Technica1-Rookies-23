#include <iostream>
using namespace std;

int main() {

    int n, k, q;
    cin>>n>>k>>q;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    k %= n;
    for(int i = 0; i < q; i++) {
        int b;
        cin>>b;
        cout<<arr[(n-k+b)%n]<<"\n";
    }
    return 0;
}
