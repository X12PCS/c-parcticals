#include<iostream>
#include<iomanip>
using namespace std;

class employee
{
    float y,m;

    public:
      void get()
      {
          cout<<"Enter employee experience in years and months\n";
          cout<<"Years : ";
          cin>>y;
          cout<<"Months : ";
          cin>>m;
          cout<<endl;
      }

      operator float()
      {
          return y+(m/12);
      }


};

int main()
{
    employee o;
    o.get();

    float n;
    n=o;
    cout<<"Employee experience is : "<<setprecision(4)<<n<<endl;

    return 0;
}
