#include<iostream>
using namespace std;


class multiten
{
    private:
    int x;

    public:
    multiten()
    {
        x=0;
    }

    multiten(int a)
    {
        x=a*10;
    }

    void display(void)
    {
        cout<<"value= "<<x<<"\n";
    }

};

int main()
{
    int a1;
    
    cout<<"Enter a number= ";
    cin>>a1;

    multiten M;
    M=a1;
    M.display();
    
}