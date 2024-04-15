#include<iostream>
using namespace std;

class employee
{
    int month,year;

    public:
   employee(){
   month=0;
   year=0;


   }
 employee(float &x)
    {
       year=x;
      month=(((x-year)*100*12/100));
    }
     void put()
    {
        cout<<"Employee experience is "<<year<<" year and "<<month<<" months\n";
    }
};

int main()
{
    float a;
    cout<<"Enter employee experience : ";
    cin>>a;

    employee o;
    o=a;
    o.put();


    return 0;
}
