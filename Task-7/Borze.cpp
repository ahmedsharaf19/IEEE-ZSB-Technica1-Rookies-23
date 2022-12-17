#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int length = str.size();
    for (int i = 0 ; i < length ; i++){
        if(str[i] == '-' && str[i+1] == '.') {
            cout <<1;
            i++;
        }
        else if (str[i] == '-' && str[i+1] == '-'){
            cout <<2;
            i++;
        }
        else if (str[i] == '.') cout << 0;
    }
    cout << endl;
    return 0;
}