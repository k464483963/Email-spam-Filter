
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

void prependNode(linkedListNode_t ** head, char * str){
	linkedListNode_t * newAd = newLinkedListNode();
	  (*newAd).value = strcp(str);
	  newAd->next = *head;
	  *head = newAd;
}
