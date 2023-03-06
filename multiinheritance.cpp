#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;

    public:
    void get_no(int);
    void put_no(void);
};

void student::get_no(int a)
{
    roll_no=a;
}

void student::put_no(void)
{
    cout<<"Roll no= "<<roll_no<<"\n";
}

class test:public student
{
    protected:
    float sub1;
    float sub2;

    public:
    void get_marks(float, float);
    void put_marks(void);
};

void test::get_marks(float x, float y)
{
    sub1=x;
    sub2=y;
}

void test::put_marks(void)
{
    cout<<"Marks in subject1= "<<sub1<<"\n";
    cout<<"Marks in subject2= "<<sub2<<"\n";
}

class result:public test
{
    private:
    float total;

    public:
    void display(void);

};

void result::display(void)
{
    total=sub1+sub2;
    put_no();
    put_marks();
    cout<<"total= "<<total<<"\n";

}

int main()
{
    result R1;
    R1.get_no(101);
    R1.get_marks(80.0, 85.0);
    R1.display();
}
