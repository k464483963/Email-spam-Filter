/*
 * Filename: testhash
 * Author: HanJie Zhan
 * Userid: A16089692
 * Description: Unit test program to test the function populateTable().
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
 *  void populateTable( linkedListNode_t ** hashtbl, FILE * dataFile )  
 */
void testpopulateTable() {
    char c[] = "we";
    FILE *fil;
    FILE *newFil;
    newFil = fopen("newFiles.txt","w");
   fputs("We", newFil);
   fclose(newFil);
   fil = fopen("newFiles.txt","r");
   linkedListNode_t ** newLinklist = newLinkedListArray(DEFAULT_SIZE);
   populateTable(newLinklist,fil);
   unsigned int hashindex = hash(c);
   unsigned int newIndex = hashindex % DEFAULT_SIZE;
   TEST(strcmp((newLinklist[newIndex])->value,"we")==0);
   fclose(fil); 
}

int main() {
  fprintf( stderr, "Testing prepenNode...\n\n" );
  testpopulateTable();
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}

