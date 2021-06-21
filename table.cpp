#include<iostream>
using namespace std;

int main()
{
	 int i,j, n[10],a;
	 cout<<"Enter 5 number:";
	 for(i=1; i<=5; i++)
	 {
	 	cin>>n[i];
	 }
	 
	 for(i=1; i<=5; i++)
	 {
	 	a=n[i];
	 	for(j=1; j<=10;j++)
	 	{
	 		cout<<a*j<<endl;
		}
	 }
}
