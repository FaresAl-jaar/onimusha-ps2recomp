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

// Function: sub_00214148
// Address: 0x214148 - 0x2141f8
void sub_00214148_0x214148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214148_0x214148");
#endif

    switch (ctx->pc) {
        case 0x214188u: goto label_214188;
        case 0x21419cu: goto label_21419c;
        default: break;
    }

    ctx->pc = 0x214148u;

    // 0x214148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x214148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21414c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x214150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x214150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214154: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x214154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x214158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21415c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x21415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x214160: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214164: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x214164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x214168: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x214168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21416c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x21416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x214170: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x214170u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214174: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x214174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x214178: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x214178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21417c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21417cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x214180: 0x8c931f7c  lw          $s3, 0x1F7C($a0)
    ctx->pc = 0x214180u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x214184: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x214184u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_214188:
    // 0x214188: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21418c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21418cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x214190: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x214190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214194: 0xc07f47c  jal         func_1FD1F0
    ctx->pc = 0x214194u;
    SET_GPR_U32(ctx, 31, 0x21419Cu);
    ctx->pc = 0x214198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214194u;
    // 0x214198: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD1F0u, 0x214194u, 0x21419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21419Cu;
label_21419c:
    // 0x21419c: 0x2a060003  slti        $a2, $s0, 0x3
    ctx->pc = 0x21419cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2141a0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2141a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2141a4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2141a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2141a8: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x2141a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2141ac: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x2141acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2141b0: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x2141b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x2141b4: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2141B4u;
    {
        const bool branch_taken_0x2141b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2141B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141B4u;
        // 0x2141b8: 0xa3880a  movz        $s1, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141b4) {
            ctx->pc = 0x214188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214188;
        }
    }
    ctx->pc = 0x2141BCu;
    // 0x2141bc: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x2141bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x2141c0: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x2141c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x2141c4: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x2141c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x2141c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2141c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2141cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2141ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2141d0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2141d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2141d4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2141d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2141d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2141d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2141dc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2141dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2141e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2141e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2141e4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2141e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2141e8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2141e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2141ec: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2141ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2141f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2141F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2141F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141F0u;
        // 0x2141f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2141F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2141F8u;
}
