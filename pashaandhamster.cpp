#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n>>a>>b;
int ans[n];
int one[a];
int two[b];
for(int i=0;i<a;i++){
    cin>>one[i];
}
for(int i=0;i<b;i++){
    cin>>two[i];
}
for(int i=0;i<n;i++){
    ans[i]=2;
}
for(int i=0;i<a;i++){
    ans[one[i]-1]=1;
}
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
 
 
 
    
}
