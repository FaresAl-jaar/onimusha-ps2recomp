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

// Function: sub_00204C20
// Address: 0x204c20 - 0x204cd4
void sub_00204C20_0x204c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204C20_0x204c20");
#endif

    switch (ctx->pc) {
        case 0x204c40u: goto label_204c40;
        case 0x204c88u: goto label_204c88;
        case 0x204c94u: goto label_204c94;
        case 0x204ca8u: goto label_204ca8;
        default: break;
    }

    ctx->pc = 0x204c20u;

    // 0x204c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204c24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x204c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x204c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x204c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x204c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x204c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x204c38: 0xc081d84  jal         func_207610
    ctx->pc = 0x204C38u;
    SET_GPR_U32(ctx, 31, 0x204C40u);
    ctx->pc = 0x204C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C38u;
    // 0x204c3c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x204C38u, 0x204C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C40u;
label_204c40:
    // 0x204c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204c48: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x204C48u;
    {
        const bool branch_taken_0x204c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C48u;
        // 0x204c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c48) {
            ctx->pc = 0x204C78u;
            goto label_204c78;
        }
    }
    ctx->pc = 0x204C50u;
    // 0x204c50: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204c5c: 0x24846c98  addiu       $a0, $a0, 0x6C98
    ctx->pc = 0x204c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27800));
    // 0x204c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x204c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204c64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x204c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204c6c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x204C6Cu;
    ctx->pc = 0x204C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C6Cu;
    // 0x204c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x204C74u;
    // 0x204c74: 0x0  nop
    ctx->pc = 0x204c74u;
    // NOP
label_204c78:
    // 0x204c78: 0x8e71007c  lw          $s1, 0x7C($s3)
    ctx->pc = 0x204c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x204c7c: 0x8e700080  lw          $s0, 0x80($s3)
    ctx->pc = 0x204c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x204c80: 0xc08111a  jal         func_204468
    ctx->pc = 0x204C80u;
    SET_GPR_U32(ctx, 31, 0x204C88u);
    ctx->pc = 0x204C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C80u;
    // 0x204c84: 0x8e720078  lw          $s2, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204468u, 0x204C80u, 0x204C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C88u;
label_204c88:
    // 0x204c88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c8c: 0xc081c12  jal         func_207048
    ctx->pc = 0x204C8Cu;
    SET_GPR_U32(ctx, 31, 0x204C94u);
    ctx->pc = 0x204C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C8Cu;
    // 0x204c90: 0x211802a  slt         $s0, $s0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204C8Cu, 0x204C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C94u;
label_204c94:
    // 0x204c94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c98: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204C98u;
    {
        const bool branch_taken_0x204c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C98u;
        // 0x204c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c98) {
            ctx->pc = 0x204CB8u;
            goto label_204cb8;
        }
    }
    ctx->pc = 0x204CA0u;
    // 0x204ca0: 0xc087916  jal         func_21E458
    ctx->pc = 0x204CA0u;
    SET_GPR_U32(ctx, 31, 0x204CA8u);
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x204CA0u, 0x204CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CA8u;
label_204ca8:
    // 0x204ca8: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x204ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x204cac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204cb0: 0xae63007c  sw          $v1, 0x7C($s3)
    ctx->pc = 0x204cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 3));
    // 0x204cb4: 0xae630080  sw          $v1, 0x80($s3)
    ctx->pc = 0x204cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
label_204cb8:
    // 0x204cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x204cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204cc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x204cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x204CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CCCu;
        // 0x204cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204CD4u;
}
