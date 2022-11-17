#include <iostream>
#include <string>

int main(){
    // Printing data
    /*
    std::cout <<"Hello C++ :"<<std::endl;

    int age{21};
    std::cout << "Age: "<<age<<std::endl;
    return 0;   

*/

    int age1;
    std::string name;


    std::cout <<"Please write your name and age:"<<std::endl;

    std::cin >>name; 
    std::cin >>age1;

    std::cout << "Hello " << name << " You are " << age1 <<" years old! " <<std::endl;

    return 0;






}