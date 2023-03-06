#include<iostream>
using namespace std;

class ABC;
class XYZ
{
    private:
    int x;

    public:
    void setvalue(int y)
    {
        x=y;
    }

    friend void max(ABC, XYZ);
};

class ABC
{
    private:
    int a;

    public:
    void setvalue(int b)
    {
        a=b;
    }

    friend void max(ABC, XYZ);
};

void max(ABC p, XYZ q)
{
    if(p.a>q.x)
    {
        cout<<"The maximum value is= "<<p.a<<"\n";
    }

    else
    {
        cout<<"The maximum value is= "<<q.x<<"\n";
    }
    
}

int main()
{
    ABC abc;
    XYZ xyz;

    abc.setvalue(100);
    xyz.setvalue(500);

    max(abc, xyz);

    return 0;
}

