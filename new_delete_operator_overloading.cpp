#include<iostream>
#include<stdlib.h>
using namespace std;

class Student{
	string  name;
	int age;
	public:
		Student();
		Student(string name, int age);
		void display();
		void *operator new(size_t size);
		void operator delete(void *p);	
};
Student::Student()
{
	cout<<"constructor is called "<<endl;
}
Student::Student(string name, int age){
	this->name=name;
	this->age=age;
}

void Student::display(){
	cout<<"Name :"<<name<<endl;
	cout<<"Age :"<<age<<endl;
}
void *Student::operator new(size_t size){
	cout<<"Overloading new operator with size :"<<size<<endl;

void *P=::new Student();
return P;
}
void Student::operator delete(void *p){
	cout<<"overloading delete operator"<<endl;
	free(p);
}

int main(){
	Student *p=new Student("Kishan", 21);
	p->display();
	delete p;
}
