#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	if(n==1){
	    cout<<0;
	    return 0;
	}
	
	
	int min=arr[0];
	int max=arr[0];
	int count;
	int a=arr[1];
	 //checking min and max
	if(a<min){
	min=a;   
	}else{
	max=a;
	}
	 if(n==2){
	     if(min==max){
	         cout<<0;
	         return 0;
	     }else{
	         cout<<1;
	         return 0;
	     }
	 }
	
	//over min max
	
	
	if(min==max){
	 count=0;
	}else{
	    count=1;
	}
	for(int i=2;i<n;i++){
	    if(arr[i]>min && arr[i]>max || arr[i]<min && arr[i]<max){
	        count=count+1;
	        a=arr[i];
	        if(a<min){
          	min=a;   
         	}else{
        	max=a;
         	}
	    }
	}
	
	cout<<count;
	
	return 0;
	
}
