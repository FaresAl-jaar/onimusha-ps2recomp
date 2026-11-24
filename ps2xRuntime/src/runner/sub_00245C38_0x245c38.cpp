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

// Function: sub_00245C38
// Address: 0x245c38 - 0x245d04
void sub_00245C38_0x245c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245C38_0x245c38");
#endif

    switch (ctx->pc) {
        case 0x245c80u: goto label_245c80;
        case 0x245c90u: goto label_245c90;
        case 0x245ca0u: goto label_245ca0;
        case 0x245cacu: goto label_245cac;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cdcu: goto label_245cdc;
        default: break;
    }

    ctx->pc = 0x245c38u;

    // 0x245c38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245c40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x245c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x245c44: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x245c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x245c48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x245c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x245c4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x245c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x245c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x245c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x245c58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x245c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c5c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x245c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x245c60: 0x34139000  ori         $s3, $zero, 0x9000
    ctx->pc = 0x245c60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x245c64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x245c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x245c68: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x245c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245c6c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x245c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x245c70: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x245c70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
    // 0x245c74: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x245c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x245c78: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x245c78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x245c7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x245c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_245c80:
    // 0x245c80: 0x14540017  bne         $v0, $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x245C80u;
    {
        const bool branch_taken_0x245c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x245C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C80u;
        // 0x245c84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c80) {
            ctx->pc = 0x245CE0u;
            goto label_245ce0;
        }
    }
    ctx->pc = 0x245C88u;
    // 0x245c88: 0xc091a44  jal         func_246910
    ctx->pc = 0x245C88u;
    SET_GPR_U32(ctx, 31, 0x245C90u);
    ctx->pc = 0x245C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C88u;
    // 0x245c8c: 0x24041100  addiu       $a0, $zero, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245C88u, 0x245C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C90u;
label_245c90:
    // 0x245c90: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x245c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x245c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x245c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245c98: 0xc091aea  jal         func_246BA8
    ctx->pc = 0x245C98u;
    SET_GPR_U32(ctx, 31, 0x245CA0u);
    ctx->pc = 0x245C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C98u;
    // 0x245c9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246BA8u, 0x245C98u, 0x245CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CA0u;
label_245ca0:
    // 0x245ca0: 0x24041101  addiu       $a0, $zero, 0x1101
    ctx->pc = 0x245ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x245ca4: 0xc091a44  jal         func_246910
    ctx->pc = 0x245CA4u;
    SET_GPR_U32(ctx, 31, 0x245CACu);
    ctx->pc = 0x245CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CA4u;
    // 0x245ca8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245CA4u, 0x245CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CACu;
label_245cac:
    // 0x245cac: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245CACu;
    {
        const bool branch_taken_0x245cac = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x245cac) {
            ctx->pc = 0x245CC0u;
            goto label_245cc0;
        }
    }
    ctx->pc = 0x245CB4u;
    // 0x245cb4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x245cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x245cb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245CB8u;
    {
        const bool branch_taken_0x245cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CB8u;
        // 0x245cbc: 0xa2360002  sb          $s6, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cb8) {
            ctx->pc = 0x245CDCu;
            goto label_245cdc;
        }
    }
    ctx->pc = 0x245CC0u;
label_245cc0:
    // 0x245cc0: 0xc0916f8  jal         func_245BE0
    ctx->pc = 0x245CC0u;
    SET_GPR_U32(ctx, 31, 0x245CC8u);
    ctx->pc = 0x245CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CC0u;
    // 0x245cc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245BE0u, 0x245CC0u, 0x245CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CC8u;
label_245cc8:
    // 0x245cc8: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x245cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x245ccc: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x245CCCu;
    {
        const bool branch_taken_0x245ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ccc) {
            ctx->pc = 0x245CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245CCCu;
            // 0x245cd0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245c80;
        }
    }
    ctx->pc = 0x245CD4u;
    // 0x245cd4: 0xc044332  jal         func_110CC8
    ctx->pc = 0x245CD4u;
    SET_GPR_U32(ctx, 31, 0x245CDCu);
    ctx->pc = 0x245CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CD4u;
    // 0x245cd8: 0x26a4c8d0  addiu       $a0, $s5, -0x3730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x245CD4u, 0x245CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CDCu;
label_245cdc:
    // 0x245cdc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x245cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_245ce0:
    // 0x245ce0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x245ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245ce4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x245ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245ce8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x245ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245cec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x245cecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245cf0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x245cf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245cf4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x245cf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245cf8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x245cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x245cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x245CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CFCu;
        // 0x245d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245D04u;
}
