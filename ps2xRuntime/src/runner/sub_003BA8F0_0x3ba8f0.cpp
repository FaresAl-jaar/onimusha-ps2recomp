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

// Function: sub_003BA8F0
// Address: 0x3ba8f0 - 0x3ba9d8
void sub_003BA8F0_0x3ba8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA8F0_0x3ba8f0");
#endif

    switch (ctx->pc) {
        case 0x3ba97cu: goto label_3ba97c;
        case 0x3ba9a8u: goto label_3ba9a8;
        default: break;
    }

    ctx->pc = 0x3ba8f0u;

    // 0x3ba8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba8f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ba8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ba8f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ba8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ba8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ba8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ba900: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x3ba900u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ba904: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3BA904u;
    {
        const bool branch_taken_0x3ba904 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA904u;
        // 0x3ba908: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba904) {
            ctx->pc = 0x3BA988u;
            goto label_3ba988;
        }
    }
    ctx->pc = 0x3BA90Cu;
    // 0x3ba90c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba910: 0x10c50013  beq         $a2, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BA910u;
    {
        const bool branch_taken_0x3ba910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ba910) {
            ctx->pc = 0x3BA960u;
            goto label_3ba960;
        }
    }
    ctx->pc = 0x3BA918u;
    // 0x3ba918: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA918u;
    {
        const bool branch_taken_0x3ba918 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba918) {
            ctx->pc = 0x3BA928u;
            goto label_3ba928;
        }
    }
    ctx->pc = 0x3BA920u;
    // 0x3ba920: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3BA920u;
    {
        const bool branch_taken_0x3ba920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba920) {
            ctx->pc = 0x3BA9C8u;
            goto label_3ba9c8;
        }
    }
    ctx->pc = 0x3BA928u;
label_3ba928:
    // 0x3ba928: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ba928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba92c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ba92cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba930: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3ba930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3ba934: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ba934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ba938: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3ba938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3ba93c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3ba93cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ba940: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ba940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ba944: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3ba944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3ba948: 0xa2052b83  sb          $a1, 0x2B83($s0)
    ctx->pc = 0x3ba948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ba94c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3ba94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3ba950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba954: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3BA954u;
    {
        const bool branch_taken_0x3ba954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA954u;
        // 0x3ba958: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba954) {
            ctx->pc = 0x3BA9C8u;
            goto label_3ba9c8;
        }
    }
    ctx->pc = 0x3BA95Cu;
    // 0x3ba95c: 0x0  nop
    ctx->pc = 0x3ba95cu;
    // NOP
label_3ba960:
    // 0x3ba960: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3ba960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3ba964: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3ba964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3ba968: 0x28630037  slti        $v1, $v1, 0x37
    ctx->pc = 0x3ba968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x3ba96c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BA96Cu;
    {
        const bool branch_taken_0x3ba96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba96c) {
            ctx->pc = 0x3BA9C8u;
            goto label_3ba9c8;
        }
    }
    ctx->pc = 0x3BA974u;
    // 0x3ba974: 0xc0ef340  jal         func_3BCD00
    ctx->pc = 0x3BA974u;
    SET_GPR_U32(ctx, 31, 0x3BA97Cu);
    ctx->pc = 0x3BCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD00u, 0x3BA974u, 0x3BA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA97Cu;
label_3ba97c:
    // 0x3ba97c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3ba97cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3ba980: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba984: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ba984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ba988:
    // 0x3ba988: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3ba988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ba98c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3BA98Cu;
    {
        const bool branch_taken_0x3ba98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA98Cu;
        // 0x3ba990: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba98c) {
            ctx->pc = 0x3BA9C8u;
            goto label_3ba9c8;
        }
    }
    ctx->pc = 0x3BA994u;
    // 0x3ba994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba998: 0xa2032b83  sb          $v1, 0x2B83($s0)
    ctx->pc = 0x3ba998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ba99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba9a0: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BA9A0u;
    SET_GPR_U32(ctx, 31, 0x3BA9A8u);
    ctx->pc = 0x3BA9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA9A0u;
    // 0x3ba9a4: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BA9A0u, 0x3BA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA9A8u;
label_3ba9a8:
    // 0x3ba9a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA9A8u;
    {
        const bool branch_taken_0x3ba9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA9A8u;
        // 0x3ba9ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba9a8) {
            ctx->pc = 0x3BA9B8u;
            goto label_3ba9b8;
        }
    }
    ctx->pc = 0x3BA9B0u;
    // 0x3ba9b0: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3ba9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba9b4: 0x0  nop
    ctx->pc = 0x3ba9b4u;
    // NOP
label_3ba9b8:
    // 0x3ba9b8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3ba9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3ba9bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba9c0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ba9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ba9c4: 0x0  nop
    ctx->pc = 0x3ba9c4u;
    // NOP
label_3ba9c8:
    // 0x3ba9c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ba9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ba9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA9D0u;
        // 0x3ba9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA9D8u;
}
