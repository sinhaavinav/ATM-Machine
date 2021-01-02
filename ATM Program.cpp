#include<iostream.h>
using namespace std;
int main()
{
	float a,ca,da;
	char ch;
	cout<<"enter amount"<<endl;
	cin>>a;
	cout<<"enter"<<endl<<"c for credit"<<endl<<"d for debit"<<endl<<"b for balance";
	cin>>ch;
	switch(ch)
	{
	case'c':
		cout<<"enter credit amount"<<endl;
		cin>>ca;
		a=a+ca;
		cout<<"new amount="<<a;
		break;
	case'd':
	cout<<"enter debit amount"<<endl;
	cin>>da;
	if(a>=da)	
	{
		a=a-da;
		cout<<"new amount="<<a;
	}
	else
	cout<<"insufficent amount";
	break;
	case 'b':
		cout<<"amount in your account="<<a;
		break;
	default:
	    cout<<"invalid input!!";		
	}
}
