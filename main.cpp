// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Dec 2021
// RGB program

#include <iostream>

int main() {
    // main function for rgb program

    // process/output
    for (int red = 0; red < 256; red++) {
        for (int green = 0; green < 256; green++) {
            for (int blue = 0; blue < 256; blue++) {
                std::cout << "RGB(" << red << "," << green << "," << blue;
                std::cout << ")" << std::endl;
            }
        }
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
