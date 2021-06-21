#include<iostream>
using namespace std;

void fun(int a, int b);
int main()
{
	int b,c;
	cout<<"Enter two number";
	cin>>b>>c;
	fun(b,c);
}


void fun(int d,int e)
{
	cout<<"Addition="<<d+e;
}
