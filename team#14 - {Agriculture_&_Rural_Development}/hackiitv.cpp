#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

int login();
int loginconsumer();
int loginfarmer();
int menuconsumer();
int menufarmer(int x);
int additem();
int modifyitem();

vector <string> productname;
vector <string> productquantity;
vector <string> productprice;
vector <string> usernamefarmer;
vector <string> usernumber;



int main(){
	system("COLOR F0");
	login();
}


int login(){
	int opt;
	cout<<"Enter 1 for consumer and 2 for farmer : ";
	cin>>opt;
	if(opt==1){
		loginconsumer();
	}else if(opt==2){
		loginfarmer();
  	}
}



int loginconsumer(){
	int opt;
	string user;
	string pass;
	string passconf;
	
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
	
	loginherecom:
	
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
			cout<<"Enter password : ";
			cin>>pass;
			cout<<"Confirm password : ";
			cin>>passconf;
			if(pass==passconf){
				username.push_back(user);
				password.push_back(pass);
				cout<<"Registration successful : \n";
			}else{
				cout<<"Password not match : \n Try again \n";
			}
			goto loginherecom;
			
		}
	
	}


int loginfarmer(){
	int opt;
	string user;
	string pass;
	string passconf;
	string numb;
	
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
	
	usernumber.push_back("8765409834");
	usernumber.push_back("6798234832");
	usernumber.push_back("7656456792");
	usernumber.push_back("9678564319");
	usernumber.push_back("8624657890");
	
	loginherefar:
		
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
				menufarmer(a);
			}else{
				cout<<"Invalid username or password";
			}
		}else if(opt==2){
			cout<<"enter username : ";
			cin>>user;
			cout<<"Enter phone number : ";
			cin>>numb;
			cout<<"Enter password : ";
			cin>>pass;
			cout<<"Confirm password : ";
			cin>>passconf;
			if(pass==passconf){
				usernamefarmer.push_back(user);
				usernumber.push_back(numb);
				password.push_back(pass);
				cout<<"Registration successful : \n";
			}else{
				cout<<"Password not match : \n Try again \n";
			}
			goto loginherefar;
			
		}
	
	}
	
	
	
	int menuconsumer(){
	string proname;
    int aaa[100],j=0,i,k,p,t;
    while(1)
    {
    cout<<"what do you want to buy ";
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
        cout<<"Farmer Name \t Product Quantity(quintal) \t Product Price(per quintal)\t Contact Number \n";
        cout<<usernamefarmer[p]<<"\t\t"<<productprice[p]<<"\t\t\t\t"<<productquantity[p]<<"\t\t\t\t"<<usernumber[p]<<"\n";
    srand(time(0));
    for(k=0;k<usernamefarmer.size();k++){
    	if(k!=p){
        	cout<<usernamefarmer[k]<<"\t\t"<<rand()%10+20<<"\t\t\t\t"<<rand()%85+1100<<"\t\t\t\t"<<usernumber[k]<<"\n";
    	}
	}
        cout<<"you want to see more item ? enter 1 for yes enter 2 for no" ;
        cin>>t;
        if(t==2)
            break;
    }
		
	}
	
	
	int menufarmer(int x){
		
		int opt;
				
		productname.push_back("RICE");
		productname.push_back("WHEAT");
		productname.push_back("CORN");
		productname.push_back("MAZE");
		
		if(x<=4){		
			productquantity.push_back("20");
			productquantity.push_back("25");
			productquantity.push_back("32");
			productquantity.push_back("27");

			productprice.push_back("1250");
			productprice.push_back("1270");
			productprice.push_back("1200");
			productprice.push_back("1225");
		}else{
			productquantity.push_back("0");
			productquantity.push_back("0");
			productquantity.push_back("0");
			productquantity.push_back("0");

			productprice.push_back("0");
			productprice.push_back("0");
			productprice.push_back("0");
			productprice.push_back("0");
		}
		cout<<"Product Name \t Product Quantity \t Product Price \n";
		
		for(int i=0;i<productname.size();i++){
			cout<<productname[i]<<"\t \t"<<productquantity[i]<<"\t \t \t"<<productprice[i]<<"\n";
		}	
		cout<<"Enter 1 for Adding Item 2 to continue : ";
		cin>>opt;
		if(opt==1){
			additem();
		}
		cout<<"Enter 1 to modify item and 2 to continue : " ;
		cin>>opt;
		if(opt==1){
			modifyitem();
		}
		cout<<"Enter 1 to go back to login page and 2 to contiue : ";
		cin>>opt;
		if(opt==1){
			login();
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


int modifyitem(){
	string prod,pric,quan;
	int a,b;
	while(1)
    {
    cout<<"what thing you want to modify ";
    cin>>prod;
    cout<<"enter new quantity ";
    cin>>quan;
    cout<<"what is the price of this thing per quintal ";
    cin>>pric;
    for(int i=0;i<productname.size();i++)
    {
        if(productname[i]==prod){
            a=i;
            break;
        }
    }
    productquantity[a]=quan;
    productprice[a]=pric;
    cout<<"you want to modify more price if yes enter 1 if no enter 2 ";
    cin>>b;
    if(b==2)
        break;
    }
    cout<<"Updated list :  \n";
	cout<<"Product Name \t Product Quantity \t Product Price \n";
		
	for(int i=0;i<productname.size();i++){
			cout<<productname[i]<<"\t \t"<<productquantity[i]<<"\t \t \t"<<productprice[i]<<"\n";
		}
}
		
	

