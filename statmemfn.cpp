#include<iostream>
using namespace std;

class test
{
    private:
    int code;
    static int count;

    public:
    void setcode(void)
    {
        code=++count;
    }

    void showcode(void)
    {
        cout<<"Code= "<<code<<"\n";
    }

    static void showcount(void)
    {
        cout<<"Count= "<<count<<"\n";
    }

};

int test::count;

int main()
{
    test t1, t2 ,t3;

    t1.setcode();
    t1.showcode();
    test::showcount();

    t2.setcode();
    t2.showcode();
    test::showcount();

    t3.setcode();
    t3.showcode();
    test::showcount();

    return 0;
}