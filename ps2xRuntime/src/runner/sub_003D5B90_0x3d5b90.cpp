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

// Function: sub_003D5B90
// Address: 0x3d5b90 - 0x3d5c5c
void sub_003D5B90_0x3d5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5B90_0x3d5b90");
#endif

    switch (ctx->pc) {
        case 0x3d5bb4u: goto label_3d5bb4;
        case 0x3d5c10u: goto label_3d5c10;
        default: break;
    }

    ctx->pc = 0x3d5b90u;

    // 0x3d5b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d5b94: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3d5b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3d5b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5b9c: 0x24020ff2  addiu       $v0, $zero, 0xFF2
    ctx->pc = 0x3d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4082));
    // 0x3d5ba0: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3d5ba0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3d5ba4: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D5BA4u;
    {
        const bool branch_taken_0x3d5ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d5ba4) {
            ctx->pc = 0x3D5BD8u;
            goto label_3d5bd8;
        }
    }
    ctx->pc = 0x3D5BACu;
    // 0x3d5bac: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x3D5BACu;
    SET_GPR_U32(ctx, 31, 0x3D5BB4u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x3D5BACu, 0x3D5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BB4u;
label_3d5bb4:
    // 0x3d5bb4: 0x2444004f  addiu       $a0, $v0, 0x4F
    ctx->pc = 0x3d5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x3d5bb8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3d5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3d5bbc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d5bc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d5bc4: 0x244232b0  addiu       $v0, $v0, 0x32B0
    ctx->pc = 0x3d5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12976));
    // 0x3d5bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d5bcc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3D5BCCu;
    {
        const bool branch_taken_0x3d5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BCCu;
        // 0x3d5bd0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bcc) {
            ctx->pc = 0x3D5C50u;
            goto label_3d5c50;
        }
    }
    ctx->pc = 0x3D5BD4u;
    // 0x3d5bd4: 0x0  nop
    ctx->pc = 0x3d5bd4u;
    // NOP
label_3d5bd8:
    // 0x3d5bd8: 0x24020544  addiu       $v0, $zero, 0x544
    ctx->pc = 0x3d5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1348));
    // 0x3d5bdc: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5BDCu;
    {
        const bool branch_taken_0x3d5bdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BDCu;
        // 0x3d5be0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bdc) {
            ctx->pc = 0x3D5C00u;
            goto label_3d5c00;
        }
    }
    ctx->pc = 0x3D5BE4u;
    // 0x3d5be4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d5be8: 0x90236ac8  lbu         $v1, 0x6AC8($at)
    ctx->pc = 0x3d5be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    // 0x3d5bec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5BECu;
    {
        const bool branch_taken_0x3d5bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BECu;
        // 0x3d5bf0: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bec) {
            ctx->pc = 0x3D5C00u;
            goto label_3d5c00;
        }
    }
    ctx->pc = 0x3D5BF4u;
    // 0x3d5bf4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3D5BF4u;
    {
        const bool branch_taken_0x3d5bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BF4u;
        // 0x3d5bf8: 0x24424390  addiu       $v0, $v0, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bf4) {
            ctx->pc = 0x3D5C50u;
            goto label_3d5c50;
        }
    }
    ctx->pc = 0x3D5BFCu;
    // 0x3d5bfc: 0x0  nop
    ctx->pc = 0x3d5bfcu;
    // NOP
label_3d5c00:
    // 0x3d5c00: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d5c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d5c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5c08: 0x246332b0  addiu       $v1, $v1, 0x32B0
    ctx->pc = 0x3d5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12976));
    // 0x3d5c0c: 0x0  nop
    ctx->pc = 0x3d5c0cu;
    // NOP
label_3d5c10:
    // 0x3d5c10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d5c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d5c14: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5C14u;
    {
        const bool branch_taken_0x3d5c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d5c14) {
            ctx->pc = 0x3D5C38u;
            goto label_3d5c38;
        }
    }
    ctx->pc = 0x3D5C1Cu;
    // 0x3d5c1c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3d5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3d5c20: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d5c24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d5c28: 0x244232b0  addiu       $v0, $v0, 0x32B0
    ctx->pc = 0x3d5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12976));
    // 0x3d5c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d5c30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D5C30u;
    {
        const bool branch_taken_0x3d5c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C30u;
        // 0x3d5c34: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c30) {
            ctx->pc = 0x3D5C50u;
            goto label_3d5c50;
        }
    }
    ctx->pc = 0x3D5C38u;
label_3d5c38:
    // 0x3d5c38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d5c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d5c3c: 0x2ca2007a  sltiu       $v0, $a1, 0x7A
    ctx->pc = 0x3d5c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x3d5c40: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3D5C40u;
    {
        const bool branch_taken_0x3d5c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C40u;
        // 0x3d5c44: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c40) {
            ctx->pc = 0x3D5C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5c10;
        }
    }
    ctx->pc = 0x3D5C48u;
    // 0x3d5c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d5c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5c4c: 0x0  nop
    ctx->pc = 0x3d5c4cu;
    // NOP
label_3d5c50:
    // 0x3d5c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5c54: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C54u;
        // 0x3d5c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5C5Cu;
}
