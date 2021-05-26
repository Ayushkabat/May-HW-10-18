#include<iostream>;

using namespace std;

int main(){
	
	int num, firstdigit, lastdigit;
	
	cin>>num;
	lastdigit = num%10;
	
	for(;num>10;num=num/10);{
	firstdigit = num;	
	}
	
	cout<<"first digit: "<<firstdigit<<endl;
	cout<<"last digit: "<<lastdigit<<endl;
	
	
	
	
	
	
	return 0;
}
