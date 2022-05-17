// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <iostream>
#include <cmath>
#include <random>


int main() {
    // this function uses an array to generate 10 random numbers
    //  from 1-100 and output the mean

    int ListNumber[10];
    int randomNumber;
    int sum = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 99 + 1);
    // [0, 100]


    // process & output
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randomNumber = idist(rgen);
        ListNumber[loopCounter] = randomNumber;
    }

    for (int loopCounter; loopCounter < 10; loopCounter++) {
        std::cout << "The random number is " << ListNumber[loopCounter] << "\n";
        sum += ListNumber[loopCounter];
    }
    std::cout << "" << std::endl;

    float total = sizeof(ListNumber)/sizeof(ListNumber[0]);
    float average = sum / total;

    std::cout << "The average is "
    << average << std::endl;
    std::cout << "\nDone." << std::endl;
}
