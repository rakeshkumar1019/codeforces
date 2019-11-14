 #include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,c,v;
	cin>>n;
	
	 while(n--){
	 	cin>>c;
	 	cin>>v;
	 	long long int diff=c-v;
	 	if(diff>1){
	 		cout<<"YES"<<endl;
		 }else{
		 	cout<<"NO"<<endl;
		 }
	 }
	 
}
