#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int rnd = rand()%999;
  int d1=rnd/100;
  int d2=rnd/10 % 10;
  int d3=rnd%10;
  int hit,miss;
  cout<<"Enter 3-Digits"<<endl;
  do{
    hit = 0,miss=3;
    string guess;cin>>guess;
    if(guess[0] - '0' ==d1){hit++;miss--;}
    if(guess[1] - '0'==d2){hit++;miss--;}
    if(guess[2] - '0'==d3){hit++;miss--;}
    cout<<hit<<" hit "<<miss<<" miss"<<endl;
  }while(hit !=3);
  return 0;
}
