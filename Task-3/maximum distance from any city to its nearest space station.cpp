#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m ,mx = 0;
    cin>>n>>m;
    int street[m];
    for(int i=0 ; i<m ; i++)
        cin>>street[i];
    sort(street, street+m);
    for(int i=0 ; i<=street[0] ; i++)
        mx = max(mx, street[0]-i);
    for(int i=0 ; i<m-1 ; i++){
        for(int j = street[i] ; j<=street[i+1] ; j++) {
            mx = max(mx, min(j-street[i], street[i+1]-j));
        }
    }
    for(int i=street[m-1] ; i<n ; i++)
        mx = max(mx, i-street[m-1]);
    cout << mx << endl;
    return 0;
}
