#include<iostream>
using namespace std;

class matrix
{
    private:
    int **p;
    int d1;
    int d2;

    public:
    matrix(int, int);
    void set_element(int i, int j, int value)
    {
        p[i][j]=value;
    }

    int show_element(int i, int j)
    {
        return p[i][j];
    }
    
    ~matrix();
};

matrix::matrix(int x, int y)
{
    d1=x;
    d2=y;

    p=new int *[d1];

    for(int i=0; i<d1; i++)
    {
        p[i]=new int[d2];
    }
}

matrix::~matrix()
{
    for(int i=0; i<d1; i++)
    {
        delete p[i];
    }
    delete p;
    cout<<"The allocated memories have been released";
}

int main()
{
    int r;
    int c;

    cout<<"Enter the number of rows preferred= ";
    cin>>r;

    cout<<"Enter the number of columns preferred= ";
    cin>>c;

    matrix M(r, c);
    int value;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter element for row "<<i<<" column "<<j<<"= ";
            cin>>value;
            M.set_element(i, j, value);
        }
    }

    cout<<"The entered matrix= "<<"\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<M.show_element(i, j);
            cout<<" ";
        }
        cout<<"\n";
    }


}