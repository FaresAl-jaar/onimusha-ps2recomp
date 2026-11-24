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

// Function: sub_00225098
// Address: 0x225098 - 0x2250d0
void sub_00225098_0x225098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225098_0x225098");
#endif

    switch (ctx->pc) {
        case 0x225098u: goto label_225098;
        case 0x22509cu: goto label_22509c;
        case 0x2250a0u: goto label_2250a0;
        case 0x2250a4u: goto label_2250a4;
        case 0x2250a8u: goto label_2250a8;
        case 0x2250acu: goto label_2250ac;
        case 0x2250b0u: goto label_2250b0;
        case 0x2250b4u: goto label_2250b4;
        case 0x2250b8u: goto label_2250b8;
        case 0x2250bcu: goto label_2250bc;
        case 0x2250c0u: goto label_2250c0;
        case 0x2250c4u: goto label_2250c4;
        case 0x2250c8u: goto label_2250c8;
        case 0x2250ccu: goto label_2250cc;
        default: break;
    }

    ctx->pc = 0x225098u;

label_225098:
    // 0x225098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22509c:
    // 0x22509c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22509cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2250a0:
    // 0x2250a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2250a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2250a4:
    // 0x2250a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2250a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2250a8:
    // 0x2250a8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2250a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2250ac:
    // 0x2250ac: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x2250acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_2250b0:
    // 0x2250b0: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x2250b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_2250b4:
    // 0x2250b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2250b8:
    if (ctx->pc == 0x2250B8u) {
        ctx->pc = 0x2250B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250B4u;
        // 0x2250b8: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2250BCu;
        goto label_2250bc;
    }
    ctx->pc = 0x2250B4u;
    {
        const bool branch_taken_0x2250b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250B4u;
        // 0x2250b8: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250b4) {
            ctx->pc = 0x2250C4u;
            goto label_2250c4;
        }
    }
    ctx->pc = 0x2250BCu;
label_2250bc:
    // 0x2250bc: 0x60f809  jalr        $v1
label_2250c0:
    if (ctx->pc == 0x2250C0u) {
        ctx->pc = 0x2250C4u;
        goto label_2250c4;
    }
    ctx->pc = 0x2250BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2250C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2250BCu, 0x2250C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2250C4u;
label_2250c4:
    // 0x2250c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2250c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2250c8:
    // 0x2250c8: 0x3e00008  jr          $ra
label_2250cc:
    if (ctx->pc == 0x2250CCu) {
        ctx->pc = 0x2250CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250C8u;
        // 0x2250cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2250D0u;
        goto label_fallthrough_0x2250c8;
    }
    ctx->pc = 0x2250C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2250CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250C8u;
        // 0x2250cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2250C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2250c8:
    ctx->pc = 0x2250D0u;
}
