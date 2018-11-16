#include <iostream>
using namespace std;

//int numbers[10001];

int main(){
	int n, q, b, value;
	cin>>n;
	int *numbers = new int[n];
	for(int i=0; i < n; i++)
		numbers[i] = 0;
	for(int i=0; i < n; i++){
		cin>>value;
		numbers[value]++;
	}
	cin>>q;
	while(q--){
		cin>>b;
		if(numbers[b] == 0){
			cout<<"NOT PRESENT"<<endl;
		}
		else
			cout<<numbers[b]<<endl;
	}
	return 0;
}

