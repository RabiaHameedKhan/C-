#include <iostream>
using namespace std;

int main(){
	int N;
	int sum;
	int i;
	
	
	cout<<"enter a number:";
	cin>>N;
	
	for(i=1; i<=N; i++){
		
		sum+=i;
	}
	
	cout<<"Sum:"<<sum;
	
	return 0;
}
