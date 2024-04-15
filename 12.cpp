#include<iostream>
#include<string.h>
using namespace std;

class result;
class student
{
    string stu_id,stu_name;
    int sem;
public:
    void get()
    {
    cout<<"Enter I'D : ";
    cin>>stu_id;
    cout<<"Enter Name : ";
    cin>>stu_name;
    cout<<"Enter Semester : ";
    cin>>sem;
    }

    void put()
    {
    cout<<"\nStudent I'D : "<<stu_id<<endl;
    cout<<"Student name : "<<stu_name<<endl;
    cout<<"Semester : "<<sem<<endl;
    }

    void get_result(result &r);

    void put_result(result &r);

    void gr(result &r);
    void pr(result &r);

};

class result
{
    string sub_name[3],sub_credit[3],th_marks[3],pr_marks[3],th_grade[3],pr_grade[3];
    float sgpa;
    public:
    friend void student::gr(result &r);
    friend void student::pr(result &r);

};

void student::put_result(result &r)
    {
    for(int i=0;i<3;i++)
    {
    cout<<"Subject : \n"<<r.sub_name[i];
    cout<<"theory marks between 1 to 100 : \n"<<r.th_marks[i];
    cout<<"Practical marks between 1 to 100 : \n"<<r.pr_marks[i];
    cout<<"theory grade : \n"<<r.th_grade[i];
    cout<<"Practical grade : \n"<<r.pr_grade[i];
    cout<<"subject Credit: \n"<<r.sub_credit[i];
    }
    cout<<"Sgpa : "<<r.sgpa;
    }


void student::get_result(result &r)
    {
    for(int i=0;i<3;i++)
    {
    cin.ignore();
    cout<<"Enter Subject : \n";
    getline(cin,r.sub_name[i]);
    cout<<"Enter theory marks between 1 to 100 : \n";
    cin>>r.th_marks[i];
    cout<<"Enter Practical marks between 1 to 100 : \n";
    cin>>r.pr_marks[i];
    cout<<"Enter grade : \n";
    cin>>r.th_grade[i];
    cout<<"Enter theory : \n";
    cin>>r.pr_grade[i];
    cout<<"Enter subject Credit: \n";
    cin>>r.sub_credit[i];
    }
    cout<<"Sgpa : ";
    cin>>r.sgpa;
    }

void student::gr(result &r);
void student::pr(result &r);

int main()
{
    student s;
    result r;

    s.get();
    s.put();

    r.get_result();
   r.putresult();

    r.gr(r);
    r.pr(r);
    return 0;
}
