#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

int login(){
	int opt,x,y;
	string user;
	string pass;
	vector <string> username;
	username.push_back("RAM");
	username.push_back("KANTI");
	username.push_back("RAJ");
	username.push_back("MUKESH");
	username.push_back("LALA");
	vector <string> password;
	password.push_back("0000");
	password.push_back("1111");
	password.push_back("2222");
	password.push_back("3333");
	password.push_back("4444");
	loginhere:
	cout<<"Enter 1 (login) and 2 (sign up) : ";
	cin>>opt;
		if(opt==1){
			cout<<"enter username : ";
			cin>>user;
			cout<<"Enter password : ";
			cin>>pass;
			int a;
			for(int i=0;i<username.size();i++){
				a=i;
				if(username[i]==user){
					break;
				}
			}
			if(password[a]==pass && username[a]==user){
				cout<<"login successful \n";
				cout<<"\n \n";
			}else{
				cout<<"Invalid username or password";
			}
		}else if(opt==2){
			cout<<"enter username : ";
			cin>>user;
			username.push_back(user);
			cout<<"Enter password : ";
			cin>>pass;
			password.push_back(pass);
			cout<<"Registration successful : \n";
			goto loginhere;
			
		}
	
	}

int main(){
	login();
}