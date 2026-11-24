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

// Function: sub_002C0870
// Address: 0x2c0870 - 0x2c091c
void sub_002C0870_0x2c0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0870_0x2c0870");
#endif

    switch (ctx->pc) {
        case 0x2c08e8u: goto label_2c08e8;
        default: break;
    }

    ctx->pc = 0x2c0870u;

    // 0x2c0870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0878: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c0878u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c087c: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2c087cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c0880: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x2c0880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2c0884: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2c0884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c0888: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2c0888u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c088c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C088Cu;
    {
        const bool branch_taken_0x2c088c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c088c) {
            ctx->pc = 0x2C0908u;
            goto label_2c0908;
        }
    }
    ctx->pc = 0x2C0894u;
    // 0x2c0894: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c0894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c0898: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C0898u;
    {
        const bool branch_taken_0x2c0898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0898u;
        // 0x2c089c: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0898) {
            ctx->pc = 0x2C08F0u;
            goto label_2c08f0;
        }
    }
    ctx->pc = 0x2C08A0u;
    // 0x2c08a0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C08A0u;
    {
        const bool branch_taken_0x2c08a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08A0u;
        // 0x2c08a4: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08a0) {
            ctx->pc = 0x2C08E0u;
            goto label_2c08e0;
        }
    }
    ctx->pc = 0x2C08A8u;
    // 0x2c08a8: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c08a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c08ac: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c08acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c08b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c08b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c08b8: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c08b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c08bc: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c08bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c08c0: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c08c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c08c4: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c08c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c08c8: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c08c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c08cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c08d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c08d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C08D4u;
    {
        const bool branch_taken_0x2c08d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08D4u;
        // 0x2c08d8: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08d4) {
            ctx->pc = 0x2C0900u;
            goto label_2c0900;
        }
    }
    ctx->pc = 0x2C08DCu;
    // 0x2c08dc: 0x0  nop
    ctx->pc = 0x2c08dcu;
    // NOP
label_2c08e0:
    // 0x2c08e0: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C08E0u;
    SET_GPR_U32(ctx, 31, 0x2C08E8u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C08E0u, 0x2C08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08E8u;
label_2c08e8:
    // 0x2c08e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C08E8u;
    {
        const bool branch_taken_0x2c08e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c08e8) {
            ctx->pc = 0x2C08F8u;
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C08F0u;
label_2c08f0:
    // 0x2c08f0: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c08f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c08f4: 0x0  nop
    ctx->pc = 0x2c08f4u;
    // NOP
label_2c08f8:
    // 0x2c08f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c08f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08fc: 0x0  nop
    ctx->pc = 0x2c08fcu;
    // NOP
label_2c0900:
    // 0x2c0900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0900u;
    {
        const bool branch_taken_0x2c0900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0900) {
            ctx->pc = 0x2C0910u;
            goto label_2c0910;
        }
    }
    ctx->pc = 0x2C0908u;
label_2c0908:
    // 0x2c0908: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c0908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c090c: 0x0  nop
    ctx->pc = 0x2c090cu;
    // NOP
label_2c0910:
    // 0x2c0910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0914: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0914u;
        // 0x2c0918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C091Cu;
}
