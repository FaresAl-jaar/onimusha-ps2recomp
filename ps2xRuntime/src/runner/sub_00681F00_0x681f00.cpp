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

// Function: sub_00681F00
// Address: 0x681f00 - 0x681f34
void sub_00681F00_0x681f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00681F00_0x681f00");
#endif

    switch (ctx->pc) {
        case 0x681f30u: goto label_681f30;
        default: break;
    }

    ctx->pc = 0x681f00u;

    // 0x681f00: 0x387e00  .word       0x00387E00                   # sll         $t7, $t8, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 24));
    // 0x681f04: 0x387e28  .word       0x00387E28                   # mfsa        $t7 # 00380600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681f04u;
    SET_GPR_U32(ctx, 15, ctx->sa);
    // 0x681f08: 0x387e58  .word       0x00387E58                   # mult        $t7, $at, $t8 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x681f0c: 0x387e70  tge         $at, $t8, 505
    ctx->pc = 0x681f0cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x681f10: 0x387fe0  .word       0x00387FE0                   # add         $t7, $at, $t8 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f10u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x681f14: 0x388180  .word       0x00388180                   # sll         $s0, $t8, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 6));
    // 0x681f18: 0x388180  .word       0x00388180                   # sll         $s0, $t8, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 6));
    // 0x681f1c: 0x388118  .word       0x00388118                   # mult        $s0, $at, $t8 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x681f20: 0x388170  tge         $at, $t8, 517
    ctx->pc = 0x681f20u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x681f24: 0x0  nop
    ctx->pc = 0x681f24u;
    // NOP
    // 0x681f28: 0xc000400  jal         func_001000
    ctx->pc = 0x681F28u;
    SET_GPR_U32(ctx, 31, 0x681F30u);
    ctx->pc = 0x681F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x681F28u;
    // 0x681f2c: 0xaaa0555  j           func_AA81554 (Delay Slot)
    // J 0xAA81554 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000u, 0x681F28u, 0x681F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x681F30u;
label_681f30:
    // 0x681f30: 0x95506aa  j           func_5541AA8
    ctx->pc = 0x681F30u;
    ctx->pc = 0x5541AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5541AA8u, 0x681F30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x681F38u;
}
