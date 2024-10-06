#include <iostream>
#include <vector>

void displayValues(std::vector<int> inputVector){

    for (int i=0; i<inputVector.size(); i++){
        std::cout<<inputVector[i]<<std::endl;
    }

}

std::vector<int> subVectorInt(std::vector<int> inputVector, int startIndex, int endIndex){

    std::vector<int> newVector;

    for (int i=startIndex; i<=endIndex; i++){
        newVector.push_back(inputVector[i]);
    }

    return newVector;

}

int main(){
    std::vector<int> vector1 = {1,2,3,4,5,6};

    displayValues(vector1);

    std::cout<<std::endl;

    std::vector<int> subVector = subVectorInt(vector1, 1, 4);

    displayValues(subVector);
    
    
}

//g++ -std=c++11 -o array arrayVectorPractice.cpp