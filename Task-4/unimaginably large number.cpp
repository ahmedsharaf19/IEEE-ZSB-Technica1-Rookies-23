#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num;
    cin >> num;
    long long arr[num]{};
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }

    reverse(arr, arr+num);
    bool flag = false;
    for(int i=0; i<num; i++){
        if(arr[i] < 9){
            arr[i]++;
            flag = true;
            break;
        }
        else{
            arr[i] = 0;
        }
    }
    if(!flag) cout << 1 << " ";
    for(int i=num-1; i>=0; i--){
        cout << arr[i] << " \n"[i == 0];
    }
}
