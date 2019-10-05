#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

int ini();
int loginconsumer();
int loginfarmer();
int menuconsumer();
int menufarmer();
int additem();
int modifyitem();

vector <string> productname;
vector <string> productquantity;
vector <string> productprice;
vector <string> usernamefarmer;



int main(){
	system("COLOR F0");
	int opt;
	cout<<"Enter 1 for cunsumer login and 2 for farmer login : ";
	cin>>opt;
	if(opt==1){
		loginconsumer();
	}else if(opt==2){
		loginfarmer();
  	}
}


int ini(){
	
	usernamefarmer.push_back("RAM");
	usernamefarmer.push_back("KANTI");
	usernamefarmer.push_back("RAJ");
	usernamefarmer.push_back("MUKESH");
	usernamefarmer.push_back("LALA");
	
	productname.push_back("RICE");
		productname.push_back("WHEAT");
		productname.push_back("CORN");
		productname.push_back("SUGERCANE"); 
		
		productquantity.push_back("50");
		productquantity.push_back("65");
		productquantity.push_back("75");
		productquantity.push_back("90");

		productprice.push_back("15");
		productprice.push_back("20");
		productprice.push_back("30");
		productprice.push_back("25");

	
	
}



int loginconsumer(){
	int opt;
	string user;
	string pass;
	vector <string> username;
	username.push_back("AYUSH");
	username.push_back("DARSHAN");
	username.push_back("KESHAV");
	username.push_back("NITANSHU");
	username.push_back("ABHAY");
	vector <string> password;
	password.push_back("5555");
	password.push_back("6666");
	password.push_back("7777");
	password.push_back("8888");
	password.push_back("9999");
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
				menuconsumer();
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


int loginfarmer(){
	int opt,x,y;
	string user;
	string pass;
	
	usernamefarmer.push_back("RAM");
	usernamefarmer.push_back("KANTI");
	usernamefarmer.push_back("RAJ");
	usernamefarmer.push_back("MUKESH");
	usernamefarmer.push_back("LALA");
	
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
			for(int i=0;i<usernamefarmer.size();i++){
				a=i;
				if(usernamefarmer[i]==user){
					break;
				}
			}
			if(password[a]==pass && usernamefarmer[a]==user){
				cout<<"login successful \n";
				cout<<"\n \n";
				menufarmer();
			}else{
				cout<<"Invalid username or password";
			}
		}else if(opt==2){
			cout<<"enter username : ";
			cin>>user;
			usernamefarmer.push_back(user);
			cout<<"Enter password : ";
			cin>>pass;
			password.push_back(pass);
			cout<<"Registration successful : \n";
			goto loginhere;
			
		}
	
	}
	
	
	
	int menuconsumer(){
		ini();
	string proname;
    int aaa[100],j=0,i,k,p,t;
    while(1)
    {
    cout<<"what are you want to buy ";
    cin>>proname;
    cout<<"discription about your demand\n";
    for(i=0;i<usernamefarmer.size();i++)
    {
        if(proname==productname[i])
        {
          p=i;
          break;
        }
    }
        cout<<"Product Name \t Product Quantity \t Product Price \n";
        cout<<usernamefarmer[p]<<"\t\t"<<productprice[p]<<"\t\t\t"<<productquantity[p]<<"\n";
    srand(time(0));
    for(k=0;k<usernamefarmer.size();k++){
    	if(k!=p){
        	cout<<usernamefarmer[k]<<"\t\t"<<rand()%50+50<<"\t\t\t"<<rand()%100+50<<"\n";
    	}
	}
        cout<<"you want to see more item ? enter 1 for yes enter 2 for no" ;
        cin>>t;
        if(t==2)
            break;
    }
		
	}
	
	
	int menufarmer(){
		
		int opt;
				
		productname.push_back("RICE");
		productname.push_back("WHEAT");
		productname.push_back("CORN");
		productname.push_back("SUGERCANE"); 
		
		productquantity.push_back("50");
		productquantity.push_back("65");
		productquantity.push_back("75");
		productquantity.push_back("90");

		productprice.push_back("15");
		productprice.push_back("20");
		productprice.push_back("30");
		productprice.push_back("25");

		cout<<"Product Name \t Product Quantity \t Product Price \n";
		
		for(int i=0;i<productname.size();i++){
			cout<<productname[i]<<"\t \t"<<productquantity[i]<<"\t \t \t"<<productprice[i]<<"\n";
		}	
		cout<<"Enter 1 for Adding Item 2 to continue : ";
		cin>>opt;
		if(opt==1){
			additem();
		}
		cout<<"Enter 1 for modifing any item 2 to continue : " ;
		cin>>opt;
		if(opt==1){
			
		}
		
		
}

int additem(){
	int opt;
	while(1){
		string prodname;
		string prodquantity;
		string prodprice;
		cout<<"Enter product name : ";
		cin>>prodname;
		cout<<"Enter product quantity : ";
		cin>>prodquantity;
		cout<<"Enter product price : ";
		cin>>prodprice;
		productname.push_back(prodname);
		productquantity.push_back(prodquantity);
		productprice.push_back(prodprice);
		cout<<"Enter 1 for adding more product 2 for continue : ";
		cin>>opt;
		if(opt==2){
			break;
		}
	}
	cout<<"Updated list :  \n";
	cout<<"Product Name \t Product Quantity \t Product Price \n";
		
	for(int i=0;i<productname.size();i++){
			cout<<productname[i]<<"\t \t"<<productquantity[i]<<"\t \t \t"<<productprice[i]<<"\n";
		}	
		
	
}
		
		