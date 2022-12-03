#include <bits/stdc++.h>
using namespace std;
bool permutation (string str1 , string str2);

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    if(permutation(str1,str2)) cout << "true" << endl;
    else cout << "false" <<  endl;

}
bool permutation (string str1 , string str2){
if(str1.size() > str2.size()){
        return false;
    }
    int num = str2.size()-str1.size();
    for(int i=0; i<num; i++){
        long long arr1[30]{};
        long long arr2[30]{};
        bool flag = true;
        for(int j=0; j<str1.size(); j++){
            arr1[str1[j]-'a']++;
            arr2[str2[i+j]-'a']++;
        }
        for(int j=0; j<30; j++){
            if(arr1[j] != arr2[j]) flag = false;
        }
        if(flag){
            return true;
        }
    }
    return false;
}
