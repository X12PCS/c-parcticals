#include<iostream>
using namespace std;

class circle
{
    int r;
    float a;

public:
    circle()
    {
        r=1;
        a=3.148*r*r;
    }

    circle(int x)
    {
        r=x;
        a=3.148*x*x;
    }

    circle(circle &c)
    {
        r=c.r;
        a=c.a;
    }

    void put()
    {
        cout<<"circle with radius "<<r<<" has area "<<a;
    }

};

int main()
{
    circle c1;
    c1.put();
    cout<<endl;
    circle c2(20);
    c2.put();
    cout<<endl;
    circle c3(c1);
    c3.put();
    cout<<endl;

    return 0;
}
