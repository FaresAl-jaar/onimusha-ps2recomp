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

// Function: sub_00388B90
// Address: 0x388b90 - 0x388c04
void sub_00388B90_0x388b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388B90_0x388b90");
#endif

    switch (ctx->pc) {
        case 0x388bc8u: goto label_388bc8;
        case 0x388be8u: goto label_388be8;
        case 0x388bf0u: goto label_388bf0;
        default: break;
    }

    ctx->pc = 0x388b90u;

    // 0x388b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x388b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388ba0: 0x90822b62  lbu         $v0, 0x2B62($a0)
    ctx->pc = 0x388ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11106)));
    // 0x388ba4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x388BA4u;
    {
        const bool branch_taken_0x388ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BA4u;
        // 0x388ba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ba4) {
            ctx->pc = 0x388BE8u;
            goto label_388be8;
        }
    }
    ctx->pc = 0x388BACu;
    // 0x388bac: 0x92032b6e  lbu         $v1, 0x2B6E($s0)
    ctx->pc = 0x388bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11118)));
    // 0x388bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388bb4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x388BB4u;
    {
        const bool branch_taken_0x388bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x388bb4) {
            ctx->pc = 0x388BE8u;
            goto label_388be8;
        }
    }
    ctx->pc = 0x388BBCu;
    // 0x388bbc: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x388bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x388bc0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x388BC0u;
    SET_GPR_U32(ctx, 31, 0x388BC8u);
    ctx->pc = 0x388BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BC0u;
    // 0x388bc4: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x388BC0u, 0x388BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BC8u;
label_388bc8:
    // 0x388bc8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x388bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x388bcc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x388bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x388bd0: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x388bd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x388bd4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x388BD4u;
    {
        const bool branch_taken_0x388bd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x388BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BD4u;
        // 0x388bd8: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bd4) {
            ctx->pc = 0x388BE8u;
            goto label_388be8;
        }
    }
    ctx->pc = 0x388BDCu;
    // 0x388bdc: 0x24053100  addiu       $a1, $zero, 0x3100
    ctx->pc = 0x388bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12544));
    // 0x388be0: 0xc056e04  jal         func_15B810
    ctx->pc = 0x388BE0u;
    SET_GPR_U32(ctx, 31, 0x388BE8u);
    ctx->pc = 0x388BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BE0u;
    // 0x388be4: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x388BE0u, 0x388BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BE8u;
label_388be8:
    // 0x388be8: 0xc0e1f0c  jal         func_387C30
    ctx->pc = 0x388BE8u;
    SET_GPR_U32(ctx, 31, 0x388BF0u);
    ctx->pc = 0x388BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BE8u;
    // 0x388bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387C30u, 0x388BE8u, 0x388BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BF0u;
label_388bf0:
    // 0x388bf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x388bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x388BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BFCu;
        // 0x388c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388C04u;
}
