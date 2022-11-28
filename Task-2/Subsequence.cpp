#include <iostream>
#include <string>
using namespace std;
bool checksubsequence(string str);
int main(){

    string str;
    cin >> str;
    if (checksubsequence(str)){
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}

bool checksubsequence(string str){
    string fixed = "hello";
    if (str.length() < fixed.length()){
        return false;
    }
    int j = 0;
    for (int i = 0 ; i < str.length() && j <  fixed.length() ; i++){
        if (fixed[j] == str[i]){
            j++;
        }
    }

    if (j==fixed.length()) return true;

    return false;
}

