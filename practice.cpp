#include <iostream>

//typedef std::string text_t; (note: the typedef keyword can be used interchangebly with the using keyword)
//using keyword is more suited for templates
using text_t = std::string;

namespace bigCompany{
    text_t companyName = "Starbucks";
}

int main(){
    /*Variables*/
    int headCount = 0;
    int seatsAvailable = 12;
    const text_t companyName = "Jojo's Cafe";
    
    std::cout << "Enter the number of persons present: " << '\n';
    std::cin >> headCount;
    if(headCount > seatsAvailable){
        std::cout << "Sorry there are no more seats available. Please come back later.";
        return 0;
    }else{
       seatsAvailable -= headCount; 
    }
    
    std::cout << "Welcome to " << bigCompany::companyName << " we have " << seatsAvailable << " seats left.";

    return 0;
    
}