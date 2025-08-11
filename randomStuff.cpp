#include <iostream>
#include <string>
#include <vector>

void printVector(std::vector<int>& v){
    for(auto i: v){
        std::cout << i << " " << std::endl;
    }
}
/*my go to for printing vectors (best for STL logic)*/
void printingVectors(std::vector<int> v){
    for(auto it= v.begin(); it!=v.end(); ++it)
    std::cout << *it << std::endl;
}

int main(){

    std::vector<int> vector1 = {2, 5, 6, 7, 9};
    std::vector<int> vector2(5,9);

    //print both vectors

    printingVectors(vector1);
    std::cout << "\n";
    printingVectors(vector2);

    return 0;
}