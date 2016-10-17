/*****************************************************************************/
/*! \file    utilities.h
 *  \author  LH
 *  \date    2011-05-30
 *
 *  \brief   Miscellaneous functions
 *****************************************************************************/
#ifndef UTILITIES_H
#define UTILITIES_H

/*! \brief Return the int reprensentated by one or more char(s)*/
int chars_to_int(char const* chaine, int debut, int fin);

/*! \brief Return the unsigned int reprensentated by one or more char(s)*/
unsigned int chars_to_unsigned_int(char const* chaine, int debut, int fin);

/*! \brief Add the specified int to chaine between debut and fin :
 *	debut (include) and fin(not include */
void add_int_to_chain(int nb, char * chaine, int debut, int fin);

#endif // UTILITIES_H

/*****************************************************************************/
/*****************************************************************************/
