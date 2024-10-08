#include <iostream>
#include <string>

int main(){
    char cString[] = "this is a c style string";

    int i=0;
    while (cString[i] != '\0'){
        std::cout<<cString[i];
        i++;
    }
    std::cout<<std::endl;

    std::string stringString = "this is a string type string";
    for (int i=0; i<stringString.size(); i++){
        std::cout<<stringString[i];
    }
    std::cout<<std::endl;

    std::cout<<stringString.substr(0, 16);

    std::cout<<stringString.length();
    std::cout<<std::endl;

    std::cout<<cString;






}