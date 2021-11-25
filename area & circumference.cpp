#include<iostream>
#include<iomanip>  // this header file is for setprecision function
using namespace std;
int main()
{
	float area, radius, circumference;
	int choice;
	cout<<"enter radius";
	cin>>radius;
	
	cout<<"enter 1 for area and 2 for circumference:";
	cin>>choice;
	
	if (choice==1)
	{area=radius*radius*3.141;
	cout<<"area:"<<setprecision(2)<<area;
	
	}
	else if(choice==2)
	{
		circumference=2.0*3.141*radius;
	cout<<"circumference:"<<circumference;
	
	}
	
	else
	cout<<"invalid choice";
}
