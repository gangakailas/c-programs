#include<iostream>
using namespace std;

class integer
{
    private:
    int m;
    int n;

    public:
    integer(void);
    void display (void)
    {
        cout<<"m="<<m;
        cout<<"n="<<n;
    }

};

integer::integer(void)
{
    m=10;
    n=20;
}

int main()
{
    integer int1;
    int1.display();
    return 0;
}