#include <iostream>
using namespace std;
float sum (float a[5])
{
int i;
float result=0;
for(i=0;i<=4;i++){
	cout<<"result "<<a[i];
}
return result;	
}
int main ()
{
	float a[5]={5.8,2.6,9.0,3.4,7.1};
	sum(a);
}
