#include<iostream>
using namespace std;
int main(){
    
    int light[3][3], iSlight[3][3];
    for (int i = 0; i <3; i++)    
    {
      for (int j = 0; j <3; j++)
      {
        cin>>light[i][j];
        if (light[i][j]%2==0) light[i][j]=0;
        else light[i][j]=1;
        iSlight[i][j]=1;
      }
    }

    for (int i = 0; i <3; i++)
    {
      for (int j = 0; j <3; j++)
      {
          if(light[i][j]==1){		
              iSlight[i][j] =iSlight[i][j] == 0 ? 1 : 0;			
            	if(i>0) iSlight[i-1][j] = iSlight[i-1][j] == 0 ? 1 : 0;
            	if(j>0) iSlight[i][j-1] = iSlight[i][j-1] == 0 ? 1 : 0;
            	if(i<2) iSlight[i+1][j] = iSlight[i+1][j] == 0 ? 1 : 0;
            	if(j<2) iSlight[i][j+1] = iSlight[i][j+1] == 0 ? 1 : 0; 
        	}
      }
    }
     for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
        	cout<<iSlight[i][j];
        }  
         cout<<endl; 
    }
}