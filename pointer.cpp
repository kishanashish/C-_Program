#include<iostream>
#include<conio.h>
int main()
{
	int a=10;
	int *p=&a;
	std::cout<<"Value of a:"<<a<<"   ";
	std::cout<<"Address of a:"<<&a<<"   ";
	std::cout<<"Pointer address:"<<p<<"   ";
	std::cout<<"Pointer value:"<<*p;
	a=20;
	std::cout<<"Pointer address:"<<p<<"   ";
	std::cout<<"Pointer value:"<<*p;
}
