#include<iostream>
using namespace std;
class Oper
{
	private:
		int a;
	public:
		Oper(){
			cout<<"constructor is called"<<endl;
		}
		void setData(int n)
		{
			a=n;
		}
		void display()
		{
			cout<<"value of A= "<<a;
		}
		Oper operator ++();
		
};

Oper Oper::operator ++() {
	a++;
	
}

int main()
{
	Oper a;
	a.setData(5);
	a.display();
	++a;
	a.display();
}
