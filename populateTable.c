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

void populateTable(linkedListNode_t ** hashtbl, FILE * dataFile){

	char newArray[2003];

	while(fgets(newArray,2003,dataFile)!= 0){

		char *newNode = strchr(newArray,'\n');
		*newNode = '\0';
		tolower(newArray);
		llTableAddString(&hashtbl,&newArray);
	}


}

