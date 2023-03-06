#include<iostream>
#include<cstdarg>
using namespace std;

double average(int num, ...)
{
    va_list valist;
    double sum=0.0;
    va_start(valist, num);

    for(int i=0; i<num; i++)
    {
        sum+=va_arg(valist, int);
    }
    
    va_end(valist);
    return(sum/num);

}

int main()
{
    cout<<"Avg= "<<average(4, 6, 2, 8, 0)<<"\n";
    cout<<"Avg= "<<average(3, 6, 2, 7)<<"\n";
    
    return 0;
}