//This Program Is Created By PatelJainesh 23ce096.
//Purpose :- Update the TATA motors system (practical 3) to get input from the file.
//concept :- File concepts;
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
using namespace std;
class car_details
{
    string model_name;
    int fuel_choice;
    string fuel_type;
    float price;
    float mileage;
    int transmission_choice;
    int tank_capacity;
    int seat_cap;
    int airbag_choice;
    string airbag;
    string transmission;
public :
     void get_data(ifstream &file)
    {
        getline(file,model_name,',');
        getline(file,fuel_type,',');
        file >> price;
        file.ignore();
        file >> mileage;
        file.ignore();
        getline(file,transmission,',');
        file >> tank_capacity;
        file.ignore();
        file >> seat_cap;
        file.ignore();
        getline(file,airbag,';');
    }
    void display_model(int i)
    {
        cout<<" "<<i+1<<"."<<model_name<<"   ";
    }
    void disply_main_colum()
    {
        cout<<left<<setw(10)<<"Model";
        cout<<left<<setw(13)<<"Fuel";
        cout<<left<<setw(15)<<"Price";
        cout<<left<<setw(10)<<"Mileage";
        cout<<left<<setw(14)<<"Transmission";
        cout<<left<<setw(16)<<"Tank Capacity";
        cout<<left<<setw(10)<<"Seating";
        cout<<left<<setw(10)<<"Airbags";
        cout<<endl;
        cout<<right<<setw(30)<<"(Lakhs)";
        cout<<right<<setw(14)<<"(km/L)";
        cout<<right<<setw(26)<<"(Liters)";
        cout<<right<<setw(16)<<"Capacity";
    }
    void disply_data()
    {
        cout<<left<<setw(10)<<model_name;
        cout<<left<<setw(13)<<fuel_type;
        cout<<left<<setw(15)<<price;
        cout<<left<<setw(10)<<mileage;
        cout<<left<<setw(14)<<transmission;
        cout<<left<<setw(16)<<tank_capacity;
        cout<<left<<setw(10)<<seat_cap;
        cout<<left<<setw(10)<<airbag;

    }
    void fuel_check(int fuel_sub_choice)
    {
        switch(fuel_sub_choice)
        {
        case 1:
            if(fuel_type=="Petrol")
            {
                cout<<endl;
                disply_data();
            }
            break;
        case 2:
            if(fuel_type=="Diesel")
            {
                cout<<endl;
                disply_data();
            }
            break;
        case 3:
            if(fuel_type=="CNG")
            {
                cout<<endl;
                disply_data();
            }
            break;
        case 4:
            if(fuel_type=="Electric")
            {
                cout<<endl;
                disply_data();
            }
            break;

        }
    }
    void price_check(int price_range)
    {
        if(price<=price_range)
        {
            cout<<endl;
            disply_data();
        }
    }

} cd[1000];


int main()
{
    int no_of_cars=7,main_choice,model_sub_choice,choice;
    int fuel_sub_choice,price_range;
    char ch;
    ifstream file;
    file.open("cardata.txt");
    if (!file) {
		cout << "No such file";
	}
//    cout<<"Enter Total Number of cars : ";
//    cin>>no_of_cars;
    for(int i=0; i<7; i++)
    {
        cd[i].get_data(file);
    }

    system("CLS");
    cout<<" WELCOME TO THE TATA MOTORS"<<endl;
main :
    cout<<endl<<" GET THE CAR DETAILS AS PER YOUR PREFRENCE"<<endl;
    cout<<endl<<" (1)Model Name (2)Fuel Type (3)Price Range"<<endl;
back5 :
    cout<<endl<<" ENTER YOUR OPTION : ";
    cin>>choice;
    cout<<endl;
    if(choice>3 || choice<1)
    {
        cout<<endl<<" Enter Valid Choice ";
        goto back5;
    }
    switch(choice)
    {
    case 1:
        cout<<" LIST OF TATA CARS"<<endl;
        for(int i=0; i<7; i++)
        {

            cd[i].display_model(i);

        }
        cout<<endl<<endl<<" CHOOSE YOUR CAR TO GET DETAILS : ";
        cin>>model_sub_choice;
        cout<<endl<<endl;
        cd[model_sub_choice].disply_main_colum();
        cout<<endl;
        cd[model_sub_choice-1].disply_data();
        cout<<endl<<endl<<"ENTER \"Y\" TO GO BACK TO MAIN MENU OR \"N\" TO EXIT : ";
        cin>>ch;
        cout<<endl;
        if(ch=='y' || ch=='Y')
        {
            system("CLS");
            goto main;
        }
        else
        {
            break;
        }
    case 2:
        cout<<" TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS"<<endl;
        cout<<endl<<" (1)Petrol (2)Diesel (3)CNG (4)Electric"<<endl;
back1:
        cout<<endl<<" ENTER YOUR CHOICE : ";
        cin>>fuel_sub_choice;
        cout<<endl;
        if(fuel_sub_choice>0 && fuel_sub_choice<=4)
        {
            cd[0].disply_main_colum();
        }
        else
        {
            cout<<endl<<" Please Enter Valid Choice"<<endl;
            goto back1;
        }
        for(int i=0; i<no_of_cars; i++)
        {
            cd[i].fuel_check(fuel_sub_choice);
        }
        cout<<endl<<endl<<"ENTER \"Y\" TO GO BACK TO MAIN MENU OR \"N\" TO EXIT : ";
        cin>>ch;
        cout<<endl;
        if(ch=='y' || ch=='Y')
        {
            system("CLS");
            goto main;
        }
        else
        {
            break;
        }
    case 3:
        cout<<" ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS : ";
        cin>>price_range;
        cout<<endl;
        cd[0].disply_main_colum();
        for(int i=0; i<no_of_cars; i++)
        {
            cd[i].price_check(price_range);
        }
        cout<<endl<<endl<<"ENTER \"Y\" TO GO BACK TO MAIN MENU OR \"N\" TO EXIT : ";
        cin>>ch;
        cout<<endl;
        if(ch=='y' || ch=='Y')
        {
            system("CLS");
            goto main;
        }
        else
        {
            break;
        }

    }

    return 0;
}
