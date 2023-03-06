#include<iostream>
using namespace std;

class shop
{
    private:
    static int count;
    int bill;

    public:
    void getbill(int);
    void getcount(void)
    {
        cout<<"count= "<<count<<"\n";
    }

};

int shop::count=10;

void shop::getbill(int x)
{
    bill=x;
    count++;
}

int main()
{
    shop s1, s2, s3;
    
    s1.getcount();
    s2.getcount();
    s3.getcount();
    
    s1.getbill(100);
    s1.getcount();

    s2.getbill(500);
    s2.getcount();

    s3.getbill(2000);
    s3.getcount();
    
    s1.getcount();
    s2.getcount();
    s3.getcount();

    return 0;
}