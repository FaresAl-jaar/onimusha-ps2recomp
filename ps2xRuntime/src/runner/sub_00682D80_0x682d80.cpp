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

// Function: sub_00682D80
// Address: 0x682d80 - 0x682db8
void sub_00682D80_0x682d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682D80_0x682d80");
#endif

    switch (ctx->pc) {
        case 0x682d80u: goto label_682d80;
        case 0x682d84u: goto label_682d84;
        case 0x682d88u: goto label_682d88;
        case 0x682d8cu: goto label_682d8c;
        case 0x682d90u: goto label_682d90;
        case 0x682d94u: goto label_682d94;
        case 0x682d98u: goto label_682d98;
        case 0x682d9cu: goto label_682d9c;
        case 0x682da0u: goto label_682da0;
        case 0x682da4u: goto label_682da4;
        case 0x682da8u: goto label_682da8;
        case 0x682dacu: goto label_682dac;
        case 0x682db0u: goto label_682db0;
        case 0x682db4u: goto label_682db4;
        default: break;
    }

    ctx->pc = 0x682d80u;

label_682d80:
    // 0x682d80: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x682d80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_682d84:
    // 0x682d84: 0x80000400  lb          $zero, 0x400($zero)
    ctx->pc = 0x682d84u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x400u));
label_682d88:
    // 0x682d88: 0x0  nop
    ctx->pc = 0x682d88u;
    // NOP
label_682d8c:
    // 0x682d8c: 0x0  nop
    ctx->pc = 0x682d8cu;
    // NOP
label_682d90:
    // 0x682d90: 0x3c0a18  .word       0x003C0A18                   # mult        $at, $at, $gp # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_682d94:
    // 0x682d94: 0x3c0a80  .word       0x003C0A80                   # sll         $at, $gp, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682d94u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 28), 10));
label_682d98:
    // 0x682d98: 0x3c0ae8  .word       0x003C0AE8                   # mfsa        $at # 003C02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682d98u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_682d9c:
    // 0x682d9c: 0x3c0b50  .word       0x003C0B50                   # mfhi        $at # 003C0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682d9cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_682da0:
    // 0x682da0: 0x3c0bb8  .word       0x003C0BB8                   # dsll        $at, $gp, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 28) << 14);
label_682da4:
    // 0x682da4: 0x3c0c28  .word       0x003C0C28                   # mfsa        $at # 003C0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682da4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_682da8:
    // 0x682da8: 0x3c0c98  .word       0x003C0C98                   # mult        $at, $at, $gp # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_682dac:
    // 0x682dac: 0x3c0d10  .word       0x003C0D10                   # mfhi        $at # 003C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682dacu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_682db0:
    // 0x682db0: 0x3c0d88  .word       0x003C0D88                   # jr          $at # 001C0D80 <InstrIdType: CPU_SPECIAL>
label_682db4:
    if (ctx->pc == 0x682DB4u) {
        ctx->pc = 0x682DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682DB0u;
        // 0x682db4: 0x3c0e10  .word       0x003C0E10                   # mfhi        $at # 003C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x682DB8u;
        goto label_fallthrough_0x682db0;
    }
    ctx->pc = 0x682DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x682DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682DB0u;
        // 0x682db4: 0x3c0e10  .word       0x003C0E10                   # mfhi        $at # 003C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x682DB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x682db0:
    ctx->pc = 0x682DB8u;
}
