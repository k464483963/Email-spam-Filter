/*
 * Filename: spamFilter.c
 * Author: HanJie Zhan
 * UserId: cs30s120cg
 * Date:07/05/2020
 * Sources of help: tutors.
 */

#include <stdio.h>
#include <string.h>
#include "pa1.h"
#include "pa1Strings.h"
#define  TWO_COMMAND 2
#define  THREE_COMMAND 3

/*Function Name: spamFilter.c
 *Function Prototype:int main(int argc, char *argv[] );
 *Description:  this function is main function, first open the files and 
 *do error input checking.then check if the email is exist in the files.
 *Parameters: the number of argument int argc, the array of argument char
 *argv[];
 *Side Effects: None
 *Error Conditions: if open the wrong files and the email can not read.
 *return value: return zero if the files open seccessful.
 */

int main(int argc, char *argv[] ){
	//check if there are more than two command line
	if(argc > THREE_COMMAND || argc < TWO_COMMAND) {

		fprintf(stderr,INVALID_ARGS );

		fprintf(stderr,SHORT_USAGE);

		return 1;
	}

	FILE * fw;//file type pointer

	//if the command line have one then print messeage
	if(argc == TWO_COMMAND){

		printf(LONG_USAGE);

		return 0;
	}

	//if the command line have two then print message
	if(argc == THREE_COMMAND){

		//open the file then read the contest inside file
		fw=fopen(argv[TWO_COMMAND],"rb");

	}

	//if the files can not open.
	if(fw == NULL){

		perror(FILTER_ERR);

		fprintf(stderr,SHORT_USAGE);

		return 1;
	}

	//create a newLinklist hash table
	linkedListNode_t ** newLinklist = newLinkedListArray(DEFAULT_SIZE);

	//get the contest from the files.
	populateTable(newLinklist,fw);

	//display the user interface 
	launchUserQuery(newLinklist);

	//clearup the linlist
	cleanup(newLinklist);

	fclose(fw);

	return 0;
}

