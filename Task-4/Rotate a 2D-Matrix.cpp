#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num;
    cin >> num;
    long long a[num][num];
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cin >> a[i][j];
        }
    }
    cout << endl;
    for(int j=0 ; j<num; j++){
        for(int i=num-1; i>=0; i--){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
