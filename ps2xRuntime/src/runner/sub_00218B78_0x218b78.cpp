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

// Function: sub_00218B78
// Address: 0x218b78 - 0x218c20
void sub_00218B78_0x218b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218B78_0x218b78");
#endif

    switch (ctx->pc) {
        case 0x218bb4u: goto label_218bb4;
        case 0x218bc8u: goto label_218bc8;
        case 0x218becu: goto label_218bec;
        case 0x218c08u: goto label_218c08;
        default: break;
    }

    ctx->pc = 0x218b78u;

    // 0x218b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218b7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x218b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x218b80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x218b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x218b88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x218b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x218b90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218b94: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x218b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x218b98: 0x8c921fc0  lw          $s2, 0x1FC0($a0)
    ctx->pc = 0x218b98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x218b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x218b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218ba0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x218ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x218ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x218BA4u;
    {
        const bool branch_taken_0x218ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BA4u;
        // 0x218ba8: 0x26441094  addiu       $a0, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ba4) {
            ctx->pc = 0x218BB4u;
            goto label_218bb4;
        }
    }
    ctx->pc = 0x218BACu;
    // 0x218bac: 0xc086366  jal         func_218D98
    ctx->pc = 0x218BACu;
    SET_GPR_U32(ctx, 31, 0x218BB4u);
    ctx->pc = 0x218BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BACu;
    // 0x218bb0: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218D98u, 0x218BACu, 0x218BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BB4u;
label_218bb4:
    // 0x218bb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x218bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bbc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x218bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x218bc0: 0xc086308  jal         func_218C20
    ctx->pc = 0x218BC0u;
    SET_GPR_U32(ctx, 31, 0x218BC8u);
    ctx->pc = 0x218BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BC0u;
    // 0x218bc4: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C20u, 0x218BC0u, 0x218BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BC8u;
label_218bc8:
    // 0x218bc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218bcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x218bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x218bd0: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x218BD0u;
    {
        const bool branch_taken_0x218bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x218BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BD0u;
        // 0x218bd4: 0x26451094  addiu       $a1, $s2, 0x1094 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bd0) {
            ctx->pc = 0x218C00u;
            goto label_218c00;
        }
    }
    ctx->pc = 0x218BD8u;
    // 0x218bd8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x218bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x218bdc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x218bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x218be0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x218be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218be4: 0xc049522  jal         func_125488
    ctx->pc = 0x218BE4u;
    SET_GPR_U32(ctx, 31, 0x218BECu);
    ctx->pc = 0x218BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BE4u;
    // 0x218be8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x218BE4u, 0x218BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BECu;
label_218bec:
    // 0x218bec: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x218becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x218bf0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x218bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218bf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x218BF4u;
    {
        const bool branch_taken_0x218bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BF4u;
        // 0x218bf8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bf4) {
            ctx->pc = 0x218C08u;
            goto label_218c08;
        }
    }
    ctx->pc = 0x218BFCu;
    // 0x218bfc: 0x0  nop
    ctx->pc = 0x218bfcu;
    // NOP
label_218c00:
    // 0x218c00: 0xc086366  jal         func_218D98
    ctx->pc = 0x218C00u;
    SET_GPR_U32(ctx, 31, 0x218C08u);
    ctx->pc = 0x218C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C00u;
    // 0x218c04: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218D98u, 0x218C00u, 0x218C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C08u;
label_218c08:
    // 0x218c08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x218c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218c0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x218c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218c10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x218c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218c14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218c18: 0x3e00008  jr          $ra
    ctx->pc = 0x218C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C18u;
        // 0x218c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218C20u;
}
