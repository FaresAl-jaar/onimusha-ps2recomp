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

// Function: sub_003F3BB0
// Address: 0x3f3bb0 - 0x3f3c5c
void sub_003F3BB0_0x3f3bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3BB0_0x3f3bb0");
#endif

    switch (ctx->pc) {
        case 0x3f3bc8u: goto label_3f3bc8;
        case 0x3f3bf4u: goto label_3f3bf4;
        case 0x3f3c08u: goto label_3f3c08;
        case 0x3f3c24u: goto label_3f3c24;
        default: break;
    }

    ctx->pc = 0x3f3bb0u;

    // 0x3f3bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3bb4: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x3f3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x3f3bb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f3bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f3bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f3bc0: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F3BC0u;
    SET_GPR_U32(ctx, 31, 0x3F3BC8u);
    ctx->pc = 0x3F3BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BC0u;
    // 0x3f3bc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F3BC0u, 0x3F3BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BC8u;
label_3f3bc8:
    // 0x3f3bc8: 0xaf828d40  sw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 2));
    // 0x3f3bcc: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x3f3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3bd0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F3BD0u;
    {
        const bool branch_taken_0x3f3bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BD0u;
        // 0x3f3bd4: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3bd0) {
            ctx->pc = 0x3F3C48u;
            goto label_3f3c48;
        }
    }
    ctx->pc = 0x3F3BD8u;
    // 0x3f3bd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f3bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3bdc: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3f3bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3f3be0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f3be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3be8: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3bec: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F3BECu;
    SET_GPR_U32(ctx, 31, 0x3F3BF4u);
    ctx->pc = 0x3F3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BECu;
    // 0x3f3bf0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F3BECu, 0x3F3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BF4u;
label_3f3bf4:
    // 0x3f3bf4: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f3bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f3bf8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f3bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f3bfc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F3BFCu;
    {
        const bool branch_taken_0x3f3bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BFCu;
        // 0x3f3c00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3bfc) {
            ctx->pc = 0x3F3C40u;
            goto label_3f3c40;
        }
    }
    ctx->pc = 0x3F3C04u;
    // 0x3f3c04: 0x0  nop
    ctx->pc = 0x3f3c04u;
    // NOP
label_3f3c08:
    // 0x3f3c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3c0c: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3C0Cu;
    {
        const bool branch_taken_0x3f3c0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C0Cu;
        // 0x3f3c10: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3c0c) {
            ctx->pc = 0x3F3C28u;
            goto label_3f3c28;
        }
    }
    ctx->pc = 0x3F3C14u;
    // 0x3f3c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3c1c: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F3C1Cu;
    SET_GPR_U32(ctx, 31, 0x3F3C24u);
    ctx->pc = 0x3F3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3C1Cu;
    // 0x3f3c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F3C1Cu, 0x3F3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3C24u;
label_3f3c24:
    // 0x3f3c24: 0x0  nop
    ctx->pc = 0x3f3c24u;
    // NOP
label_3f3c28:
    // 0x3f3c28: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f3c28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f3c2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f3c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f3c30: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f3c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f3c34: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F3C34u;
    {
        const bool branch_taken_0x3f3c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3c34) {
            ctx->pc = 0x3F3C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3c08;
        }
    }
    ctx->pc = 0x3F3C3Cu;
    // 0x3f3c3c: 0x0  nop
    ctx->pc = 0x3f3c3cu;
    // NOP
label_3f3c40:
    // 0x3f3c40: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x3f3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3c44: 0xa06001d0  sb          $zero, 0x1D0($v1)
    ctx->pc = 0x3f3c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 464), (uint8_t)GPR_U32(ctx, 0));
label_3f3c48:
    // 0x3f3c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f3c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f3c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f3c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f3c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3c54: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C54u;
        // 0x3f3c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3C5Cu;
}
