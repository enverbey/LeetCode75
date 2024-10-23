/**
 * Problem : 1431. Kids With the Greatest Number of Candies
 * 
 * Created by Enver
 * 
 * Created : 22.10.2024
 * Updated : 22.10.2024
 * 
 * Github : enverbey
 * Discord: enveryilmaz
*/
/* ****************** [v] INCLUDES [v] ****************** */
#include <stdlib.h> /*
#   void *malloc(size_t);
#        */
#include <stdbool.h> /*
# define bool
#        */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* ****************** [^] INCLUDES [^] ****************** */

/* ****************** [v] SOLUTION [v] ****************** */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int index = 0;
    int greatestNumber = 0;
    //Step1: En büyük sayının tepiti
    while (index < candiesSize)
    {
        if (candies[index] > greatestNumber)
        {
            greatestNumber = candies[index];
        }
        index++;
    }
    
    index = 0;
    greatestNumber -= extraCandies;
   	bool *res = (bool *)malloc(candiesSize * sizeof(bool)); // +1 ??
    if (!res)
    {
        return (res);
        *returnSize = 0;
    }
    *returnSize = candiesSize;
    while (index < candiesSize)
    {
        if (candies[index] >= greatestNumber)
            res[index] = 1;
        else
            res[index] = 0;
        index++;
    }
    return (res);
}

//1. En büyük sayıyı tespit et.
//2. Bir döngüde, tek tek çocukların şeker sayısı >? (enBüyükSayı - extraCandies)

/* ****************** [^] SOLUTION [^] ****************** */

/* ****************** [v] RESULTS [v] ******************* */
/**
 * Runtime
 * 0 ms Beats 100.00%
 * 
 * Memory
 * 9.56 MB Beats 60.44%
 */
/* ****************** [^] RESULTS [^] ******************* */

/* ******************* [v] MAIN [v] ********************* */
int main()
{
	int  candies[5] = {2,3,5,1,3};
	int	 candiesSize = 5;
	int  extraCandies = 3;
	int* returnSize;
	
	bool *b = kidsWithCandies(candies, \
							  candiesSize, \
							  extraCandies, \
							  returnSize);
	printf("[");
	for (int i = 0; i<*returnSize; i++)
	{
		printf("%s",(b[i]?"true" : "false"));
		if (i+1 != *returnSize)
			printf(",");
	}
	printf("]\n");
}
/* ******************* [^] MAIN [^] ********************* */