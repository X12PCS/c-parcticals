#include<iostream>
#include<string>
using namespace std;

class employee
{
    private:

    string name;
    string quali;
    static float sum;
    static int num;
    static float avg;
    float exp;
    int con;

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
        cout<<"---------------------------------"<<endl;
        cout<<"Employee I'D : "<<id<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Qualification : "<<quali<<endl<<"Experience : "<<exp<<endl<<"Contact Number : "<<con<<endl;
    }

    static void average()
    {
        avg=sum/num;
        cout<<"Average of employee Experience is: "<<avg;
    }

};

float employee :: sum;
int employee :: num;
float employee :: avg;

class techE : public employee
{
    string designation,specialization,payscale;

    public:
        void gettempdata()
        {
            cout<<"Enter Designation : ";
            cin.ignore();
            getline(cin,designation);
            cout<<"Enter Specialization : ";
            cin.ignore();
            getline(cin,specialization);
            cout<<"Enter Pay Scale : ";
            cin.ignore();
            getline(cin,payscale);
        }

        void puttempdata()
        {
            cout<<"Designation : "<<designation<<endl;
            cout<<"Specialization : "<<specialization<<endl;
            cout<<"Pay Scale : "<<payscale<<endl;
        }

};

class technE : public employee
{
    int salary;

    public:
        void getntempdata()
        {
            cout<<"Enter Salary : ";
            cin>>salary;
        }

        void putntempdata()
        {
            cout<<"Salary : "<<salary<<endl;
        }
};

int main()
{
    int n;
    cout<<"Enter number of an employee : ";
    cin>>n;

    techE e[n];
    technE en[n];

    for(int i=0;i<n;i++)
    {
        cout<<"1. for Teaching : \n"<<"2. for Non Teaching : \n\n";
        int a;
        cin>>a;

        switch(a)
        {
            case 1: e[i].get();
                    e[i].gettempdata();
                    cout<<endl;
                        break;

            case 2: en[i].get();
                    en[i].getntempdata();
                    cout<<endl;
                        break;
        }
    }

   char ch;
   do
   {
        int searchid;
        cout<<endl<<"Enter Search I'D"<<endl;
        cin>>searchid;

        for(int i=0;i<n;i++)
        {
            bool f=false;
            if(searchid==e[i].id)
            {
                e[i].put();
                e[i].puttempdata();
                f=true;
                break;
            }

            else if(searchid==en[i].id)
            {
                en[i].put();
                en[i].putntempdata();
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

    employee::average();

    return 0;
}


