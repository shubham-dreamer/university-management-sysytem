#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Teacher
{
    string username2 = "2340";
    string password2 = "Pawan";
public:
    string username3;
    string password3;
    Teacher(){}
    void Login1()
    {
        cout<<"Enter Your UID Number:-";
        cin>>username3;
        if(username3==username2)
        {
            cout<<"Enter Your Password:-";
            cin>>password3;
            if(password3==password2)
            {
                cout<<"Welcome Pawandeep <3 <3 <3 :) "<<endl;
            }
            else
            {
                cout<<"Enter correct Password."<<endl;
            }
        }
        else
        {
            cout<<"Enter correct Registration number."<<endl;
        }
    }
};



class Student
{
    string username = "11803453";
    string password = "Aryan";
public:
    string username1;
    string password1;
    Student(){}
    void Login()
    {
        cout<<"Enter Your Registration Number:-";
        cin>>username1;
        if(username1==username)
        {
            cout<<"Enter Your Password:-";
            cin>>password1;
            if(password1==password)
            {
                cout<<"Welcome Aryan Singh!!"<<endl;
            }
            else
            {
                cout<<"Enter correct Password"<<endl;
            }
        }
        else
        {
            cout<<"Enter correct Registration number."<<endl;
        }
    }
};
int main()
{
    Teacher obj;
    Student obj1;
    int a;
    cout<<"************************************Welcome to LPU Login portal*******************************************"<<endl;
    cout<<"1:-Teacher"<<endl;
    cout<<"2:-Student"<<endl;
    cout<<"Enter your choice:-";
    cin>>a;
    switch (a)
    {
        case 1:
            
            obj.Login1();
            break;
        case 2:
        {
            obj1.Login();
        }
    }
    return 0;
}
