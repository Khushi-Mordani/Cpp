//Khushi Mordani
//New delete operations(1)

#include<iostream>
using namespace std;

class A
{
	public:
		int i,j;
		A()
		{
			i=0;
			j=10;
			cout<<"Inside the default constructor"<<endl;
		}
		~A()
		{
			cout<<"Inside the destructor"<<endl;
		}
};

int main()
{
	int *pt1,*pt2,sum;
	pt1 =  new int;
	pt2 = new int;
	A a1;
	cout<<"Before the new operator in A"<<endl;
	cout<<"Enter first number :";
	cin>> *pt1;
	cout<<"Enter second number :";
	cin>> *pt2;
	sum = *pt1 + *pt2;
	cout<<"Sum :"<<sum<<endl;
	delete pt1;
	delete pt2;
	return 0;
}
