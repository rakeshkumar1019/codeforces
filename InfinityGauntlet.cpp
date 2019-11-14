#include<bits/stdc++.h>
using namespace std;
int main(){
 string arr[6]={"purple","green","blue","orange","red","yellow"};
 string ar[6]={"Power","Time","Space","Soul","Reality","Mind"};
 int n=6;
 int key;
 cin>>key;
 int ans=n-key;
 string * a=new string[key];
//  string * ans=new string[ans];
 for(int i=0;i<key;i++){
 	cin>>a[i];
 }
 cout<<ans<<endl;
 for(int i=0;i<key;i++){
 	for(int j=0;j<n;j++){
 		if(a[i]==arr[j]){
 			ar[j]='0';
		 }
	 }
 }
 
 for(int i=0;i<n;i++){
 	if(ar[i]!="0"){
 		cout<<ar[i]<<endl;
	 }
 }
 
 
}
