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

// Function: sub_002485C0
// Address: 0x2485c0 - 0x2486a4
void sub_002485C0_0x2485c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002485C0_0x2485c0");
#endif

    switch (ctx->pc) {
        case 0x248634u: goto label_248634;
        case 0x248640u: goto label_248640;
        case 0x248648u: goto label_248648;
        case 0x248650u: goto label_248650;
        case 0x248658u: goto label_248658;
        case 0x24867cu: goto label_24867c;
        default: break;
    }

    ctx->pc = 0x2485c0u;

    // 0x2485c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2485c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2485c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2485c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2485c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2485c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2485cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2485ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2485d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2485d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2485d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2485d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2485d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2485d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2485dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2485dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2485e0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2485E0u;
    {
        const bool branch_taken_0x2485e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2485E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485E0u;
        // 0x2485e4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485e0) {
            ctx->pc = 0x248610u;
            goto label_248610;
        }
    }
    ctx->pc = 0x2485E8u;
    // 0x2485e8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2485e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2485ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2485ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2485f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2485f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2485f4: 0x24a5cfd8  addiu       $a1, $a1, -0x3028
    ctx->pc = 0x2485f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954968));
    // 0x2485f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2485f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2485fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2485fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248600: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x248600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248604: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x248604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x248608: 0x8091f4c  j           func_247D30
    ctx->pc = 0x248608u;
    ctx->pc = 0x24860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248608u;
    // 0x24860c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D30u;
    sub_00247D30_0x247d30(rdram, ctx, runtime); return;
    ctx->pc = 0x248610u;
label_248610:
    // 0x248610: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x248610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x248614: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x248614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x248618: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x248618u;
    {
        const bool branch_taken_0x248618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248618) {
            ctx->pc = 0x24861Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248618u;
            // 0x24861c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248688u;
            goto label_248688;
        }
    }
    ctx->pc = 0x248620u;
    // 0x248620: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x248620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x248624: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248624u;
    {
        const bool branch_taken_0x248624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248624u;
        // 0x248628: 0x3c110009  lui         $s1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248624) {
            ctx->pc = 0x248634u;
            goto label_248634;
        }
    }
    ctx->pc = 0x24862Cu;
    // 0x24862c: 0xc0917b8  jal         func_245EE0
    ctx->pc = 0x24862Cu;
    SET_GPR_U32(ctx, 31, 0x248634u);
    ctx->pc = 0x245EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245EE0u, 0x24862Cu, 0x248634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248634u;
label_248634:
    // 0x248634: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x248634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248638: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x248638u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x24863c: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x24863cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_248640:
    // 0x248640: 0xc09191c  jal         func_246470
    ctx->pc = 0x248640u;
    SET_GPR_U32(ctx, 31, 0x248648u);
    ctx->pc = 0x246470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246470u, 0x248640u, 0x248648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248648u;
label_248648:
    // 0x248648: 0xc091fb4  jal         func_247ED0
    ctx->pc = 0x248648u;
    SET_GPR_U32(ctx, 31, 0x248650u);
    ctx->pc = 0x247ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247ED0u, 0x248648u, 0x248650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248650u;
label_248650:
    // 0x248650: 0xc0921aa  jal         func_2486A8
    ctx->pc = 0x248650u;
    SET_GPR_U32(ctx, 31, 0x248658u);
    ctx->pc = 0x248654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248650u;
    // 0x248654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486A8u, 0x248650u, 0x248658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248658u;
label_248658:
    // 0x248658: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x248658u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24865c: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x24865Cu;
    {
        const bool branch_taken_0x24865c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x24865c) {
            ctx->pc = 0x248660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24865Cu;
            // 0x248660: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248680u;
            goto label_248680;
        }
    }
    ctx->pc = 0x248664u;
    // 0x248664: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x248664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x248668: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x248668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x24866c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24866Cu;
    {
        const bool branch_taken_0x24866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24866c) {
            ctx->pc = 0x248640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248640;
        }
    }
    ctx->pc = 0x248674u;
    // 0x248674: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x248674u;
    SET_GPR_U32(ctx, 31, 0x24867Cu);
    ctx->pc = 0x248678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248674u;
    // 0x248678: 0x2684d038  addiu       $a0, $s4, -0x2FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x248674u, 0x24867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24867Cu;
label_24867c:
    // 0x24867c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x24867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_248680:
    // 0x248680: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x248680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x248684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248688:
    // 0x248688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24868c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24868cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248690: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x248690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x248694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248698: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x248698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24869c: 0x3e00008  jr          $ra
    ctx->pc = 0x24869Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2486A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24869Cu;
        // 0x2486a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24869Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2486A4u;
}
