#include<iostream>
using namespace std;
class shape{
	public:
	// all three functions names are same.
	int peri(int a){	// first function 
		cout<<"Perimeters fo square:"<<a*4<<endl;
		return 0;
	}
	int peri(int l, int w){   //second function
		cout<<"Perimeters of rectangle:"<<2*(l+w)<<endl;
		return 0;
	}
	int peri(int l, int b, int h){   //third function
		cout<<"Perimeters of Triangle:"<<l+b+h<<endl;
return 0;
	}
};
// main function
int  main(){
	shape obj;
	// called all function by created object
	obj.peri(5);
	obj.peri(4,5);
	obj.peri(6,5,4);
	return 0;
}

