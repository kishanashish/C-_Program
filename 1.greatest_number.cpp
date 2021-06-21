#include<iostream>
using namespace std;

int main()
{
	int n[5],i,max=0;
	cout<<"Enter anyt five number: "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>n[i];
	}
	
	for(i=0; i<5; i++)
	{
		if(n[i]>max)
			max=n[i];
	}
	
	cout<<"Greatest number is :"<<max;
}
