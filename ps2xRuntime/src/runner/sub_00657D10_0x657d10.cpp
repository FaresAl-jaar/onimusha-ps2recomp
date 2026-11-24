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

// Function: sub_00657D10
// Address: 0x657d10 - 0x657d20
void sub_00657D10_0x657d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00657D10_0x657d10");
#endif

    switch (ctx->pc) {
        case 0x657d10u: goto label_657d10;
        case 0x657d14u: goto label_657d14;
        case 0x657d18u: goto label_657d18;
        case 0x657d1cu: goto label_657d1c;
        default: break;
    }

    ctx->pc = 0x657d10u;

label_657d10:
    // 0x657d10: 0x103007b  .word       0x0103007B                   # dsra        $zero, $v1, 1 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x657d10u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> 1);
label_657d14:
    // 0x657d14: 0x1000049  .word       0x01000049                   # jalr        $zero, $t0 # 00000040 <InstrIdType: CPU_SPECIAL>
label_657d18:
    if (ctx->pc == 0x657D18u) {
        ctx->pc = 0x657D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x657D14u;
        // 0x657d18: 0x103007c  .word       0x0103007C                   # dsll32      $zero, $v1, 1 # 01000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (32 + 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x657D1Cu;
        goto label_657d1c;
    }
    ctx->pc = 0x657D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x657D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x657D14u;
        // 0x657d18: 0x103007c  .word       0x0103007C                   # dsll32      $zero, $v1, 1 # 01000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (32 + 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x657D14u, 0x657D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x657D1Cu;
label_657d1c:
    // 0x657d1c: 0x100004a  .word       0x0100004A                   # movz        $zero, $t0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x657d1cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
    ctx->pc = 0x657d20u;
}
