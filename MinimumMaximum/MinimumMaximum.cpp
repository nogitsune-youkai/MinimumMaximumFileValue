
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <conio.h>


int main()
{
    std::string path;
    std::cout << "Enter a path to the file: ";
    std::cin >> path;
    
    int valuesForCompare = {}; // this variable is used as a temporary storage for our values from a file, later we will write all values from that variable into our vector
    std::vector<int> vectorValues; //vector in which we will write all values from our "valuesForCompare" variable for comparison
    std::ifstream file;  
    file.open(path); // paste your file name here
    if (file.is_open()) {
        while(file >> valuesForCompare)
        {           
            vectorValues.push_back(valuesForCompare); // initializing vector with values
        }
    }
    std::cout << "Minimum value is: " << *min_element(vectorValues.begin(), vectorValues.end()) << std::endl; // find minimum value
    std::cout << "Maximum value is: " << *max_element(vectorValues.begin(), vectorValues.end()) << std::endl; // find maximum value

    file.close();
    
}
    