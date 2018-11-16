#include <iostream>
using namespace std;

bool array[1000000];

int main(){
	int n, q;
	int left, right;
	bool type;
	cin>>n>>q;
	for(int i=0; i < n; i++)
		cin>>array[i];
	for(int i=0; i < q; i++){
		cin>>type;
		if(type){
			cin>>left;
			array[left-1] = ~array[left-1];
		}
		else{
			cin>>left>>right;
			if(array[right-1])
				cout<<"ODD"<<endl;
			else
				cout<<"EVEN"<<endl;
		}
	}
	return 0;
}

