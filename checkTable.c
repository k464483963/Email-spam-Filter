/*
 * Filename: checkTable.c
 * Author: HanJie Zhan
 * UserId: cs30s120cg
 * Date:07/05/2020
 * Sources of help: none.
 */

#include <stdio.h>
#include <string.h>
#include "pa1.h"

/*Function Name: checkTable.c
 *Function Prototype:int checkTable(char * str, linkedListNode_t ** hashtbl);
 *Description: this function would check if the linklist exist in the hash 
 *table.
 *Parameters: char string from the user. hash table double pointer 
 *Side Effects: None
 *Error Conditions: None
 *return value: return zero if the linklist exist.
 */
int checkTable(char * str, linkedListNode_t ** hashtbl){
	//return the linklist pointer to newPointer
	linkedListNode_t *newPointer = retrieveLinkedList(hashtbl,str);

	//if the linklist not exist return zero.
	if(newPointer==NULL) {
		return 0;
	}

	//chec if the value is exist in the linklist
	while(newPointer != NULL) {

		//compare the value with Node
		if(strcmp((*newPointer).value,str)==0){
			return 1;
		}

		//if not found value go to next Node
		newPointer = newPointer->next;	

	}	

	return 0;
}
