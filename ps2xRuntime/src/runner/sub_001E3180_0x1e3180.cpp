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

// Function: sub_001E3180
// Address: 0x1e3180 - 0x1e31d4
void sub_001E3180_0x1e3180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3180_0x1e3180");
#endif

    switch (ctx->pc) {
        case 0x1e3180u: goto label_1e3180;
        case 0x1e3184u: goto label_1e3184;
        case 0x1e3188u: goto label_1e3188;
        case 0x1e318cu: goto label_1e318c;
        case 0x1e3190u: goto label_1e3190;
        case 0x1e3194u: goto label_1e3194;
        case 0x1e3198u: goto label_1e3198;
        case 0x1e319cu: goto label_1e319c;
        case 0x1e31a0u: goto label_1e31a0;
        case 0x1e31a4u: goto label_1e31a4;
        case 0x1e31a8u: goto label_1e31a8;
        case 0x1e31acu: goto label_1e31ac;
        case 0x1e31b0u: goto label_1e31b0;
        case 0x1e31b4u: goto label_1e31b4;
        case 0x1e31b8u: goto label_1e31b8;
        case 0x1e31bcu: goto label_1e31bc;
        case 0x1e31c0u: goto label_1e31c0;
        case 0x1e31c4u: goto label_1e31c4;
        case 0x1e31c8u: goto label_1e31c8;
        case 0x1e31ccu: goto label_1e31cc;
        case 0x1e31d0u: goto label_1e31d0;
        default: break;
    }

    ctx->pc = 0x1e3180u;

label_1e3180:
    // 0x1e3180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3184:
    // 0x1e3184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3188:
    // 0x1e3188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e318c:
    // 0x1e318c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e318cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3190:
    // 0x1e3190: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e3194:
    if (ctx->pc == 0x1E3194u) {
        ctx->pc = 0x1E3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3190u;
        // 0x1e3194: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3198u;
        goto label_1e3198;
    }
    ctx->pc = 0x1E3190u;
    {
        const bool branch_taken_0x1e3190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3190u;
        // 0x1e3194: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3190) {
            ctx->pc = 0x1E31C0u;
            goto label_1e31c0;
        }
    }
    ctx->pc = 0x1E3198u;
label_1e3198:
    // 0x1e3198: 0x244268d0  addiu       $v0, $v0, 0x68D0
    ctx->pc = 0x1e3198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26832));
label_1e319c:
    // 0x1e319c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e319cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e31a0:
    // 0x1e31a0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e31a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e31a4:
    // 0x1e31a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e31a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e31a8:
    // 0x1e31a8: 0x320f809  jalr        $t9
label_1e31ac:
    if (ctx->pc == 0x1E31ACu) {
        ctx->pc = 0x1E31B0u;
        goto label_1e31b0;
    }
    ctx->pc = 0x1E31A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E31B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E31A8u, 0x1E31B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E31B0u;
label_1e31b0:
    // 0x1e31b0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e31b4:
    if (ctx->pc == 0x1E31B4u) {
        ctx->pc = 0x1E31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31B0u;
        // 0x1e31b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E31B8u;
        goto label_1e31b8;
    }
    ctx->pc = 0x1E31B0u;
    {
        const bool branch_taken_0x1e31b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31B0u;
        // 0x1e31b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31b0) {
            ctx->pc = 0x1E31C0u;
            goto label_1e31c0;
        }
    }
    ctx->pc = 0x1E31B8u;
label_1e31b8:
    // 0x1e31b8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e31bc:
    // 0x1e31bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e31c0:
    // 0x1e31c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e31c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e31c4:
    // 0x1e31c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e31c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e31c8:
    // 0x1e31c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e31c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e31cc:
    // 0x1e31cc: 0x3e00008  jr          $ra
label_1e31d0:
    if (ctx->pc == 0x1E31D0u) {
        ctx->pc = 0x1E31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31CCu;
        // 0x1e31d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E31D4u;
        goto label_fallthrough_0x1e31cc;
    }
    ctx->pc = 0x1E31CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31CCu;
        // 0x1e31d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E31CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e31cc:
    ctx->pc = 0x1E31D4u;
}
