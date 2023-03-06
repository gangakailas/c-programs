#include<iostream>
using namespace std;

int &max(int &x, int &y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x=3;
    int y=7;
    
    max(x,y)=9;

    cout<<"x="<<x<<"\n";
    cout<<"y="<<y<<"\n";

    return 0;

    }