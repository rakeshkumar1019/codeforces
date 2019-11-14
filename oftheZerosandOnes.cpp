#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
     int n;
     cin>>n;
     string stg;
     cin>>stg;
     int zero=count(stg.begin(),stg.end(),'0');
     int one=count(stg.begin(),stg.end(),'1');
     cout<<abs(zero-one);
}
