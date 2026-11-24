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

// Function: sub_0019FCA0
// Address: 0x19fca0 - 0x19fd58
void sub_0019FCA0_0x19fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FCA0_0x19fca0");
#endif

    switch (ctx->pc) {
        case 0x19fcf8u: goto label_19fcf8;
        case 0x19fd28u: goto label_19fd28;
        default: break;
    }

    ctx->pc = 0x19fca0u;

    // 0x19fca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19fca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19fca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19fcac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fcb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fcb4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x19fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19fcb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fcbc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19fcc0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x19FCC0u;
    {
        const bool branch_taken_0x19fcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC0u;
        // 0x19fcc4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcc0) {
            ctx->pc = 0x19FD40u;
            goto label_19fd40;
        }
    }
    ctx->pc = 0x19FCC8u;
    // 0x19fcc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19fcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19fccc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x19fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x19fcd0: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x19fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x19fcd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19fcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19fcd8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19FCD8u;
    {
        const bool branch_taken_0x19fcd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fcd8) {
            ctx->pc = 0x19FD40u;
            goto label_19fd40;
        }
    }
    ctx->pc = 0x19FCE0u;
    // 0x19fce0: 0x94a30068  lhu         $v1, 0x68($a1)
    ctx->pc = 0x19fce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x19fce4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x19fce4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fce8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x19FCE8u;
    {
        const bool branch_taken_0x19fce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCE8u;
        // 0x19fcec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fce8) {
            ctx->pc = 0x19FD40u;
            goto label_19fd40;
        }
    }
    ctx->pc = 0x19FCF0u;
    // 0x19fcf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19fcf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcf4: 0x0  nop
    ctx->pc = 0x19fcf4u;
    // NOP
label_19fcf8:
    // 0x19fcf8: 0x8ca4007c  lw          $a0, 0x7C($a1)
    ctx->pc = 0x19fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x19fcfc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x19fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x19fd00: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x19fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x19fd04: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x19fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19fd08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19fd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19fd0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FD0Cu;
    {
        const bool branch_taken_0x19fd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fd0c) {
            ctx->pc = 0x19FD28u;
            goto label_19fd28;
        }
    }
    ctx->pc = 0x19FD14u;
    // 0x19fd14: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x19fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19fd18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD18u;
    {
        const bool branch_taken_0x19fd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd18) {
            ctx->pc = 0x19FD28u;
            goto label_19fd28;
        }
    }
    ctx->pc = 0x19FD20u;
    // 0x19fd20: 0xc068090  jal         func_1A0240
    ctx->pc = 0x19FD20u;
    SET_GPR_U32(ctx, 31, 0x19FD28u);
    ctx->pc = 0x1A0240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0240u, 0x19FD20u, 0x19FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD28u;
label_19fd28:
    // 0x19fd28: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x19fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19fd2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19fd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19fd30: 0x94a30068  lhu         $v1, 0x68($a1)
    ctx->pc = 0x19fd30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x19fd34: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x19fd34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fd38: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19FD38u;
    {
        const bool branch_taken_0x19fd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD38u;
        // 0x19fd3c: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd38) {
            ctx->pc = 0x19FCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fcf8;
        }
    }
    ctx->pc = 0x19FD40u;
label_19fd40:
    // 0x19fd40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fd44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19fd44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fd48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fd48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fd4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd50: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD50u;
        // 0x19fd54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FD58u;
}
