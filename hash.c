/*
 * Filename: hash.c
 * Author: HanJie Zhan
 * UserId: cs30s120cg
 * Date:07/05/2020
 * Sources of help: none.
 */
 
#include <stdio.h>
#include <string.h>
#include "pa1.h"
#define INCREMENT 2

/*Function Name: hash.c
 *Function Prototype:unsigned int hash (char * str);
 *Description: This function would get the str and hash the value.
 *Parameters: char * str would pass in function for hash.
 *Side Effects: None
 *Error Conditions: None
 *return value: return hashVal for string
 */
unsigned int hash (char * str){	 
	unsigned int hashVal = HASH_START_VAL;//variable store the default
					      // value

	//to check every even index
	for(int i = 0; i < strlen(str); i = i + INCREMENT) { 
		hashVal=(hashVal*HASH_PRIME)+str[i];//sum every hash value
	}

	//to check every odd index
	for(int i = 1; i < strlen(str); i = i + INCREMENT) { 
		hashVal=(hashVal*HASH_PRIME)+str[i];//sum every hash value
	}

	return hashVal;

}
