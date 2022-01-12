#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#define  Log_ "\n"

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <new> 
using namespace std;
 
 


struct quest{
    
    string request_new_writer;   


};



  




int request_question(){

    string question; 
    int point = 0;
     
        quest *request_question = new quest [11]; 
        request_question[0].request_new_writer =" welcome to quiz";
        request_question[1].request_new_writer =" whats extension of c++ language ?";
        request_question[2].request_new_writer =" whats extencion of javascript language ?";
        request_question[3].request_new_writer =" correct aswers ";
        request_question[4].request_new_writer =" welcome to quiz";
        request_question[5].request_new_writer =" welcome to quiz";
        request_question[6].request_new_writer =" welcome to quiz";
        request_question[10].request_new_writer =" congratulations";


        
        
        cout << Log_<<request_question[0].request_new_writer<<Log_;
     

        
         cout << Log_<<request_question[1].request_new_writer<<Log_;
        cin >> question;

        if(question=="cpp")
        {
            point++;
            system("clear");
        }else{
            
            system("clear");
        }

        question;

        cout << Log_<<request_question[2].request_new_writer<<Log_;
        cin >> question;

        if(question=="js")
        {
            point++;
            system("clear");
        }else{

            system("clear");
            
        }
        

        question;


        cout << Log_<<request_question[3].request_new_writer<<Log_;
       cout << point;
       cout << Log_<<request_question[10].request_new_writer<<Log_;
        return 0;  
    
}


int star_user (){


     string user ,password,confirm_password,confirm_user ;
      


        quest *request_writer =  new quest [10];
        request_writer[0].request_new_writer= "creat new user";
        request_writer[1].request_new_writer= "creat new password";
        request_writer[2].request_new_writer= "confirm your user";
        request_writer[3].request_new_writer= "correct user";
        request_writer[4].request_new_writer= "Erro404(user not found)";
        request_writer[5].request_new_writer= "confirm your password";
        request_writer[6].request_new_writer= "Erro404(password not found)";
        request_writer[7].request_new_writer= "complete login";


    cout<<Log_<<request_writer[0].request_new_writer<<Log_;

    cin >> user ; 
    system ("clear");

    cout <<Log_<< request_writer[1].request_new_writer<<Log_;
    cin >> password;

    system ("clear");


    while (user != confirm_user)
    {

        cout<<Log_<< request_writer[2].request_new_writer<<Log_;
        cin >> confirm_user; 
        system("clear");
 


         if (user == confirm_user)
    {
        cout<<Log_<<request_writer[3].request_new_writer<<Log_;
        system("clear");


    }else{

        cout<<Log_<<request_writer[4].request_new_writer;
        system("clear");

    }

    }

    while (password!=confirm_password)
    {
        cout<<Log_<<request_writer[5].request_new_writer<<Log_;
        cin >> confirm_password; 
        system("clear");

    if (confirm_password == password)
    {
    cout<<Log_ << "correct password"<<Log_;
    system("clear");


    }else{ 

        cout<<Log_ <<request_writer[6].request_new_writer<<Log_;
        system ("clear");

    }
    }

    cout<<Log_ << request_writer[7].request_new_writer <<Log_;
    system("clear"); 

    return 0; 
}



#endif
