#include<iostream>
#include<cstring>
using namespace std;

class strings
{
    private:
    char *name;
    int length;

    public:
    strings()
    {
        length=0;
        name=new char[length+1];       //for "\o"
    }

    strings(const char *s)
    {
        length=strlen(s);
        name=new char(length+1);
        strcpy(name, s);
    }

    void display(void)
    {
        cout<<"The string is= "<<name<<"\n";
    }

    void join(strings, strings);

};

void strings::join(strings a, strings b)
{
    length= a.length+b.length;
    delete name;

    name=new char(length+1);
    strcpy(name, a.name);
    strcat(name, b.name);

}

int main()
{
    strings s1("Arthur");
    strings s2(" Conan");
    strings s3(" Doyle");
    strings s4, s5;

    s1.display();
    s2.display();
    s3.display();

    s4.join(s1, s2);
    s5.join(s4, s3);

    s4.display();
    s5.display();

    return 0;

}

