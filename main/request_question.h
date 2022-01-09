
#include "library.h" 
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
 
int request_question(){

    string question; 
    int point = 0;
        
        
        cout << "\nwelcome to quiz\n";
     

        
        cout<< "\nwhats is extension of c++ language\n";
        cin >> question;

        if(question=="cpp")
        {
            point++;
            system("clear");
        }else{
            
            system("clear");
        }

        question;

        cout<< "\nwhats is extension of javascript language\n";
        cin >> question;

        if(question=="js")
        {
            point++;
            system("clear");
        }else{

            system("clear");
            
        }
        

        question;


       cout <<"\n  you haved "; 
       cout << point;
       cout <<"\n Congratulations\n";
    
        return 0;  
    
}






 