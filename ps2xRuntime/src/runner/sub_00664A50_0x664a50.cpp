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

// Function: sub_00664A50
// Address: 0x664a50 - 0x664a74
void sub_00664A50_0x664a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00664A50_0x664a50");
#endif

    switch (ctx->pc) {
        case 0x664a50u: goto label_664a50;
        case 0x664a54u: goto label_664a54;
        case 0x664a58u: goto label_664a58;
        case 0x664a5cu: goto label_664a5c;
        case 0x664a60u: goto label_664a60;
        case 0x664a64u: goto label_664a64;
        case 0x664a68u: goto label_664a68;
        case 0x664a6cu: goto label_664a6c;
        case 0x664a70u: goto label_664a70;
        default: break;
    }

    ctx->pc = 0x664a50u;

label_664a50:
    // 0x664a50: 0x14dc30  tge         $zero, $s4, 880
    ctx->pc = 0x664a50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_664a54:
    // 0x664a54: 0x14dc30  tge         $zero, $s4, 880
    ctx->pc = 0x664a54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_664a58:
    // 0x664a58: 0x14dc38  dsll        $k1, $s4, 16
    ctx->pc = 0x664a58u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) << 16);
label_664a5c:
    // 0x664a5c: 0x14dc40  sll         $k1, $s4, 17
    ctx->pc = 0x664a5cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 20), 17));
label_664a60:
    // 0x664a60: 0x14dc58  .word       0x0014DC58                   # mult        $k1, $zero, $s4 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x664a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_664a64:
    // 0x664a64: 0x14dc70  tge         $zero, $s4, 881
    ctx->pc = 0x664a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_664a68:
    // 0x664a68: 0x14dc78  dsll        $k1, $s4, 17
    ctx->pc = 0x664a68u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) << 17);
label_664a6c:
    // 0x664a6c: 0x14dc48  .word       0x0014DC48                   # jr          $zero # 0014DC40 <InstrIdType: CPU_SPECIAL>
label_664a70:
    if (ctx->pc == 0x664A70u) {
        ctx->pc = 0x664A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x664A6Cu;
        // 0x664a70: 0x14dc50  .word       0x0014DC50                   # mfhi        $k1 # 00140440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x664A74u;
        goto label_fallthrough_0x664a6c;
    }
    ctx->pc = 0x664A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x664A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x664A6Cu;
        // 0x664a70: 0x14dc50  .word       0x0014DC50                   # mfhi        $k1 # 00140440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x664A6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x664a6c:
    ctx->pc = 0x664A74u;
}
