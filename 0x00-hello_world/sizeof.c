#include <stdio.h>                                                                                                        

/**                                                                                                                       
 * Description: main - List size of various datatypes
 * Return: Return 0 after successful execution
*/

int main(void)                                                                                                            

{                                                                                                                         

	printf("Size of Char: %ld byte(s)\n", sizeof(char));                                                              
        printf("Size of int: %ld byte(s)\n", sizeof(int));                                                                
        printf("Size of long int: %ld byte(s)\n", sizeof(long int));                                                      
        printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));                                            
	printf("Size of float: %ld byte(s)\n", sizeof(float));                                                            
	
	return (0);
}