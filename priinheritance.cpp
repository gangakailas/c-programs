#include<iostream>
using namespace std;

class B
{
    private:
    int a;

    public:
    int b;
    void get_ab(void);
    int get_a(void);
    void show_a(void);

};

class D:private B
{
    private:
    int c;

    public:
    void mul(void);
    void display(void);

};

void B::get_ab(void)
{
    a=5;
    b=5;
}


int B::get_a(void)
{
    return a;
}

void B::show_a(void)
{
    cout<<"a= "<<a<<"\n";
}

void D::mul(void)
{
    get_ab();
    c=b*(get_a());
}

void D::display(void)
{
    show_a();
    cout<<"b= "<<b<<"\n";
    cout<<"c= "<<c<<"\n";
}

int main()
{
    D d;
    d.mul();
    d.display();
}