//this program is notcomplete:---



#include<iostream>
using namespace std;
int main()
{
	int i,n,j,r,s;
	for(i=100;i<=200; i++)
	{
		n=i;
		while(i>0)
		{
			r=i%10;
			s=s+(r*r*r);
			i=i/10;
		}
		
		if(n==s)
			cout<<n<<endl;
		s=0;
	}
}
