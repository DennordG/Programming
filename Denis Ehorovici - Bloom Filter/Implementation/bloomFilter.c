/**
* @file bloomFilter.c
* @brief This file contains all constant initializations
* and implementations for functions defined in the bloomFilter header.
*
* @author Denis Ehorovici
*
* @date 06/15/2017
*/

#include "bloomFilter.h"
#include "hashes.h"
#include <stdio.h>

/// Constant number representing maximum number of elements
const int nrMax = 100000;

/**
* This method will initialize / reset the Bloom Filter transmitted as parameter.
* @author Denis Ehorovici
* @param BF Pointer to bloomFilter structure
* @date 06/15/2017
*/
void bloomFilter_init(bloomFilter *BF) {
        /// Initialize / Reset the number of elements to 0
        BF->nr_elements = 0;

        /// Go through the whole array and set all values to 0
        int i;
        for (i = 0; i < NR_BITS; i++) {
                BF->bloomVector[i] = 0;
        }

        /// Signal success at the end of initialization
        printf("Set has been initialized successfully!\n");
}

/**
* This method will insert an element into the Bloom Filter transmitted as parameter.
* @author Denis Ehorovici
* @param BF Pointer to bloomFilter structure
* @param value The value to be inserted
* @date 06/15/2017
*/
void bloomFilter_insert(bloomFilter *BF, int value) {
        /// Check if the Bloom Filter is already at maximum capacity and display an error message if so
        if (BF->nr_elements >= nrMax) {
                printf("Error! Can't add number... (maximum set size is %d)\n", nrMax);
                return;
        }

        /// Go through each hash function and mark the position each one returns as 1 in the Bloom Filter's array.
        int position = hash1(value);
        BF->bloomVector[position] = 1;

        position = hash2(value);
        BF->bloomVector[position] = 1;

        position = hash3(value);
        BF->bloomVector[position] = 1;

        position = hash4(value);
        BF->bloomVector[position] = 1;

        position = hash5(value);
        BF->bloomVector[position] = 1;

        position = hash6(value);
        BF->bloomVector[position] = 1;

        position = hash7(value);
        BF->bloomVector[position] = 1;

        /// Increment the number of elements by 1
        BF->nr_elements++;

        /// Signal success at the end of insertion
        printf("Value inserted!\n");
}

/**
* This method will search for an element in the Bloom Filter transmitted as parameter.
* @author Denis Ehorovici
* @param BF Pointer to bloomFilter structure
* @param value The value to be searched for
* @date 06/15/2017
*/
void bloomFilter_search(bloomFilter *BF, int value) {
        /// Go through each hash function and check if the position each one returns is 0 in the Bloom Filter's array. If yes, display the "not found" message and exit function.
        int position = hash1(value);
        if (BF->bloomVector[position] == 0) {
                printf("Value searched is surely not in the set!\n");
                return;
        }

        position = hash2(value);
        if (BF->bloomVector[position] == 0) {
                printf("Value searched is surely not in the set!\n");
                return;
        }

        position = hash3(value);
        if (BF->bloomVector[position] == 0) {
                printf("Value searched is surely not in the set!\n");
                return;
        }

        position = hash4(value);
        if (BF->bloomVector[position] == 0) {
                printf("Value searched is surely not in the set!\n");
                return;
        }

        position = hash5(value);
        if (BF->bloomVector[position] == 0) {
                printf("Value searched is surely not in the set!\n");
                return;
        }

        position = hash6(value);
        if (BF->bloomVector[position] == 0) {
                printf("Value searched is surely not in the set!\n");
                return;
        }

        position = hash7(value);
        if (BF->bloomVector[position] == 0) {
                printf("Value searched is surely not in the set!\n");
                return;
        }

        /// If function reached this far, then the value might be in the Bloom Filter! Display the "found" message and exit program.
        printf("Value searched might be in the set!\n");
}
