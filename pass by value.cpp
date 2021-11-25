# include<iostream>
using namespace std;
    void fun(int p, int q)
    {
        p = 20;
        q = 10;
    }
    int main()
    {
        int p = 10;
        fun(p, p);
        cout << p;
        return 0;
    }    
    
