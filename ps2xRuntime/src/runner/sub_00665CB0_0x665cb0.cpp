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

// Function: sub_00665CB0
// Address: 0x665cb0 - 0x665d0c
void sub_00665CB0_0x665cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00665CB0_0x665cb0");
#endif

    switch (ctx->pc) {
        case 0x665cb0u: goto label_665cb0;
        case 0x665cb4u: goto label_665cb4;
        case 0x665cb8u: goto label_665cb8;
        case 0x665cbcu: goto label_665cbc;
        case 0x665cc0u: goto label_665cc0;
        case 0x665cc4u: goto label_665cc4;
        case 0x665cc8u: goto label_665cc8;
        case 0x665cccu: goto label_665ccc;
        case 0x665cd0u: goto label_665cd0;
        case 0x665cd4u: goto label_665cd4;
        case 0x665cd8u: goto label_665cd8;
        case 0x665cdcu: goto label_665cdc;
        case 0x665ce0u: goto label_665ce0;
        case 0x665ce4u: goto label_665ce4;
        case 0x665ce8u: goto label_665ce8;
        case 0x665cecu: goto label_665cec;
        case 0x665cf0u: goto label_665cf0;
        case 0x665cf4u: goto label_665cf4;
        case 0x665cf8u: goto label_665cf8;
        case 0x665cfcu: goto label_665cfc;
        case 0x665d00u: goto label_665d00;
        case 0x665d04u: goto label_665d04;
        case 0x665d08u: goto label_665d08;
        default: break;
    }

    ctx->pc = 0x665cb0u;

label_665cb0:
    // 0x665cb0: 0x0  nop
    ctx->pc = 0x665cb0u;
    // NOP
label_665cb4:
    // 0x665cb4: 0x3e924925  .word       0x3E924925                   # lui         $s2, 0x4925 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_665cb8:
    // 0x665cb8: 0x3f124925  .word       0x3F124925                   # lui         $s2, 0x4925 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_665cbc:
    // 0x665cbc: 0x3f5b6db7  .word       0x3F5B6DB7                   # lui         $k1, 0x6DB7 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cbcu;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)28087 << 16));
label_665cc0:
    // 0x665cc0: 0x3f924925  .word       0x3F924925                   # lui         $s2, 0x4925 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_665cc4:
    // 0x665cc4: 0x3fb6db6e  .word       0x3FB6DB6E                   # lui         $s6, 0xDB6E # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56174 << 16));
label_665cc8:
    // 0x665cc8: 0x3fdb6db7  .word       0x3FDB6DB7                   # lui         $k1, 0x6DB7 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cc8u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)28087 << 16));
label_665ccc:
    // 0x665ccc: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x665cccu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_665cd0:
    // 0x665cd0: 0x0  nop
    ctx->pc = 0x665cd0u;
    // NOP
label_665cd4:
    // 0x665cd4: 0x3e124925  .word       0x3E124925                   # lui         $s2, 0x4925 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_665cd8:
    // 0x665cd8: 0x3e924925  .word       0x3E924925                   # lui         $s2, 0x4925 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_665cdc:
    // 0x665cdc: 0x3edb6db7  .word       0x3EDB6DB7                   # lui         $k1, 0x6DB7 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cdcu;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)28087 << 16));
label_665ce0:
    // 0x665ce0: 0x3f124925  .word       0x3F124925                   # lui         $s2, 0x4925 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_665ce4:
    // 0x665ce4: 0x3f36db6e  .word       0x3F36DB6E                   # lui         $s6, 0xDB6E # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665ce4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56174 << 16));
label_665ce8:
    // 0x665ce8: 0x3f5b6db7  .word       0x3F5B6DB7                   # lui         $k1, 0x6DB7 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665ce8u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)28087 << 16));
label_665cec:
    // 0x665cec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x665cecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_665cf0:
    // 0x665cf0: 0x1dbcf0  tge         $zero, $sp, 755
    ctx->pc = 0x665cf0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_665cf4:
    // 0x665cf4: 0x1dbd28  .word       0x001DBD28                   # mfsa        $s7 # 001D0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x665cf4u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_665cf8:
    // 0x665cf8: 0x1dbd60  .word       0x001DBD60                   # add         $s7, $zero, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x665cf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_665cfc:
    // 0x665cfc: 0x1dbd98  .word       0x001DBD98                   # mult        $s7, $zero, $sp # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x665cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_665d00:
    // 0x665d00: 0x1dbdd0  .word       0x001DBDD0                   # mfhi        $s7 # 001D05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x665d00u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_665d04:
    // 0x665d04: 0x1dbe08  .word       0x001DBE08                   # jr          $zero # 001DBE00 <InstrIdType: CPU_SPECIAL>
label_665d08:
    if (ctx->pc == 0x665D08u) {
        ctx->pc = 0x665D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x665D04u;
        // 0x665d08: 0x1dbe40  sll         $s7, $sp, 25 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 29), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x665D0Cu;
        goto label_fallthrough_0x665d04;
    }
    ctx->pc = 0x665D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x665D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x665D04u;
        // 0x665d08: 0x1dbe40  sll         $s7, $sp, 25 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 29), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x665D04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x665d04:
    ctx->pc = 0x665D0Cu;
}
