#include<iostream>
using namespace std;
int main()
{
	int n[5], min=0,i;
	cout<<"Enter any five number:"<<endl;
	for(i=0; i<5; i++)
	cin>>n[i];
	
	
	min=n[0];
	for(i=1; i<5; i++)
	{
		if(n[i]<min)
		min=n[i];
	}
	
	
	cout<<"Smallest number is: "<<min<<endl;

}
