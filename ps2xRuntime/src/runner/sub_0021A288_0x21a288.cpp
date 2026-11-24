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

// Function: sub_0021A288
// Address: 0x21a288 - 0x21a318
void sub_0021A288_0x21a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A288_0x21a288");
#endif

    switch (ctx->pc) {
        case 0x21a2a0u: goto label_21a2a0;
        case 0x21a2bcu: goto label_21a2bc;
        case 0x21a2d0u: goto label_21a2d0;
        default: break;
    }

    ctx->pc = 0x21a288u;

    // 0x21a288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a298: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21A298u;
    SET_GPR_U32(ctx, 31, 0x21A2A0u);
    ctx->pc = 0x21A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A298u;
    // 0x21a29c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21A298u, 0x21A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2A0u;
label_21a2a0:
    // 0x21a2a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21a2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2ac: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A2ACu;
    {
        const bool branch_taken_0x21a2ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2ACu;
        // 0x21a2b0: 0x34a50187  ori         $a1, $a1, 0x187 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)391);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2ac) {
            ctx->pc = 0x21A2C8u;
            goto label_21a2c8;
        }
    }
    ctx->pc = 0x21A2B4u;
    // 0x21a2b4: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21A2B4u;
    SET_GPR_U32(ctx, 31, 0x21A2BCu);
    ctx->pc = 0x21A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2B4u;
    // 0x21a2b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21A2B4u, 0x21A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2BCu;
label_21a2bc:
    // 0x21a2bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21A2BCu;
    {
        const bool branch_taken_0x21a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2BCu;
        // 0x21a2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2bc) {
            ctx->pc = 0x21A304u;
            goto label_21a304;
        }
    }
    ctx->pc = 0x21A2C4u;
    // 0x21a2c4: 0x0  nop
    ctx->pc = 0x21a2c4u;
    // NOP
label_21a2c8:
    // 0x21a2c8: 0xc0868c6  jal         func_21A318
    ctx->pc = 0x21A2C8u;
    SET_GPR_U32(ctx, 31, 0x21A2D0u);
    ctx->pc = 0x21A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A318u, 0x21A2C8u, 0x21A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2D0u;
label_21a2d0:
    // 0x21a2d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a2d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2d8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x21a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x21a2dc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A2DCu;
    {
        const bool branch_taken_0x21a2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2DCu;
        // 0x21a2e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2dc) {
            ctx->pc = 0x21A304u;
            goto label_21a304;
        }
    }
    ctx->pc = 0x21A2E4u;
    // 0x21a2e4: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x21a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x21a2e8: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x21a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x21a2ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21a2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21a2f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A2F0u;
    {
        const bool branch_taken_0x21a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2F0u;
        // 0x21a2f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2f0) {
            ctx->pc = 0x21A304u;
            goto label_21a304;
        }
    }
    ctx->pc = 0x21A2F8u;
    // 0x21a2f8: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x21a2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21a2fc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x21a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21a300: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21a300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21a304:
    // 0x21a304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a30c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21a30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a310: 0x3e00008  jr          $ra
    ctx->pc = 0x21A310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A310u;
        // 0x21a314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A318u;
}
