#include<iostream>
using namespace std;
int main()
{
	int number,i,n,num;
	cout<<"Enter number:";
	cin>>number;
	
	for(i=1; i<=number; i=i*2)
	{
		num=i;
	}
	n=0;
	 while(num>0)
	 {
	 	n=n+num;
	 	if(n<=number)
	 	{
	 		cout<<"1";
		 }
		else{
			n=n-num;
			cout<<"0";
		}
	 	num=num/2;
	 }
	
	
	
	return 0;
}
