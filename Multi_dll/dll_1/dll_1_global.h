#ifndef DLL_1_GLOBAL_H
#define DLL_1_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLL_1_LIBRARY)
#  define DLL_1SHARED_EXPORT Q_DECL_EXPORT
#else
#  define DLL_1SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DLL_1_GLOBAL_H
