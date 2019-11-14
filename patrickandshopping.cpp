#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long  a,b,c;
	cin>>a>>b>>c;
	int min1=min(b+b+a+a,a+a+c+c);
	int min3=min(c+c+b+b,a+b+c);
	int m=min(min1,min3);
	 
	cout<<m;
			
	
}
