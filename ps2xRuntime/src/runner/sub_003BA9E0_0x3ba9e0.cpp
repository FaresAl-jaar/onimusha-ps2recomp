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

// Function: sub_003BA9E0
// Address: 0x3ba9e0 - 0x3baac8
void sub_003BA9E0_0x3ba9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA9E0_0x3ba9e0");
#endif

    switch (ctx->pc) {
        case 0x3baa6cu: goto label_3baa6c;
        case 0x3baa98u: goto label_3baa98;
        default: break;
    }

    ctx->pc = 0x3ba9e0u;

    // 0x3ba9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba9e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ba9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ba9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ba9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ba9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ba9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ba9f0: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x3ba9f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ba9f4: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3BA9F4u;
    {
        const bool branch_taken_0x3ba9f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA9F4u;
        // 0x3ba9f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba9f4) {
            ctx->pc = 0x3BAA78u;
            goto label_3baa78;
        }
    }
    ctx->pc = 0x3BA9FCu;
    // 0x3ba9fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3baa00: 0x10c50013  beq         $a2, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BAA00u;
    {
        const bool branch_taken_0x3baa00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3baa00) {
            ctx->pc = 0x3BAA50u;
            goto label_3baa50;
        }
    }
    ctx->pc = 0x3BAA08u;
    // 0x3baa08: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BAA08u;
    {
        const bool branch_taken_0x3baa08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baa08) {
            ctx->pc = 0x3BAA18u;
            goto label_3baa18;
        }
    }
    ctx->pc = 0x3BAA10u;
    // 0x3baa10: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3BAA10u;
    {
        const bool branch_taken_0x3baa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baa10) {
            ctx->pc = 0x3BAAB8u;
            goto label_3baab8;
        }
    }
    ctx->pc = 0x3BAA18u;
label_3baa18:
    // 0x3baa18: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3baa18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3baa1c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3baa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3baa20: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3baa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3baa24: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3baa24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3baa28: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3baa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3baa2c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3baa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3baa30: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3baa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3baa34: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3baa34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3baa38: 0xa2052b83  sb          $a1, 0x2B83($s0)
    ctx->pc = 0x3baa38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 5));
    // 0x3baa3c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3baa3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3baa40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3baa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3baa44: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3BAA44u;
    {
        const bool branch_taken_0x3baa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA44u;
        // 0x3baa48: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa44) {
            ctx->pc = 0x3BAAB8u;
            goto label_3baab8;
        }
    }
    ctx->pc = 0x3BAA4Cu;
    // 0x3baa4c: 0x0  nop
    ctx->pc = 0x3baa4cu;
    // NOP
label_3baa50:
    // 0x3baa50: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3baa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3baa54: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3baa54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3baa58: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x3baa58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x3baa5c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BAA5Cu;
    {
        const bool branch_taken_0x3baa5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baa5c) {
            ctx->pc = 0x3BAAB8u;
            goto label_3baab8;
        }
    }
    ctx->pc = 0x3BAA64u;
    // 0x3baa64: 0xc0ef340  jal         func_3BCD00
    ctx->pc = 0x3BAA64u;
    SET_GPR_U32(ctx, 31, 0x3BAA6Cu);
    ctx->pc = 0x3BCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD00u, 0x3BAA64u, 0x3BAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAA6Cu;
label_3baa6c:
    // 0x3baa6c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3baa6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3baa70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3baa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3baa74: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3baa74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3baa78:
    // 0x3baa78: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3baa78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3baa7c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3BAA7Cu;
    {
        const bool branch_taken_0x3baa7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA7Cu;
        // 0x3baa80: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa7c) {
            ctx->pc = 0x3BAAB8u;
            goto label_3baab8;
        }
    }
    ctx->pc = 0x3BAA84u;
    // 0x3baa84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3baa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3baa88: 0xa2032b83  sb          $v1, 0x2B83($s0)
    ctx->pc = 0x3baa88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 3));
    // 0x3baa8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3baa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baa90: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BAA90u;
    SET_GPR_U32(ctx, 31, 0x3BAA98u);
    ctx->pc = 0x3BAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAA90u;
    // 0x3baa94: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BAA90u, 0x3BAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAA98u;
label_3baa98:
    // 0x3baa98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BAA98u;
    {
        const bool branch_taken_0x3baa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA98u;
        // 0x3baa9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa98) {
            ctx->pc = 0x3BAAA8u;
            goto label_3baaa8;
        }
    }
    ctx->pc = 0x3BAAA0u;
    // 0x3baaa0: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3baaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
    // 0x3baaa4: 0x0  nop
    ctx->pc = 0x3baaa4u;
    // NOP
label_3baaa8:
    // 0x3baaa8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3baaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3baaac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3baaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3baab0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3baab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3baab4: 0x0  nop
    ctx->pc = 0x3baab4u;
    // NOP
label_3baab8:
    // 0x3baab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3baab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3baabc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3baabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3baac0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAAC0u;
        // 0x3baac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAAC8u;
}
