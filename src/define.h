/*! \file define.h
    \brief testing defines
    
    This is to test the documentation of defines.
*/

/*! 
   \brief Computes the absolute value of its argument \a x.
   \param x input value.
   \returns absolute value of \a x.
*/

#define ABS(x) (((x)>0)?(x):-(x))


/** @name Comparison Macros
 * max and min macro 
 * 
 */
///@{
/// returns max of given two values
#define MAX(x,y) ((x)>(y)?(x):(y))
/** returns minimum of given two values */
#define MIN(x,y) ((x)>(y)?(y):(x))
///@}


/** Left shifts given value \a x by 1 \param x integer input value*/
#define LSHIFT(x) (1<<x)
