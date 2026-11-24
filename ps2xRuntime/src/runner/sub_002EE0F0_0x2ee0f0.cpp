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

// Function: sub_002EE0F0
// Address: 0x2ee0f0 - 0x2ee1b8
void sub_002EE0F0_0x2ee0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE0F0_0x2ee0f0");
#endif

    switch (ctx->pc) {
        case 0x2ee178u: goto label_2ee178;
        default: break;
    }

    ctx->pc = 0x2ee0f0u;

    // 0x2ee0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee0f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee0f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ee0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ee0fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee104: 0xa0832b20  sb          $v1, 0x2B20($a0)
    ctx->pc = 0x2ee104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11040), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee108: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2ee108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2ee10c: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE10Cu;
    {
        const bool branch_taken_0x2ee10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE10Cu;
        // 0x2ee110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee10c) {
            ctx->pc = 0x2EE158u;
            goto label_2ee158;
        }
    }
    ctx->pc = 0x2EE114u;
    // 0x2ee114: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE114u;
    {
        const bool branch_taken_0x2ee114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee114) {
            ctx->pc = 0x2EE128u;
            goto label_2ee128;
        }
    }
    ctx->pc = 0x2EE11Cu;
    // 0x2ee11c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2EE11Cu;
    {
        const bool branch_taken_0x2ee11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee11c) {
            ctx->pc = 0x2EE1A8u;
            goto label_2ee1a8;
        }
    }
    ctx->pc = 0x2EE124u;
    // 0x2ee124: 0x0  nop
    ctx->pc = 0x2ee124u;
    // NOP
label_2ee128:
    // 0x2ee128: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ee128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee12c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ee12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee130: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2ee130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2ee134: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2ee134u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ee138: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ee138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee13c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2ee13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee140: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee144: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ee144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee148: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ee148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2ee14c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EE14Cu;
    {
        const bool branch_taken_0x2ee14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE14Cu;
        // 0x2ee150: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee14c) {
            ctx->pc = 0x2EE1A8u;
            goto label_2ee1a8;
        }
    }
    ctx->pc = 0x2EE154u;
    // 0x2ee154: 0x0  nop
    ctx->pc = 0x2ee154u;
    // NOP
label_2ee158:
    // 0x2ee158: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ee158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2ee15c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE15Cu;
    {
        const bool branch_taken_0x2ee15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee15c) {
            ctx->pc = 0x2EE1A8u;
            goto label_2ee1a8;
        }
    }
    ctx->pc = 0x2EE164u;
    // 0x2ee164: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x2ee164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2ee168: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2ee168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2ee16c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2ee16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee170: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2EE170u;
    SET_GPR_U32(ctx, 31, 0x2EE178u);
    ctx->pc = 0x2EE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE170u;
    // 0x2ee174: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2EE170u, 0x2EE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE178u;
label_2ee178:
    // 0x2ee178: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x2ee178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee17c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee180: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ee180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee184: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee188: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ee188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ee18c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ee18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee190: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x2ee190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ee194: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ee194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ee198: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ee198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee19c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2ee19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2ee1a0: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2ee1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee1a4: 0x0  nop
    ctx->pc = 0x2ee1a4u;
    // NOP
label_2ee1a8:
    // 0x2ee1a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ee1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee1ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1B0u;
        // 0x2ee1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE1B8u;
}
