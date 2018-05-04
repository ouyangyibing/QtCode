DESTDIR += ../bin
CONFIG += release

include(../dll_1/dll_1.pri)
include(../DLL/dll.pri)

win32{
    LIBS+=  ../bin/libdll_1.a \
            ../bin/libdll.a
}
