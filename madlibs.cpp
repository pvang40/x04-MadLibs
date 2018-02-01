//Authors: 
#include <iostream>
#include <string>

int main()
{   std::cout<<"Welcome to my CSCI111 MadLib" <<std::endl;
    std::cout<<"Let's begin by YOU providing answers for this MadLib"<<std::endl; 
    std::cout<< "Ready? Let's start!"<<std::endl;
    
    std::string number; 
    std::cout<<"Give me a number between 1 and 10" <<std::endl;
    std::cin>> number; 
    
    std::string word;
    std::cout<<"Give me a name."<<std::endl; 
    std::cin>> word;       
                                       
    std::string character;
    std::cout<<"Give me a symbol relating to money"<<std::endl; 
    std::cin>> character; 
                        
    std::string decimal;
    std::cout<<"Give me a two digit decimal number"<<std::endl;
    std::cin>> decimal; 
    
    std::cout<<"Thank you for your participation. Let me read you the MadLib now." <<std::endl; 
    std::cout<<"On November " << number << std::endl;
    std::cout<< word << " woke up and saw a notification on his/her phone."<<std::endl; 
    std::cout<< "The bank notified " << word << " saying he/she only has " << character << "0 " << decimal << " in his account. He was so sad he decided to go find a job." <<std::endl; 

    std::cout<< "Thank you for completing this MadLib. Goodbye." <<std::endl; 




  return 0;
}
