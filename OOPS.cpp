#include <iostream>

class Flowers{
    public:
    std::string name;
    int numberOfPetals = 0;

    void grow(){
        std::cout << "Number of petals is now " << numberOfPetals+2 << std::endl;
    }
    void newCharacteristics(){
        std::cout << "New characteristics are assigned";
    }
    void color(){
        std::cout << "The color is ";
    }

};

int main(){
    Flowers Dandilion;

    Dandilion.grow();  
}