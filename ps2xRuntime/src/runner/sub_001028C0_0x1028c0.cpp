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

// Function: sub_001028C0
// Address: 0x1028c0 - 0x102960
void sub_001028C0_0x1028c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001028C0_0x1028c0");
#endif

    switch (ctx->pc) {
        case 0x1028e4u: goto label_1028e4;
        case 0x102900u: goto label_102900;
        case 0x10291cu: goto label_10291c;
        case 0x102930u: goto label_102930;
        case 0x10293cu: goto label_10293c;
        default: break;
    }

    ctx->pc = 0x1028c0u;

    // 0x1028c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1028c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1028c4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1028c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1028c8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1028c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1028cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1028ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1028d0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1028d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1028d4: 0x24841a40  addiu       $a0, $a0, 0x1A40
    ctx->pc = 0x1028d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6720));
    // 0x1028d8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1028d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1028dc: 0xc044cda  jal         func_113368
    ctx->pc = 0x1028DCu;
    SET_GPR_U32(ctx, 31, 0x1028E4u);
    ctx->pc = 0x1028E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028DCu;
    // 0x1028e0: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113368u, 0x1028DCu, 0x1028E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028E4u;
label_1028e4:
    // 0x1028e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1028e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1028e8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1028E8u;
    {
        const bool branch_taken_0x1028e8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1028ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028E8u;
        // 0x1028ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028e8) {
            ctx->pc = 0x1028F8u;
            goto label_1028f8;
        }
    }
    ctx->pc = 0x1028F0u;
    // 0x1028f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1028F0u;
    {
        const bool branch_taken_0x1028f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F0u;
        // 0x1028f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f0) {
            ctx->pc = 0x102948u;
            goto label_102948;
        }
    }
    ctx->pc = 0x1028F8u;
label_1028f8:
    // 0x1028f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1028F8u;
    {
        const bool branch_taken_0x1028f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F8u;
        // 0x1028fc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f8) {
            ctx->pc = 0x102904u;
            goto label_102904;
        }
    }
    ctx->pc = 0x102900u;
label_102900:
    // 0x102900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x102900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_102904:
    // 0x102904: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x102904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x102908: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102908u;
    {
        const bool branch_taken_0x102908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102908u;
        // 0x10290c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102908) {
            ctx->pc = 0x102928u;
            goto label_102928;
        }
    }
    ctx->pc = 0x102910u;
    // 0x102910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102914: 0xc044e6c  jal         func_1139B0
    ctx->pc = 0x102914u;
    SET_GPR_U32(ctx, 31, 0x10291Cu);
    ctx->pc = 0x102918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102914u;
    // 0x102918: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1139B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1139B0u, 0x102914u, 0x10291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10291Cu;
label_10291c:
    // 0x10291c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x10291cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102920: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x102920u;
    {
        const bool branch_taken_0x102920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102920u;
        // 0x102924: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102920) {
            ctx->pc = 0x102900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102900;
        }
    }
    ctx->pc = 0x102928u;
label_102928:
    // 0x102928: 0xc044d7e  jal         func_1135F8
    ctx->pc = 0x102928u;
    SET_GPR_U32(ctx, 31, 0x102930u);
    ctx->pc = 0x10292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102928u;
    // 0x10292c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1135F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135F8u, 0x102928u, 0x102930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102930u;
label_102930:
    // 0x102930: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x102930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x102934: 0xc0488e8  jal         func_1223A0
    ctx->pc = 0x102934u;
    SET_GPR_U32(ctx, 31, 0x10293Cu);
    ctx->pc = 0x102938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102934u;
    // 0x102938: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223A0u, 0x102934u, 0x10293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10293Cu;
label_10293c:
    // 0x10293c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x10293cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x102940: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x102940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x102944: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x102944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_102948:
    // 0x102948: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x102948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10294c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10294cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x102950: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x102950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x102954: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x102954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x102958: 0x3e00008  jr          $ra
    ctx->pc = 0x102958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102958u;
        // 0x10295c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102960u;
}
