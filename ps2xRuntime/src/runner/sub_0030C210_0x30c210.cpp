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

// Function: sub_0030C210
// Address: 0x30c210 - 0x30c2d8
void sub_0030C210_0x30c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C210_0x30c210");
#endif

    switch (ctx->pc) {
        case 0x30c240u: goto label_30c240;
        case 0x30c268u: goto label_30c268;
        case 0x30c2a4u: goto label_30c2a4;
        default: break;
    }

    ctx->pc = 0x30c210u;

    // 0x30c210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30c214: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30c21c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30c220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c224: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30c224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c230: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30c230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c234: 0x8490000a  lh          $s0, 0xA($a0)
    ctx->pc = 0x30c234u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30c238: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30C238u;
    {
        const bool branch_taken_0x30c238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C238u;
        // 0x30c23c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c238) {
            ctx->pc = 0x30C280u;
            goto label_30c280;
        }
    }
    ctx->pc = 0x30C240u;
label_30c240:
    // 0x30c240: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x30c240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30c244: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x30c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30c248: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x30c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c24c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30c250: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c254: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C254u;
    {
        const bool branch_taken_0x30c254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C254u;
        // 0x30c258: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c254) {
            ctx->pc = 0x30C270u;
            goto label_30c270;
        }
    }
    ctx->pc = 0x30C25Cu;
    // 0x30c25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c260: 0xc0c30b8  jal         func_30C2E0
    ctx->pc = 0x30C260u;
    SET_GPR_U32(ctx, 31, 0x30C268u);
    ctx->pc = 0x30C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C260u;
    // 0x30c264: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C2E0u, 0x30C260u, 0x30C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C268u;
label_30c268:
    // 0x30c268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C268u;
    {
        const bool branch_taken_0x30c268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c268) {
            ctx->pc = 0x30C280u;
            goto label_30c280;
        }
    }
    ctx->pc = 0x30C270u;
label_30c270:
    // 0x30c270: 0x86300028  lh          $s0, 0x28($s1)
    ctx->pc = 0x30c270u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x30c274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c278: 0x1603fff1  bne         $s0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x30C278u;
    {
        const bool branch_taken_0x30c278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x30c278) {
            ctx->pc = 0x30C240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c240;
        }
    }
    ctx->pc = 0x30C280u;
label_30c280:
    // 0x30c280: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c284: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30C284u;
    {
        const bool branch_taken_0x30c284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c284) {
            ctx->pc = 0x30C2B8u;
            goto label_30c2b8;
        }
    }
    ctx->pc = 0x30C28Cu;
    // 0x30c28c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x30c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c290: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x30c290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x30c294: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30C294u;
    {
        const bool branch_taken_0x30c294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C294u;
        // 0x30c298: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c294) {
            ctx->pc = 0x30C2B8u;
            goto label_30c2b8;
        }
    }
    ctx->pc = 0x30C29Cu;
    // 0x30c29c: 0xc0c2fe8  jal         func_30BFA0
    ctx->pc = 0x30C29Cu;
    SET_GPR_U32(ctx, 31, 0x30C2A4u);
    ctx->pc = 0x30C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C29Cu;
    // 0x30c2a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BFA0u, 0x30C29Cu, 0x30C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C2A4u;
label_30c2a4:
    // 0x30c2a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x30c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c2a8: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x30c2a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x30c2ac: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x30c2acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x30c2b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x30c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c2b4: 0xa470000a  sh          $s0, 0xA($v1)
    ctx->pc = 0x30c2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 16));
label_30c2b8:
    // 0x30c2b8: 0xa6700004  sh          $s0, 0x4($s3)
    ctx->pc = 0x30c2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x30c2bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30c2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30c2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x30C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2D0u;
        // 0x30c2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C2D8u;
}
