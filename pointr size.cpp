#include <iostream>
int main()
{
	int a[]={1,2,3,4};
	int *b=a[];
	printf("%d",sizeof(b));
	return 0;
}
