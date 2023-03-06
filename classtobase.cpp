#include<iostream>
using namespace std;

class num
{
    private:
    int x;

    public:
    num(int a)
    {
        x=a;
    }
    operator double();

};

num::operator double()
{
    return x*(0.5);
}


int main()
{
    num N(5);
    double half;
    half=N;
    cout<<half<<"\n";
    
    return 0;
}