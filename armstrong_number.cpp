#include<iostream>
using namespace std;

int main()
{
	int n,a,s,i,d;
	
	cout<<"Enter any number:";
	cin>>n;
	a=n;
	while(n>0)
	{
		s=n%10;
		d=d+s*s*s;
		n=n/10;
	}
	if(a==d)
		cout<<"This is armstrong number!!";
	else
		cout<<"This is not armstrong number!!";
}
