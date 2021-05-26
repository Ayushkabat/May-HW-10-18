#include<iostream>;

using namespace std;

int main(){
	 
	int num, rev=0;
	cin>>num; 
	
	
	for (;num>0; num = num/10){
		rev = rev*10+ num%10;
	}
	
	cout<<"Reversed version: "<<rev;
	
	
	
	
	
	
	return 0;
}
