#include<iostream>
#include<string>
using namespace std;

class literature
{
    protected:
    int id;
    string title;
    public:
        void get()
        {
            cout<<"Enter Id : ";
            cin>>id;
            cout<<"Enter title : ";
            cin.ignore();
            getline(cin,title);
        }
};

class e_l : virtual public literature
{
    protected:
    string doi;
    public:
        void gete()
        {
            cout<<"Enter DOI : ";
            cin>>doi;
        }
};

class h_boundl : virtual public literature
{
    protected:
    int nob;
    public:
        void geth()
        {
            cout<<"Enter Number of Book : ";
            cin>>nob;
        }
};

class book : public e_l,public h_boundl
{
    int isbn;
    public:
        void getb()
        {
            cout<<"Enter ISBN : ";
            cin>>isbn;
        }

        void putb()
        {
            cout<<"I'D : "<<id<<endl;
            cout<<"Title : "<<title<<endl;
            cout<<"ISBN : "<<isbn<<endl;
            cout<<nob<<"copies"<<endl;
        }
};

class magazine : public e_l,public h_boundl
{
    int issn;
    public:
        void getm()
        {
            cout<<"Enter ISSN : ";
            cin>>issn;
        }

        void putm()
        {
            cout<<"I'D : "<<id<<endl;
            cout<<"Title : "<<title<<endl;
            cout<<"ISSN : "<<issn<<endl;
            cout<<"Link : "<<doi<<endl;
        }
};

int main()
{

    book b;
    magazine m;

    char ch;
    do
   {
        cout<<"Enter 1 : Add book data\n";
        cout<<"Enter 2 : Add magazine data\n";
        cout<<"Enter 3 : List all books\n";
        cout<<"Enter 4 : List all magazines\n";

        int n;
        cout<<endl<<"Enter Your choice : "<<endl;
        cin>>n;
        cout<<endl;

        switch(n)
        {
            case 1 : cout<<"*** Add book data ***\n";
                    b.get();
                    b.getb();
                    char h;
                    cout<<"(E)copy or (H)ardbound : ";
                    cin>>h;
                    if(h=='E')
                    {
                        b.gete();
                    }
                    else{b.geth();}
                    break;

            case 2 : cout<<"*** Add magazine data ***\n";
                    m.get();
                    m.getm();
                    char g;
                    cout<<"(E)copy or (H)ardbound : ";
                    cin>>g;
                    if(g=='E')
                    {
                        m.gete();
                    }
                    else{m.geth();}
                    break;

            case 3 : cout<<"*** List all books ***\n";
                    b.putb();
                    break;

            case 4 : cout<<"*** List all magazines ***\n";
                    m.putm();
                    break;

        }

        cout<<"\n*********************************"<<endl<<endl;
        cout<<"Enter M or m to goto new menu. Press any key to exit : ";
        cin>>ch;

    }while(ch=='m' || ch=='M');


    return 0;
}
