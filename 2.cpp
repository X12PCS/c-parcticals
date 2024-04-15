#include<iostream>
#include<string>
using namespace std;

struct employee
{
    int id;
    string name;
    string quali;
    float exp;
    int con;

    void get()
    {
        cout<<"Enter an employee I'D : ";
        cin>>id;
        cout<<"Enter an employee Name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Qualification : ";
        cin>>quali;
        cout<<"Enter Experience : ";
        cin>>exp;
        cout<<"Enter Contact Number : ";
        cin>>con;
    }

    void put()
    {
        cout<<"-----------------------------"<<endl;
        cout<<"Employee I'D : "<<id<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Qualification : "<<quali<<endl<<"Experience : "<<exp<<endl<<"Contact Number : "<<con<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of an employee : ";
    cin>>n;

    struct employee e[n];

    for(int i=0;i<n;i++)
    {
        e[i].get();
    }

   char ch;
   do
   {
        int searchid;
        cout<<"Enter Search I'D"<<endl;
        cin>>searchid;

        for(int i=0;i<n;i++)
        {
            bool f=false;
            if(searchid==e[i].id)
            {
                e[i].put();
                f=true;
                break;
            }
        if(!false)
            {
                cout<<endl<<"*********************************"<<endl<<endl;
                cout<<"ERROR : ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl<<endl;
            }
        }
        cout<<"*********************************"<<endl<<endl;
        cout<<"Press Y to get another employee details, press N to exit : ";
        cin>>ch;

   }while(ch=='y' || ch=='Y');

    return 0;
}
