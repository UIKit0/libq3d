#ifndef __INCLUDED_Q3D_COLOR_H
#define __INCLUDED_Q3D_COLOR_H

/**
 * ===========================================================================
 * = Q3D - quarns quick and dirty 3D-engine ;) (c) Outbreak 2001-2002        =
 * ===========================================================================
 *
 * @id		:	$Id: Color.h,v 1.2 2004/02/15 21:55:42 quarn Exp $
 * @brief	:	Just a color structure
 * @author	:	Fredrik Ehnbom
 *
 */

typedef struct {
	float r;
	float g;
	float b;
	float a;
} q3dTypeColor;

void q3dColorSetV(q3dTypeColor *dest, q3dTypeColor *source);
void q3dColorSet3f(q3dTypeColor *color, float r, float g, float b);
void q3dColorSet4f(q3dTypeColor *color, float r, float g, float b, float a);

#endif
