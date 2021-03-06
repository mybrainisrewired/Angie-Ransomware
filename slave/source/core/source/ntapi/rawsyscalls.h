
#define NONE 0xFFFFFFFF

#ifdef __INTELLISENSE__
    #define NTDLL_SYSCALL_WOW64(n, xpwow, vwow, w7wow, w8wow, w81wow, w10wow, w11wow, w12wow, w13wow, w14wow, w15wow, w16wow)
    #define NTDLL_SYSCALL_X86(n, w2K, xpx86, w2k3, vx86, w7x86, w8x86, w81x86, w10x86, w11x86, w12x86, w13x86, w14x86, w15x86, w16x86)
#endif

NTDLL_SYSCALL_X86(  "NtAllocateVirtualMemory"                              , 0x00000010, 0x00000011, 0x00000012, 0x00000012, 0x00000013, 0x00000196, 0x0000019B, 0x000001A3, 0x000001A6, 0x000001A8, 0x000001AD, 0x000001B1, 0x000001B1, 0x000001B1)
NTDLL_SYSCALL_X86(  "NtFreeVirtualMemory"                                  , 0x00000047, 0x00000053, 0x00000057, 0x00000093, 0x00000083, 0x00000118, 0x0000011C, 0x00000121, 0x00000123, 0x00000125, 0x00000128, 0x0000012B, 0x0000012B, 0x0000012A)
NTDLL_SYSCALL_X86(  "NtCreateThreadEx"                                     , NONE      , NONE      , NONE      , 0x0000017E, 0x00000058, 0x0000014C, 0x00000150, 0x00000156, 0x00000158, 0x0000015A, 0x0000015D, 0x00000160, 0x00000160, 0x0000015F)
NTDLL_SYSCALL_X86(  "NtClose"                                              , 0x00000018, 0x00000019, 0x0000001B, 0x00000030, 0x00000032, 0x00000174, 0x00000179, 0x00000180, 0x00000183, 0x00000185, 0x0000018A, 0x0000018D, 0x0000018D, 0x0000018D)
NTDLL_SYSCALL_X86(  "NtCreateMutant"                                       , 0x00000025, 0x0000002B, 0x0000002D, 0x00000043, 0x0000004A, 0x0000015A, 0x0000015E, 0x00000164, 0x00000166, 0x00000168, 0x0000016B, 0x0000016E, 0x0000016E, 0x0000016E)
NTDLL_SYSCALL_X86(  "NtOpenMutant"                                         , 0x00000068, 0x00000078, 0x0000007E, 0x000000BF, 0x000000BB, 0x000000E0, 0x000000E3, 0x000000E6, 0x000000E6, 0x000000E8, 0x000000EA, 0x000000EC, 0x000000EC, 0x000000EC)
NTDLL_SYSCALL_X86(  "NtDelayExecution"                                     , 0x00000032, 0x0000003B, 0x0000003D, 0x00000076, 0x00000062, 0x0000013E, 0x00000142, 0x00000147, 0x00000149, 0x0000014B, 0x0000014E, 0x00000151, 0x00000151, 0x00000150)
NTDLL_SYSCALL_X86(  "NtOpenKey"                                            , 0x00000067, 0x00000077, 0x0000007D, 0x000000BD, 0x000000B6, 0x000000E5, 0x000000E8, 0x000000EB, 0x000000EB, 0x000000ED, 0x000000EF, 0x000000F1, 0x000000F1, 0x000000F1)
NTDLL_SYSCALL_X86(  "NtQueryValueKey"                                      , 0x0000009B, 0x000000B1, 0x000000B9, 0x000000FC, 0x0000010A, 0x00000090, 0x00000093, 0x00000095, 0x00000095, 0x00000096, 0x00000097, 0x00000098, 0x00000098, 0x00000098)

NTDLL_SYSCALL_WOW64("NtAllocateVirtualMemory"                              , 0x00000015, 0x00000015, 0x00000015, 0x00000016, 0x00000017, 0x00000018, 0x00000018, 0x00000018, 0x00000018, 0x00000018, 0x00000018, 0x00000018)
NTDLL_SYSCALL_WOW64("NtFreeVirtualMemory"                                  , 0x0000001B, 0x0000001B, 0x0000001B, 0x0000001C, 0x0000001D, 0x0000001E, 0x0000001E, 0x0000001E, 0x0000001E, 0x0000001E, 0x0000001E, 0x0000001E)
NTDLL_SYSCALL_WOW64("NtCreateThreadEx"                                     , NONE      , 0x000000A5, 0x000000A5, 0x000000AF, 0x000000B0, 0x000000B3, 0x000000B4, 0x000000B6, 0x000000B9, 0x000000BA, 0x000000BB, 0x000000BC)
NTDLL_SYSCALL_WOW64("NtClose"                                              , 0x0000000C, 0x0000000C, 0x0000000C, 0x0000000D, 0x0003000E, 0x0003000F, 0x0003000F, 0x0003000F, 0x0003000F, 0x0003000F, 0x0003000F, 0x0003000F)
NTDLL_SYSCALL_WOW64("NtCreateMutant"                                       , 0x0000007E, 0x0000009B, 0x0000009A, 0x000000A4, 0x000000A5, 0x000000A7, 0x000000A8, 0x000000A9, 0x000000AC, 0x000000AD, 0x000000AE, 0x000000AE)
NTDLL_SYSCALL_WOW64("NtOpenMutant"                                         , 0x000000BC, 0x000000F0, 0x000000F6, 0x00000108, 0x0000010B, 0x00000110, 0x00000113, 0x00000115, 0x00000119, 0x0000011B, 0x0000011D, 0x0000011E)
NTDLL_SYSCALL_WOW64("NtDelayExecution"                                     , 0x00000031, 0x00000031, 0x00000031, 0x00060032, 0x00060033, 0x00060034, 0x00060034, 0x00060034, 0x00060034, 0x00060034, 0x00060034, 0x00060034)
NTDLL_SYSCALL_WOW64("NtOpenKey"                                            , 0x0000000F, 0x0000000F, 0x0000000F, 0x00000010, 0x00000011, 0x00000012, 0x00000012, 0x00000012, 0x00000012, 0x00000012, 0x00000012, 0x00000012)
NTDLL_SYSCALL_WOW64("NtQueryValueKey"                                      , 0x00000014, 0x00000014, 0x00000014, 0x00000015, 0x00000016, 0x00000017, 0x00000017, 0x00000017, 0x00000017, 0x00000017, 0x00000017, 0x00000017)
