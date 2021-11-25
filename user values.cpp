#include<iostream>
using namespace std;
int main ()
{
	int a[10];

	cout<<"Enter elements of array"<<"\n";
	for(int b=0;b<10;b++)
	{
		cin>>a[b];
	}
	for(int i=0;i<10;i++)
	{
	if(a[i]%2==0)
	{
		
		cout<<"["<<i+1<<"] : "<<a[i]<<endl;
	}
		
		
	}
	
	return 0;
}
