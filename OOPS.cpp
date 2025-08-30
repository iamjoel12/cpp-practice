#include <iostream>

    class mathoperations{
        public:

        void add(int a, int b){
            std::cout << "Integer Sum = " << a + b << std::endl;
        }

        void add(double a, double b){
            std::cout << "Float Sum = " << a + b << std::endl;
        }
    };
int main(){
    mathoperations math;

    math.add(10 , 10);
    
    math.add(5.5, 4.5);
}