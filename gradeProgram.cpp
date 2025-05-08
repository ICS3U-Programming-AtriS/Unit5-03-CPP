// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: May 8, 2025
// Program that will take a grade level from the user,
// find out the average mark for that level,
// and display the result to the user.

#include <iostream>
#include <string>
#include <cstdio>

// Returns the average percentage mark, given the grade level
// According to https://en.wikipedia.org/wiki/Academic_grading_in_Canada#Ontario
int CalcMark(std::string level) {
    // Initialize a variable to hold the mark
    int mark;
    // Match level with mark
    if (level == "4+") {
        mark = 98;
    } else if (level == "4") {
        mark = 91;
    } else if (level == "4-") {
        mark = 83;
    } else if (level == "3+") {
        mark = 78;
    } else if (level == "3") {
        mark = 75;
    } else if (level == "3-") {
        mark = 71;
    } else if (level == "2+") {
        mark = 68;
    } else if (level == "2") {
        mark = 65;
    } else if (level == "2-") {
        mark = 61;
    } else if (level == "1+") {
        mark = 58;
    } else if (level == "1") {
        mark = 55;
    } else if (level == "1-") {
        mark = 51;
    } else /* DEFAULT CASE [INVALID INPUT] */ {
        mark = -1;
    }
    // RETURN mark
    return mark;
}

int main() {
    // Get user's grade level
    std::string userLevel;
    printf("Enter the level that will be converted to a mark percentage: ");
    std::getline(std::cin, userLevel);
    // Set user's mark percentage
    int userMark = CalcMark(userLevel);
    // Check if the user's mark is -1 [INVALID INPUT]
    if (userMark == -1) {
        // Tell the user that they entered invalid input
        printf("%s is not a valid level.\n", userLevel.c_str());
    } else /* OTHERWISE */ {
        // Display the user's mark
        printf("Level %s has a middle percentage of ", userLevel.c_str());
        printf("%i%\n", userMark);
    }
}
