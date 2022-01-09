
#include "library.h"

int request_question();

int main(){
    
    string user ,password,confirm_password,confirm_user ;
      
cout<<Log_; 


    cout<< "creat a new user";

    cin >> user ; 
    system ("clear");

    cout << "criate a new password";
    cin >> password;

    system ("clear");


    while (user != confirm_user)
    {

        cout<< "enter your user";
        cin >> confirm_user; 
        system("clear");
 


         if (user == confirm_user)
    {
        cout<<"correct user";
        system("clear");


    }else{

        cout<<"ERRO 404";
        system("clear");

    }

    }

    while (password!=confirm_password)
    {
        cout<<"enter your password";
        cin >> confirm_password; 
        system("clear");

    if (confirm_password == password)
    {
    cout << "correct password";
    system("clear");


    }else{ 

        cout << "erro 404";
        system ("clear");

    }
    }

    cout << "login complet";
    system("clear"); 

   
    request_question(); 
   
    return 0;
}
    





