/*
 * Roll a six-sided die 60,000,000 times
 * To compile:
 * $ gcc fig06_09.c -o fig06_09 -std=c11
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(void)
{
	unsigned int frequency[SIZE] = {0}; // clear count

	srand(time(NULL)); // seed random number generator

	// roll die 60,000,000 times
	for (unsigned int roll = 1; roll <= 60000000; ++roll) {
		size_t face = rand() % 6 + 1;
		++frequency[face];
	}

	printf("%s%17s\n", "Face", "Frequency");

	// output frequency elements 1-6 in tabular format
	for (size_t face = 1; face < SIZE; ++face) {
		printf("%4d%17d\n", face, frequency[face]);
	}
}