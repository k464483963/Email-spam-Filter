
/*
 * Filename: prependNode.c
 * Author: HanJie Zhan
 * UserId: cs30s120cg
 * Date:07/05/2020
 * Sources of help: tutors.
 */
 
#include <stdio.h>
#include <string.h>
#include "pa1.h"

/*Function Name: prependNode.c
 *Function Prototype:void prependNode(linkedListNode_t ** head, char * str);
 *Description: This function would prepend Node to the specify hash bucket.
 *Parameters: double pointer head,used for pointing the pointer poting to Node
 *the char pointer string using to passing in string store in new Node.
 *Side Effects: None
 *Error Conditions: None
 *return value: None
 */
void prependNode(linkedListNode_t ** head, char * str){
	linkedListNode_t * newAd = newLinkedListNode();//create a new Node
						       //pointer
	  (*newAd).value = strcp(str);//store the string value
	  			      //in the new Node value
	  newAd->next = *head;//new node next pointer 
	  		      //pointing to head point
	  *head = newAd;//set the pointer which
	  		//the head pointing to
}
