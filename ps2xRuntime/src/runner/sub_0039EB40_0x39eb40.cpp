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

// Function: sub_0039EB40
// Address: 0x39eb40 - 0x39ec30
void sub_0039EB40_0x39eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EB40_0x39eb40");
#endif

    switch (ctx->pc) {
        case 0x39eb88u: goto label_39eb88;
        case 0x39ebb0u: goto label_39ebb0;
        case 0x39ebd4u: goto label_39ebd4;
        default: break;
    }

    ctx->pc = 0x39eb40u;

    // 0x39eb40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39eb44: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39eb44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x39eb48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x39eb4c: 0x2508ead0  addiu       $t0, $t0, -0x1530
    ctx->pc = 0x39eb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961872));
    // 0x39eb50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39eb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39eb54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39eb58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39eb58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39eb60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39eb60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39eb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39eb68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39eb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb6c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x39eb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39eb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39eb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39eb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb7c: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x39eb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x39eb80: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x39EB80u;
    SET_GPR_U32(ctx, 31, 0x39EB88u);
    ctx->pc = 0x39EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EB80u;
    // 0x39eb84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x39EB80u, 0x39EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EB88u;
label_39eb88:
    // 0x39eb88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39eb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb8c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x39EB8Cu;
    {
        const bool branch_taken_0x39eb8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB8Cu;
        // 0x39eb90: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb8c) {
            ctx->pc = 0x39EC08u;
            goto label_39ec08;
        }
    }
    ctx->pc = 0x39EB94u;
    // 0x39eb94: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x39eb94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39eb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb9c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x39eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x39eba0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x39eba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x39eba4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x39eba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eba8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x39EBA8u;
    SET_GPR_U32(ctx, 31, 0x39EBB0u);
    ctx->pc = 0x39EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBA8u;
    // 0x39ebac: 0x264a0020  addiu       $t2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x39EBA8u, 0x39EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBB0u;
label_39ebb0:
    // 0x39ebb0: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39ebb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ebb8: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x39ebb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x39ebbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ebc0: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x39ebc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x39ebc4: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x39ebc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x39ebc8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x39ebc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ebcc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x39EBCCu;
    SET_GPR_U32(ctx, 31, 0x39EBD4u);
    ctx->pc = 0x39EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBCCu;
    // 0x39ebd0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x39EBCCu, 0x39EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBD4u;
label_39ebd4:
    // 0x39ebd4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x39ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x39ebd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x39ebdc: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x39ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x39ebe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ebe4: 0xae030558  sw          $v1, 0x558($s0)
    ctx->pc = 0x39ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 3));
    // 0x39ebe8: 0xa211055e  sb          $s1, 0x55E($s0)
    ctx->pc = 0x39ebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1374), (uint8_t)GPR_U32(ctx, 17));
    // 0x39ebec: 0xa200055f  sb          $zero, 0x55F($s0)
    ctx->pc = 0x39ebecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1375), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ebf0: 0xa600055c  sh          $zero, 0x55C($s0)
    ctx->pc = 0x39ebf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1372), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ebf4: 0xa2000560  sb          $zero, 0x560($s0)
    ctx->pc = 0x39ebf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1376), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ebf8: 0xa6420574  sh          $v0, 0x574($s2)
    ctx->pc = 0x39ebf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1396), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ebfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39EBFCu;
    {
        const bool branch_taken_0x39ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBFCu;
        // 0x39ec00: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ebfc) {
            ctx->pc = 0x39EC10u;
            goto label_39ec10;
        }
    }
    ctx->pc = 0x39EC04u;
    // 0x39ec04: 0x0  nop
    ctx->pc = 0x39ec04u;
    // NOP
label_39ec08:
    // 0x39ec08: 0xa6400574  sh          $zero, 0x574($s2)
    ctx->pc = 0x39ec08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1396), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ec0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39ec0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ec10:
    // 0x39ec10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39ec14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39ec14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39ec18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39ec18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39ec1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39ec1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ec20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39ec20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ec24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39ec24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ec28: 0x3e00008  jr          $ra
    ctx->pc = 0x39EC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC28u;
        // 0x39ec2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EC30u;
}
