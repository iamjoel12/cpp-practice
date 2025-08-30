#include <iostream>

    class Person{
        int socialID;
        std::string name;

        public:
        //contructer
        Person(std::string n, int id) : name(n), socialID(id){}
        
        //Getter for name (const is used since it does not modify the object)
        std::string getName() const{
            return name;
        }

        //Setter for name
        void setName(std::string newName){
            name = newName;
        }

        //Validate the social ID
        bool validateID() const{
            return (socialID >= 0 && socialID <= 1001);
        }
    };
int main(){
    Person personOne("James", 503);

    if(!personOne.validateID()){
        std::cout << "Invalid SocialID\n";
    }else{
        std::cout << "Name: " << personOne.getName() << std::endl;
    }

    return 0;
}