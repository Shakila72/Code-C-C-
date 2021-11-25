#include <iostream>
using namespace std;
class student
{
    private:
        char  name[30];
        int   rollno;
    
    public:
       void Input();                                   //member function to get employee details
        void Display();                                   //member function to print employee details   
};


void student::Input()                  
{                                                                // function definition, outside of the class
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollno;
    
}


void student::Display()
{                                                                 //member function definition, outside of the class
    cout << "Student details:\n";
    cout << "Name:"<< name << "\nRoll Number:" << rollno ;
}


int main()
{
    student s1[10];                                                 //array of objects creation
    int n,i;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(i=0;i< n; i++)
	{
        cout << "Enter details of student " << i+1 << ":\n";
        s1[i].Input();
    }
     
    
     
    for(i=0;i< n; i++)
	{
        cout << "\nDetails of student " << i+1 << ":\n";
        s1[i].Display();
    }
     
    return 0;
}
