#include<iostream>
using namespace std;
int main()
{
	//Program to reverse the string
	string s;
	int begin,end,i,j,len,temp;
	cout<<"Enter String : ";
	getline(cin,s);
	cout<<endl;
	//to find length of string
	len=s.length();
	
	//to reverse whole string
	for(i=0;i<(len/2);i++)
	{
		temp=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=temp;
		
	}
	//to reverse each word seperately
	for(i=0;i<len;i++)
	{
		if(s[i]==' '|| s[i]=='\0')
		{
			for(begin=j,end=i-1;begin<(i+j)/2;begin++;end--)
			{
			temp=s[begin];
		s[begin]=s[end];
		s[end]=temp;
			
			}
			j=i+1;
			
		}
	}
	cout<<endl;
	cout<<s<<" ";
}
