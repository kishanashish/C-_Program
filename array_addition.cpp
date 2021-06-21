#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
	int n[5],i,sum=0;
	cout<<"Enter 5 numbers:";
	for(i=0; i<5; i++)
	{
		cin>>n[i];
		sum=sum+n[i];
	}
	
	cout<<"Addition of all array element:"<<sum;
	textbackground("red");
	
}
