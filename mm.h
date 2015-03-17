/*
 * =====================================================================================
 *
 *       Filename:  mm.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2015 07:06:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  WYL (502), ylwzzu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#
#ifndef  mm_INC
#define  mm_INC
#include "unistd.h"
int mm_init(void);
void *mm_malloc(size_t size);
void mm_free(void *bp);

void mm_checkheap(int verbose);
void *mm_realloc(void *ptr, size_t size);

typedef struct
{
	char *team;
	char *name1, *email1;
	char *name2, *email2;
}team_t;
extern team_t team;

#endif   /* ----- #ifndef mm_INC  ----- */
