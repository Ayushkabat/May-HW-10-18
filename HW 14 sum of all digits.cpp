#include<iostream>;
using namespace std;

int main(){
	int num, sum=0;
	cout<<"Enter numbers : ";
	cin>>num;
	
	
	for(;num>0;num = num/10){
		sum += num%10;
	}
	cout<<"Sum of numbers : "<<sum<<endl;
	
	
	

	
	
	return 0;
}
