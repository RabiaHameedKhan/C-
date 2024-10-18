#include <iostream>
using namespace std;


int hurdlerace(int k, int height[], int n){
	int max_height=0;
	for(int i=0; i<n; i++){
		if(height [i]> max_height){
		max_height= height[i];
		}
	}
	if (k>=max_height){
		return 0;
	}
	return max_height -k;
}

int main(){
	int n, k;
	cin>>n>>k;
	int height[n];
	for(int i=0; i<n; i++){
		cin>>height[i];
	}
	int result= hurdlerace(k, height, n);
	cout<<result;
	return 0;
}






