#include<iostream>
using namespace std;

class mm
{
    float mm,ans;
    public:

            void get()
        {
            cout<<"\nEnter measurement in mm : ";
            cin>>mm;
        }
        void display()
        {
            ans=(0.1*mm);
            cout<<"Measurement in cm is :"<<ans;

        }

};

class cm
{
    float cm,solve;
    public:
        void get()
        {
            cout<<"\nEnter measurement in cm : ";
            cin>>cm;
        }

     void display()
        {
            solve=(10*cm);
            cout<<"Measurement in mm is :"<<solve;

        }


};

int main()
{
    int i;

    mm m1;
    cm c1;
    do
    {
       cout<<"\nEnter 1 : mm to cm converter\n";
    cout<<"Enter 2 : cm to mm converter\n";
    cout<<"Enter 0 : EXIT\n";
    cout<<"Choice:";
    cin>>i;
        switch(i)
        {

        case 1 :
        {m1.get();
        m1.display();}
            break;
        case 2 :
           {
        c1.get();
        c1.display();

           }
            break;
        }
cout<<"\n";
    }while(i!=0);

    return 0;
}
