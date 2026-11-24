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

// Function: sub_00123B40
// Address: 0x123b40 - 0x123c18
void sub_00123B40_0x123b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123B40_0x123b40");
#endif

    switch (ctx->pc) {
        case 0x123b64u: goto label_123b64;
        case 0x123b68u: goto label_123b68;
        case 0x123b78u: goto label_123b78;
        case 0x123ba4u: goto label_123ba4;
        case 0x123bc0u: goto label_123bc0;
        default: break;
    }

    ctx->pc = 0x123b40u;

    // 0x123b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123b4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123b50: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x123b50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x123b54: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x123B54u;
    {
        const bool branch_taken_0x123b54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B54u;
        // 0x123b58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b54) {
            ctx->pc = 0x123B64u;
            goto label_123b64;
        }
    }
    ctx->pc = 0x123B5Cu;
    // 0x123b5c: 0xc048f16  jal         func_123C58
    ctx->pc = 0x123B5Cu;
    SET_GPR_U32(ctx, 31, 0x123B64u);
    ctx->pc = 0x123C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C58u, 0x123B5Cu, 0x123B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B64u;
label_123b64:
    // 0x123b64: 0x263001d8  addiu       $s0, $s1, 0x1D8
    ctx->pc = 0x123b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_123b68:
    // 0x123b68: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x123b6c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x123b6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x123b70: 0x5c00006  bltz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x123B70u;
    {
        const bool branch_taken_0x123b70 = (GPR_S64(ctx, 14) < 0);
        ctx->pc = 0x123B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B70u;
        // 0x123b74: 0x8e0d0008  lw          $t5, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b70) {
            ctx->pc = 0x123B8Cu;
            goto label_123b8c;
        }
    }
    ctx->pc = 0x123B78u;
label_123b78:
    // 0x123b78: 0x85af000c  lh          $t7, 0xC($t5)
    ctx->pc = 0x123b78u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x123b7c: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x123B7Cu;
    {
        const bool branch_taken_0x123b7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B7Cu;
        // 0x123b80: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b7c) {
            ctx->pc = 0x123BD4u;
            goto label_123bd4;
        }
    }
    ctx->pc = 0x123B84u;
    // 0x123b84: 0x5c1fffc  bgez        $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x123B84u;
    {
        const bool branch_taken_0x123b84 = (GPR_S64(ctx, 14) >= 0);
        ctx->pc = 0x123B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B84u;
        // 0x123b88: 0x25ad0058  addiu       $t5, $t5, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b84) {
            ctx->pc = 0x123B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123b78;
        }
    }
    ctx->pc = 0x123B8Cu;
label_123b8c:
    // 0x123b8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x123b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123b90: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x123B90u;
    {
        const bool branch_taken_0x123b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123b90) {
            ctx->pc = 0x123B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B90u;
            // 0x123b94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123b68;
        }
    }
    ctx->pc = 0x123B98u;
    // 0x123b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b9c: 0xc048eb4  jal         func_123AD0
    ctx->pc = 0x123B9Cu;
    SET_GPR_U32(ctx, 31, 0x123BA4u);
    ctx->pc = 0x123BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B9Cu;
    // 0x123ba0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123AD0u, 0x123B9Cu, 0x123BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BA4u;
label_123ba4:
    // 0x123ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123BA4u;
    {
        const bool branch_taken_0x123ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BA4u;
        // 0x123ba8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ba4) {
            ctx->pc = 0x123BB4u;
            goto label_123bb4;
        }
    }
    ctx->pc = 0x123BACu;
    // 0x123bac: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x123BACu;
    {
        const bool branch_taken_0x123bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BACu;
        // 0x123bb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bac) {
            ctx->pc = 0x123B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123b68;
        }
    }
    ctx->pc = 0x123BB4u;
label_123bb4:
    // 0x123bb4: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x123bb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x123bb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bbc: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x123bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_123bc0:
    // 0x123bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x123BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BCCu;
        // 0x123bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123BD4u;
label_123bd4:
    // 0x123bd4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x123bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123bd8: 0xadb10054  sw          $s1, 0x54($t5)
    ctx->pc = 0x123bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 17));
    // 0x123bdc: 0xa5af000c  sh          $t7, 0xC($t5)
    ctx->pc = 0x123bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x123be0: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x123be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123be4: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x123be4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
    // 0x123be8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x123be8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123bec: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x123becu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x123bf0: 0xa5af000e  sh          $t7, 0xE($t5)
    ctx->pc = 0x123bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 14), (uint16_t)GPR_U32(ctx, 15));
    // 0x123bf4: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x123bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
    // 0x123bf8: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x123bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x123bfc: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x123bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x123c00: 0xada00018  sw          $zero, 0x18($t5)
    ctx->pc = 0x123c00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 0));
    // 0x123c04: 0xada00030  sw          $zero, 0x30($t5)
    ctx->pc = 0x123c04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 0));
    // 0x123c08: 0xada00034  sw          $zero, 0x34($t5)
    ctx->pc = 0x123c08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 0));
    // 0x123c0c: 0xada00044  sw          $zero, 0x44($t5)
    ctx->pc = 0x123c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 0));
    // 0x123c10: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x123C10u;
    {
        const bool branch_taken_0x123c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C10u;
        // 0x123c14: 0xada00048  sw          $zero, 0x48($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c10) {
            ctx->pc = 0x123BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123bc0;
        }
    }
    ctx->pc = 0x123C18u;
}
