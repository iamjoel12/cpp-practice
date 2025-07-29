#include <iostream>

int main(){
    int triangle[10][10];
    int size = sizeof(triangle)/sizeof(triangle[0]);

    for(int i=0; i=10; i++){
        for(int j=0;j=10; j++){
            std::cout << "*" << std::endl;
        }
    }
    return 0;
}