#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    vector<pair<long long,long long>>vec;

    for ( int i = 0 ; i < str.size() ; i +=2 ){
        vec.push_back( {(str[i]-'0'),i/2} );
    }

    sort(vec.begin(), vec.end());
    long long mmax = LONG_LONG_MAX;
    for ( int i = 0; i < vec.size() - 1; i++ ){
        if( vec[i].first == vec[i+1].first ){
            mmax = min(mmax , vec[i+1].second - vec[i].second);
        }
    }
    cout << mmax << endl;
}

