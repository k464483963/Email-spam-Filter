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


 unsigned int hash (char * str){	 
	unsigned int hashVal = HASH_START_VAL;
	for(int i=0;i<strlen(str);i=i+INCREMENT){
		hashVal=(hashVal*HASH_PRIME)+str[i];
	}
	for(int i=1;i<strlen(str);i=i+INCREMENT){	
		hashVal=(hashVal*HASH_PRIME)+str[i];
	}
	
	return hashVal;

}
