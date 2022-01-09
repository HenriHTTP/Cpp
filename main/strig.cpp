
#include "library.h"

int request_question();

int main(){
    
    string user ,password,confirm_password,confirm_user ;
      



    cout<<Log_<< "creat a new user"<<Log_;

    cin >> user ; 
    system ("clear");

    cout <<Log_<< "criate a new password"<<Log_;
    cin >> password;

    system ("clear");


    while (user != confirm_user)
    {

        cout<<Log_<< "enter your user"<<Log_;
        cin >> confirm_user; 
        system("clear");
 


         if (user == confirm_user)
    {
        cout<<Log_<<"correct user"<<Log_;
        system("clear");


    }else{

        cout<<"ERRO 404";
        system("clear");

    }

    }

    while (password!=confirm_password)
    {
        cout<<Log_<<"enter your password"<<Log_;
        cin >> confirm_password; 
        system("clear");

    if (confirm_password == password)
    {
    cout<<Log_ << "correct password"<<Log_;
    system("clear");


    }else{ 

        cout<<Log_ << "erro 404"<<Log_;
        system ("clear");

    }
    }

    cout<<Log_ << "login complet"<<Log_;
    system("clear"); 

   
    request_question(); 
   
    return 0;
}
    





