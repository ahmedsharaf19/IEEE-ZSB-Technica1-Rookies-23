#include <iostream>
using namespace std;
long long sumNumber(long long list[] , int n){
    if (n <= 0)
        return 0;
    return (sumNumber(list, n - 1) + list[n - 1]);
}
int main(){
    int n;
    cin >> n;
    long long list[n];
    for (int i = 0 ; i < n ; i++)
            cin >> list[i];
    long long sum = 0;
    int i =0;
    for (i = 0 ; i < n ; i++)
            sum +=list[i];
    cout << sum << endl;
    sum = 0;
    i = 0;
    while (i<n){
        sum +=list[i];
        i++;
    }
    cout << sum << endl;
    cout << sumNumber(list , n) << endl;
    return 0;
}
