#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long num,page,turns,total;
    cin>>num>>page;
    if (page==1 || page==num)
        turns=0;
    else{
        total = 1+(page-2)/2;
        if (num%2==0)
        {
            turns = min(total, (long long)(1+(num-page-1)/2));
        }
        else
            turns = min(total, (long long)(1+(num-page)/2));
    }
    cout<<turns;
    return 0;
}

