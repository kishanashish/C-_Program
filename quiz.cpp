#include<iostream>
using namespace std;
int main()
{
	int  ch, m=0;
	cout<<"\n*Right answer = 4 marks \n * Worng answer = -1 marks"<<endl;
	
	
	//Question no.1
	cout<<"\n Q.1. Addition of 20+10:"<<endl;
	cout<<"(1) 10       (2) 20\n(3) 30       (4) 40 "<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			m=m-1;
			break;
		case 2:
			m=m-1;
			break;
		case 3:
			m=m+4;
			break;
		case 4:
			m=m-1;
			break;
		default :
			cout<<"You enterd wrong choice!!"<<endl;
	}
	
	
	//Question no.2
	cout<<"\nQ.2. Subtraction of 20-10:"<<endl;
	cout<<"(1) 10       (2) 20\n(3) 30       (4) 40 "<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			m=m+4;
			break;
		case 2:
			m=m-1;
			break;
		case 3:
			m=m-1;
			break;
		case 4:
			m=m-1;
			break;
		default :
			cout<<"You enterd wrong choice!!";
	}
	
	
	//Question no.3
	cout<<"\n Q.3. Multiplication of 20*10:"<<endl;
	cout<<"(1) 100      (2) 200\n(3) 300      (4) 400 "<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			m=m-1;
			break;
		case 2:
			m=m+4;
			break;
		case 3:
			m=m-1;
			break;
		case 4:
			m=m-1;
			break;
		default :
			cout<<"You enterd wrong choice!!"<<endl;
	}
	
	
	//Question no.4
	cout<<"\n Q.4. Division of 20/10:"<<endl;
	cout<<"(1) 1        (2) 2 \n(3) 3        (4) 4  "<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			m=m-1;
			break;
		case 2:
			m=m+4;
			break;
		case 3:
			m=m-1;
			break;
		case 4:
			m=m-1;
			break;
		default :
			cout<<"You enterd wrong choice!!"<<endl;
	}
	
	
	//Question no.5
	cout<<"\n Q.5. Simplification of (5+2-3*4/2):"<<endl;
	cout<<"(1) 10       (2) 20\n(3) 30       (4) 1 "<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			m=m-1;
			break;
		case 2:
			m=m-1;
			break;
		case 3:
			m=m-1;
			break;
		case 4:
			m=m+4;
			break;
		default :
			cout<<"You enterd wrong choice!!"<<endl;
	}
	
	cout<<"\nYour total marks is "<<m;
}
