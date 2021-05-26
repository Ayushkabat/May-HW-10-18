#include<iostream>;

using namespace std;// last digit, first digit.

int main(){
	
	int num, fdigit, ldigit,sum;
	cout<<"Enter numbers : ";
		cin>>num;
	ldigit = num%10;
	
		for(;num>10;num=num/10);{	
		}	
	fdigit = num;
	
	sum=ldigit+fdigit;
	
	cout<<"Sum of first end last digits: ";cout <<sum;
	
	
	
	
	return 0;
}
