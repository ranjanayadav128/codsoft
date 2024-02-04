//Simple Calculator
#include<iostream>
using namespace std;
int main()
{
	int a,b,add,sub,mult, div;
	int ch;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Enter your choice:"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Substraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cin>>ch;
	if(ch==1)
	{
		add=a+b;
		cout<<"Addition is"<<ends<<add;
		}
    else if(ch==2)
    {
    	sub=a-b;
    	cout<<"Substraction is"<<ends<<sub;
	}
	else if(ch==3)
	{
		mult=a*b;
		cout<<"Multiplication is"<<ends<<mult;
		
	}
	else if(ch==4)
	{
		div=a/b;
		cout<<"Division is"<<ends<<div;
	}
	else
	{
		cout<<"Invalid choice"<<endl;
	}
	return 0;
}
