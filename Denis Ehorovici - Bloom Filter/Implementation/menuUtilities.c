/**
* @file bloomFilter.c
* @brief This file contains all implementations for functions
* defined in the menuUtilities header.
*
* @author Denis Ehorovici
*
* @date 06/16/2017
*/

#include "menuUtilities.h"

/**
* This method will check if a string is an integer number and returns 1 if check passed, else returns 0.
* @author Denis Ehorovici
* @param str Pointer to the string
* @date 06/15/2017
*/
int checkNr(char *str) {
        /// Ignore if string starts with plus or minus sign
        if (*str == '-' || *str == '+') {
                str++;
        }

        /// Check if string is only made of plus or minus sign, in which case the string is invalid
        if (*str == '\0') {
                return 0;
        }

        /// Parse the whole string and check if there exists any character that is not a digit and return 0 if so, else return 1
        while (*str != '\0') {
                if ('0' > *str || *str > '9') {
                        return 0;
                }
                str++;
        }
        return 1;
}

/**
* This method will convert the string str to an integer and return it.
* @author Denis Ehorovici
* @param str Pointer to the string
* @date 06/15/2017
*/
int buildNr(char *str) {
        /// Maintain a reminder for the sign of our value (default = 0 which means positive number)
        int negative = 0;

        /// Variable for number built, defaults to 0
        int value = 0;

        /// Check sign and change "negative" variable if necessary
        if (*str == '-') {
                negative = 1;
                str++;
        }
        else if (*str == '+') {
                str++;
        }

        /// Parse the string and build the number
        while (*str != '\0') {
                value = value * 10 + (*str) - '0';
                str++;
        }

        /// Check if sign needs to be changed and change if necessary
        if (negative == 1) {
                value = -value;
        }

        /// Return number built
        return value;
}
