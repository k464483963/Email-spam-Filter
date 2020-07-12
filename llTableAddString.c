/*
 * Filename: llTableAddString.c
 * Author: HanJie Zhan
 * UserId: cs30s120cg
 * Date:07/05/2020
 * Sources of help: tutors.
 */

#include <stdio.h>
#include "pa1.h"

/*Function Name: llTableAddString.c
 *Function Prototype:void llTableAddString( linkedListNode_t ** hashtbl,
 * char *string );
 *Description: this function is getting string and call hash function to 
 *index value and found the hash index and call prependNode function to
 *store the node in that hash index.
 *Parameters: the double pointer hashtbl pointing to hash table,the string
 *try to hash the value.
 *Side Effects: None
 *Error Conditions: None
 *return value: Node
 */
void llTableAddString( linkedListNode_t ** hashtbl, char *string ){
	unsigned int newHash = hash(string);//variable store the hash value
	unsigned int hashIndex = newHash % DEFAULT_SIZE;//variable store the
							//the new Index
	prependNode(&(hashtbl[hashIndex]),string);//call funciton to prepend
						  //the new Node in the hash
						  //table
}
