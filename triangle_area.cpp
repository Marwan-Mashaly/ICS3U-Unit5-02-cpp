// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program calculates the area of a triangle
#include <iostream>

void CalculateArea(float baseOfTriangle, float heightOfTriangle) {
    // This function calculates the area of the triangle
    float area;
    area = (baseOfTriangle*heightOfTriangle) / 2;
    std::cout << "area of triangle = " << area << std::endl;
}


main() {
    // This function gets Input from user and calls the calculate area function
    std::string base;
    std::string height;
    float baseCheck;
    float heightCheck;
    // Input
    while (true) {
        std::cout << "Enter the base of the triangle: ";
        std::cin >> base;
        std::cout << "Enter the height of the triangle: ";
        std::cin >> height;
        std::cout << "" << std::endl;
        // Procces & Output
        try {
            baseCheck = std::stoi(base);
            heightCheck = std::stoi(height);
            std::cout << "" << std::endl;

            CalculateArea(baseCheck, heightCheck);
            break;
        } catch (std::invalid_argument) {
        std::cout << "Invalid Number";
        std::cout << " " << std::endl;
       }
    }
}
