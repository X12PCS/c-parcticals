#include<iostream>
#include<iomanip>
using namespace std;
class car
 {
     public:
    int noc;
    string carname;
    string fuel;
    float price;
    float milege;
    string tra;
    float tc;
    int setn;
    string airbags;
    public:
    void get()
    {
      cout<<"Enter car name:";
      cin>>carname;
      cout<<"Enter type of fuel(lit):";
      cin>>fuel;
      cout<<"Enter price of car(lakhs):";
      cin>>price;
      cout<<"Enter car's milege(km) :";
      cin>>milege;
      cout<<"Enter car transmission:";
      cin>>tra;
      cout<<"Enter car tank capacity:";
      cin>>tc;
      cout<<"Enter car's seat number:";
      cin>>setn;
      cout<<"car has airbag yea/no:";
      cin>>airbags;
      cout<<"*********************"<<endl;
    }
    void put()
    {
        cout<<endl<<"model"<<setw(8)<<"Fuel"<<setw(8)<<"Price"<<setw(8)<<"Mileage"<<setw(8)<<"Transmission"<<setw(8)<<"Tank Capacity"<<setw(8)<<"Seating capacity"<<setw(8)<<"Airbags"<<endl;
        cout<<carname<<setw(8)<<fuel<<setw(8)<<price<<setw(8)<<milege<<setw(8)<<tra<<setw(8)<<tc<<setw(8)<<setn<<setw(8)<<airbags<<endl;
    }
};
main()
{   int n,i;
    cout<<"Enter your total number of car:";
    cin>>n;
    car c[n];
    for(i=0;i<n;i++)
    {
        c[i].get();
    }
    char a;
    do
    {
      cout<<"WELCOME TO TATA MOTORS"<<endl<<"GET THE CARDETAILS AS PER YOUR PREFERENCE"<<endl<<"(1)Model name(2)Fuel Type(3)Price Range"<<endl;
      int b;
      cout<<"Enter Your choice:";
      cin>>b;
      switch(b){
      case 1:cout<<"-----------------"<<endl;
               cout<<"List of car"<<endl;
               for(i=0;i<n;i++)
               {
                   cout<<i+1<<c[i].carname<<endl;
               }
               int nc;
               cout<<"CHOOSE YOUR CAR TO GET DETAIL:";
               cin>>nc;
                   for(i=0;i<n;i++)
                   {
                       if((i+1)==nc)
                       {
                           c[i].put();
                       }
                   }

               break;
       case 2:
                   int tf;
                   cout<<"---------------"<<endl<<"TATA MOTORS ARE AVALABLE WITH FUEL OPTIONS"<<endl;
                   cout<<"(1)petrol(2)diesel(3)GAS(4)Electric"<<endl;
                   cout<<"ENTER YOUR FUEL PREFERNCE:";
                      cin>>tf;
                      for(i=0;i<n;i++)
                      {
                          if("c[i].fuel"=="tf")
                          {
                              c[i].put();
                          }
                      }
               break;
       case 3:int rp;
                cout<<"-----------------"<<endl;
                cout<<"ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS:";
                cin>>rp;
                for(i=0;i<n;i++)
                {
                    if(rp<=c[i].price)
                    {
                        c[i].put();
                    }
                }
                break;
      }
               cout<<"you want more information y/n:";
               cin>>a;
    }while(a=='y' || a=='Y');

}

