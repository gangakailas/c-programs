#include<iostream>
using namespace std;

class space
{
    private:
    int x, y, z;

    public:
    space()
    {
        x=0;
        y=0;
        z=0;
    }
    space(int x, int y, int z);
    friend space operator-(space&);

    void display(void)
    {
        cout<<"x= "<<x<<"\n";
        cout<<"y= "<<y<<"\n";
        cout<<"z= "<<z<<"\n";

    }
    
};

space::space(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}

space operator-(space&A)
{
    space s;
    s.x=-A.x;
    s.y=-A.y;
    s.z=-A.z;
    return s;
}

int main()
{
    int a, b, c;

    cout<<"Enter first number= ";
    cin>>a;

    cout<<"Enter second number= ";
    cin>>b;

    cout<<"Enter third number= ";
    cin>>c;

    space s1(a, b, c), s2;

    s1.display();
    s2=-s1;

    s2.display();

}
