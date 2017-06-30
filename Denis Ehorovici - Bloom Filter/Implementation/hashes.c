/**
* @file hashes.c
* @brief This file contains all the random constant values
* required for the implementations of the hashes defined
* in the hashes header.
*
* @author Denis Ehorovici
*
* @date 06/15/2017
*/

#include "hashes.h"

/// Maximum array length from bloomFilter.h (NR_BITS)
const int totalBits = 1000000;

/// Array of random prime numbers used for uniform distribution and limiting in each hash method
const int prime[7] = {287233, 36277, 388099, 862991, 756253, 437219, 924197};

/// Array of random numbers used for and bit operation in each hash method
const int and[7] = {619067, 892701, 148840, 503544, 948857, 308270, 270728};

/// Array of random numbers used for xor bit operation in each hash method
const int xor[7] = {2981, 17540, 877342, 796551, 11184810, 21453941, 778240};

/**
* This method will return a hash between 0 and 1000000 to the parameter value.
* @author Denis Ehorovici
* @param value The value to be hashed
* @date 06/15/2017
*/
int hash1(int value) {
        /// And operation for possible alteration of value's bits
        value = (value & and[0]);

        /// Xor operation for further possible alteration / randomization
        value = (value ^ xor[0]);

        /// Final operation for making sure the hash method has uniform distribution and value won't exceed maximum array length of Bloom Filter
        value = (value % prime[0]) + (totalBits - prime[0]);

        /// Return the final hashing result
        return value;
}

/**
* This method will return a hash between 0 and 1000000 to the parameter value.
* @author Denis Ehorovici
* @param value The value to be hashed
* @date 06/15/2017
*/
int hash2(int value) {
        /// And operation for possible alteration of value's bits
        value = (value & and[1]);

        /// Xor operation for further possible alteration / randomization
        value = (value ^ xor[1]);

        /// Final operation for making sure the hash method has uniform distribution and value won't exceed maximum array length of Bloom Filter
        value = (value % prime[1]) + (totalBits - prime[1]);

        /// Return the final hashing result
        return value;
}

/**
* This method will return a hash between 0 and 1000000 to the parameter value.
* @author Denis Ehorovici
* @param value The value to be hashed
* @date 06/15/2017
*/
int hash3(int value) {
        /// And operation for possible alteration of value's bits
        value = (value & and[2]);

        /// Xor operation for further possible alteration / randomization
        value = (value ^ xor[2]);

        /// Final operation for making sure the hash method has uniform distribution and value won't exceed maximum array length of Bloom Filter
        value = (value % prime[2]) + (totalBits - prime[2]);

        /// Return the final hashing result
        return value;
}

/**
* This method will return a hash between 0 and 1000000 to the parameter value.
* @author Denis Ehorovici
* @param value The value to be hashed
* @date 06/15/2017
*/
int hash4(int value) {
        /// And operation for possible alteration of value's bits
        value = (value & and[3]);

        /// Xor operation for further possible alteration / randomization
        value = (value ^ xor[3]);

        /// Final operation for making sure the hash method has uniform distribution and value won't exceed maximum array length of Bloom Filter
        value = (value % prime[3]) + (totalBits - prime[3]);

        /// Return the final hashing result
        return value;
}

/**
* This method will return a hash between 0 and 1000000 to the parameter value.
* @author Denis Ehorovici
* @param value The value to be hashed
* @date 06/15/2017
*/
int hash5(int value) {
        /// And operation for possible alteration of value's bits
        value = (value & and[4]);

        /// Xor operation for further possible alteration / randomization
        value = (value ^ xor[4]);

        /// Final operation for making sure the hash method has uniform distribution and value won't exceed maximum array length of Bloom Filter
        value = (value % prime[4]) + (totalBits - prime[4]);

        /// Return the final hashing result
        return value;
}

/**
* This method will return a hash between 0 and 1000000 to the parameter value.
* @author Denis Ehorovici
* @param value The value to be hashed
* @date 06/15/2017
*/
int hash6(int value) {
        /// And operation for possible alteration of value's bits
        value = (value & and[5]);

        /// Xor operation for further possible alteration / randomization
        value = (value ^ xor[5]);

        /// Final operation for making sure the hash method has uniform distribution and value won't exceed maximum array length of Bloom Filter
        value = (value % prime[5]) + (totalBits - prime[5]);

        /// Return the final hashing result
        return value;
}

/**
* This method will return a hash between 0 and 1000000 to the parameter value.
* @author Denis Ehorovici
* @param value The value to be hashed
* @date 06/15/2017
*/
int hash7(int value) {
        /// And operation for possible alteration of value's bits
        value = (value & and[6]);

        /// Xor operation for further possible alteration / randomization
        value = (value ^ xor[6]);

        /// Final operation for making sure the hash method has uniform distribution and value won't exceed maximum array length of Bloom Filter
        value = (value % prime[6]) + (totalBits - prime[6]);

        /// Return the final hashing result
        return value;
}
