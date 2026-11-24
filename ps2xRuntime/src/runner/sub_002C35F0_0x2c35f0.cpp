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

// Function: sub_002C35F0
// Address: 0x2c35f0 - 0x2c36e4
void sub_002C35F0_0x2c35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C35F0_0x2c35f0");
#endif

    switch (ctx->pc) {
        case 0x2c36a0u: goto label_2c36a0;
        default: break;
    }

    ctx->pc = 0x2c35f0u;

    // 0x2c35f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c35f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c35f4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2c35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c35f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c35f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c35fc: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c35fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c3600: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3600u;
    {
        const bool branch_taken_0x2c3600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3600u;
        // 0x2c3604: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3600) {
            ctx->pc = 0x2C3618u;
            goto label_2c3618;
        }
    }
    ctx->pc = 0x2C3608u;
    // 0x2c3608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c3608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c360c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C360Cu;
    {
        const bool branch_taken_0x2c360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C360Cu;
        // 0x2c3610: 0x8442003e  lh          $v0, 0x3E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c360c) {
            ctx->pc = 0x2C3638u;
            goto label_2c3638;
        }
    }
    ctx->pc = 0x2C3614u;
    // 0x2c3614: 0x0  nop
    ctx->pc = 0x2c3614u;
    // NOP
label_2c3618:
    // 0x2c3618: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c3618u;
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
    // 0x2c361c: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2c361cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c3620: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c3620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c3624: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3628: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c3628u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c362c: 0x0  nop
    ctx->pc = 0x2c362cu;
    // NOP
    // 0x2c3630: 0x0  nop
    ctx->pc = 0x2c3630u;
    // NOP
    // 0x2c3634: 0x1010  mfhi        $v0
    ctx->pc = 0x2c3634u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2c3638:
    // 0x2c3638: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c363c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2c363cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2c3640: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C3640u;
    {
        const bool branch_taken_0x2c3640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3640) {
            ctx->pc = 0x2C36C0u;
            goto label_2c36c0;
        }
    }
    ctx->pc = 0x2C3648u;
    // 0x2c3648: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2c3648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c364c: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c364cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c3650: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C3650u;
    {
        const bool branch_taken_0x2c3650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3650) {
            ctx->pc = 0x2C36A8u;
            goto label_2c36a8;
        }
    }
    ctx->pc = 0x2C3658u;
    // 0x2c3658: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C3658u;
    {
        const bool branch_taken_0x2c3658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3658u;
        // 0x2c365c: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3658) {
            ctx->pc = 0x2C3698u;
            goto label_2c3698;
        }
    }
    ctx->pc = 0x2C3660u;
    // 0x2c3660: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c3660u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c3664: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c3664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c3668: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c3668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c366c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3670: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c3670u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3674: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c3674u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c3678: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c3678u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c367c: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c367cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3680: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c3680u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3684: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c3684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c368c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C368Cu;
    {
        const bool branch_taken_0x2c368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C368Cu;
        // 0x2c3690: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c368c) {
            ctx->pc = 0x2C36B8u;
            goto label_2c36b8;
        }
    }
    ctx->pc = 0x2C3694u;
    // 0x2c3694: 0x0  nop
    ctx->pc = 0x2c3694u;
    // NOP
label_2c3698:
    // 0x2c3698: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C3698u;
    SET_GPR_U32(ctx, 31, 0x2C36A0u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C3698u, 0x2C36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36A0u;
label_2c36a0:
    // 0x2c36a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C36A0u;
    {
        const bool branch_taken_0x2c36a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36a0) {
            ctx->pc = 0x2C36B0u;
            goto label_2c36b0;
        }
    }
    ctx->pc = 0x2C36A8u;
label_2c36a8:
    // 0x2c36a8: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c36a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c36ac: 0x0  nop
    ctx->pc = 0x2c36acu;
    // NOP
label_2c36b0:
    // 0x2c36b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c36b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36b4: 0x0  nop
    ctx->pc = 0x2c36b4u;
    // NOP
label_2c36b8:
    // 0x2c36b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C36B8u;
    {
        const bool branch_taken_0x2c36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36b8) {
            ctx->pc = 0x2C36D8u;
            goto label_2c36d8;
        }
    }
    ctx->pc = 0x2C36C0u;
label_2c36c0:
    // 0x2c36c0: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c36c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c36c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2c36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c36c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c36cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c36d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c36d4: 0x0  nop
    ctx->pc = 0x2c36d4u;
    // NOP
label_2c36d8:
    // 0x2c36d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c36d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c36dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C36DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36DCu;
        // 0x2c36e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C36DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C36E4u;
}
