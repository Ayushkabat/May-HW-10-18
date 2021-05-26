#include<iostream>;

using namespace std;

int main(){
	
	int num,x, rev=0;
	cin>>num;
	x=num;
	
	
	for (;num>0; num = num/10){
		rev = rev*10+ num%10;
	}
	if(x==rev){
		cout<<"It is palindrom: "<<x;
	}else{
		cout<<"It is not palindrom; ";
	}
	
	
	
	return 0;
}
