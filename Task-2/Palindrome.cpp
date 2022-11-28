#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    cin >> str;
    bool flag = true;
    int n = str.length();
    for (int i = 0 ; i < n ; i++){
        if (tolower(str[i]) != tolower(str[n-1])){
            flag = false;
            break;
        }
        n--;
    }
    if (flag) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}

