// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: May 16, 2025
/* This program generates and displays
ten random numbers from 0 to 100 with
arrays and then displays their average. */

/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the random library
for random generators. */
#include <random>

// Runs the main function.
int main() {
    // Set the constant maximum array size to 10.
    const int MAX_ARRAY_SIZE = 10;
    // Set the minimum random number to 0.
    const int MIN_NUM = 0;
    // Set the maximum random number to 100.
    const int MAX_NUM = 100;

    /* Initialize an array of
    integers to be used later. */
    int arrayOfInt[MAX_ARRAY_SIZE];

    /* Use a for loop to loop over the maximum array
    size to generate the ten random numbers. */
    for (int index = 0; index < MAX_ARRAY_SIZE; index++) {
        // Set a random device to construct the engine.
        std::random_device randomDevice;
        /* Use the mersenne twister
        for high-quality randomizing. */
        std::mt19937 randomGen(randomDevice());
        /* Uniformly distribute the possible integers
        over a distance of the minimum number possible, 0,
        to the maximum number possible, 100. */
        std::uniform_int_distribution<int> intDist(MIN_NUM, MAX_NUM);

        // Set the random number to the generated integer.
        int randomNumber = intDist(randomGen);
        // Populate the array by inserting the random number.
        arrayOfInt[index] = randomNumber;

        /* Display information about the random
        number and its current position. */
        std::cout << randomNumber
        << " added to the array at position "
        << index << ".\n";
    }

    // Initialize the sum to 0 to be used later.
    int sum = 0;

    /* Use a for loop to loop over the maximum
    array size to add all the random numbers. */
    for (int index = 0; index < MAX_ARRAY_SIZE; index++) {
        // Add the random number to the sum.
        sum += arrayOfInt[index];
    }

    /* Calculate the average by dividing the
    sum by the maximum array size as floats. */
    float average = static_cast<float>(sum) /
    static_cast<float>(MAX_ARRAY_SIZE);
    // Display the average.
    std::cout << "\nThe average is: " << average << ".\n\n";
}
