#include<iostream>;
using namespace std;

int main(){
	int num, pro=1;//1234
	
	cout<<"Enter numbers : ";
	
	//
	
	for(cin>>num;num>0;num = num%10){
		pro += pro* (num%10);
	}
	cout<<"Pro of numbers : "<<pro<<endl;
	
	
	

	
	
	return 0;
}
