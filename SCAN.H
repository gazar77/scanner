/****************************************************/
/* File: scan.h                                     */
/* The scanner interface for the TINY compiler      */
/****************************************************/

#ifndef _SCAN_H_
#define _SCAN_H_

/* MAXTOKENLEN is the maximum size of a token */
#define MAXTOKENLEN 40

/* tokenString array stores the lexeme of each token */
extern char tokenString[MAXTOKENLEN + 1];

/* Enumeration of token types */
typedef enum {
	/* Reserved words */
	INT, FLOAT, CHAR, VOID, DOUBLE,
	IF, ELSE, WHILE, FOR, PRINTF, STRUCT,

	/* Multicharacter tokens */
	ID, NUM,

	/* Special symbols */
	LT, LE, GT, GE, EQ, NE, DOT,

	/* Bookkeeping tokens */
	ENDFILE, ERROR
} TokenType;

/* Function that returns the next token from source */
TokenType getToken(void);
 {
#include <string.h>
#include <ctype.h>

	typedef enum {
		INT, FLOAT, CHAR, VOID, DOUBLE,
		FOR, WHILE, IF, ELSE, PRINTF, STRUCT,
		NUM, ID,
		LE, GE, EQ, NE, GT, LT, DOT
	} TokenType;
	

#endif
