#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int n;
    cout << "Enter string: " << endl;
    cin >> a;
    n = a.length();


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    if (!(a[i] == a[j] || a[i] == a[k] || a[i] == a[l] || a[j] == a[k] || a[j] == a[l] || a[k] == a[l]))
                        cout << a[i] << a[j] << a[k] << a[l] << endl;


                }
            }
        }
    }
}
