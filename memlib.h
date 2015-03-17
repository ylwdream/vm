/*
 * =====================================================================================
 *
 *       Filename:  memlib.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/16/2015 07:05:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  WYL (502), ylwzzu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef  memlib_INC
#define  memlib_INC

void mem_init(void);
void *mem_sbrk(int incr);

#endif   /* ----- #ifndef memlib_INC  ----- */
