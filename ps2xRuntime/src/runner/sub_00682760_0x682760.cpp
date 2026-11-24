#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00682760
// Address: 0x682760 - 0x682850
void sub_00682760_0x682760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682760_0x682760");
#endif

    switch (ctx->pc) {
        case 0x682760u: goto label_682760;
        case 0x682764u: goto label_682764;
        case 0x682768u: goto label_682768;
        case 0x68276cu: goto label_68276c;
        case 0x682770u: goto label_682770;
        case 0x682774u: goto label_682774;
        case 0x682778u: goto label_682778;
        case 0x68277cu: goto label_68277c;
        case 0x682780u: goto label_682780;
        case 0x682784u: goto label_682784;
        case 0x682788u: goto label_682788;
        case 0x68278cu: goto label_68278c;
        case 0x682790u: goto label_682790;
        case 0x682794u: goto label_682794;
        case 0x682798u: goto label_682798;
        case 0x68279cu: goto label_68279c;
        case 0x6827a0u: goto label_6827a0;
        case 0x6827a4u: goto label_6827a4;
        case 0x6827a8u: goto label_6827a8;
        case 0x6827acu: goto label_6827ac;
        case 0x6827b0u: goto label_6827b0;
        case 0x6827b4u: goto label_6827b4;
        case 0x6827b8u: goto label_6827b8;
        case 0x6827bcu: goto label_6827bc;
        case 0x6827c0u: goto label_6827c0;
        case 0x6827c4u: goto label_6827c4;
        case 0x6827c8u: goto label_6827c8;
        case 0x6827ccu: goto label_6827cc;
        case 0x6827d0u: goto label_6827d0;
        case 0x6827d4u: goto label_6827d4;
        case 0x6827d8u: goto label_6827d8;
        case 0x6827dcu: goto label_6827dc;
        case 0x6827e0u: goto label_6827e0;
        case 0x6827e4u: goto label_6827e4;
        case 0x6827e8u: goto label_6827e8;
        case 0x6827ecu: goto label_6827ec;
        case 0x6827f0u: goto label_6827f0;
        case 0x6827f4u: goto label_6827f4;
        case 0x6827f8u: goto label_6827f8;
        case 0x6827fcu: goto label_6827fc;
        case 0x682800u: goto label_682800;
        case 0x682804u: goto label_682804;
        case 0x682808u: goto label_682808;
        case 0x68280cu: goto label_68280c;
        case 0x682810u: goto label_682810;
        case 0x682814u: goto label_682814;
        case 0x682818u: goto label_682818;
        case 0x68281cu: goto label_68281c;
        case 0x682820u: goto label_682820;
        case 0x682824u: goto label_682824;
        case 0x682828u: goto label_682828;
        case 0x68282cu: goto label_68282c;
        case 0x682830u: goto label_682830;
        case 0x682834u: goto label_682834;
        case 0x682838u: goto label_682838;
        case 0x68283cu: goto label_68283c;
        case 0x682840u: goto label_682840;
        case 0x682844u: goto label_682844;
        case 0x682848u: goto label_682848;
        case 0x68284cu: goto label_68284c;
        default: break;
    }

    ctx->pc = 0x682760u;

label_682760:
    // 0x682760: 0x3a0c40  .word       0x003A0C40                   # sll         $at, $k0, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682760u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 26), 17));
label_682764:
    // 0x682764: 0x3a0c50  .word       0x003A0C50                   # mfhi        $at # 003A0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682764u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_682768:
    // 0x682768: 0x3a0c60  .word       0x003A0C60                   # add         $at, $at, $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682768u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_68276c:
    // 0x68276c: 0x3a0c70  tge         $at, $k0, 49
    ctx->pc = 0x68276cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_682770:
    // 0x682770: 0x3a0c80  .word       0x003A0C80                   # sll         $at, $k0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682770u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 26), 18));
label_682774:
    // 0x682774: 0x3a0c90  .word       0x003A0C90                   # mfhi        $at # 003A0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682774u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_682778:
    // 0x682778: 0x0  nop
    ctx->pc = 0x682778u;
    // NOP
label_68277c:
    // 0x68277c: 0x0  nop
    ctx->pc = 0x68277cu;
    // NOP
label_682780:
    // 0x682780: 0x3a1618  .word       0x003A1618                   # mult        $v0, $at, $k0 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_682784:
    // 0x682784: 0x3a15c0  .word       0x003A15C0                   # sll         $v0, $k0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 26), 23));
label_682788:
    // 0x682788: 0x3a15d0  .word       0x003A15D0                   # mfhi        $v0 # 003A05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682788u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_68278c:
    // 0x68278c: 0x3a15a0  .word       0x003A15A0                   # add         $v0, $at, $k0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x68278cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_682790:
    // 0x682790: 0x3a15b0  tge         $at, $k0, 86
    ctx->pc = 0x682790u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_682794:
    // 0x682794: 0x3a1600  .word       0x003A1600                   # sll         $v0, $k0, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 26), 24));
label_682798:
    // 0x682798: 0x3a1610  .word       0x003A1610                   # mfhi        $v0 # 003A0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682798u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_68279c:
    // 0x68279c: 0x3a15e0  .word       0x003A15E0                   # add         $v0, $at, $k0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x68279cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_6827a0:
    // 0x6827a0: 0x3a15f0  tge         $at, $k0, 87
    ctx->pc = 0x6827a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_6827a4:
    // 0x6827a4: 0x0  nop
    ctx->pc = 0x6827a4u;
    // NOP
label_6827a8:
    // 0x6827a8: 0x0  nop
    ctx->pc = 0x6827a8u;
    // NOP
label_6827ac:
    // 0x6827ac: 0x0  nop
    ctx->pc = 0x6827acu;
    // NOP
label_6827b0:
    // 0x6827b0: 0x3a1c90  .word       0x003A1C90                   # mfhi        $v1 # 003A0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6827b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_6827b4:
    // 0x6827b4: 0x3a1cd0  .word       0x003A1CD0                   # mfhi        $v1 # 003A04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6827b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_6827b8:
    // 0x6827b8: 0x3a1dc0  .word       0x003A1DC0                   # sll         $v1, $k0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6827b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 26), 23));
label_6827bc:
    // 0x6827bc: 0x3a1fe0  .word       0x003A1FE0                   # add         $v1, $at, $k0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6827bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_6827c0:
    // 0x6827c0: 0x3a21b0  tge         $at, $k0, 134
    ctx->pc = 0x6827c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_6827c4:
    // 0x6827c4: 0x3a23f0  tge         $at, $k0, 143
    ctx->pc = 0x6827c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_6827c8:
    // 0x6827c8: 0x0  nop
    ctx->pc = 0x6827c8u;
    // NOP
label_6827cc:
    // 0x6827cc: 0x0  nop
    ctx->pc = 0x6827ccu;
    // NOP
label_6827d0:
    // 0x6827d0: 0x3a16d8  .word       0x003A16D8                   # mult        $v0, $at, $k0 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6827d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_6827d4:
    // 0x6827d4: 0x3a1700  .word       0x003A1700                   # sll         $v0, $k0, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6827d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 26), 28));
label_6827d8:
    // 0x6827d8: 0x3a1758  .word       0x003A1758                   # mult        $v0, $at, $k0 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6827d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_6827dc:
    // 0x6827dc: 0x3a18f0  tge         $at, $k0, 99
    ctx->pc = 0x6827dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_6827e0:
    // 0x6827e0: 0x3a1a68  .word       0x003A1A68                   # mfsa        $v1 # 003A0240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6827e0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_6827e4:
    // 0x6827e4: 0x3a1c38  .word       0x003A1C38                   # dsll        $v1, $k0, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6827e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 26) << 16);
label_6827e8:
    // 0x6827e8: 0x12c00b4  teq         $t1, $t4, 2
    ctx->pc = 0x6827e8u;
    if (GPR_U64(ctx, 9) == GPR_U64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_6827ec:
    // 0x6827ec: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6827ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_6827f0:
    // 0x6827f0: 0x5341422f  beql        $k0, $at, . + 4 + (0x422F << 2)
label_6827f4:
    if (ctx->pc == 0x6827F4u) {
        ctx->pc = 0x6827F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6827F0u;
        // 0x6827f4: 0x2d53554c  sltiu       $s3, $t2, 0x554C (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)21836) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x6827F8u;
        goto label_6827f8;
    }
    ctx->pc = 0x6827F0u;
    {
        const bool branch_taken_0x6827f0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 1));
        if (branch_taken_0x6827f0) {
            ctx->pc = 0x6827F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6827F0u;
            // 0x6827f4: 0x2d53554c  sltiu       $s3, $t2, 0x554C (Delay Slot)
            SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)21836) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x6930B0u;
            return;
        }
    }
    ctx->pc = 0x6827F8u;
label_6827f8:
    // 0x6827f8: 0x38313132  xori        $s1, $at, 0x3132
    ctx->pc = 0x6827f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)12594);
label_6827fc:
    // 0x6827fc: 0x2f30  tge         $zero, $zero, 188
    ctx->pc = 0x6827fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_682800:
    // 0x682800: 0x3a55b0  tge         $at, $k0, 342
    ctx->pc = 0x682800u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_682804:
    // 0x682804: 0x3a58d8  .word       0x003A58D8                   # mult        $t3, $at, $k0 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_682808:
    // 0x682808: 0x3a5a20  .word       0x003A5A20                   # add         $t3, $at, $k0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682808u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_68280c:
    // 0x68280c: 0x3a5b68  .word       0x003A5B68                   # mfsa        $t3 # 003A0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x68280cu;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_682810:
    // 0x682810: 0x3a5be0  .word       0x003A5BE0                   # add         $t3, $at, $k0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682810u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_682814:
    // 0x682814: 0x3a5c98  .word       0x003A5C98                   # mult        $t3, $at, $k0 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_682818:
    // 0x682818: 0x0  nop
    ctx->pc = 0x682818u;
    // NOP
label_68281c:
    // 0x68281c: 0x0  nop
    ctx->pc = 0x68281cu;
    // NOP
label_682820:
    // 0x682820: 0x3a63a0  .word       0x003A63A0                   # add         $t4, $at, $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682820u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_682824:
    // 0x682824: 0x3a63d8  .word       0x003A63D8                   # mult        $t4, $at, $k0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_682828:
    // 0x682828: 0x3a6410  .word       0x003A6410                   # mfhi        $t4 # 003A0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682828u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_68282c:
    // 0x68282c: 0x3a6470  tge         $at, $k0, 401
    ctx->pc = 0x68282cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_682830:
    // 0x682830: 0x3a6498  .word       0x003A6498                   # mult        $t4, $at, $k0 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_682834:
    // 0x682834: 0x3a6590  .word       0x003A6590                   # mfhi        $t4 # 003A0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682834u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_682838:
    // 0x682838: 0x3a65d0  .word       0x003A65D0                   # mfhi        $t4 # 003A05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682838u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_68283c:
    // 0x68283c: 0x3a6858  .word       0x003A6858                   # mult        $t5, $at, $k0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x68283cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_682840:
    // 0x682840: 0x3a6b90  .word       0x003A6B90                   # mfhi        $t5 # 003A0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682840u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_682844:
    // 0x682844: 0x3a6f00  .word       0x003A6F00                   # sll         $t5, $k0, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682844u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 26), 28));
label_682848:
    // 0x682848: 0x3a7048  .word       0x003A7048                   # jr          $at # 001A7040 <InstrIdType: CPU_SPECIAL>
label_68284c:
    if (ctx->pc == 0x68284Cu) {
        ctx->pc = 0x68284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682848u;
        // 0x68284c: 0x3a7190  .word       0x003A7190                   # mfhi        $t6 # 003A0180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x682850u;
        goto label_fallthrough_0x682848;
    }
    ctx->pc = 0x682848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x68284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682848u;
        // 0x68284c: 0x3a7190  .word       0x003A7190                   # mfhi        $t6 # 003A0180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x682848u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x682848:
    ctx->pc = 0x682850u;
}
