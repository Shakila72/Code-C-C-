#include<iostream>
using namespace std;
int main()
{
float marks;
    float percentage;
    cout<<"Enter marks:";
    cin>>marks;
if(marks>=0 && marks<=1100)
{
	

    percentage = (marks/1100.0)*100.0;
    
    {
      
        if(percentage>=80)
{

            cout<<"Grade is A+.";
}
        else if(percentage>=70)
            cout<<"Grade is A.";
        else if(percentage>=60&& percentage <70)
            cout<<"Grade is B.";
        else if(percentage>=50&& percentage <60)
            cout<<"Grade is C.";
        else if(percentage>=40&& percentage <50)
            cout<<"Grade is E.";
        else
            cout<<"Grade is F.";
    }
    else
        cout<<"Invalid input.";
    return 0;
}
}

