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

int checkTable(char * str, linkedListNode_t ** hashtbl){
	linkedListNode_t *newPointer = retrieveLinkedList(hashtbl,str);

	if(newPointer==NULL){
		return 0;
	}
	
	while(newPointer!=NULL){
		if(strcmp((*newPointer).value,str)==0){
			return 1;
		}
		newPointer = newPointer->next;	
	}	
	return 0;
}
