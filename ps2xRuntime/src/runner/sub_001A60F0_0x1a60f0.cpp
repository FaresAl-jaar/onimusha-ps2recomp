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

// Function: sub_001A60F0
// Address: 0x1a60f0 - 0x1a617c
void sub_001A60F0_0x1a60f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A60F0_0x1a60f0");
#endif

    switch (ctx->pc) {
        case 0x1a6144u: goto label_1a6144;
        default: break;
    }

    ctx->pc = 0x1a60f0u;

    // 0x1a60f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a60f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a60f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a60f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a60f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a60fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a60fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a6100: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a6100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6108: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a6108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a610c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6110: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a6110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6114: 0x8c83782c  lw          $v1, 0x782C($a0)
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30764)));
    // 0x1a6118: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6118u;
    {
        const bool branch_taken_0x1a6118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6118u;
        // 0x1a611c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6118) {
            ctx->pc = 0x1A6138u;
            goto label_1a6138;
        }
    }
    ctx->pc = 0x1A6120u;
    // 0x1a6120: 0x8e637828  lw          $v1, 0x7828($s3)
    ctx->pc = 0x1a6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30760)));
    // 0x1a6124: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6124u;
    {
        const bool branch_taken_0x1a6124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a6124) {
            ctx->pc = 0x1A6138u;
            goto label_1a6138;
        }
    }
    ctx->pc = 0x1A612Cu;
    // 0x1a612c: 0xde637820  ld          $v1, 0x7820($s3)
    ctx->pc = 0x1a612cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 30752)));
    // 0x1a6130: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6130u;
    {
        const bool branch_taken_0x1a6130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a6130) {
            ctx->pc = 0x1A6160u;
            goto label_1a6160;
        }
    }
    ctx->pc = 0x1A6138u;
label_1a6138:
    // 0x1a6138: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a613c: 0xc069860  jal         func_1A6180
    ctx->pc = 0x1A613Cu;
    SET_GPR_U32(ctx, 31, 0x1A6144u);
    ctx->pc = 0x1A6140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A613Cu;
    // 0x1a6140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6180u, 0x1A613Cu, 0x1A6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6144u;
label_1a6144:
    // 0x1a6144: 0x8e64783c  lw          $a0, 0x783C($s3)
    ctx->pc = 0x1a6144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1a6148: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1a6148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a614c: 0xae63783c  sw          $v1, 0x783C($s3)
    ctx->pc = 0x1a614cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 3));
    // 0x1a6150: 0xae647830  sw          $a0, 0x7830($s3)
    ctx->pc = 0x1a6150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30768), GPR_U32(ctx, 4));
    // 0x1a6154: 0xae72782c  sw          $s2, 0x782C($s3)
    ctx->pc = 0x1a6154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30764), GPR_U32(ctx, 18));
    // 0x1a6158: 0xae717828  sw          $s1, 0x7828($s3)
    ctx->pc = 0x1a6158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30760), GPR_U32(ctx, 17));
    // 0x1a615c: 0xfe707820  sd          $s0, 0x7820($s3)
    ctx->pc = 0x1a615cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 30752), GPR_U64(ctx, 16));
label_1a6160:
    // 0x1a6160: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a6160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a6164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a6168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a616c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a616cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6174: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A617Cu;
}
