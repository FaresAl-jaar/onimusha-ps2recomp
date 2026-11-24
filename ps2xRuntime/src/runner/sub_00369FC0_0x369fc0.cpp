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

// Function: sub_00369FC0
// Address: 0x369fc0 - 0x36a044
void sub_00369FC0_0x369fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369FC0_0x369fc0");
#endif

    switch (ctx->pc) {
        case 0x369fe0u: goto label_369fe0;
        case 0x36a00cu: goto label_36a00c;
        default: break;
    }

    ctx->pc = 0x369fc0u;

    // 0x369fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x369fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x369fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x369fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x369fc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x369fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x369fcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369fd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369fd8: 0xc0da738  jal         func_369CE0
    ctx->pc = 0x369FD8u;
    SET_GPR_U32(ctx, 31, 0x369FE0u);
    ctx->pc = 0x369FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FD8u;
    // 0x369fdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369CE0u, 0x369FD8u, 0x369FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FE0u;
label_369fe0:
    // 0x369fe0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x369fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x369fe4: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x369FE4u;
    {
        const bool branch_taken_0x369fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x369FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FE4u;
        // 0x369fe8: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369fe4) {
            ctx->pc = 0x36A028u;
            goto label_36a028;
        }
    }
    ctx->pc = 0x369FECu;
    // 0x369fec: 0x24712b4c  addiu       $s1, $v1, 0x2B4C
    ctx->pc = 0x369fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11084));
    // 0x369ff0: 0x90632b4c  lbu         $v1, 0x2B4C($v1)
    ctx->pc = 0x369ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11084)));
    // 0x369ff4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x369FF4u;
    {
        const bool branch_taken_0x369ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FF4u;
        // 0x369ff8: 0x29880  sll         $s3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ff4) {
            ctx->pc = 0x36A028u;
            goto label_36a028;
        }
    }
    ctx->pc = 0x369FFCu;
    // 0x369ffc: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x369ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x36a000: 0x8c442b2c  lw          $a0, 0x2B2C($v0)
    ctx->pc = 0x36a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11052)));
    // 0x36a004: 0xc0c0870  jal         func_3021C0
    ctx->pc = 0x36A004u;
    SET_GPR_U32(ctx, 31, 0x36A00Cu);
    ctx->pc = 0x36A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A004u;
    // 0x36a008: 0x24522b2c  addiu       $s2, $v0, 0x2B2C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3021C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3021C0u, 0x36A004u, 0x36A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A00Cu;
label_36a00c:
    // 0x36a00c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x36a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x36a010: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x36a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x36a014: 0xac602b3c  sw          $zero, 0x2B3C($v1)
    ctx->pc = 0x36a014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11068), GPR_U32(ctx, 0));
    // 0x36a018: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x36a018u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a01c: 0x92032b29  lbu         $v1, 0x2B29($s0)
    ctx->pc = 0x36a01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11049)));
    // 0x36a020: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36a024: 0xa2032b29  sb          $v1, 0x2B29($s0)
    ctx->pc = 0x36a024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11049), (uint8_t)GPR_U32(ctx, 3));
label_36a028:
    // 0x36a028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36a028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a02c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36a02cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a03c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A03Cu;
        // 0x36a040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A044u;
}
