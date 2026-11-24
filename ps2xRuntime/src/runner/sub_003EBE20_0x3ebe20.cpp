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

// Function: sub_003EBE20
// Address: 0x3ebe20 - 0x3ebee8
void sub_003EBE20_0x3ebe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBE20_0x3ebe20");
#endif

    switch (ctx->pc) {
        case 0x3ebeb4u: goto label_3ebeb4;
        default: break;
    }

    ctx->pc = 0x3ebe20u;

    // 0x3ebe20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ebe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ebe24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ebe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebe28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ebe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ebe2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ebe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ebe30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ebe30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebe34: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3ebe34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ebe38: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3EBE38u;
    {
        const bool branch_taken_0x3ebe38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ebe38) {
            ctx->pc = 0x3EBE78u;
            goto label_3ebe78;
        }
    }
    ctx->pc = 0x3EBE40u;
    // 0x3ebe40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBE40u;
    {
        const bool branch_taken_0x3ebe40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe40) {
            ctx->pc = 0x3EBE50u;
            goto label_3ebe50;
        }
    }
    ctx->pc = 0x3EBE48u;
    // 0x3ebe48: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3EBE48u;
    {
        const bool branch_taken_0x3ebe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe48) {
            ctx->pc = 0x3EBED8u;
            goto label_3ebed8;
        }
    }
    ctx->pc = 0x3EBE50u;
label_3ebe50:
    // 0x3ebe50: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ebe50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebe54: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ebe54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebe58: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3ebe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ebe5c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3ebe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ebe60: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3ebe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ebe64: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x3ebe64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ebe68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ebe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebe6c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ebe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ebe70: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ebe70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3ebe74: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3ebe74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ebe78:
    // 0x3ebe78: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x3ebe78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3ebe7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3EBE7Cu;
    {
        const bool branch_taken_0x3ebe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe7c) {
            ctx->pc = 0x3EBEA8u;
            goto label_3ebea8;
        }
    }
    ctx->pc = 0x3EBE84u;
    // 0x3ebe84: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ebe84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebe88: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3ebe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ebe8c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ebe8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ebe90: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ebe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ebe94: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3ebe94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ebe98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ebe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ebe9c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ebe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebea0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ebea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ebea4: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ebea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_3ebea8:
    // 0x3ebea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ebea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebeac: 0xc0fa410  jal         func_3E9040
    ctx->pc = 0x3EBEACu;
    SET_GPR_U32(ctx, 31, 0x3EBEB4u);
    ctx->pc = 0x3EBEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBEACu;
    // 0x3ebeb0: 0x26050024  addiu       $a1, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9040u, 0x3EBEACu, 0x3EBEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBEB4u;
label_3ebeb4:
    // 0x3ebeb4: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3ebeb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3ebeb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBEB8u;
    {
        const bool branch_taken_0x3ebeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebeb8) {
            ctx->pc = 0x3EBEC8u;
            goto label_3ebec8;
        }
    }
    ctx->pc = 0x3EBEC0u;
    // 0x3ebec0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ebec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ebec4: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3ebec4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3ebec8:
    // 0x3ebec8: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3ebec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3ebecc: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EBECCu;
    {
        const bool branch_taken_0x3ebecc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBECCu;
        // 0x3ebed0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebecc) {
            ctx->pc = 0x3EBED8u;
            goto label_3ebed8;
        }
    }
    ctx->pc = 0x3EBED4u;
    // 0x3ebed4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ebed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ebed8:
    // 0x3ebed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ebed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ebedc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ebedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebee0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBEE0u;
        // 0x3ebee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBEE8u;
}
