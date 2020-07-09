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


void llTableAddString( linkedListNode_t ** hashtbl, char *string ){
	unsigned int newHash = hash(string);
	unsigned int hashIndex = newHash % DEFAULT_SIZE;
	prependNode(&(hashtbl[hashIndex]),string);
}
