/**
 * Problem : 605. Can Place Flowers
 * 
 * Created by enver
 * 
 * Created : 22.10.2024
 * Updated : 23.10.2024
 * 
 * Github : enverbey
 * Discord: enveryilmaz
*/
/* ****************** [v] INCLUDES [v] ****************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
#include <stdbool.h> /*
# define bool
#        */
/* ****************** [^] INCLUDES [^] ****************** */

/* ****************** [v] SOLUTION [v] ****************** */
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n)
{
    char c = 1;
    while (flowerbedSize-- && n)
    {
        if (*flowerbed++ == 0)
        {
            c++;
        }
        else
            c = 0;
        
        if (c == 3)
        {
            c = 1;
            n--;
        }
    }
    if (n == 0 || (n == 1 && c == 2))
        return (1);
    return (0);
}
/* ****************** [^] SOLUTION [^] ****************** */

/* ****************** [v] RESULTS [v] ******************* */
/**
 * Runtime
 * 0 ms Beats 100.00%
 * 
 * Memory
 * 9.27 MB Beats 48.19%
 */
/* ****************** [^] RESULTS [^] ******************* */

/* ******************* [v] MAIN [v] ********************* */
int main()
{
	
	int i[5] = {1, 0, 1, 0, 0};
	printf("%d", canPlaceFlowers(i, 5, 2));
}
/* ******************* [^] MAIN [^] ********************* */









