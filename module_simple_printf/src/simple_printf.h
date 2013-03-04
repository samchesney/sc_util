#ifndef _simple_printf_h_
#define _simple_printf_h_

/** 
 *  A very simple (low memory) version of printf.
 *  Accepts only %d, %x, %s, %u and %c with no formatting.
 */
#if defined(DEBUG_PRINTING)
#define simple_printf(x,...) _simple_printf(x,...)
#else
#define simple_printf(x,...)
#endif

#endif // _simple_printf_h_
