#include<iostream>
using namespace std;

class COMPLEX
{
    private:
    float real;
    float imag;

    public:
    COMPLEX()
    {
        real=0.0;
        imag=0.0;
    }

    COMPLEX(float a, float b)
    {
        real=a;
        imag=b;
    }

    COMPLEX operator+(COMPLEX);
    void display(void);

};

COMPLEX COMPLEX::operator+(COMPLEX C)
{
    COMPLEX C1;
    C1.real=real+C.real;
    C1.imag=imag+C.imag;
    return C1;
}

void COMPLEX::display(void)
{
    cout<<real<<"+"<<imag<<"i"<<"\n";
}

int main()
{
    float a1, b1, a2, b2;
    cout<<"FIRST COMPLEX NUMBER: "<<"\n";
    cout<<"Enter real part= ";
    cin>>a1;
    
    cout<<"Enter imaginary part= ";
    cin>>b1;

    COMPLEX c1(a1, b1);
    c1.display();

    cout<<"SECOND COMPLEX NUMBER: "<<"\n";
    cout<<"Enter real part= ";
    cin>>a2;

    cout<<"Enter imaginary part= ";
    cin>>b2;

    COMPLEX c2(a2, b2);
    c2.display();

    COMPLEX c3;
    c3=c1+c2;
    c3.display(); 


}



