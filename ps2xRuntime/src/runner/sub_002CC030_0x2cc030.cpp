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

// Function: sub_002CC030
// Address: 0x2cc030 - 0x2cc158
void sub_002CC030_0x2cc030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC030_0x2cc030");
#endif

    switch (ctx->pc) {
        case 0x2cc0c8u: goto label_2cc0c8;
        case 0x2cc128u: goto label_2cc128;
        default: break;
    }

    ctx->pc = 0x2cc030u;

    // 0x2cc030: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2cc030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2cc034: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2cc034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cc038: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2cc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2cc03c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2cc03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2cc040: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cc040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2cc044: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cc044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cc048: 0x27b60089  addiu       $s6, $sp, 0x89
    ctx->pc = 0x2cc048u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 137));
    // 0x2cc04c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cc050: 0x27b50087  addiu       $s5, $sp, 0x87
    ctx->pc = 0x2cc050u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 135));
    // 0x2cc054: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc058: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cc058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc05c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc060: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cc060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc068: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cc068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc070: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2cc070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc074: 0xa3a40081  sb          $a0, 0x81($sp)
    ctx->pc = 0x2cc074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc078: 0x27b00086  addiu       $s0, $sp, 0x86
    ctx->pc = 0x2cc078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 134));
    // 0x2cc07c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc080: 0xa3a00082  sb          $zero, 0x82($sp)
    ctx->pc = 0x2cc080u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc084: 0xa3a00083  sb          $zero, 0x83($sp)
    ctx->pc = 0x2cc084u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc088: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cc088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc08c: 0xa3a00085  sb          $zero, 0x85($sp)
    ctx->pc = 0x2cc08cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 133), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc090: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x2cc090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cc094: 0xa3a40084  sb          $a0, 0x84($sp)
    ctx->pc = 0x2cc094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc098: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2cc098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc09c: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2cc09cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc0a0: 0xa3a00088  sb          $zero, 0x88($sp)
    ctx->pc = 0x2cc0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc0a4: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x2cc0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc0a8: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x2cc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
    // 0x2cc0ac: 0x14440010  bne         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC0ACu;
    {
        const bool branch_taken_0x2cc0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0ACu;
        // 0x2cc0b0: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0ac) {
            ctx->pc = 0x2CC0F0u;
            goto label_2cc0f0;
        }
    }
    ctx->pc = 0x2CC0B4u;
    // 0x2cc0b4: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x2cc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x2cc0b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cc0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2cc0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0c0: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x2CC0C0u;
    SET_GPR_U32(ctx, 31, 0x2CC0C8u);
    ctx->pc = 0x2CC0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0C0u;
    // 0x2cc0c4: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x2CC0C0u, 0x2CC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0C8u;
label_2cc0c8:
    // 0x2cc0c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC0C8u;
    {
        const bool branch_taken_0x2cc0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc0c8) {
            ctx->pc = 0x2CC0F0u;
            goto label_2cc0f0;
        }
    }
    ctx->pc = 0x2CC0D0u;
    // 0x2cc0d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2cc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cc0d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC0D4u;
    {
        const bool branch_taken_0x2cc0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0D4u;
        // 0x2cc0d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0d4) {
            ctx->pc = 0x2CC0F0u;
            goto label_2cc0f0;
        }
    }
    ctx->pc = 0x2CC0DCu;
    // 0x2cc0dc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cc0e0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2cc0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc0e4: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2cc0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc0e8: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x2cc0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc0ec: 0x0  nop
    ctx->pc = 0x2cc0ecu;
    // NOP
label_2cc0f0:
    // 0x2cc0f0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2cc0f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2cc0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2cc0f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cc0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2cc0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc100: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x2cc100u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc104: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2cc104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2cc108: 0xaf828a2c  sw          $v0, -0x75D4($gp)
    ctx->pc = 0x2cc108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
    // 0x2cc10c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cc10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc110: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2cc110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cc114: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2cc114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cc118: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cc118u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc11c: 0xaf918a34  sw          $s1, -0x75CC($gp)
    ctx->pc = 0x2cc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 17));
    // 0x2cc120: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2CC120u;
    SET_GPR_U32(ctx, 31, 0x2CC128u);
    ctx->pc = 0x2CC124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC120u;
    // 0x2cc124: 0xaf808a30  sw          $zero, -0x75D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2CC120u, 0x2CC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC128u;
label_2cc128:
    // 0x2cc128: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x2cc128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x2cc12c: 0xaf808a34  sw          $zero, -0x75CC($gp)
    ctx->pc = 0x2cc12cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 0));
    // 0x2cc130: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2cc130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cc134: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cc134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc138: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cc138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc13c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cc13cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc150: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC150u;
        // 0x2cc154: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC158u;
}
