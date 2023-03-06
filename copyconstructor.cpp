#include<iostream>
using namespace std;

class code
{
    private:
    int id;

    public:
    code()
    {
        id=0;
    }

    code(int x)
    {
        id=x;
    }

    code(const code&c)
    {
        id=c.id;
    }

    void showid(void)
    {
        cout<<"The ID= "<<id<<"\n";
    }

};

int main()
{
    code C1(30);
    C1.showid();

    code C2(C1);
    C2.showid();

    code C3=C2;
    C3.showid();

    return 0;

}

