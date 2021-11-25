#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size : ";
	cin>>size; 
     for(int a=1;a<=size;a++)
   
        {
            cout<<" * ";
        }
            cout<<endl;
for(int b=1;b<=4;b++)
    {
    for(int c=1;c<=1;c++)
        {
                cout<<" * ";
        }
        for(int d=1;d<=3;d++)
              {
                cout<<" ";
              }
                cout<<" * "<<" "<<"*"<<endl;
                
       }
for(int e=1;e<=size;e++)
 {
 cout<<" * ";
 }
 return 0;
}
