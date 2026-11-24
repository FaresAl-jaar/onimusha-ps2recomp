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

// Function: sub_003327B0
// Address: 0x3327b0 - 0x332840
void sub_003327B0_0x3327b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003327B0_0x3327b0");
#endif

    switch (ctx->pc) {
        case 0x3327e0u: goto label_3327e0;
        case 0x3327e8u: goto label_3327e8;
        case 0x3327f0u: goto label_3327f0;
        default: break;
    }

    ctx->pc = 0x3327b0u;

    // 0x3327b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3327b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3327b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3327b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3327b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3327b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3327bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3327bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3327c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3327c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3327c4: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x3327c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3327c8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3327C8u;
    {
        const bool branch_taken_0x3327c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3327CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327C8u;
        // 0x3327cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327c8) {
            ctx->pc = 0x3327D8u;
            goto label_3327d8;
        }
    }
    ctx->pc = 0x3327D0u;
    // 0x3327d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3327D0u;
    {
        const bool branch_taken_0x3327d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3327D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327D0u;
        // 0x3327d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327d0) {
            ctx->pc = 0x332828u;
            goto label_332828;
        }
    }
    ctx->pc = 0x3327D8u;
label_3327d8:
    // 0x3327d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3327d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3327dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3327e0:
    // 0x3327e0: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3327E0u;
    SET_GPR_U32(ctx, 31, 0x3327E8u);
    ctx->pc = 0x3327E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3327E0u;
    // 0x3327e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3327E0u, 0x3327E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3327E8u;
label_3327e8:
    // 0x3327e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3327E8u;
    {
        const bool branch_taken_0x3327e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3327ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327E8u;
        // 0x3327ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327e8) {
            ctx->pc = 0x332810u;
            goto label_332810;
        }
    }
    ctx->pc = 0x3327F0u;
label_3327f0:
    // 0x3327f0: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x3327f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x3327f4: 0x14710002  bne         $v1, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3327F4u;
    {
        const bool branch_taken_0x3327f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x3327f4) {
            ctx->pc = 0x332800u;
            goto label_332800;
        }
    }
    ctx->pc = 0x3327FCu;
    // 0x3327fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3327fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_332800:
    // 0x332800: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x332800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332804: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x332804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x332808: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x332808u;
    {
        const bool branch_taken_0x332808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332808u;
        // 0x33280c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332808) {
            ctx->pc = 0x3327F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3327f0;
        }
    }
    ctx->pc = 0x332810u;
label_332810:
    // 0x332810: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x332810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x332814: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x332814u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x332818: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x332818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x33281c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x33281Cu;
    {
        const bool branch_taken_0x33281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33281Cu;
        // 0x332820: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33281c) {
            ctx->pc = 0x3327E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3327e0;
        }
    }
    ctx->pc = 0x332824u;
    // 0x332824: 0x0  nop
    ctx->pc = 0x332824u;
    // NOP
label_332828:
    // 0x332828: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x332828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33282c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33282cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332838: 0x3e00008  jr          $ra
    ctx->pc = 0x332838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332838u;
        // 0x33283c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332840u;
}
