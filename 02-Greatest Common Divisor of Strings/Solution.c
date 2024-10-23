/**
 * Problem : 1071. Greatest Common Divisor of Strings
 * 
 * Created by Enver
 * 
 * Created : 21.10.2024
 * Updated : 21.10.2024
 * 
 * Github : enverbey
 * Discord: enveryilmaz
*/
/* ****************** [v] INCLUDES [v] ****************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* ****************** [^] INCLUDES [^] ****************** */

/* ****************** [v] SOLUTION [v] ****************** */
char* gcdOfStrings(char* str1, char* str2) {
    char *tmp1 = str1;
    char *tmp2 = str2;
    while (*tmp1++ == *tmp2++)
    {
    	if (*tmp1 == '\0' && *tmp2 == '\0')
    	{
            return (str1);
    	}
    	if (*tmp1 == '\0')
    	{
    		tmp1 = str1;
    		str2 = tmp2;
    	}
    	if (*tmp2 == '\0')
    	{
    		tmp2 = str2;
    		str1 = tmp1;
    	}
    }
    return ("");
    
}
/* ****************** [^] SOLUTION [^] ****************** */

/* ****************** [v] RESULTS [v] ******************* */
/**
 * Runtime
 * 0 ms Beats 100.00%
 * 
 * Memory
 * 7.95 MB Beats 75.14%
 */
/* ****************** [^] RESULTS [^] ******************* */

/* ******************* [v] MAIN [v] ********************* */
int main()
{
	printf("%s\n",gcdOfStrings("TAUXXTAUXXTAUXXTAUXXTAUXX",\
        "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX"));
}
/* ******************* [^] MAIN [^] ********************* */

/* **************** [v] STEP BY STEP [v] **************** */
//Step by step, how my solution is working

//STR1 TAUXXTAUXXTAUXXTAUXXTAUXX 
//STR2 TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX

//STR1 TAUXXTAUXXTAUXXTAUXXTAUXX
//STR2 TAUXXTAUXXTAUXXTAUXX

//STR1 TAUXX
//STR2 TAUXXTAUXXTAUXXTAUXX

//STR1 TAUXX
//STR2 TAUXXTAUXXTAUXX

//STR1 TAUXX
//STR2 TAUXXTAUXX

//STR1 TAUXX
//STR2 TAUXX

// return STR1
/* **************** [^] STEP BY STEP [^] **************** */
