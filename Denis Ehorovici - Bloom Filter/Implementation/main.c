/**
* @file main.c
* @brief This file contains all the code regarding
* the Main Menu and memory allocation for the Bloom Filter.
*
* @author Denis Ehorovici
*
* @date 06/15/2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bloomFilter.h"
#include "menuUtilities.h"

/**
* This method is the main function of the program and is responsible for the Main Menu.
* @author Denis Ehorovici
* @date 06/15/2017
*/
int main() {
        /// Introduction
        printf("Project made by student Denis Ehorovici from University of Craiova, Faculty of Automatics and Electronics\n\n");
        printf("Title of the project: Bloom Filter\n\n");
        printf("Press any key for Main Menu: ...");
        getch();

        /// Allocate memory to the Bloom Filter that will be used along the program
        bloomFilter *BF = (bloomFilter*) malloc(sizeof(bloomFilter));

        /// Initialize the Bloom Filter
        bloomFilter_init(BF);
        while (1) {
                /// Clear screen for new menu phase
                system("cls");

                /// Show the Main Menu
                printf("Main Menu:\n\n");
                printf("Press the corresponding number for your option:\n");
                printf("1. Initialize / Reset your bloom filter (set)\n");
                printf("2. Add an element to the current set\n");
                printf("3. Search for an element in the current set\n");
                printf("4. Exit program\n");

                /// Variable "key" holds user's input (single keyboard press)
                int key = getch();

                /// Initialization option
                if (key == (int)'1') {
                        system("cls");

                        printf("Initializing...\n");
                        bloomFilter_init(BF);
                        printf("\nPress any key to return to Main Menu...\n");
                        getch();
                }
                /// Inserting option
                else if (key == (int)'2') {
                        system("cls");

                        printf("Inserting value...\n");
                        printf("Insert an integer value of no more than 8 digits (7 if sign is typed before): ");

                        char str[1005];
                        gets(str);
                        while (strlen(str) < 1 || strlen(str) > 8 || checkNr(str) == 0) {
                                printf("Value has more than 8 digits or is not an integer, please try again: ");
                                gets(str);
                        }

                        int value = buildNr(str);

                        bloomFilter_insert(BF, value);
                        printf("\nPress any key to return to Main Menu...\n");
                        getch();
                }
                /// Search option
                else if (key == (int)'3') {
                        system("cls");

                        printf("Searching value...\n");
                        printf("Search an integer value of no more than 8 digits (7 if sign is typed before): ");

                        char str[1005];
                        gets(str);
                        while (strlen(str) < 1 || strlen(str) > 8 || checkNr(str) == 0) {
                                printf("Value has more than 8 digits or is not an integer, please try again: ");
                                gets(str);
                        }

                        int value = buildNr(str);


                        bloomFilter_search(BF, value);
                        printf("\nPress any key to return to Main Menu...\n");
                        getch();
                }
                /// Exit program option
                else if (key == (int)'4') {
                        break;
                }
                /// Invalid option, get input again
                else {
                        getch();
                }
        }

        /// End program
        return 0;
}
