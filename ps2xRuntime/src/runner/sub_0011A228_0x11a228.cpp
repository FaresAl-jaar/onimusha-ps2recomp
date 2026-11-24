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

// Function: sub_0011A228
// Address: 0x11a228 - 0x11a2d0
void sub_0011A228_0x11a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A228_0x11a228");
#endif

    switch (ctx->pc) {
        case 0x11a228u: goto label_11a228;
        case 0x11a22cu: goto label_11a22c;
        case 0x11a230u: goto label_11a230;
        case 0x11a234u: goto label_11a234;
        case 0x11a238u: goto label_11a238;
        case 0x11a23cu: goto label_11a23c;
        case 0x11a240u: goto label_11a240;
        case 0x11a244u: goto label_11a244;
        case 0x11a248u: goto label_11a248;
        case 0x11a24cu: goto label_11a24c;
        case 0x11a250u: goto label_11a250;
        case 0x11a254u: goto label_11a254;
        case 0x11a258u: goto label_11a258;
        case 0x11a25cu: goto label_11a25c;
        case 0x11a260u: goto label_11a260;
        case 0x11a264u: goto label_11a264;
        case 0x11a268u: goto label_11a268;
        case 0x11a26cu: goto label_11a26c;
        case 0x11a270u: goto label_11a270;
        case 0x11a274u: goto label_11a274;
        case 0x11a278u: goto label_11a278;
        case 0x11a27cu: goto label_11a27c;
        case 0x11a280u: goto label_11a280;
        case 0x11a284u: goto label_11a284;
        case 0x11a288u: goto label_11a288;
        case 0x11a28cu: goto label_11a28c;
        case 0x11a290u: goto label_11a290;
        case 0x11a294u: goto label_11a294;
        case 0x11a298u: goto label_11a298;
        case 0x11a29cu: goto label_11a29c;
        case 0x11a2a0u: goto label_11a2a0;
        case 0x11a2a4u: goto label_11a2a4;
        case 0x11a2a8u: goto label_11a2a8;
        case 0x11a2acu: goto label_11a2ac;
        case 0x11a2b0u: goto label_11a2b0;
        case 0x11a2b4u: goto label_11a2b4;
        case 0x11a2b8u: goto label_11a2b8;
        case 0x11a2bcu: goto label_11a2bc;
        case 0x11a2c0u: goto label_11a2c0;
        case 0x11a2c4u: goto label_11a2c4;
        case 0x11a2c8u: goto label_11a2c8;
        case 0x11a2ccu: goto label_11a2cc;
        default: break;
    }

    ctx->pc = 0x11a228u;

label_11a228:
    // 0x11a228: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11a22c:
    // 0x11a22c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11a230:
    // 0x11a230: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_11a234:
    // 0x11a234: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11a234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11a238:
    // 0x11a238: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11a23c:
    // 0x11a23c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11a240:
    // 0x11a240: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_11a244:
    if (ctx->pc == 0x11A244u) {
        ctx->pc = 0x11A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A240u;
        // 0x11a244: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A248u;
        goto label_11a248;
    }
    ctx->pc = 0x11A240u;
    {
        const bool branch_taken_0x11a240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A240u;
        // 0x11a244: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a240) {
            ctx->pc = 0x11A258u;
            goto label_11a258;
        }
    }
    ctx->pc = 0x11A248u;
label_11a248:
    // 0x11a248: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_11a24c:
    // 0x11a24c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x11a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11a250:
    // 0x11a250: 0x10000005  b           . + 4 + (0x5 << 2)
label_11a254:
    if (ctx->pc == 0x11A254u) {
        ctx->pc = 0x11A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A250u;
        // 0x11a254: 0x24423f48  addiu       $v0, $v0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A258u;
        goto label_11a258;
    }
    ctx->pc = 0x11A250u;
    {
        const bool branch_taken_0x11a250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A250u;
        // 0x11a254: 0x24423f48  addiu       $v0, $v0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a250) {
            ctx->pc = 0x11A268u;
            goto label_11a268;
        }
    }
    ctx->pc = 0x11A258u;
label_11a258:
    // 0x11a258: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11a258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_11a25c:
    // 0x11a25c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_11a260:
    // 0x11a260: 0x8c424168  lw          $v0, 0x4168($v0)
    ctx->pc = 0x11a260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
label_11a264:
    // 0x11a264: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x11a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
label_11a268:
    // 0x11a268: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x11a268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11a26c:
    // 0x11a26c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_11a270:
    if (ctx->pc == 0x11A270u) {
        ctx->pc = 0x11A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A26Cu;
        // 0x11a270: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A274u;
        goto label_11a274;
    }
    ctx->pc = 0x11A26Cu;
    {
        const bool branch_taken_0x11a26c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x11A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A26Cu;
        // 0x11a270: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a26c) {
            ctx->pc = 0x11A2ACu;
            goto label_11a2ac;
        }
    }
    ctx->pc = 0x11A274u;
label_11a274:
    // 0x11a274: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x11a274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11a278:
    // 0x11a278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11a27c:
    // 0x11a27c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_11a280:
    if (ctx->pc == 0x11A280u) {
        ctx->pc = 0x11A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A27Cu;
        // 0x11a280: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A284u;
        goto label_11a284;
    }
    ctx->pc = 0x11A27Cu;
    {
        const bool branch_taken_0x11a27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a27c) {
            ctx->pc = 0x11A280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A27Cu;
            // 0x11a280: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A2A4u;
            goto label_11a2a4;
        }
    }
    ctx->pc = 0x11A284u;
label_11a284:
    // 0x11a284: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11a288:
    // 0x11a288: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x11a288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11a28c:
    // 0x11a28c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x11a28cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a290:
    // 0x11a290: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11a290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11a294:
    // 0x11a294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a298:
    // 0x11a298: 0xc0f809  jalr        $a2
label_11a29c:
    if (ctx->pc == 0x11A29Cu) {
        ctx->pc = 0x11A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A298u;
        // 0x11a29c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2A0u;
        goto label_11a2a0;
    }
    ctx->pc = 0x11A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11A2A0u);
        ctx->pc = 0x11A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A298u;
        // 0x11a29c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A298u, 0x11A2A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A2A0u;
label_11a2a0:
    // 0x11a2a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x11a2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_11a2a4:
    // 0x11a2a4: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_11a2a8:
    if (ctx->pc == 0x11A2A8u) {
        ctx->pc = 0x11A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A4u;
        // 0x11a2a8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2ACu;
        goto label_11a2ac;
    }
    ctx->pc = 0x11A2A4u;
    {
        const bool branch_taken_0x11a2a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A4u;
        // 0x11a2a8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a4) {
            ctx->pc = 0x11A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a278;
        }
    }
    ctx->pc = 0x11A2ACu;
label_11a2ac:
    // 0x11a2ac: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11a2b0:
    // 0x11a2b0: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x11a2b0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a2b4:
    // 0x11a2b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11a2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11a2b8:
    // 0x11a2b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a2b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11a2bc:
    // 0x11a2bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11a2c0:
    // 0x11a2c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a2c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11a2c4:
    // 0x11a2c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a2c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a2c8:
    // 0x11a2c8: 0x3e00008  jr          $ra
label_11a2cc:
    if (ctx->pc == 0x11A2CCu) {
        ctx->pc = 0x11A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2C8u;
        // 0x11a2cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2D0u;
        goto label_fallthrough_0x11a2c8;
    }
    ctx->pc = 0x11A2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2C8u;
        // 0x11a2cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11a2c8:
    ctx->pc = 0x11A2D0u;
}
