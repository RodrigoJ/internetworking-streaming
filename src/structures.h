#ifndef _STRUCTURES_H
#define _STRUCTURES_H
#endif

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef struct _header_ 
{
	uint_8 opcode; //Codigo del mensaje
	uint_16 dlen;//Longitud del campo de datos
}header_t;


/*
typedef struct _get_
{
	uint_16 idFuente;
	uint_8 op;
	uint_16 idDestino;
}	

typedef struct _post_

typedef struct _sus_

typedef struct _resp_
*/

