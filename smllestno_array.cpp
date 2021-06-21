#include<iostream>
using namespace std;
int main()
{
	int n[5],i,temp=0,c=0;
	cout<<"Enter 5 number:";
	for(i=1; i<=5; i++)
	{
		cin>>n[i];
	}
	
	for(i=1; i<=5; i++)
	{
		if(n[i]<n[i+1])
		{
			temp=n[i];
			n[i+1]=temp;
		}
	}
	cout<<"Smallest number:"<<temp;
}
