// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program displays every number from 1000 to 2000

#include <iostream>

int main() {
    // This function displays every number from 1000 to 2000

    int counter = 1000;
    int numbersPerLine = 0;

    std::cout << "" << std::endl;
    std::cout << "This program shows every integer from 1000 to"
          " 2000" << std::endl;
    std::cout << "" << std::endl;

    while (counter <= 2000) {
        if (numbersPerLine == 5) {
            numbersPerLine = 1;
            std::cout << "" << std::endl;  // end line
        } else {
            numbersPerLine = numbersPerLine + 1;
        }
        std::cout << counter << ", ";
        counter = counter + 1;
    }
}
