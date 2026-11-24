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

// Function: sub_0024A1C8
// Address: 0x24a1c8 - 0x24a2bc
void sub_0024A1C8_0x24a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A1C8_0x24a1c8");
#endif

    switch (ctx->pc) {
        case 0x24a23cu: goto label_24a23c;
        case 0x24a250u: goto label_24a250;
        case 0x24a258u: goto label_24a258;
        case 0x24a260u: goto label_24a260;
        case 0x24a268u: goto label_24a268;
        case 0x24a270u: goto label_24a270;
        case 0x24a294u: goto label_24a294;
        default: break;
    }

    ctx->pc = 0x24a1c8u;

    // 0x24a1c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24a1d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24a1d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a1e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24a1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24a1e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24a1e8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A1E8u;
    {
        const bool branch_taken_0x24a1e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E8u;
        // 0x24a1ec: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1e8) {
            ctx->pc = 0x24A218u;
            goto label_24a218;
        }
    }
    ctx->pc = 0x24A1F0u;
    // 0x24a1f0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24a1f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a1f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a1fc: 0x24a5d540  addiu       $a1, $a1, -0x2AC0
    ctx->pc = 0x24a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956352));
    // 0x24a200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24a200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a204: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24a204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a208: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24a208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a20c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24a210: 0x80925d4  j           func_249750
    ctx->pc = 0x24A210u;
    ctx->pc = 0x24A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A210u;
    // 0x24a214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    sub_00249750_0x249750(rdram, ctx, runtime); return;
    ctx->pc = 0x24A218u;
label_24a218:
    // 0x24a218: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x24a218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24a21c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24a21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24a220: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x24A220u;
    {
        const bool branch_taken_0x24a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a220) {
            ctx->pc = 0x24A224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A220u;
            // 0x24a224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A2A0u;
            goto label_24a2a0;
        }
    }
    ctx->pc = 0x24A228u;
    // 0x24a228: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x24a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x24a22c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A22Cu;
    {
        const bool branch_taken_0x24a22c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A22Cu;
        // 0x24a230: 0x3c110063  lui         $s1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a22c) {
            ctx->pc = 0x24A23Cu;
            goto label_24a23c;
        }
    }
    ctx->pc = 0x24A234u;
    // 0x24a234: 0xc0917b8  jal         func_245EE0
    ctx->pc = 0x24A234u;
    SET_GPR_U32(ctx, 31, 0x24A23Cu);
    ctx->pc = 0x245EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245EE0u, 0x24A234u, 0x24A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A23Cu;
label_24a23c:
    // 0x24a23c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x24a23cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a240: 0x3631fff6  ori         $s1, $s1, 0xFFF6
    ctx->pc = 0x24a240u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65526);
    // 0x24a244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24A244u;
    {
        const bool branch_taken_0x24a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A244u;
        // 0x24a248: 0x3c140067  lui         $s4, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a244) {
            ctx->pc = 0x24A258u;
            goto label_24a258;
        }
    }
    ctx->pc = 0x24A24Cu;
    // 0x24a24c: 0x0  nop
    ctx->pc = 0x24a24cu;
    // NOP
label_24a250:
    // 0x24a250: 0xc0925c8  jal         func_249720
    ctx->pc = 0x24A250u;
    SET_GPR_U32(ctx, 31, 0x24A258u);
    ctx->pc = 0x249720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249720u, 0x24A250u, 0x24A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A258u;
label_24a258:
    // 0x24a258: 0xc09191c  jal         func_246470
    ctx->pc = 0x24A258u;
    SET_GPR_U32(ctx, 31, 0x24A260u);
    ctx->pc = 0x246470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246470u, 0x24A258u, 0x24A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A260u;
label_24a260:
    // 0x24a260: 0xc092658  jal         func_249960
    ctx->pc = 0x24A260u;
    SET_GPR_U32(ctx, 31, 0x24A268u);
    ctx->pc = 0x249960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249960u, 0x24A260u, 0x24A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A268u;
label_24a268:
    // 0x24a268: 0xc0928b0  jal         func_24A2C0
    ctx->pc = 0x24A268u;
    SET_GPR_U32(ctx, 31, 0x24A270u);
    ctx->pc = 0x24A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A268u;
    // 0x24a26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A2C0u, 0x24A268u, 0x24A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A270u;
label_24a270:
    // 0x24a270: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x24a270u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24a274: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A274u;
    {
        const bool branch_taken_0x24a274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x24a274) {
            ctx->pc = 0x24A278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A274u;
            // 0x24a278: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A298u;
            goto label_24a298;
        }
    }
    ctx->pc = 0x24A27Cu;
    // 0x24a27c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24a27cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24a280: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x24a280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x24a284: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24A284u;
    {
        const bool branch_taken_0x24a284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a284) {
            ctx->pc = 0x24A250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a250;
        }
    }
    ctx->pc = 0x24A28Cu;
    // 0x24a28c: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24A28Cu;
    SET_GPR_U32(ctx, 31, 0x24A294u);
    ctx->pc = 0x24A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A28Cu;
    // 0x24a290: 0x2684d558  addiu       $a0, $s4, -0x2AA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24A28Cu, 0x24A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A294u;
label_24a294:
    // 0x24a294: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x24a294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_24a298:
    // 0x24a298: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x24a298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a29c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a2a0:
    // 0x24a2a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a2a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24a2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a2a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24a2a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a2ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24a2acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a2b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24a2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24a2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2B4u;
        // 0x24a2b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A2BCu;
}
