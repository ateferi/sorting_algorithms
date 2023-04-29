#include "stdio.h"
/**
 * prints the number of elements in an array
 * 
 *
 * @array: the set of elements in an array
 * @length: The size of the array
 *
 * Return: Nothing
 */

void printarray(array, n)
{
	int length = sizeof(array) / sizeof(array[0]);

 
	for(int i=0; i<length; i++)
 	 {	
		  printf("%d," array[i]);
	  }	
}
