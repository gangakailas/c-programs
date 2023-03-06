#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    int area;

    public:
    Rectangle(int a, int b)
    {
        length=a;
        breadth=b;
        area=length*breadth;
    }

    void show(void)
    {
        cout<<"area of rectangle= "<<area<<"\n";
    }

};

class Triangle
{
    private:
    int base;
    int height;
    float area;

    public:
    Triangle(int x, int y)
    {
        base=x;
        height=y;
        area=0.5*base*height;
    }
    
    int get_base(void)
    {
        return base;
    }

    int get_height(void)
    {
        return height;
    }

    void display(void)
    {
        cout<<"area of triangle= "<<area<<"\n";
    }

    operator Rectangle()
    {
        Rectangle temp(base, height);
        return temp;


    }

};



int main()
{
    Triangle t(10,5);
    t.display();

    Rectangle r=t;
    r.show();
    
    return 0;

}