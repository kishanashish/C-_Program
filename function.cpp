#include<iostream>
using namespace std;
int areaOfCircle();
int areaOfSquare();
int areaOfRectangle();
int areaOfTriangle();

int main()
{
	areaOfCircle();
	areaOfSquare();
	areaOfRectangle();
	areaOfTriangle();
}

int areaOfCircle()
{
	int r;
	cout<<"Enter radios of Circle:";
	cin>>r;
	cout<<"Area of Circle:"<<3.14*r*r<<endl;
}

int areaOfSquare()
{
	int a;
	cout<<"Enter side of Square:";
	cin>>a;
	cout<<"Area of Square:"<<a*a<<endl;
}

int areaOfRectangle()
{
	int w,l;
	cout<<"Enter length and width of Rectangle:";
	cin>>l>>w;
	cout<<"Area of Rectangle:"<<w*l<<endl;
}

int areaOfTriangle()
{
	int l,b;
	cout<<"Enter length and base of Triangle:";
	cin>>l>>b;
	cout<<"Area of Triangle:"<<(0.5)*l*b;
	
}

