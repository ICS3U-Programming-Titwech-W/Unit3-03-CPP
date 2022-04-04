// Copyright (c) 2021 Titwech wal All rights reserved.
// Created By: Titwech Wal
// Date: April.1. 2022

// the program asks the user for a number
// then tell them if they are correct
// program uses random generator

#include <iostream>
#include <random>

int main() {
    // functions for my number
    const int MY_NUMBER = 3;
    int numGuess;

    // get user input
    std::cout << "Guess the random number: ";
    std::cin >> numGuess;
    std::cout << "";

    // Random number gentator
    int someRandomNumber;

    std::random_device rseed;

    std::mt19937 rgen(rseed());

    std::uniform_int_distribution<int> idist(0, 100);  // [0,100]

    someRandomNumber = idist(rgen);

    std::cout << "" << std::endl;

    // process
    if (numGuess == someRandomNumber) {
        std::cout << "You guessed right!";

    } else {
    std::cout << "You guessed wrong my number is: " \
        << someRandomNumber << "\n";
    }
}
