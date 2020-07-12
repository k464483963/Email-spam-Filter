/*
 * Filename: populateTable.c
 * Author: HanJie Zhan
 * UserId: cs30s120cg
 * Date:07/05/2020
 * Sources of help: tutors.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "pa1.h"

/*Function Name: populateTable.c
 *Function Prototype:void populateTable(linkedListNode_t ** hashtbl,
 *FILE * dataFile);
 *Description: this function try to open the file and the the contest from
 *the file and store in newArray array, lower all the char then close the 
 *files.
 *Parameters: the double pointer hashtbl, the file pointer poiting file.
 *Side Effects: None
 *Error Conditions: None
 *return value: None
 */
void populateTable(linkedListNode_t ** hashtbl, FILE * dataFile){

	char newArray[DEFAULT_SIZE];//create new array with default size

	//using while loop to continue read the line in files without stop
	//while reading new line character '/0'.while loop stop when it get
	//the NULL to end file.
	while(fgets(newArray,DEFAULT_SIZE,dataFile) != 0){

		char *newLine = strchr(newArray,'\n');//search the '\n' char
		
		//if search the '\n' char newLine is not NULL then change
		//'\n' char to '\0' null character.
		if(newLine != NULL) {
			*newLine = '\0';
		}
		
		//change the character in newarray to lower character
		for(int i = 0; i < strlen(newArray);i++) {
			newArray[i]=tolower(newArray[i]);
		}
		
		//call function to find specify hash index and store the Node 
		//in the index of bucket in hashtable 
		llTableAddString(hashtbl,newArray);
	}


}

