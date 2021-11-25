#include <iostream>
using namespace std;
void sum(float a[])
{
	 float result=0;
for ( int n=0 ; n<=5 ; n++ )
  {
    result += a[n];
  }
  cout << result;	
}

int main ()
{
	float a[] = {5.8, 2.6, 9.0,3.4 , 7.1};
   
   sum(a);
  
  return 0;
}
