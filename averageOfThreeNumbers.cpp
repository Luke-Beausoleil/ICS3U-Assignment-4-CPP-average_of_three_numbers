// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program averages three inputted numbers from 1 - 100

#include <iostream>
#include <string>

int main() {
    // this function finds the average

    // constants
    const int MAX = 100;
    const int MIN = 0;

    // variables
    std::string firstNumberAsString;
    std::string secondNumberAsString;
    std::string thirdNumberAsString;
    float first;
    float second;
    float third;

    // input
    std::cout << "Enter the first number: ";
    std::cin >> firstNumberAsString;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumberAsString;
    std::cout << "Enter the third number: ";
    std::cin >> thirdNumberAsString;

    // process & output
    try {
        float first = std::stof(firstNumberAsString);
        float second = std::stof(secondNumberAsString);
        float third = std::stod(thirdNumberAsString);
        if (first <= MAX && first >= MIN) {
            if (second <= MAX && second >= MIN) {
                if (third <= MAX && second >= MIN) {
                    std::cout << "\nThe average is " <<
                          (first + second + third) / 3 << std::endl;
                } else {
                    std::cout << "\nInvalid. Enter numbers from 1 - 100"
                          << std::endl;
                }
            } else {
                std::cout << "\nInvalid. Enter numbers from 1 - 100"
                      << std::endl;
            }
        } else {
            std::cout << "\nInvalid. Enter numbers from 1 - 100" << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << "\nInvalid. Enter numbers from 1 - 100" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
