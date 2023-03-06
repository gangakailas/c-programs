#include<iostream>
using namespace std;

class complex
{
    private:
    float real;
    float imag;

    public:
    void setvalue(float r, float i)
    {
        real=r;
        imag=i;
    }

    void showvalue(void)
    {
        cout<<real<<"+"<<imag<<"i"<<"\n";
    }

    friend complex sum(complex, complex);
};

complex sum(complex c1, complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}

int main()
{
    complex c1, c2, c3;

    c1.setvalue(5.1, 4.5);
    c1.showvalue();

    c2.setvalue(6.7, 3.1);
    c2.showvalue();

    c3=sum(c1, c2);
    c3.showvalue();

    return 0;

}