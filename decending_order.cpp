#include<iostream>
using namespace std;
int main()
{
	 int a[5],i,j,temp,n[5],k;
	 cout<<"Enter 5 number:";
	 for(i=1; i<=3; i++)
	 {
	 	cin>>a[i];
	 }
	 cout<<"before sorting "<<endl;
	 for(i=1; i<=3; i++)
	 {
	 	cout<<a[i]<<endl;
	 }
	 
	 for(i=1; i<=3; i++)
	 {
	 	
	 	for(j=i+1; j<=3; j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 			temp=a[i];
	 			
	 			
			 }
	 	}
	 	n[i]=temp;
	 }
	 
	 cout<<"after sorting element:";
	 for(i=1; i<=3; i++)
	 {
	 	cout<<n[i]<<endl;
	 }

}
