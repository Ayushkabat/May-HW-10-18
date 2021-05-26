#include<iostream>;

using namespace std;

int main(){
	int num,rev=0,one=0,two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0, zero=0;
	cout<<"Enter number = ";
	
	cin>>num;
	
	for(;num>0;num/=10){
		switch(num%10){
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			case 9:
				nine++;
				break;
			case 0:
				zero++;
				break;			
		}
		
	}

	cout<<"Frequence of 1 = "<<one<<endl;
	cout<<"Frequence of 2 = "<<two<<endl;
	cout<<"Frequence of 3 = "<<three<<endl;
	cout<<"Frequence of 4 = "<<four<<endl;
	cout<<"Frequence of 5 = "<<five<<endl;
	cout<<"Frequence of 6 = "<<six<<endl;
	cout<<"Frequence of 7 = "<<seven<<endl;
	cout<<"Frequence of 8 = "<<eight<<endl;
	cout<<"Frequence of 9 = "<<nine<<endl;
	cout<<"Frequence of 0 = "<<zero<<endl;
	
	return 0;
}
