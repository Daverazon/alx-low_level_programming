/*0. 98 Battery st.*/
/*
* Write a function that takes a pointer to an int as
* parameter and updates the value it points to to 98.
*/

#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the
 *                    value it points to to 98
 * @n: pointer to address of integer to be updated
 */
void reset_to_98(int *n)
{
	*n = 98;
}
