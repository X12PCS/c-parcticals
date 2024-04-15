#include<iostream>
#include<string>
using namespace std;

class employee
{
    private:

    string name;
    string quali;
    int con;
    static float sum;
    static int num;
    static float avg;
    float exp;

    public:

    int id;
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
        sum=sum+exp;
        num++;
    }

    void put()
    {
        cout<<"-----------------------------"<<endl;
        cout<<"Employee I'D : "<<id<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Qualification : "<<quali<<endl<<"Experience : "<<exp<<endl<<"Contact Number : "<<con<<endl;
    }

    static void average()
    {
        avg=sum/num;
        cout<<endl<<"Average of employee Experience is: "<<avg<<endl;
    }

};

float employee :: sum;
int employee :: num;
float employee :: avg;

int main()
{
    int n;
    cout<<"Enter number of an employee : ";
    cin>>n;

    employee e[n];

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
                break;
            }
        }
        cout<<"*********************************"<<endl<<endl;
        cout<<"Press Y to get another employee details, press N to exit : ";
        cin>>ch;

   }while(ch=='y' || ch=='Y');

    employee::average();

    return 0;
}

