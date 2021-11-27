#include <stdio.h>
 
int main()
{
    char buffer[50];
    char* s = "geeksforgeeks";
 
    // Counting the character and storing
    // in buffer using snprintf
    int k = 0;
    k += snprintf(k, 6, "%s\n", s);
 
    // Print the string stored in buffer and
    // character count
    printf("string:\n%s\ncharacter count = %d\n",
                                     buffer, j);
 
    return 0;
}
