#include<iostream>
using namespace std;

void area(float r)
{
    cout<<3.14*r*r;
}

void area(float l,float b)
{
    cout<<l*b;
}

void area(float l,float b,float h)
{
    cout<<l*b*h;
}

int main()
{
    float r,rl,rb,rh,cl,cb,ch;

    cout<<"Enter the radius of circle : ";
    cin>>r;
    cout<<endl;
    cout<<"The Area of a circle is : ";
    area(r);
    cout<<endl;
    cout<<endl;
    cout<<"Enter the height of a rectangle : ";
    cin>>rl;
    cout<<"Enter the width of a rectangle : ";
    cin>>rb;
    cout<<endl;
    cout<<"The Area of a rectangle is : ";
    area(rl,rb);
    cout<<endl;
    cout<<endl;
    cout<<"Enter the height of a cuboid : ";
    cin>>cl;
    cout<<"Enter the width of a cuboid : ";
    cin>>cb;
    cout<<"Enter the depth of a cuboid : ";
    cin>>ch;
    cout<<endl;
    cout<<"The Area of a cuboid is : ";
    area(cl,cb,ch);
    cout<<endl;



    return 0;
}

