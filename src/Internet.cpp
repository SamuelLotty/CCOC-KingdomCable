#include "Internet.h"
#include "Service.h"
#include <iostream>

using namespace std;

Internet::Internet()
{


}
void Internet::ShowInternetOptions(){
    //option to select regular or premium internet
   char option;
    if(active == false){
    do{
        cout<<"\n\t\tInternet Subscription Options\n\n"
            <<"\t1:Regular\n"
            <<"\t2:Premium\n"
            <<"\t3:Exit\n\n"
            <<"Option:\t";

        cin>>option;
        switch(option){
        case'1':{
                premium = false;
                DSpeed += 155.6;
                USpeed += 12.97;
                this->MonthlyCost += 35;
                active = true;
            cout << "\n\tThank you, you have selected Regular!";
            GetPassword();break;
        }
        case'2':{premium = true;
                DSpeed += 323.9;
                USpeed += 13.8;
                this->MonthlyCost += 50;
                active = true;
            cout<<"\n\tThank you, you have selected Premium!";
            GetPassword();break;
        }
        case'3':{
            cout<<"\n\t\tExited!\n";
        }
    }
        }while(option < '1' && option > '3');

    }
}

Internet::ShowInternetMainMenu(){
    //printing main menu for internet account
    char option,activate;

    if(active=false){
        cout<<"\n\tYou need to set up an account before you view this menu!";
    }
do{
        cout<<"\n\tInternet Account Options\n"
        <<"\t1:Print account details\n"
        <<"\t2:Kids restrictions\n"
        <<"\t3:Upgrade\n"
        <<"\t4:Change passcode\n"
        <<"\t5:Cancel account\n"
        <<"\t6:Exit\n\n"
        <<"Option:\t";
    cin>>option;
    switch(option){
    case'1':if(Restrictions ==true) {
        cout<<"\n\tRestrictions: On\n";
    }else if (Restrictions == false){
        cout <<"\n\tRestrictions: Off\n";
    }
    if(premium == true){
                DSpeed += 323.9;
                USpeed += 13.8;
                this->MonthlyCost += 50;
    cout<<"\tThis account is premium!\n";
    }else if (premium == false){
                DSpeed += 155.6;
                USpeed += 12.97;
                this->MonthlyCost += 35;
    cout<<"\tThis account is regular!\n";
    }
    cout<<"\tMonthly cost: " <<this->MonthlyCost
        <<"\n\tDownload Speed: "<< DSpeed
        <<"\n\tUpload Speed: "<<USpeed<<"\n\n";


        ;break;
    case'2'://if(Restrictions==true){
            cout<<"\n\tRestriction is on.Would you like to change it? Y or N\n";
            cin>>option;
            switch(toupper(option)){
            case'Y':
                cout<<"\n\tKids restrictions has been set to on!\n";
                Restrictions = true;break;

            case'N':
                cout<<"\n\tKids restrictions has been set to off!\n";
                Restrictions = false;break;
                return Restrictions;
           // }
    }
    break;
    case'3': upgradeAccount();break;
    case'4': GetPassword();break;
    case'5': cancelAccount();break;
        case'6':cout<<"\n\tYou have exited this menu!\n";

    }
}while(option!='6');
}

