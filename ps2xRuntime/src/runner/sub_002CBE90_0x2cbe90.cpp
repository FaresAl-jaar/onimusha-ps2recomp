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

// Function: sub_002CBE90
// Address: 0x2cbe90 - 0x2cbf8c
void sub_002CBE90_0x2cbe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBE90_0x2cbe90");
#endif

    switch (ctx->pc) {
        case 0x2cbed0u: goto label_2cbed0;
        case 0x2cbf68u: goto label_2cbf68;
        default: break;
    }

    ctx->pc = 0x2cbe90u;

    // 0x2cbe90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cbe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cbe94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cbe98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cbe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cbe9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cbe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cbea0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2cbea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbea8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cbea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbeac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cbeb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cbeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbeb4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2cbeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbeb8: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x2cbeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x2cbebc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cbebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cbec0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cbec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbec4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2cbec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbec8: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x2CBEC8u;
    SET_GPR_U32(ctx, 31, 0x2CBED0u);
    ctx->pc = 0x2CBECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEC8u;
    // 0x2cbecc: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x2CBEC8u, 0x2CBED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBED0u;
label_2cbed0:
    // 0x2cbed0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cbed4: 0xafb3005c  sw          $s3, 0x5C($sp)
    ctx->pc = 0x2cbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
    // 0x2cbed8: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x2cbed8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cbedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbee0: 0xa3b20051  sb          $s2, 0x51($sp)
    ctx->pc = 0x2cbee0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 18));
    // 0x2cbee4: 0xa3a00052  sb          $zero, 0x52($sp)
    ctx->pc = 0x2cbee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbee8: 0xa3a00053  sb          $zero, 0x53($sp)
    ctx->pc = 0x2cbee8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbeec: 0xa3a30054  sb          $v1, 0x54($sp)
    ctx->pc = 0x2cbeecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cbef0: 0xa3a00055  sb          $zero, 0x55($sp)
    ctx->pc = 0x2cbef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbef4: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x2cbef4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbef8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2cbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2cbefc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2cbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cbf00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBF00u;
    {
        const bool branch_taken_0x2cbf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf00) {
            ctx->pc = 0x2CBF20u;
            goto label_2cbf20;
        }
    }
    ctx->pc = 0x2CBF08u;
    // 0x2cbf08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cbf0c: 0xa3a30056  sb          $v1, 0x56($sp)
    ctx->pc = 0x2cbf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cbf10: 0xa3a30057  sb          $v1, 0x57($sp)
    ctx->pc = 0x2cbf10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cbf14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBF14u;
    {
        const bool branch_taken_0x2cbf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF14u;
        // 0x2cbf18: 0xa3a20059  sb          $v0, 0x59($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf14) {
            ctx->pc = 0x2CBF30u;
            goto label_2cbf30;
        }
    }
    ctx->pc = 0x2CBF1Cu;
    // 0x2cbf1c: 0x0  nop
    ctx->pc = 0x2cbf1cu;
    // NOP
label_2cbf20:
    // 0x2cbf20: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cbf24: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2cbf24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbf28: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x2cbf28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbf2c: 0xa3a20059  sb          $v0, 0x59($sp)
    ctx->pc = 0x2cbf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
label_2cbf30:
    // 0x2cbf30: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2cbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cbf34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2cbf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2cbf38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cbf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2cbf3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf40: 0xaf828a2c  sw          $v0, -0x75D4($gp)
    ctx->pc = 0x2cbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
    // 0x2cbf44: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2cbf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2cbf48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cbf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cbf4c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2cbf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cbf50: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2cbf50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cbf54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cbf54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf58: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbf5c: 0xaf908a34  sw          $s0, -0x75CC($gp)
    ctx->pc = 0x2cbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 16));
    // 0x2cbf60: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2CBF60u;
    SET_GPR_U32(ctx, 31, 0x2CBF68u);
    ctx->pc = 0x2CBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF60u;
    // 0x2cbf64: 0xaf808a30  sw          $zero, -0x75D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2CBF60u, 0x2CBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF68u;
label_2cbf68:
    // 0x2cbf68: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x2cbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x2cbf6c: 0xaf808a34  sw          $zero, -0x75CC($gp)
    ctx->pc = 0x2cbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 0));
    // 0x2cbf70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cbf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbf74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cbf74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbf78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cbf78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbf7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbf7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbf80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbf84: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF84u;
        // 0x2cbf88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF8Cu;
}
