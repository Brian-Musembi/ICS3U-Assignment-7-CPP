// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on June 2021
// This program takes a number and returns it's digits

#include <iostream>
#include <iomanip>
#include <string>
#include <list>


int digitList(std::list<int> &listOfDigits, int userInt) {
    // this function returns the digits

    while (userInt) {
        listOfDigits.push_front(userInt % 10);
        userInt = userInt / 10;
    }
    return userInt;
}


int main() {
    // this function gets user input and returns output
    std::cout << "This program takes a given number"
              << " and returns a list of it's digits."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string userInput;
    int userInt;
    std::list<int> listOfDigits;

    // input
    while (true) {
        try {
            std::cout << "Enter any number you want: ";
            std::cin >> userInput;
            userInt = std::stoi(userInput);
            std::cout << "" << std::endl;

            if (userInt > 0) {
                digitList(listOfDigits, userInt);

                std::cout << "The digits that make up the number "
                          << userInput << " are: [";
                for (int digits : listOfDigits) {
                    std::cout << digits << ", ";
                }

                std::cout << "]" << std::endl;

                break;

            } else {
                std::cout << "Please enter a positive integer!"
                          << " Try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Please enter a number! Try again."
                      << std::endl;
        }
    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
