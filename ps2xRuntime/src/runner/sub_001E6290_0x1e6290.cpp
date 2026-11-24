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

// Function: sub_001E6290
// Address: 0x1e6290 - 0x1e62e4
void sub_001E6290_0x1e6290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6290_0x1e6290");
#endif

    switch (ctx->pc) {
        case 0x1e6290u: goto label_1e6290;
        case 0x1e6294u: goto label_1e6294;
        case 0x1e6298u: goto label_1e6298;
        case 0x1e629cu: goto label_1e629c;
        case 0x1e62a0u: goto label_1e62a0;
        case 0x1e62a4u: goto label_1e62a4;
        case 0x1e62a8u: goto label_1e62a8;
        case 0x1e62acu: goto label_1e62ac;
        case 0x1e62b0u: goto label_1e62b0;
        case 0x1e62b4u: goto label_1e62b4;
        case 0x1e62b8u: goto label_1e62b8;
        case 0x1e62bcu: goto label_1e62bc;
        case 0x1e62c0u: goto label_1e62c0;
        case 0x1e62c4u: goto label_1e62c4;
        case 0x1e62c8u: goto label_1e62c8;
        case 0x1e62ccu: goto label_1e62cc;
        case 0x1e62d0u: goto label_1e62d0;
        case 0x1e62d4u: goto label_1e62d4;
        case 0x1e62d8u: goto label_1e62d8;
        case 0x1e62dcu: goto label_1e62dc;
        case 0x1e62e0u: goto label_1e62e0;
        default: break;
    }

    ctx->pc = 0x1e6290u;

label_1e6290:
    // 0x1e6290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6294:
    // 0x1e6294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e6298:
    // 0x1e6298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e629c:
    // 0x1e629c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e62a0:
    // 0x1e62a0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e62a4:
    if (ctx->pc == 0x1E62A4u) {
        ctx->pc = 0x1E62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A0u;
        // 0x1e62a4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62A8u;
        goto label_1e62a8;
    }
    ctx->pc = 0x1E62A0u;
    {
        const bool branch_taken_0x1e62a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A0u;
        // 0x1e62a4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62a0) {
            ctx->pc = 0x1E62D0u;
            goto label_1e62d0;
        }
    }
    ctx->pc = 0x1E62A8u;
label_1e62a8:
    // 0x1e62a8: 0x24426b10  addiu       $v0, $v0, 0x6B10
    ctx->pc = 0x1e62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27408));
label_1e62ac:
    // 0x1e62ac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e62acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e62b0:
    // 0x1e62b0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e62b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e62b4:
    // 0x1e62b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e62b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e62b8:
    // 0x1e62b8: 0x320f809  jalr        $t9
label_1e62bc:
    if (ctx->pc == 0x1E62BCu) {
        ctx->pc = 0x1E62C0u;
        goto label_1e62c0;
    }
    ctx->pc = 0x1E62B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E62C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E62B8u, 0x1E62C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E62C0u;
label_1e62c0:
    // 0x1e62c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e62c4:
    if (ctx->pc == 0x1E62C4u) {
        ctx->pc = 0x1E62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62C0u;
        // 0x1e62c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62C8u;
        goto label_1e62c8;
    }
    ctx->pc = 0x1E62C0u;
    {
        const bool branch_taken_0x1e62c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62C0u;
        // 0x1e62c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62c0) {
            ctx->pc = 0x1E62D0u;
            goto label_1e62d0;
        }
    }
    ctx->pc = 0x1E62C8u;
label_1e62c8:
    // 0x1e62c8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e62cc:
    // 0x1e62cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e62d0:
    // 0x1e62d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e62d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e62d4:
    // 0x1e62d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e62d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e62d8:
    // 0x1e62d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e62d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e62dc:
    // 0x1e62dc: 0x3e00008  jr          $ra
label_1e62e0:
    if (ctx->pc == 0x1E62E0u) {
        ctx->pc = 0x1E62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62DCu;
        // 0x1e62e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62E4u;
        goto label_fallthrough_0x1e62dc;
    }
    ctx->pc = 0x1E62DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62DCu;
        // 0x1e62e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E62DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e62dc:
    ctx->pc = 0x1E62E4u;
}
