/*
 * Filename: retrieveLinkedList.c
 * Author: HanJie Zhan
 * UserId: cs30s120cg
 * Date:07/05/2020
 * Sources of help: none.
 */

#include <stdio.h>
#include "pa1.h"

/*Function Name: retrieveLinkedList.c
 *Function Prototype:linkedListNode_t *retrieveLinkedList( linkedListNode_t ** 
 *hashtbl, char *string );
 *Description: the function would get the string hash value and return the 
 *linklist in the hashtable of bucket which is the hash value index.
 *Parameters: the double pointer hashtbl,the char *string
 *Side Effects: None
 *Error Conditions: None
 *return value: return the linklist of the hash table of bucket.
 */
linkedListNode_t *retrieveLinkedList( linkedListNode_t ** hashtbl, 
		char *string ){
	unsigned int newHash = hash(string);//variable store the hash value.
	unsigned int hashIndex = newHash % DEFAULT_SIZE;//variable store hash
							//index
	return hashtbl[hashIndex];
}
