#include<bits/stdc++.h>
using namespace std;

int slove(int arr[],int n,int m,int a){
	if(m==0){
		return 0;
	}
	for(int i=a;i<n;i++){
		for(int j=a;j<n;j++){
			if(j!=i+1){
				if(arr[i]+arr[j]==m){
					return j;
					break;
				}else return slove(arr,n,m-(arr[i]+arr[j]),j);
			}
		}
	}
}
int main(){
	int t;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>t;
	while(t--){
		int m;
		cin>>m;
		cout<<slove(arr,n,m,0)<<"\n";
	}
	return 0;
}
