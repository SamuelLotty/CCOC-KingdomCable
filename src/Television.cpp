#include "Television.h"
#include "Service.h"
#include <iostream>

using namespace std;

Television::Television()
{
}
void Television::ShowTeleOptions(){
    //Option to select premium or regular subscription for television
char option;
   active == false;
   ChannelNo = 0;
    if(active == false){
    do{
        cout<<"\n\t\tTelevision Subscription Options\n\n"
            <<"\t1:Regular\n"
            <<"\t2:Premium\n"
            <<"\t3:Exit\n\n"
            <<"Option:\t";

        cin>>option;
        switch(option){
        case'1':{
            premium = false;
            cout << "\n\tThank you, you have selected Regular for your television account!";
            SportChannel = false;
            ChannelNo += 100;
            MonthlyCost += 25;
            active = true;
            GetPassword();
          //CreateAccount();
        }break;
        case'2':{premium = true;
            cout<<"\n\tThank you, you have selected Premium for your television account!";
            SportChannel = true;
            ChannelNo += 200;
            MonthlyCost += 40;
            active = true;
            GetPassword();
            //CreateAccount();
        }break;
        case'3':{
            cout<<"\n\t\tExited!\n";
        }
    }
        }while(option < '1' && option > '3');

    } return;
}
void Television::ShowTeleMainMenu(){
    //printing main menu for television account
char option,activate;
int ChannelNo;
if (active=false){
    cout<<"\n\tYou need to set up an account first!";
    ShowTeleOptions();
}
do{
    cout<<"\n\t\tTelevision Main Menu\n\n"
        <<"\t1:Print account details\n"
        <<"\t2:Lock channels\n"
        <<"\t3:Upgrade\n"
        <<"\t4:Pay Per View\n"
        <<"\t5:Change Passcode\n"
        <<"\t6:Cancel account\n"
        <<"\t7:Exit this menu\n\n"
        <<"Option:";
        cin>>option;
        switch (option){
        case'1': if(premium == true){
            SportChannel = true;
            ChannelNo += 200;
            MonthlyCost += 40;
            active = true;
        cout<<"\n\tAccount = Premium\n"
            <<"\tNumber of channels = "<< ChannelNo
            <<"\n\tSports channel = Yes"
            <<"\n\tMonthly Cost = "<<this->MonthlyCost<<"\n\n";
        }else if (premium == false){
            SportChannel = false;
            ChannelNo += 100;
            MonthlyCost += 25;
            active = true;
        cout<<"\n\tAccount = Regular\n"
            <<"\tNumber of channels = "<< ChannelNo
            <<"\n\tSport channel = No"
            <<"\n\tMonthly Cost = "<<this->MonthlyCost<<"\n\n";
        }
        ;break;
        case'2':if(premium == true){
        cout<<"\n\tWould you like to block channels 180 to 200?\n"
            <<"\nOption:";
        cin>>option;
        if(toupper(option = 'Y')){
            ChannelLock == true;
            cout<<"\n\tThese channels have now been locked!\n\n";
            ChannelLock == true;
        }else{
            cout<<"\n\tThese channels have not been locked!\n\n";
            ChannelLock == false;
        }
        }
        else if(premium = false){
            cout<<"\n\tWould you like to lock channels 90 to 100?\n"
                <<"\tOption:";
                cin>>option;
                if(toupper(option= 'Y')){
                        cout<<"\n\tThese channels have now been locked!\n\n";
                ChannelLock == true;

                }else { cout<<"\n\tThese channels have not been locked!\n\n";
            ChannelLock == false;
            }
                }break;

        case'3': upgradeAccount();break;
        case'4':
           do{
            cout<<"Would you like to pay per view?\n\nOption:";
            cin>>option;
            switch(toupper(option)){
            case'Y':
                PayPerView = true;
                cout<<"\n\tPayPerView has been set!\n";
                ShowTeleMainMenu();break;
            case'N':
                PayPerView = false;
                cout<<"\n\tPayPerView has been set to off!\n";
                ShowTeleMainMenu();
            }
           }while(toupper(option='N'));break;
           case'5':GetPassword();break;
           case'6':cancelAccount();break;
           case'7': cout <<"\n\tYou have exited this menu!\n\n";
            ServiceMenu();
        }
}while(option !=7);
}







