#include<iostream>
#include<string.h>
using namespace std;

class product
{
    protected:
    int p_id;
    string p_name;
    string p_manuf;
    float p_price;

    public:
        product(int a,string b,string c,float d)
        {
            p_id=a;
            p_name=b;
            p_manuf=c;
            p_price=d;
        }
        virtual void putdata()=0;
};

class smartwatch:public product
{
    protected:
    float dial_size;

    public:
        smartwatch(int q,string r,string s,float t,float p):product(q,r,s,t)
        {
            dial_size=p;
        }

        void putdata()
        {
            cout<<"------------------------------------------------------"<<endl;
            cout<<p_id<<" : ";
            cout<<p_name<<" : ";
            cout<<p_manuf<<" : ";
            cout<<p_price<<" : ";
            cout<<dial_size<<endl;
            cout<<"------------------------------------------------------"<<endl;
        }
};

class bedsheet:public product
{
    protected:
    float width,height;

    public:
        bedsheet(int u,string v,string w,float x,float y,float z):product(u,v,w,x)
        {
            width=y;
            height=z;
        }

        void putdata()
        {
            cout<<"------------------------------------------------------"<<endl;
            cout<<p_id<<" : ";
            cout<<p_name<<" : ";
            cout<<p_manuf<<" : ";
            cout<<p_price<<" : ";
            cout<<width<<" : ";
            cout<<height<<endl;
            cout<<"------------------------------------------------------"<<endl;
        }
};

int main()
{
    smartwatch *m;
    bedsheet *n;

    int i;
    cout<<"Enter 1 : smart watch menu\n";
    cout<<"Enter 2 : bedsheet menu\n";
    cout<<"Enter your choice : ";
    cin>>i;
    cout<<endl;

    switch(i)
    {
    case 1 :
        {
            int a;string b,c;float d,e;
            cout<<"***** ENTER SMART WATCH DATA *****"<<endl<<endl;
            cout<<"Enter product id : ";cin>>a;
            cin.ignore();
            cout<<"Enter product name : ";getline(cin,b);
            cout<<"Enter product manufacture : ";cin>>c;
            cout<<"Enter product price : ";cin>>d;
            cout<<"Enter product dial size : ";cin>>e;
            cout<<endl;
            m=new smartwatch(a,b,c,d,e);
            (*m).putdata();
            break;
        }

    case 2 :
        {
            int p;string q,r;float s,t,u;
            cout<<"***** ENTER BEDSHEET DATA *****"<<endl<<endl;
            cout<<"Enter product id : ";cin>>p;
            cin.ignore();
            cout<<"Enter product name : ";getline(cin,q);
            cout<<"Enter product manufacture : ";cin>>r;
            cout<<"Enter product price : ";cin>>s;
            cout<<"Enter bedsheet width : ";cin>>t;
            cout<<"Enter bedsheet height : ";cin>>u;
            cout<<endl;
            n=new bedsheet(p,q,r,s,t,u);
            (*n).putdata();
            break;
        }
    }

    return 0;
}
