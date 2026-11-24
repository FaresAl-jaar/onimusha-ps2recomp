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

// Function: sub_00145330
// Address: 0x145330 - 0x1453c8
void sub_00145330_0x145330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145330_0x145330");
#endif

    switch (ctx->pc) {
        case 0x145368u: goto label_145368;
        case 0x14538cu: goto label_14538c;
        default: break;
    }

    ctx->pc = 0x145330u;

    // 0x145330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x145330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x145334: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x145334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x145338: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x145338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14533c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x145340: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x145340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145348: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x145348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14534c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145350: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x145350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145358: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x145358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14535c: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x14535Cu;
    {
        const bool branch_taken_0x14535c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x145360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14535Cu;
        // 0x145360: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14535c) {
            ctx->pc = 0x1453A8u;
            goto label_1453a8;
        }
    }
    ctx->pc = 0x145364u;
    // 0x145364: 0x0  nop
    ctx->pc = 0x145364u;
    // NOP
label_145368:
    // 0x145368: 0x90e30009  lbu         $v1, 0x9($a3)
    ctx->pc = 0x145368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x14536c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14536Cu;
    {
        const bool branch_taken_0x14536c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14536Cu;
        // 0x145370: 0x8cf00000  lw          $s0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14536c) {
            ctx->pc = 0x145398u;
            goto label_145398;
        }
    }
    ctx->pc = 0x145374u;
    // 0x145374: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x145378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14537c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14537cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145380: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x145380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145384: 0xc0514f4  jal         func_1453D0
    ctx->pc = 0x145384u;
    SET_GPR_U32(ctx, 31, 0x14538Cu);
    ctx->pc = 0x145388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145384u;
    // 0x145388: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1453D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453D0u, 0x145384u, 0x14538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14538Cu;
label_14538c:
    // 0x14538c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14538Cu;
    {
        const bool branch_taken_0x14538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14538c) {
            ctx->pc = 0x1453A0u;
            goto label_1453a0;
        }
    }
    ctx->pc = 0x145394u;
    // 0x145394: 0x0  nop
    ctx->pc = 0x145394u;
    // NOP
label_145398:
    // 0x145398: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x145398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14539c: 0x0  nop
    ctx->pc = 0x14539cu;
    // NOP
label_1453a0:
    // 0x1453a0: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1453A0u;
    {
        const bool branch_taken_0x1453a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1453A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453A0u;
        // 0x1453a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453a0) {
            ctx->pc = 0x145368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145368;
        }
    }
    ctx->pc = 0x1453A8u;
label_1453a8:
    // 0x1453a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1453a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1453ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1453acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1453b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1453b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1453b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1453b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1453b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1453b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1453bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1453bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1453c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1453C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1453C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453C0u;
        // 0x1453c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1453C8u;
}
