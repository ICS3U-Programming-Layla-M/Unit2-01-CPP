// Copyright (c) 2021 Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: April 29, 2021
// This program calculates the area and perimeter of a circle with radius 15 mm.

#include <iostream>
#include <cmath>

int main() {
    std::cout << "For a circle with a radius of 15mm: \n";
    std::cout << "\n";
    std::cout << "Area: " << M_PI * pow(15, 2) << " mm^2.\n";
    std::cout << "Perimeter: " << 2*M_PI*15 << " mm.\n";
}
