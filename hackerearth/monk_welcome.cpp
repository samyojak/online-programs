#include<iostream>

using namespace std;
int a[100000];
int b[100000];

int main(){
	int n;
	cin>>n;
	for(int i=0; i < n; i++){
		cin>>a[i];
	}
	for(int i=0; i < n; i++){
		cin>>b[i];
	}
	for(int i=0; i < n; i++){
		cout<<a[i]+b[i]<<" ";
	}
	return 0;
}
