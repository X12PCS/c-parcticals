#include<iostream>
#include<string>
using namespace std;

    string mar(int marks)
    {

    if(marks>=80)
    {
       return "AA";
    }
    else if(marks>=73&&marks<80)
    {
        return "AB";
    }
    else if(marks>=66&&marks<73)
    {
        return "BB";
    }
    else if(marks>=60&&marks<66)
    {
        return "BC";
    }
    else if(marks>=55&&marks<60)
    {
        return "CC";
    }
    else if(marks>=50&&marks<55)
    {
        return "CD";
    }
    else if(marks>=45&&marks<50)
    {
        return "DD";
    }
    else if(marks<45)
    {
        return "FF";
    }
    }

    float sub(const string &s)
    {
        if(s=="AA")
            return 10.0;
        if(s=="AB")
            return 9.0;
        if(s=="BB")
            return 8.0;
        if(s=="BC")
            return 7.0;
        if(s=="CC")
            return 6.0;
        if(s=="CD")
            return 5.0;
        if(s=="DD")
            return 4.0;
        if(s=="FF")
            return 0.0;
    }

    int main()
    {
        string id,name,s[3];
        int sem,sum=0;
        int lmarks[3],pmarks[3],c[3];
        float sgpa=0,sgpaf;

    cout<<"Enter I'D : ";
    cin>>id;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Semester : ";
    cin>>sem;

    for(int i=0;i<3;i++)
    {

    cin.ignore();
    cout<<"Enter Subject : \n";
    getline(cin,s[i]);
    cout<<"Enter theory marks between 1 to 100 : \n";
    cin>>lmarks[i];
    cout<<"Enter Practical marks between 1 to 100 : \n";
    cin>>pmarks[i];
    cout<<"Enter subject Credit: \n";
    cin>>c[i];
    }

    cout<<"\nStudent I'D : "<<id<<endl;
    cout<<"Student name : "<<name<<endl;
    cout<<"Semester : "<<sem<<endl;
    cout<<"Subject\t\tTheory\t\tPractical\n";

    for(int i=0;i<3;i++)
    {
        cout<<s[i]<<"\t\t"<<mar(lmarks[i])<<"\t\t"<<mar(pmarks[i])<<endl;
    }
    for(int i=0;i<3;i++)
    {
        sum+=c[i];
        sgpa+=(c[i])*((sub(mar(lmarks[i]))+sub(mar(pmarks[i])))/2);

    }
    sgpaf=sgpa/sum;
    cout<<"SGPA : "<<sgpaf;
    return 0;
}
