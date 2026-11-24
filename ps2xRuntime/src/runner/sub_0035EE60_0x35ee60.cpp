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

// Function: sub_0035EE60
// Address: 0x35ee60 - 0x35ef40
void sub_0035EE60_0x35ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE60_0x35ee60");
#endif

    switch (ctx->pc) {
        case 0x35ee98u: goto label_35ee98;
        case 0x35ef24u: goto label_35ef24;
        default: break;
    }

    ctx->pc = 0x35ee60u;

    // 0x35ee60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ee64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ee68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ee6c: 0x90830514  lbu         $v1, 0x514($a0)
    ctx->pc = 0x35ee6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1300)));
    // 0x35ee70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35EE70u;
    {
        const bool branch_taken_0x35ee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE70u;
        // 0x35ee74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee70) {
            ctx->pc = 0x35EE88u;
            goto label_35ee88;
        }
    }
    ctx->pc = 0x35EE78u;
    // 0x35ee78: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x35ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x35ee7c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x35ee7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x35ee80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x35EE80u;
    {
        const bool branch_taken_0x35ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE80u;
        // 0x35ee84: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee80) {
            ctx->pc = 0x35EF30u;
            goto label_35ef30;
        }
    }
    ctx->pc = 0x35EE88u;
label_35ee88:
    // 0x35ee88: 0x8e050500  lw          $a1, 0x500($s0)
    ctx->pc = 0x35ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x35ee8c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x35ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x35ee90: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x35EE90u;
    SET_GPR_U32(ctx, 31, 0x35EE98u);
    ctx->pc = 0x35EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE90u;
    // 0x35ee94: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x35EE90u, 0x35EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE98u;
label_35ee98:
    // 0x35ee98: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x35EE98u;
    {
        const bool branch_taken_0x35ee98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ee98) {
            ctx->pc = 0x35EF30u;
            goto label_35ef30;
        }
    }
    ctx->pc = 0x35EEA0u;
    // 0x35eea0: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x35eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x35eea4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x35eea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35eea8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x35EEA8u;
    {
        const bool branch_taken_0x35eea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eea8) {
            ctx->pc = 0x35EF30u;
            goto label_35ef30;
        }
    }
    ctx->pc = 0x35EEB0u;
    // 0x35eeb0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x35eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x35eeb4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x35eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x35eeb8: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x35eeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x35eebc: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x35eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x35eec0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x35eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x35eec4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35eec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35eec8: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x35eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x35eecc: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x35eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35eed0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35eed4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x35eed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35eed8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35eedc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x35eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35eee0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x35EEE0u;
    {
        const bool branch_taken_0x35eee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EEE0u;
        // 0x35eee4: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eee0) {
            ctx->pc = 0x35EF30u;
            goto label_35ef30;
        }
    }
    ctx->pc = 0x35EEE8u;
    // 0x35eee8: 0x8e030510  lw          $v1, 0x510($s0)
    ctx->pc = 0x35eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35eeec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x35eeecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35eef0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x35eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x35eef4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x35eef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x35eef8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x35eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x35eefc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x35eefcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x35ef00: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x35ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x35ef04: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x35ef04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x35ef08: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x35ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x35ef0c: 0x8e020510  lw          $v0, 0x510($s0)
    ctx->pc = 0x35ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35ef10: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x35ef10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x35ef14: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x35ef14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x35ef18: 0x8e050510  lw          $a1, 0x510($s0)
    ctx->pc = 0x35ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35ef1c: 0xc0a837c  jal         func_2A0DF0
    ctx->pc = 0x35EF1Cu;
    SET_GPR_U32(ctx, 31, 0x35EF24u);
    ctx->pc = 0x35EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF1Cu;
    // 0x35ef20: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0DF0u, 0x35EF1Cu, 0x35EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF24u;
label_35ef24:
    // 0x35ef24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ef28: 0xa2030514  sb          $v1, 0x514($s0)
    ctx->pc = 0x35ef28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
    // 0x35ef2c: 0x0  nop
    ctx->pc = 0x35ef2cu;
    // NOP
label_35ef30:
    // 0x35ef30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ef34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ef34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ef38: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF38u;
        // 0x35ef3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF40u;
}
