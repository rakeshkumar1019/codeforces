#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> io;
    vector<int> jo;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(arr[i][j]=='*'){
              io.push_back(i+1);
              jo.push_back(j+1);
          }
        }
    }
    
    
    sort(io.begin(),io.end());
    sort(jo.begin(),jo.end());
    
    
    int n1,n2;
    if(io[0]==io[1]){
        n1=io[2];
    }else{
        n1=io[0];
    }
    
     if(jo[0]==jo[1]){
        n2=jo[2];
    }else{
        n2=jo[0];
    }
    
    cout<<n1<<" "<<n2;
 
 
     
    
    
    
    
    
}
