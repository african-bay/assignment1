#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


int main()

{

    std::fstream MyFile("ass2.txt"); // reading the working file
    std::string buffer, FirstName,LastName;// Declaring the string variables
    int age; // Declaring the integer variable
    const float PI = 3.14159265; // Declaring the constant variable
    std::string Name[14];// Declaring a string array to store the name
    float Area[14];// Declaring a float array to store the area calculation

    /*
     Parsing the txt file using a for loop
     */
    for (int i = 0; i < 14; i++) {

        if (MyFile >> FirstName >> LastName >> age) {

            Name[i] = LastName; // Storing each name in the array

            Area[i] = age * age * PI; // This formula is used to calculate the area radius * radius * Pi before storing it into an array

            std::cout << std::setw(10)<< std::left<< Name[i]; // Prompting each name
            std::cout<< std::fixed << std::setprecision(3)  << std::setw(80) << std::setfill(' ' ) <<"\t"<< Area[i] << std::endl; // Prompting each area

        }

    }

}

