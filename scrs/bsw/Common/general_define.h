/*
 * generalDef.h
 *
 *  Created on: Aug 24, 2013
 *      Author: TV
 */

#ifndef GENERALDEF_H_
#define GENERALDEF_H_


typedef unsigned char           uint8;
typedef signed char             sint8;
typedef unsigned short          uint16;
typedef signed short            sint16;
typedef unsigned int            uint32;
typedef signed int              sint32;
typedef uint8 const             ucint8;

typedef void VOID;
typedef unsigned char UBYTE;
typedef char SBYTE;
typedef unsigned short UWORD;
typedef short SWORD;
typedef unsigned long int ULONG;
typedef long int SLONG;
typedef long long int	DSLONG;
typedef unsigned long long int	DULONG;

typedef float FLOAT;

#define UB	UBYTE
#define SB	SBYTE
#define UW	UWORD
#define SW	SWORD
#define UL	ULONG
#define SL	SLONG
#define DSL	DSLONG
#define F FLOAT


#ifndef BOOL
#define FALSE 0
#define TRUE !FALSE

#define BOOL UBYTE
#endif

#define NULL_UB		(UB)0
#define NULL_SB		(SB)0

#define NULL_UW		(UW)0
#define NULL_SW		(SW)0
#define NULL_UL		(UL)0
#define NULL_SL		(SL)0

#define UWORD_MAX	(UWORD)0xFFFF

#include "PlatformDefine.h"
#include "norm.h"

#endif /* GENERALDEF_H_ */
