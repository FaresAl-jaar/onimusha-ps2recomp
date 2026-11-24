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

// Function: sub_00684E90
// Address: 0x684e90 - 0x684edc
void sub_00684E90_0x684e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00684E90_0x684e90");
#endif

    switch (ctx->pc) {
        case 0x684e90u: goto label_684e90;
        case 0x684e94u: goto label_684e94;
        case 0x684e98u: goto label_684e98;
        case 0x684e9cu: goto label_684e9c;
        case 0x684ea0u: goto label_684ea0;
        case 0x684ea4u: goto label_684ea4;
        case 0x684ea8u: goto label_684ea8;
        case 0x684eacu: goto label_684eac;
        case 0x684eb0u: goto label_684eb0;
        case 0x684eb4u: goto label_684eb4;
        case 0x684eb8u: goto label_684eb8;
        case 0x684ebcu: goto label_684ebc;
        case 0x684ec0u: goto label_684ec0;
        case 0x684ec4u: goto label_684ec4;
        case 0x684ec8u: goto label_684ec8;
        case 0x684eccu: goto label_684ecc;
        case 0x684ed0u: goto label_684ed0;
        case 0x684ed4u: goto label_684ed4;
        case 0x684ed8u: goto label_684ed8;
        default: break;
    }

    ctx->pc = 0x684e90u;

label_684e90:
    // 0x684e90: 0x3ebf28  .word       0x003EBF28                   # mfsa        $s7 # 003E0700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x684e90u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_684e94:
    // 0x684e94: 0x3ebf60  .word       0x003EBF60                   # add         $s7, $at, $fp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_684e98:
    // 0x684e98: 0x3ec0d8  .word       0x003EC0D8                   # mult        $t8, $at, $fp # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x684e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_684e9c:
    // 0x684e9c: 0x3ec220  .word       0x003EC220                   # add         $t8, $at, $fp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_684ea0:
    // 0x684ea0: 0x3ec2a8  .word       0x003EC2A8                   # mfsa        $t8 # 003E0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x684ea0u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_684ea4:
    // 0x684ea4: 0x3ec2b0  tge         $at, $fp, 778
    ctx->pc = 0x684ea4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_684ea8:
    // 0x684ea8: 0x0  nop
    ctx->pc = 0x684ea8u;
    // NOP
label_684eac:
    // 0x684eac: 0x0  nop
    ctx->pc = 0x684eacu;
    // NOP
label_684eb0:
    // 0x684eb0: 0x3ec340  .word       0x003EC340                   # sll         $t8, $fp, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684eb0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 30), 13));
label_684eb4:
    // 0x684eb4: 0x3ec378  .word       0x003EC378                   # dsll        $t8, $fp, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684eb4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 30) << 13);
label_684eb8:
    // 0x684eb8: 0x3ec428  .word       0x003EC428                   # mfsa        $t8 # 003E0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x684eb8u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_684ebc:
    // 0x684ebc: 0x3ec490  .word       0x003EC490                   # mfhi        $t8 # 003E0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684ebcu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_684ec0:
    // 0x684ec0: 0x3ec608  .word       0x003EC608                   # jr          $at # 001EC600 <InstrIdType: CPU_SPECIAL>
label_684ec4:
    if (ctx->pc == 0x684EC4u) {
        ctx->pc = 0x684EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x684EC0u;
        // 0x684ec4: 0x3ec7d0  .word       0x003EC7D0                   # mfhi        $t8 # 003E07C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x684EC8u;
        goto label_684ec8;
    }
    ctx->pc = 0x684EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x684EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x684EC0u;
        // 0x684ec4: 0x3ec7d0  .word       0x003EC7D0                   # mfhi        $t8 # 003E07C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x684EC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x684EC8u;
label_684ec8:
    // 0x684ec8: 0x3ec988  .word       0x003EC988                   # jr          $at # 001EC980 <InstrIdType: CPU_SPECIAL>
label_684ecc:
    if (ctx->pc == 0x684ECCu) {
        ctx->pc = 0x684ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x684EC8u;
        // 0x684ecc: 0x3ec988  .word       0x003EC988                   # jr          $at # 001EC980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x684ED0u;
        goto label_684ed0;
    }
    ctx->pc = 0x684EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x684ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x684EC8u;
        // 0x684ecc: 0x3ec988  .word       0x003EC988                   # jr          $at # 001EC980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x684EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x684ED0u;
label_684ed0:
    // 0x684ed0: 0x3ec8c0  .word       0x003EC8C0                   # sll         $t9, $fp, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_684ed4:
    // 0x684ed4: 0x3ec960  .word       0x003EC960                   # add         $t9, $at, $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_684ed8:
    // 0x684ed8: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x684ed8u;
    
    ctx->pc = 0x684edcu;
}
