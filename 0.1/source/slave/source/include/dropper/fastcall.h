#ifndef __DROPPER_FASTCALL_H
#define __DROPPER_FASTCALL_H

#define FASTCALLSTUB  \
    DECLSPEC_NAKED    \
    DECLSPEC_NOINLINE \
    NTAPI

VOID
FASTCALLSTUB
KiFastSystemCall(VOID);

#endif