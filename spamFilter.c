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
#include "pa1Strings.h"

int main(int argc, char *argv[] ){
	if(argc>3||argc<2){
		fprintf(stderr,INVALID_ARGS );

		fprintf(stderr,SHORT_USAGE);


		return 1;
	}

	FILE * fw;
	if(argc==2){
		printf(LONG_USAGE);
		return 0;
	}
	if(argc==3){
		fw=fopen(aryg[2],"r+");
	}
	if(fw == NULL){
		perror(FILTER_ERR);
		fprintf(stderr,SHORT_USAGE);
		return 1;
	}

	linkedListNode_t ** newLinklist = newLinkedListArray(DEFAULT_SIZE);

	populateTable(newLinkList,fw);


	lauchUserQuery(newLinklist);

	cleanup(newLinklist);

	fclose(fw);

	return 0;
}

