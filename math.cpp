// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program with proper style

#include <iostream>

int main() {
    // This function calculates the circumference of a circle
    const float TAU = 6.28;
    int radius;
    float circumference;

    // input
    std::cout << "Enter the length of the radius: ";
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << std::endl;
    std::cout << "Circumference is " << circumference << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
