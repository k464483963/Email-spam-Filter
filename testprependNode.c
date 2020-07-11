/*
 * Filename: testhash
 * Author: HanJie Zhan
 * Userid: A16089692
 * Description: Unit test program to test the function prependNode().
 * Date: 07/10/20
 * Sources of Help: none
 */

#include <string.h>
#include <stdlib.h>

#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"

/*
 * Unit Test for prepenNode.c
 *
 * void prependNode( linkedListNode_t ** head, char * str );
 *  *
 */
void testprependNode() {
    linkedListNode_t * newtest = NULL;
    linkedListNode_t ** head = &newtest;
    prependNode(head,"abc" );
    TEST(strcmp((*head)->value,"abc")==0);

}

int main() {
  fprintf( stderr, "Testing prepenNode...\n\n" );
  testprependNode();
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}


