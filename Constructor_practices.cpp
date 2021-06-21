#include<iostream>
using namespace std;
class abc{
	public:
	// constructor without parameter
	abc(){
		cout<<"hello"<<endl;
	}
	// constructor with two parameters
	abc(int a,int b){
		cout<<"Addition of two number:";
	}
};
// main function
int main()
{
	int a=6, b=5;
	abc obj;
	abc(a,b);
	return 0;
}


