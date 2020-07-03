/*
 * Filename: testhash
 * Author: TODO
 * Userid: TODO
 * Description: Unit test program to test the function hash().
 * Date: TODO
 * Sources of Help: TODO
 */

#include <string.h>
#include <stdlib.h>

#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"

/*
 * Unit Test for hash.c
 *
 * unsigned int hash( char * src );
 *
 */
void testhash() {

    TEST( hash( "abc" ) == 693737 );
    TEST( hash( "paul" ) == 26452777 );

}

int main() {
  fprintf( stderr, "Testing hash...\n\n" );
  testhash();
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}
