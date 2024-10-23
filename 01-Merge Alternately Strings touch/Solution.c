/**
 * Problem : 1768. Merge Strings Alternately
 * 
 * Created by Enver
 * 
 * Created : 19.10.2024
 * Updated : 19.10.2024
 * 
 * Github : enverbey
 * Discord: enveryilmaz
*/

/* *************** [v] SOLUTION [v] *************** */

char* mergeAlternately(char* word1, char* word2){
  
    char *res = (char *)malloc(strlen(word1) + strlen(word2) + 1);
    if (!res)
        return (NULL);
    char *head = res;
    
    while (*word1 || *word2)
    {
        if (*word1)
            *res++ = *word1++;
        if (*word2)
            *res++ = *word2++;
    }
    *res = 0;
    return (head);
}

/* *************** [^] SOLUTION [^] *************** */

int main()
{
    //abcgragra
    //def
    //adbgragra
}





