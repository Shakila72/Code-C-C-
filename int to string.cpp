#include<iostream>
#include<sstream>
 using namespace std;
  int main()
  {
  	int num=364;
  	stringstream s; // stringstream is a function of sstream
  	s<<num<<endl; // passing to function
  	string inttostr=s.str();
  	cout<<"The string equals "<<inttostr<<endl;
  	return 0;
  }