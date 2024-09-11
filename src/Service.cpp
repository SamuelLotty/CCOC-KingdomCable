#include "Service.h"
#include "Television.h"
#include "Internet.h"
#include <iostream>
#include <ctype.h>


using namespace std;

Service::Service()
{

}

void Service::printIntTeleOptions(){
char option;
do{
    cout<<"\n\t\tTelevision and Internet Subscription Options\n\n"
        <<"\t1:Regular\n"
        <<"\t2:Premium\n"
        <<"\t3:Exit\n\n"
        <<"Option:\t";

        cin>>option;
        switch(option){
    case'1':premium == false;
            ServiceType = "Reuglar";
            cout<<"\n\tThank you, you have selected regular!";
            GetPassword();break;
            //CreateAccount();break;
    case'2':premium == true;
        //set download speeds and channel variables
            ServiceType == "Premium";
            cout<<"\n\tThank you, you have selected premium!";
            GetPassword();break;
            //CreateAccount();break;
    case'3':cout<<"\n\t\tExited!\n";
    // ShowMenu();
    }
}while(option!='4');
}
void Service::ServiceMenu(){
    char option;
    Internet inter;
    Television TV;
    do{
        cout<<"\n\tKingdom Cable Service Menu!\n\n"
            <<"\t1:Internet Account\n"
            <<"\t2:Television Account\n"
            <<"\t3:Exit\n"
            <<"Option:";
        cin>>option;
        switch(option){
    case'1':inter.ShowInternetMainMenu();break;
    case'2':TV.ShowTeleMainMenu();break;
    case'3':cout<<"\n\tYou have exited back to the setup menu!\n";

        }
}while(option!='3');


}
/*Service::CreateAccount(){
    char option;
    do{
cout<<"\n\tWould you like to create an account?\n\n";
cin>>option;
if(toupper(option=='y' || option== 'N')){
    active==true;
    GetPassword();
}

    }while (toupper (option=='N'));
    return active;
}*/

 Service::GetPassword()
{//Creating password
    do
    {
        cout <<"\n\tEnter a new password for this account\n";
        cin >> password;
        if(password <=999 || password >=9999)
            cout<<"\n\tPlease enter a 4 digit number.";
        else
        {
            cout <<"\n\tPlease re-enter your password\n";
            cin >>confirmpass;
            if(confirmpass == password)
            {
                cout<<"\n\tThese passwords match! Your account has been set to active!\n";
                active == true;
                ServiceMenu();
            }
            if(confirmpass !=password)
            {
                cout<<"\n\tThese passwords do not match! Please try again!";
            }
        }
    }
    while(password <= 999 || password >= 9999);
return password;
}
void Service::SetPassword(unsigned short password){
    this->password==password;
}

void Service::SetActive(bool active){
this->active==active;
}
void Service::SetPremium(bool premium){
this->premium=premium;
}


void Service::cancelAccount(){
char option;
do{
        cout<<"\n\tThis account is active would you like to deactivate it? Y or N\n"
        <<"\nOption:";
        cin>>option;
        switch(toupper(option)){
        case'Y':active=false;
        cout<<"\n\tYou account has now been canceled!\n\n";
        ServiceMenu();break;
        case'N':cout<<"\n\tYou account has not been deactivated!\n";break;
        }


}while(toupper(option=='N'));
}
void Service::upgradeAccount(){
    char option;
    do{
    if(premium == true){
            cout<<"\n\tYou cannot upgrade you account as you already have premium!\n";
              void   ShowInternetMainMenu();
    }
                else{
                    cout<<"\n\tWould you like to upgrade your acccount? 1 for yes and 2 for no\n";

                    cin>>option;
                    switch(option){
                    case'1':premium=true;
                            cout<<"\n\tYou have upgrade your account to premium!\n";
                            void ShowInternetMainMenu();break;
                    case'2':cout<<"\n\tYou have not upgraded you account!\n";
                           void  ShowInternetMainMenu();break;
                    }
                }
                }while(option=='2');
}


