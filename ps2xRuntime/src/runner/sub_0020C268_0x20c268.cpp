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

// Function: sub_0020C268
// Address: 0x20c268 - 0x20c360
void sub_0020C268_0x20c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C268_0x20c268");
#endif

    switch (ctx->pc) {
        case 0x20c298u: goto label_20c298;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2f8u: goto label_20c2f8;
        case 0x20c300u: goto label_20c300;
        case 0x20c314u: goto label_20c314;
        case 0x20c324u: goto label_20c324;
        case 0x20c334u: goto label_20c334;
        case 0x20c344u: goto label_20c344;
        default: break;
    }

    ctx->pc = 0x20c268u;

    // 0x20c268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c26c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x20c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x20c270: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20c274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c278: 0x8c5286dc  lw          $s2, -0x7924($v0)
    ctx->pc = 0x20c278u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x4B86DCu));
    // 0x20c27c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20c27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c288: 0x1643002f  bne         $s2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x20C288u;
    {
        const bool branch_taken_0x20c288 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x20C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C288u;
        // 0x20c28c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c288) {
            ctx->pc = 0x20C348u;
            goto label_20c348;
        }
    }
    ctx->pc = 0x20C290u;
    // 0x20c290: 0xc081544  jal         func_205510
    ctx->pc = 0x20C290u;
    SET_GPR_U32(ctx, 31, 0x20C298u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C290u, 0x20C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C298u;
label_20c298:
    // 0x20c298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c29c: 0xc082e38  jal         func_20B8E0
    ctx->pc = 0x20C29Cu;
    SET_GPR_U32(ctx, 31, 0x20C2A4u);
    ctx->pc = 0x20C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C29Cu;
    // 0x20c2a0: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8E0u, 0x20C29Cu, 0x20C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2A4u;
label_20c2a4:
    // 0x20c2a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2a8: 0x16120027  bne         $s0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x20C2A8u;
    {
        const bool branch_taken_0x20c2a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x20C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2A8u;
        // 0x20c2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2a8) {
            ctx->pc = 0x20C348u;
            goto label_20c348;
        }
    }
    ctx->pc = 0x20C2B0u;
    // 0x20c2b0: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C2B0u;
    SET_GPR_U32(ctx, 31, 0x20C2B8u);
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C2B0u, 0x20C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2B8u;
label_20c2b8:
    // 0x20c2b8: 0xc0831ce  jal         func_20C738
    ctx->pc = 0x20C2B8u;
    SET_GPR_U32(ctx, 31, 0x20C2C0u);
    ctx->pc = 0x20C738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C738u, 0x20C2B8u, 0x20C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2C0u;
label_20c2c0:
    // 0x20c2c0: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C2C0u;
    {
        const bool branch_taken_0x20c2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x20C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C0u;
        // 0x20c2c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2c0) {
            ctx->pc = 0x20C2F0u;
            goto label_20c2f0;
        }
    }
    ctx->pc = 0x20C2C8u;
    // 0x20c2c8: 0x2630006c  addiu       $s0, $s1, 0x6C
    ctx->pc = 0x20c2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x20c2cc: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x20c2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20c2d0:
    // 0x20c2d0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C2D0u;
    {
        const bool branch_taken_0x20c2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2d0) {
            ctx->pc = 0x20C2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C2D0u;
            // 0x20c2d4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C2E4u;
            goto label_20c2e4;
        }
    }
    ctx->pc = 0x20C2D8u;
    // 0x20c2d8: 0xc0830d8  jal         func_20C360
    ctx->pc = 0x20C2D8u;
    SET_GPR_U32(ctx, 31, 0x20C2E0u);
    ctx->pc = 0x20C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2D8u;
    // 0x20c2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C360u, 0x20C2D8u, 0x20C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2E0u;
label_20c2e0:
    // 0x20c2e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x20c2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_20c2e4:
    // 0x20c2e4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20C2E4u;
    {
        const bool branch_taken_0x20c2e4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x20C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2E4u;
        // 0x20c2e8: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2e4) {
            ctx->pc = 0x20C2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c2d0;
        }
    }
    ctx->pc = 0x20C2ECu;
    // 0x20c2ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c2f0:
    // 0x20c2f0: 0xc083144  jal         func_20C510
    ctx->pc = 0x20C2F0u;
    SET_GPR_U32(ctx, 31, 0x20C2F8u);
    ctx->pc = 0x20C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2F0u;
    // 0x20c2f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C510u, 0x20C2F0u, 0x20C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2F8u;
label_20c2f8:
    // 0x20c2f8: 0xc0831ce  jal         func_20C738
    ctx->pc = 0x20C2F8u;
    SET_GPR_U32(ctx, 31, 0x20C300u);
    ctx->pc = 0x20C738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C738u, 0x20C2F8u, 0x20C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C300u;
label_20c300:
    // 0x20c300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c304: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C304u;
    {
        const bool branch_taken_0x20c304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c304) {
            ctx->pc = 0x20C31Cu;
            goto label_20c31c;
        }
    }
    ctx->pc = 0x20C30Cu;
    // 0x20c30c: 0xc087086  jal         func_21C218
    ctx->pc = 0x20C30Cu;
    SET_GPR_U32(ctx, 31, 0x20C314u);
    ctx->pc = 0x21C218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C218u, 0x20C30Cu, 0x20C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C314u;
label_20c314:
    // 0x20c314: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c318: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x20c318u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20c31c:
    // 0x20c31c: 0xc08306e  jal         func_20C1B8
    ctx->pc = 0x20C31Cu;
    SET_GPR_U32(ctx, 31, 0x20C324u);
    ctx->pc = 0x20C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C31Cu;
    // 0x20c320: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1B8u, 0x20C31Cu, 0x20C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C324u;
label_20c324:
    // 0x20c324: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C324u;
    {
        const bool branch_taken_0x20c324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x20C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C324u;
        // 0x20c328: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c324) {
            ctx->pc = 0x20C348u;
            goto label_20c348;
        }
    }
    ctx->pc = 0x20C32Cu;
    // 0x20c32c: 0xc08318a  jal         func_20C628
    ctx->pc = 0x20C32Cu;
    SET_GPR_U32(ctx, 31, 0x20C334u);
    ctx->pc = 0x20C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C628u, 0x20C32Cu, 0x20C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C334u;
label_20c334:
    // 0x20c334: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C334u;
    {
        const bool branch_taken_0x20c334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c334) {
            ctx->pc = 0x20C348u;
            goto label_20c348;
        }
    }
    ctx->pc = 0x20C33Cu;
    // 0x20c33c: 0xc083088  jal         func_20C220
    ctx->pc = 0x20C33Cu;
    SET_GPR_U32(ctx, 31, 0x20C344u);
    ctx->pc = 0x20C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C220u, 0x20C33Cu, 0x20C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C344u;
label_20c344:
    // 0x20c344: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20c344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20c348:
    // 0x20c348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c34c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20c350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c354: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20c354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20c358: 0x3e00008  jr          $ra
    ctx->pc = 0x20C358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C358u;
        // 0x20c35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C360u;
}
