#include<iostream>
using namespace std;
int main()
{
	int n=0,d,i=0,j,c;
	int a[5];
	cout<<"Enter any number:";
	cin>>n;
	
	while(n>0)
	{
		d=n%10;
		{
				++i;
				a[i]=d;
			
		}
		n=n/10;
		c++;
}
	
	for(j=c; j>0; j--)
	{
			switch (a[j])
			{
				case 0:
					cout<<"Zero  ";
					break;
				case 1:
					cout<<"One  ";
					break;
				case 2:
					cout<<"Two  ";
					break;
				case 3:
					cout<<"Three  ";
					break;
				case 4:
					cout<<"Four  ";
					break;
				case 5:
					cout<<"Five  ";
					break;
				case 6:
					cout<<"Six  ";
					break;
				case 7:
					cout<<"Seven  ";
					break;
				case 8:
					cout<<"Eight  ";
					break;
				case 9:
					cout<<"Nine  ";
					break;
			}
	}
}
