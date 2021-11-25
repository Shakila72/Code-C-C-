#include <iostream>
using namespace std;
int main()

{
     const int a1=16;
     int arr1[a1]={
                   1, 2, 5, 9,
                   5, 9, 8, 3,
                   2, 8, 0, 2,
                   4, 9, 0, 8,
                   };
     int arr2[a1]={
                   10, 20, 50, 90,
                   50, 90, 80, 30,
                   20, 80,  0, 20,
                   40, 90,  0, 80,
                   };
int sum[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            sum[i][j]=arr1[i*4+j]+arr2[i*4+((j+1)%4)];

            cout<<"\t"<<sum[i][j];
        }
        cout<<endl;
    }

}
