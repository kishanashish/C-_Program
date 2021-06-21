#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char *name;
	int length;
	public:
		String(){
			length=0;
			name=new char[length+1];
		}
		String(char *n){
			length=strlen(n);
			name=new char[length];
			strcpy(name,n);
			
		}
		
		void display(){
			cout<<"name= "<<name<<endl;
					}
		
		String operator +(String s){
			String temp;
			strcpy(temp.name,name);
			strcat(temp.name,s.name);
			return temp;
		}
};
int main(){
	String s1("kishan");
	String s2("Ashish");
	String s3;
	s3=s1+s2;
	s3.display();
	return 0;
}
