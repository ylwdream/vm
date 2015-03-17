/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2015 07:22:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  WYL (502), ylwzzu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "mm.h"

team_t team;

int main()
{
	mm_init();
	int *p = (int*)mm_malloc(10*sizeof(int));

	return 0;
}
