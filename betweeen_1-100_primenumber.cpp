#include<iostream>
using namespace std;
int main()
{
	int i,j,count=0,c;
	cout<<"Prime Nuber between 1 to 100:"<<endl;
	for(i=1; i<=100; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
				count=count+1;
		}
		
		if(count==2)
			{
				cout<<i<<endl;
				c++;
			}
		count=0;
	}
	cout<<"total number of prime number :"<<c;
}
