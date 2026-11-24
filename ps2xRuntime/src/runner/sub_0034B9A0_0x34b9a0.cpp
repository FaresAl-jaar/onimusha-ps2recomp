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

// Function: sub_0034B9A0
// Address: 0x34b9a0 - 0x34ba50
void sub_0034B9A0_0x34b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B9A0_0x34b9a0");
#endif

    switch (ctx->pc) {
        case 0x34b9bcu: goto label_34b9bc;
        default: break;
    }

    ctx->pc = 0x34b9a0u;

    // 0x34b9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b9a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b9b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b9b4: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x34B9B4u;
    SET_GPR_U32(ctx, 31, 0x34B9BCu);
    ctx->pc = 0x34B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B9B4u;
    // 0x34b9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x34B9B4u, 0x34B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9BCu;
label_34b9bc:
    // 0x34b9bc: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x34b9bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x34b9c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34b9c4: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x34B9C4u;
    {
        const bool branch_taken_0x34b9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x34B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B9C4u;
        // 0x34b9c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b9c4) {
            ctx->pc = 0x34BA38u;
            goto label_34ba38;
        }
    }
    ctx->pc = 0x34B9CCu;
    // 0x34b9cc: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34B9CCu;
    {
        const bool branch_taken_0x34b9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b9cc) {
            ctx->pc = 0x34BA18u;
            goto label_34ba18;
        }
    }
    ctx->pc = 0x34B9D4u;
    // 0x34b9d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B9D4u;
    {
        const bool branch_taken_0x34b9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b9d4) {
            ctx->pc = 0x34B9E8u;
            goto label_34b9e8;
        }
    }
    ctx->pc = 0x34B9DCu;
    // 0x34b9dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x34B9DCu;
    {
        const bool branch_taken_0x34b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b9dc) {
            ctx->pc = 0x34BA40u;
            goto label_34ba40;
        }
    }
    ctx->pc = 0x34B9E4u;
    // 0x34b9e4: 0x0  nop
    ctx->pc = 0x34b9e4u;
    // NOP
label_34b9e8:
    // 0x34b9e8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x34b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b9ec: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x34b9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b9f0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x34b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x34b9f4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x34b9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x34b9f8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x34b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x34b9fc: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x34b9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ba00: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x34ba00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x34ba04: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x34ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x34ba08: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x34ba08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x34ba0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ba10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34BA10u;
    {
        const bool branch_taken_0x34ba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA10u;
        // 0x34ba14: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba10) {
            ctx->pc = 0x34BA40u;
            goto label_34ba40;
        }
    }
    ctx->pc = 0x34BA18u;
label_34ba18:
    // 0x34ba18: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x34ba18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x34ba1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34BA1Cu;
    {
        const bool branch_taken_0x34ba1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA1Cu;
        // 0x34ba20: 0x24030099  addiu       $v1, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba1c) {
            ctx->pc = 0x34BA40u;
            goto label_34ba40;
        }
    }
    ctx->pc = 0x34BA24u;
    // 0x34ba24: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x34ba24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ba28: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x34ba28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x34ba2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ba30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34BA30u;
    {
        const bool branch_taken_0x34ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA30u;
        // 0x34ba34: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba30) {
            ctx->pc = 0x34BA40u;
            goto label_34ba40;
        }
    }
    ctx->pc = 0x34BA38u;
label_34ba38:
    // 0x34ba38: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x34ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34ba3c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x34ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_34ba40:
    // 0x34ba40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ba44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ba44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ba48: 0x3e00008  jr          $ra
    ctx->pc = 0x34BA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA48u;
        // 0x34ba4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BA50u;
}
