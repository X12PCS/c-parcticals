#include<iostream>
using namespace std;

class emp
{
    int a,b;

    public:
    void get()
    {
        cout<<"Enter Real part of number : ";
        cin>>a;
        cout<<"Enter Imaginary part of number : ";
        cin>>b;
    }

    void put()
    {
        cout<<a<<"+"<<"("<<b<<")"<<"i";
    }

    emp operator+(emp &ob)
    {
        emp t;
        t.a=a+ob.a;
        t.b=b+ob.b;
        return t;
    }

    emp operator-(emp &ob)
    {
        emp t;
        t.a=a-ob.a;
        t.b=b-ob.b;
        return t;
    }

    emp operator*(emp &ob)
    {
        emp t;
        t.a=(a*ob.a)-(b*ob.b);
        t.b=(a*ob.b)+(b*ob.a);
        return t;
    }

    emp operator/(emp &ob)
    {
        emp t;
        t.a=((a*ob.a)+(b*ob.b))/((b*b)+(ob.b*ob.b));
        t.b=((b*ob.a)-(a*ob.b))/((b*b)+(ob.b*ob.b));
        return t;
    }

    emp operator!()
    {
        emp t;
        t.a=-a;
        t.b=-b;
        return t;
    }
};

int main()
{
    emp o1,o2,o3;
    o1.get();
    o2.get();

    char c;
    cout<<"Enter Your Choice : "<<endl;
    cout<<"(+) addition"<<endl;
    cout<<"(-) substraction"<<endl;
    cout<<"(*) multiplication"<<endl;
    cout<<"(/) division"<<endl;
    cout<<"(!) negation"<<endl;
    cin>>c;

    switch(c)
    {
        case '+' : o3=o1+o2;
                    o3.put();
                break;

        case '-' : o3=o1-o2;
                    o3.put();
                break;

        case '*' : o3=o1*o2;
                    o3.put();
                break;

        case '/' : o3=o1/o2;
                    o3.put();
                break;

        case '!' : o3=!o1;
                o3.put();
                o3=!o2;
                cout<<endl;
                o3.put();
                break;



    }


}
