#include <iostream>


int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;

}



int main(){ 
    int first_number {5};
    int second_number {2};

    std::cout<<"First Number: "<< first_number<<std::endl;
    std::cout<<"second_number: " << second_number<<std::endl;

    int sum = first_number + second_number;
    std::cout<<"Sum:" <<sum<<std::endl;

    



    sum = addNumbers(25,5);
    std::cout<<"SUM: "<<sum <<std::endl;
    

    return 0;

}
