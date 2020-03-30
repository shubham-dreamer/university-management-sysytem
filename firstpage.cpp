#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class user{
	public: 
	string username,password;
	user(){
		username='\0';
		password='\0';
	};
	bool Islogin();
	
}; 
bool user :: Islogin(){
	string ch_username="shubham",ch_password="11803420";
	cout<<"Enter your UserName::\t";
	cin>>username;
	cout<<"Enter your Password::\t";
	cin>>password;
	if (username == ch_username && password == 11803420){
		return true;
	}
	else{
		return false;
	}
}
class admin{
	public: 
	string username,password;
	user(){
		username='\0';
		password='\0';
	};
	bool Inlogin();
	
}; 
bool admin::Inlogin(){
	string ch_username="unknown",ch_password="lpu@faculty";
	cout<<"Enter your UserName::\t";
	cin>>username;
	cout<<"Enter your Password::\t";
	cin>>password;
	if (username == ch_username && password == 11803420){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int choice;
	cout<<"***********TYPE OF USER************"<<endl;
	cout<<"\t1.STUDENT"<<endl;
	cout<<"\t2.ADMIN"<<endl;
	cout<<"ENTER YOUR CHOICE::";
	cin<<"choice";
	switch (choice){
		case 1:
		user u1;
		bool status = u1.Islogin();
		if(!status){
			cout<<"\n\tLog in Failed";
			return 1;
		}
		else{
			cout<<"\n\tWelcome"<<endl;
			return 0;
		}
		case 2:
			admin a1;
			bool status = a1.Inlogin();
		if(!status){
			cout<<"\n\tLog in Failed";
			return 1;
		}
		else {
			cout<<"\n\tWelcome"<<endl;
			return 0;
		}
			
			}
	
}
