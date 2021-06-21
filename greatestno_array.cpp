#include<iostream>
using namespace std;
int main()
{
	int n[5],i,gt=0,k=0;
	cout<<"Enter numbe::";
	for(i=1; i<=5; i++)
	{
		cin>>n[i];
	}
	
	for(i=1; i<=5; i++)
	{
		if(n[i]>n[i+1])
		{
			gt=n[i];
			n[i+1]=gt;	
		}
			
				
	}
	cout<<"greatst number:"<<gt;
	
}
