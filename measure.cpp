#include<iostream>

using namespace std;

class Measure{
	public:
	int height,length,width;
	void setip(int h,int l,int w)
	{
		height = h;
		length = l;
		width = w;
	}
	int area()
	{
		int a;
		a = 2*(length*width + width*height + length*height);
		return a;
	}
	int volume()
	{
		return length*width*height;
	}
};

int main()
{
	int h1,w1,l1,h2,w2,l2;
	Measure obj1;
	Measure obj2;
	cout<<"Enter height,width and length for object1 :";
	cin>>h1>>w1>>l1;
	obj1.setip(h1,w1,l1);
	cout<<"Enter height,width and length for object2 :";
	cin>>h2>>w2>>l2;
	obj2.setip(h2,w2,l2);
	cout<<endl<<"Area and volume for object1:"<<obj1.area()<<" "<<obj1.volume();
	cout<<endl<<"Area and volume for object2:"<<obj2.area()<<" "<<obj2.volume();
	return 0;
}

	
	

	
