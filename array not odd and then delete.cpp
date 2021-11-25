#include <iostream>

using namespace std;

int main()
{
    int size=10;
    int arr[size];
    for(int a=0; a<size; a++)
    {
        cout<<a+1<<"=> ";
        cin>>arr[a];
        for(int b=0; b<a; b++)
        {
            if(arr[a]%2!=0 || arr[0]!=1)
            {
                cout<<"Odd numbers not allowed : ";
                b=-1;
                cin>>arr[a];
            }

            if(arr[a]==arr[b])
            {
                cout<<"Try Again\n";
                b=-1;
                cin>>arr[a];
            }

        }
    }

    cout<<"\nThe array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
