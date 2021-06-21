#include<iostream>
#include<string.h>
using namespace std;
class objcount
{
	private:
		
		//static data member
		static int count;
	public:
		objcount(){
			count++;
		}
		int fun(int x,int y){
			cout<<"Addition of"<<x <<" & "<<y<<" : "<<x+y<<endl;
		return 0;
		}
	
		static int showcount()
		{
			return count;
		}
		
};
int objcount::count=0;
//main funcion
int main()
{
	objcount obj1;
	objcount obj2;
	objcount obj3;
	
	obj1.fun(5,10);
	obj2.fun(10,20);
	obj3.fun(15,12);
	
	cout<<"Total number of object created:"<<objcount::showcount()<<endl;
	return 0;
}
