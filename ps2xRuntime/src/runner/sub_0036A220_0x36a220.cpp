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

// Function: sub_0036A220
// Address: 0x36a220 - 0x36a2d0
void sub_0036A220_0x36a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A220_0x36a220");
#endif

    switch (ctx->pc) {
        case 0x36a250u: goto label_36a250;
        case 0x36a260u: goto label_36a260;
        case 0x36a28cu: goto label_36a28c;
        case 0x36a2a8u: goto label_36a2a8;
        case 0x36a2b8u: goto label_36a2b8;
        default: break;
    }

    ctx->pc = 0x36a220u;

    // 0x36a220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36a224: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36a228: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36a228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36a22c: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x36a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x36a230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36a234: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x36a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36a238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a23c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36a23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a244: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x36a244u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65AAF0u));
    // 0x36a248: 0xc0da750  jal         func_369D40
    ctx->pc = 0x36A248u;
    SET_GPR_U32(ctx, 31, 0x36A250u);
    ctx->pc = 0x36A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A248u;
    // 0x36a24c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369D40u, 0x36A248u, 0x36A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A250u;
label_36a250:
    // 0x36a250: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36A250u;
    {
        const bool branch_taken_0x36a250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A250u;
        // 0x36a254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a250) {
            ctx->pc = 0x36A2B8u;
            goto label_36a2b8;
        }
    }
    ctx->pc = 0x36A258u;
    // 0x36a258: 0xc0da704  jal         func_369C10
    ctx->pc = 0x36A258u;
    SET_GPR_U32(ctx, 31, 0x36A260u);
    ctx->pc = 0x369C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369C10u, 0x36A258u, 0x36A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A260u;
label_36a260:
    // 0x36a260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36a260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a264: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36A264u;
    {
        const bool branch_taken_0x36a264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a264) {
            ctx->pc = 0x36A2B8u;
            goto label_36a2b8;
        }
    }
    ctx->pc = 0x36A26Cu;
    // 0x36a26c: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x36a26cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x36a270: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x36a270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36a274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36a274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a278: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36a278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a27c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36a27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36a280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a284: 0xc0bc63c  jal         func_2F18F0
    ctx->pc = 0x36A284u;
    SET_GPR_U32(ctx, 31, 0x36A28Cu);
    ctx->pc = 0x36A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A284u;
    // 0x36a288: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F18F0u, 0x36A284u, 0x36A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A28Cu;
label_36a28c:
    // 0x36a28c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36a28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a290: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A290u;
    {
        const bool branch_taken_0x36a290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a290) {
            ctx->pc = 0x36A2B8u;
            goto label_36a2b8;
        }
    }
    ctx->pc = 0x36A298u;
    // 0x36a298: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x36a298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x36a29c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2a0: 0xc0da814  jal         func_36A050
    ctx->pc = 0x36A2A0u;
    SET_GPR_U32(ctx, 31, 0x36A2A8u);
    ctx->pc = 0x36A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2A0u;
    // 0x36a2a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A050u, 0x36A2A0u, 0x36A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2A8u;
label_36a2a8:
    // 0x36a2a8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x36a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x36a2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2b0: 0xc0da814  jal         func_36A050
    ctx->pc = 0x36A2B0u;
    SET_GPR_U32(ctx, 31, 0x36A2B8u);
    ctx->pc = 0x36A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2B0u;
    // 0x36a2b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A050u, 0x36A2B0u, 0x36A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2B8u;
label_36a2b8:
    // 0x36a2b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36a2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A2C8u;
        // 0x36a2cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A2D0u;
}
