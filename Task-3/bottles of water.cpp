#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    long long numOfBottel;
    cin >> numOfBottel;
    long long vol[numOfBottel] , cap[numOfBottel];
    long long sumCap = 0;
     for (int i = 0; i < numOfBottel; i++)
    {
        cin>>vol[i]>>cap[i];
        sumCap +=vol[i];
    }
    sort(cap,cap+numOfBottel);
    long long largeBotCap =cap[0]+cap[1];
    if(largeBotCap >= sumCap)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
