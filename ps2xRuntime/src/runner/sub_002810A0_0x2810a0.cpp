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

// Function: sub_002810A0
// Address: 0x2810a0 - 0x281154
void sub_002810A0_0x2810a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002810A0_0x2810a0");
#endif

    switch (ctx->pc) {
        case 0x2810c0u: goto label_2810c0;
        case 0x28111cu: goto label_28111c;
        default: break;
    }

    ctx->pc = 0x2810a0u;

    // 0x2810a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2810a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2810a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2810a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2810a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2810ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2810acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2810b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2810b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2810b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810b8: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x2810B8u;
    SET_GPR_U32(ctx, 31, 0x2810C0u);
    ctx->pc = 0x2810BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810B8u;
    // 0x2810bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x2810B8u, 0x2810C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810C0u;
label_2810c0:
    // 0x2810c0: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x2810c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x2810c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2810c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2810c8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2810C8u;
    {
        const bool branch_taken_0x2810c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2810CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810C8u;
        // 0x2810cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810c8) {
            ctx->pc = 0x281130u;
            goto label_281130;
        }
    }
    ctx->pc = 0x2810D0u;
    // 0x2810d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2810d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2810d4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2810D4u;
    {
        const bool branch_taken_0x2810d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2810d4) {
            ctx->pc = 0x281120u;
            goto label_281120;
        }
    }
    ctx->pc = 0x2810DCu;
    // 0x2810dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2810DCu;
    {
        const bool branch_taken_0x2810dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2810dc) {
            ctx->pc = 0x2810F0u;
            goto label_2810f0;
        }
    }
    ctx->pc = 0x2810E4u;
    // 0x2810e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2810E4u;
    {
        const bool branch_taken_0x2810e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2810e4) {
            ctx->pc = 0x281140u;
            goto label_281140;
        }
    }
    ctx->pc = 0x2810ECu;
    // 0x2810ec: 0x0  nop
    ctx->pc = 0x2810ecu;
    // NOP
label_2810f0:
    // 0x2810f0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2810f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2810f4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2810f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2810f8: 0x240200c1  addiu       $v0, $zero, 0xC1
    ctx->pc = 0x2810f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x2810fc: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x2810fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x281100: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x281100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x281104: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x281104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x281108: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x281108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x28110c: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x28110cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x281110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281114: 0xc096d04  jal         func_25B410
    ctx->pc = 0x281114u;
    SET_GPR_U32(ctx, 31, 0x28111Cu);
    ctx->pc = 0x281118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281114u;
    // 0x281118: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x281114u, 0x28111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28111Cu;
label_28111c:
    // 0x28111c: 0x0  nop
    ctx->pc = 0x28111cu;
    // NOP
label_281120:
    // 0x281120: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x281120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x281124: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x281124u;
    {
        const bool branch_taken_0x281124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281124u;
        // 0x281128: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281124) {
            ctx->pc = 0x281140u;
            goto label_281140;
        }
    }
    ctx->pc = 0x28112Cu;
    // 0x28112c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x28112cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_281130:
    // 0x281130: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281130u;
    {
        const bool branch_taken_0x281130 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x281134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281130u;
        // 0x281134: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281130) {
            ctx->pc = 0x281140u;
            goto label_281140;
        }
    }
    ctx->pc = 0x281138u;
    // 0x281138: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x281138u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x28113c: 0x0  nop
    ctx->pc = 0x28113cu;
    // NOP
label_281140:
    // 0x281140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28114c: 0x3e00008  jr          $ra
    ctx->pc = 0x28114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28114Cu;
        // 0x281150: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281154u;
}
