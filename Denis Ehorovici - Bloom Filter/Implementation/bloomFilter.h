/**
* @file bloomFilter.h
* @brief This header file contains the definition
* of a Bloom Filter with its basic utilities: Initialization, Insert, Search.
*
* @author Denis Ehorovici
*
* @date 06/15/2017
*/

#ifndef H_BLOOMFILTER
#define H_BLOOMFILTER

/// Maximum vector length of the bit vector for the Bloom Filter
#define NR_BITS 1000000

/// Structure definition for Bloom Filter
typedef struct bloomFilter {
        /// Unsigned short integer because we only need values of 0 and 1 so we use as little memory as possible (around 2 bytes * NR_BITS)
        unsigned short int bloomVector[NR_BITS];
        /// Unsigned integer for positive number of elements in the Bloom Filter
        unsigned int nr_elements;
} bloomFilter;

/// Definition for initialization of Bloom Filter
void bloomFilter_init(bloomFilter *BF);

/// Definition for insertion in Bloom Filter
void bloomFilter_insert(bloomFilter *BF, int value);

/// Definition for searching in Bloom Filter
void bloomFilter_search(bloomFilter *BF, int value);

#endif // H_BLOOMFILTER
