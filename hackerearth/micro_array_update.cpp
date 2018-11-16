#include<iostream>
using namespace std;

int main(){
	//int array[100000];
	int t, n, k;
	int min = 10000000;
	int val;
	cin>> t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<n; i++){
			cin>>val;
			if(min > val){
				min = val;
			}
		}
		int result = k >= min? k-min : 0;
		cout<<result<<endl;
	}
	return 0;
}
