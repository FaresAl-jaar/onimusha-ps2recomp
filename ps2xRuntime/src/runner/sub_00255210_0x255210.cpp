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

// Function: sub_00255210
// Address: 0x255210 - 0x2552e4
void sub_00255210_0x255210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255210_0x255210");
#endif

    switch (ctx->pc) {
        case 0x255260u: goto label_255260;
        case 0x255280u: goto label_255280;
        case 0x255290u: goto label_255290;
        case 0x2552a4u: goto label_2552a4;
        default: break;
    }

    ctx->pc = 0x255210u;

    // 0x255210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x255210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x255214: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x255214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x255218: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x255218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25521c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x255220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x255220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255228: 0xa0801110  sb          $zero, 0x1110($a0)
    ctx->pc = 0x255228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4368), (uint8_t)GPR_U32(ctx, 0));
    // 0x25522c: 0x8c831108  lw          $v1, 0x1108($a0)
    ctx->pc = 0x25522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4360)));
    // 0x255230: 0x8c851104  lw          $a1, 0x1104($a0)
    ctx->pc = 0x255230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
    // 0x255234: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x255234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x255238: 0x61280a  movz        $a1, $v1, $at
    ctx->pc = 0x255238u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x25523c: 0xac851108  sw          $a1, 0x1108($a0)
    ctx->pc = 0x25523cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4360), GPR_U32(ctx, 5));
    // 0x255240: 0x8c83110c  lw          $v1, 0x110C($a0)
    ctx->pc = 0x255240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4364)));
    // 0x255244: 0x8c851108  lw          $a1, 0x1108($a0)
    ctx->pc = 0x255244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4360)));
    // 0x255248: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x255248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25524c: 0x61280a  movz        $a1, $v1, $at
    ctx->pc = 0x25524cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x255250: 0xac85110c  sw          $a1, 0x110C($a0)
    ctx->pc = 0x255250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4364), GPR_U32(ctx, 5));
    // 0x255254: 0x8c921104  lw          $s2, 0x1104($a0)
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
    // 0x255258: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x255258u;
    {
        const bool branch_taken_0x255258 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255258u;
        // 0x25525c: 0x24930104  addiu       $s3, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255258) {
            ctx->pc = 0x2552C8u;
            goto label_2552c8;
        }
    }
    ctx->pc = 0x255260u;
label_255260:
    // 0x255260: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x255260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x255264: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255264u;
    {
        const bool branch_taken_0x255264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255264) {
            ctx->pc = 0x255288u;
            goto label_255288;
        }
    }
    ctx->pc = 0x25526Cu;
    // 0x25526c: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x25526cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x255270: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x255270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x255274: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x255278: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x255278u;
    SET_GPR_U32(ctx, 31, 0x255280u);
    ctx->pc = 0x25527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255278u;
    // 0x25527c: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x255278u, 0x255280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255280u;
label_255280:
    // 0x255280: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x255280u;
    {
        const bool branch_taken_0x255280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255280) {
            ctx->pc = 0x2552B8u;
            goto label_2552b8;
        }
    }
    ctx->pc = 0x255288u;
label_255288:
    // 0x255288: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x255288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25528c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25528cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255290:
    // 0x255290: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x255290u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x255294: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x255294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x255298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x255298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25529c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x25529Cu;
    SET_GPR_U32(ctx, 31, 0x2552A4u);
    ctx->pc = 0x2552A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25529Cu;
    // 0x2552a0: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x25529Cu, 0x2552A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552A4u;
label_2552a4:
    // 0x2552a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2552a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2552a8: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x2552a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2552ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2552ACu;
    {
        const bool branch_taken_0x2552ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2552B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552ACu;
        // 0x2552b0: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552ac) {
            ctx->pc = 0x255290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255290;
        }
    }
    ctx->pc = 0x2552B4u;
    // 0x2552b4: 0x0  nop
    ctx->pc = 0x2552b4u;
    // NOP
label_2552b8:
    // 0x2552b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2552b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2552bc: 0x1640ffe8  bnez        $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2552BCu;
    {
        const bool branch_taken_0x2552bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2552C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552BCu;
        // 0x2552c0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552bc) {
            ctx->pc = 0x255260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255260;
        }
    }
    ctx->pc = 0x2552C4u;
    // 0x2552c4: 0x0  nop
    ctx->pc = 0x2552c4u;
    // NOP
label_2552c8:
    // 0x2552c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2552c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2552cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2552ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2552d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2552d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2552d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2552d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2552d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2552d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2552dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2552DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2552E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552DCu;
        // 0x2552e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2552DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2552E4u;
}
