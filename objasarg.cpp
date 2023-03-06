#include<iostream>
using namespace std;

class TIME
{
    private:
    int hrs;
    int mins;

    public:
    void gettime(int h, int m)
    {
        hrs=h;
        mins=m;
    }

    void puttime(void)
    {
        cout<<hrs<<" hours "<<mins<<" minutes"<<"\n";
    }

    void sum(TIME, TIME);

};

void TIME::sum(TIME t1, TIME t2)
{
    mins=t1.mins+t2.mins;
    hrs=mins/60;
    mins=mins%60;
    hrs=t1.hrs+t2.hrs+hrs;
}

int main()
{
    TIME t1, t2, t3;
    int h1, h2;
    int m1, m2;

    cout<<"Enter hours1= ";
    cin>>h1;

    cout<<"Enter minutes1= ";
    cin>>m1;

    t1.gettime(h1, m1);
    t1.puttime();
    
    cout<<"Enter hours2= ";
    cin>>h2;

    cout<<"Enter minutes2= ";
    cin>>m2;
    
    t2.gettime(h2, m2);
    t2.puttime();
    
    t3.sum(t1, t2);
    t3.puttime();
    
    return 0;
}