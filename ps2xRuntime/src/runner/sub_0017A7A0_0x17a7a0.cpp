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

// Function: sub_0017A7A0
// Address: 0x17a7a0 - 0x17a85c
void sub_0017A7A0_0x17a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A7A0_0x17a7a0");
#endif

    switch (ctx->pc) {
        case 0x17a7b4u: goto label_17a7b4;
        case 0x17a850u: goto label_17a850;
        default: break;
    }

    ctx->pc = 0x17a7a0u;

    // 0x17a7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a7a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a7a8: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x17a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17a7ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17A7ACu;
    {
        const bool branch_taken_0x17a7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7ACu;
        // 0x17a7b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7ac) {
            ctx->pc = 0x17A7D0u;
            goto label_17a7d0;
        }
    }
    ctx->pc = 0x17A7B4u;
label_17a7b4:
    // 0x17a7b4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a7b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17a7bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17a7c0: 0x0  nop
    ctx->pc = 0x17a7c0u;
    // NOP
    // 0x17a7c4: 0x0  nop
    ctx->pc = 0x17a7c4u;
    // NOP
    // 0x17a7c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A7C8u;
    {
        const bool branch_taken_0x17a7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a7c8) {
            ctx->pc = 0x17A7B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a7b4;
        }
    }
    ctx->pc = 0x17A7D0u;
label_17a7d0:
    // 0x17a7d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a7d8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17A7D8u;
    {
        const bool branch_taken_0x17a7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7D8u;
        // 0x17a7dc: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7d8) {
            ctx->pc = 0x17A840u;
            goto label_17a840;
        }
    }
    ctx->pc = 0x17A7E0u;
    // 0x17a7e0: 0x27a4001d  addiu       $a0, $sp, 0x1D
    ctx->pc = 0x17a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 29));
    // 0x17a7e4: 0x93a3001c  lbu         $v1, 0x1C($sp)
    ctx->pc = 0x17a7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x17a7e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a7ec: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17A7ECu;
    {
        const bool branch_taken_0x17a7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7ECu;
        // 0x17a7f0: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7ec) {
            ctx->pc = 0x17A820u;
            goto label_17a820;
        }
    }
    ctx->pc = 0x17A7F4u;
    // 0x17a7f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A7F4u;
    {
        const bool branch_taken_0x17a7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a7f4) {
            ctx->pc = 0x17A808u;
            goto label_17a808;
        }
    }
    ctx->pc = 0x17A7FCu;
    // 0x17a7fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17A7FCu;
    {
        const bool branch_taken_0x17a7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a7fc) {
            ctx->pc = 0x17A838u;
            goto label_17a838;
        }
    }
    ctx->pc = 0x17A804u;
    // 0x17a804: 0x0  nop
    ctx->pc = 0x17a804u;
    // NOP
label_17a808:
    // 0x17a808: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x17a808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17a80c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17a810: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17A810u;
    {
        const bool branch_taken_0x17a810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A810u;
        // 0x17a814: 0xa3a0001e  sb          $zero, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a810) {
            ctx->pc = 0x17A838u;
            goto label_17a838;
        }
    }
    ctx->pc = 0x17A818u;
    // 0x17a818: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17A818u;
    {
        const bool branch_taken_0x17a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A818u;
        // 0x17a81c: 0x64050007  daddiu      $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a818) {
            ctx->pc = 0x17A838u;
            goto label_17a838;
        }
    }
    ctx->pc = 0x17A820u;
label_17a820:
    // 0x17a820: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x17a820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17a824: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17a828: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A828u;
    {
        const bool branch_taken_0x17a828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A828u;
        // 0x17a82c: 0xa3a0001e  sb          $zero, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a828) {
            ctx->pc = 0x17A838u;
            goto label_17a838;
        }
    }
    ctx->pc = 0x17A830u;
    // 0x17a830: 0x64050008  daddiu      $a1, $zero, 0x8
    ctx->pc = 0x17a830u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x17a834: 0x0  nop
    ctx->pc = 0x17a834u;
    // NOP
label_17a838:
    // 0x17a838: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x17a838u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17a83c: 0x0  nop
    ctx->pc = 0x17a83cu;
    // NOP
label_17a840:
    // 0x17a840: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x17a840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x17a844: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17a844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17a848: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x17A848u;
    SET_GPR_U32(ctx, 31, 0x17A850u);
    ctx->pc = 0x17A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A848u;
    // 0x17a84c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x17A848u, 0x17A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A850u;
label_17a850:
    // 0x17a850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a854: 0x3e00008  jr          $ra
    ctx->pc = 0x17A854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A854u;
        // 0x17a858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A85Cu;
}
