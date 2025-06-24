#ifndef DEFINATIONS_H
#define DEFINATIONS_H

#if defined(LEEVDVN_LIBRARY)
#define LEEVTDVN_LIBRARY_EXPORT __declspec(dllexport)
#else
#define LEEVTDVN_LIBRARY_EXPORT __declspec(dllimport)
#endif


#endif // DEFINATIONS_H