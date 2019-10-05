#include <bits/stdc++.h>
#include<conio.h>

using namespace std;


int loginconsumer();
int loginfarmer();
int menuconsumer();
int menufarmer();


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
	int opt;
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

int menuconsumer(){
		
}
	
	
int menufarmer(){
	int a1,b1,y1,e1,u,p1,p2,p3,p4,y2,c1,r;
	printf("YOUR PREVIOUS STOCK REPORT\n");
	printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("QUANTITY OF RICE : 50KG\n");
	printf("QUANTITY OF WHEAT : 100KG\n");
	printf("QUANTITY OF SUGARCANE : 100KG\n");
	printf("QUANTITY OF CORN : 70KG\n");
	printf("Do you want to update your previous stock report\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("enter 0 for yes and enter 1 for no\n");
	scanf("%d",&a1);
	printf("---------------------------------------------------------------------------------------------------------------\n"); 
	if(a1==0)
	{
		printf("QUANTITY OF RICE NOW :");
		scanf("%d",&b1);
		printf("\nQUANTITY OF WHEAT :");
		scanf("%d",&c1);
		printf("\nQUANTITY OF SUGARCANE");
		scanf("%d",&e1);
		printf("\nQUANTITY OF CORN\n");
		scanf("%d",&y1);
		printf("------------------------------------------------------------------------------------------------------------\n");
	}
	printf("you information is successfully updated\n");
	printf("DO YOU WANT TO SEE YOUR UPDATED REPORT ENTER 2 FOR YES AND 1 FOR NO\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	if(r==2)
	{
		printf("QUANTITY OF RICE : %dKG\n",b1);
		printf("QUANTITY OF WHEAT : %dKG\n",c1);
		printf("QUANTITY OF SUGARCANE : %dKG\n",e1);
		printf("QUANTITY OF CORN : %dKG\n",y1);
	}
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("\n");

	printf("DO YOU WANT TO SPECIFY PRICES FOR PER KG OF YOUR PRODUCTS THEN ENTER 3 :");
	scanf("%d",&u);
	printf("\n");
	if(u==3)
	{
	printf("PRICE OF RICE PER KG :");
	scanf("%d",&p1);
	printf("\nPRICE OF WHEAT PER KG :");
	scanf("%d",&p2);
	printf("\nPRICE OF SUGARCANE PER KG :");
	scanf("%d",&p3);
	printf("\n PRICE OF CORN PER KG");
	scanf("%d",&p4);
	printf("\n");

	}
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("DO YOU WANT TO SEE UPDATED PRICES\n");
	printf("IF YES ENTER 1\n");
	scanf("%d",&y2);
	printf("---------------------------------------------------------------------------------------------------------------\n");
	if(y2==1)
	{
		printf("PRICE OF RICE PER KG IS RS  %d\n",p1);
		printf("PRICE OF WHEAT PER KG IS RS  %d\n",p2);
		printf("PRICE OF SUGARCANE PER KG IS RS  %d\n",p3);
		printf("PRICE OF CORN PER KG IS RS  %d\n",p4);
	}
	printf("---------------------------------------------------------------------------------------------------------------\n");

}
