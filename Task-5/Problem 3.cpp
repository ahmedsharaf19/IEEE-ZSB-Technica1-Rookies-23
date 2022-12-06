#include<bits/stdc++.h>
using namespace std;

int main() {
    int num,temp,sum=0;
    cin>>num;
    while(sum!=1 && sum!=4) {
        sum=0;
        while(num>0)
        {
            temp=num%10;
            sum=sum+(temp*temp);
            num=num/10;
        }
        num=sum;
    }
    if(sum==1) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}
