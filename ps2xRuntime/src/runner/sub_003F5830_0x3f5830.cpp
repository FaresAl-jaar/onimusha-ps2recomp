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

// Function: sub_003F5830
// Address: 0x3f5830 - 0x3f5d30
void sub_003F5830_0x3f5830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5830_0x3f5830");
#endif

    switch (ctx->pc) {
        case 0x3f5868u: goto label_3f5868;
        case 0x3f5878u: goto label_3f5878;
        case 0x3f5880u: goto label_3f5880;
        case 0x3f5898u: goto label_3f5898;
        case 0x3f58b8u: goto label_3f58b8;
        case 0x3f58c4u: goto label_3f58c4;
        case 0x3f58e4u: goto label_3f58e4;
        case 0x3f591cu: goto label_3f591c;
        case 0x3f593cu: goto label_3f593c;
        case 0x3f59acu: goto label_3f59ac;
        case 0x3f59ccu: goto label_3f59cc;
        case 0x3f5a80u: goto label_3f5a80;
        case 0x3f5a9cu: goto label_3f5a9c;
        case 0x3f5b68u: goto label_3f5b68;
        case 0x3f5be4u: goto label_3f5be4;
        case 0x3f5c68u: goto label_3f5c68;
        case 0x3f5c7cu: goto label_3f5c7c;
        case 0x3f5c94u: goto label_3f5c94;
        case 0x3f5cccu: goto label_3f5ccc;
        case 0x3f5ce0u: goto label_3f5ce0;
        case 0x3f5d08u: goto label_3f5d08;
        case 0x3f5d10u: goto label_3f5d10;
        default: break;
    }

    ctx->pc = 0x3f5830u;

    // 0x3f5830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f5830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f5834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f5834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f5838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f583c: 0x90820238  lbu         $v0, 0x238($a0)
    ctx->pc = 0x3f583cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x3f5840: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x3f5840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3f5844: 0x10200134  beqz        $at, . + 4 + (0x134 << 2)
    ctx->pc = 0x3F5844u;
    {
        const bool branch_taken_0x3f5844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5844u;
        // 0x3f5848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5844) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F584Cu;
    // 0x3f584c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3f584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3f5850: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f5850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f5854: 0x24635ad0  addiu       $v1, $v1, 0x5AD0
    ctx->pc = 0x3f5854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23248));
    // 0x3f5858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f5858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f585c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f5860: 0x400008  jr          $v0
    ctx->pc = 0x3F5860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F5878u: goto label_3f5878;
            case 0x3F58B0u: goto label_3f58b0;
            case 0x3F58F0u: goto label_3f58f0;
            case 0x3F5988u: goto label_3f5988;
            case 0x3F5A10u: goto label_3f5a10;
            case 0x3F5A90u: goto label_3f5a90;
            case 0x3F5AF8u: goto label_3f5af8;
            case 0x3F5BC8u: goto label_3f5bc8;
            case 0x3F5C70u: goto label_3f5c70;
            case 0x3F5CB0u: goto label_3f5cb0;
            case 0x3F5CD8u: goto label_3f5cd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5860u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F5868u;
label_3f5868:
    // 0x3f5868: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f5868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f586c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x3f586cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x3f5870: 0xc04c918  jal         func_132460
    ctx->pc = 0x3F5870u;
    SET_GPR_U32(ctx, 31, 0x3F5878u);
    ctx->pc = 0x3F5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5870u;
    // 0x3f5874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3F5870u, 0x3F5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5878u;
label_3f5878:
    // 0x3f5878: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3F5878u;
    SET_GPR_U32(ctx, 31, 0x3F5880u);
    ctx->pc = 0x3F587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5878u;
    // 0x3f587c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3F5878u, 0x3F5880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5880u;
label_3f5880:
    // 0x3f5880: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3F5880u;
    {
        const bool branch_taken_0x3f5880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5880u;
        // 0x3f5884: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5880) {
            ctx->pc = 0x3F5868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5868;
        }
    }
    ctx->pc = 0x3F5888u;
    // 0x3f5888: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f5888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f588c: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x3f588cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16568)));
    // 0x3f5890: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x3F5890u;
    SET_GPR_U32(ctx, 31, 0x3F5898u);
    ctx->pc = 0x3F5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5890u;
    // 0x3f5894: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x3F5890u, 0x3F5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5898u;
label_3f5898:
    // 0x3f5898: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x3F5898u;
    {
        const bool branch_taken_0x3f5898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5898u;
        // 0x3f589c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5898) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F58A0u;
    // 0x3f58a0: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x3f58a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x3f58a4: 0x1440011c  bnez        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x3F58A4u;
    {
        const bool branch_taken_0x3f58a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F58A4u;
        // 0x3f58a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f58a4) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F58ACu;
    // 0x3f58ac: 0xa2020238  sb          $v0, 0x238($s0)
    ctx->pc = 0x3f58acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
label_3f58b0:
    // 0x3f58b0: 0xc0fd74c  jal         func_3F5D30
    ctx->pc = 0x3F58B0u;
    SET_GPR_U32(ctx, 31, 0x3F58B8u);
    ctx->pc = 0x3F58B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F58B0u;
    // 0x3f58b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5D30u, 0x3F58B0u, 0x3F58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58B8u;
label_3f58b8:
    // 0x3f58b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f58b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58bc: 0xc0fd768  jal         func_3F5DA0
    ctx->pc = 0x3F58BCu;
    SET_GPR_U32(ctx, 31, 0x3F58C4u);
    ctx->pc = 0x3F58C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F58BCu;
    // 0x3f58c0: 0xa200023b  sb          $zero, 0x23B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 571), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5DA0u, 0x3F58BCu, 0x3F58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58C4u;
label_3f58c4:
    // 0x3f58c4: 0x9202023c  lbu         $v0, 0x23C($s0)
    ctx->pc = 0x3f58c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x3f58c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f58cc: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f58ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f58d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3f58d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3f58d4: 0xa202023c  sb          $v0, 0x23C($s0)
    ctx->pc = 0x3f58d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 572), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f58d8: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x3f58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x3f58dc: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x3F58DCu;
    SET_GPR_U32(ctx, 31, 0x3F58E4u);
    ctx->pc = 0x3F58E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F58DCu;
    // 0x3f58e0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x3F58DCu, 0x3F58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58E4u;
label_3f58e4:
    // 0x3f58e4: 0xa200023d  sb          $zero, 0x23D($s0)
    ctx->pc = 0x3f58e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f58e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f58ec: 0xa2020238  sb          $v0, 0x238($s0)
    ctx->pc = 0x3f58ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
label_3f58f0:
    // 0x3f58f0: 0x9203023c  lbu         $v1, 0x23C($s0)
    ctx->pc = 0x3f58f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x3f58f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f58f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f58f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F58F8u;
    {
        const bool branch_taken_0x3f58f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F58F8u;
        // 0x3f58fc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f58f8) {
            ctx->pc = 0x3F5930u;
            goto label_3f5930;
        }
    }
    ctx->pc = 0x3F5900u;
    // 0x3f5900: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F5900u;
    {
        const bool branch_taken_0x3f5900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5900) {
            ctx->pc = 0x3F5930u;
            goto label_3f5930;
        }
    }
    ctx->pc = 0x3F5908u;
    // 0x3f5908: 0x306200fb  andi        $v0, $v1, 0xFB
    ctx->pc = 0x3f5908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x3f590c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5910: 0xa202023c  sb          $v0, 0x23C($s0)
    ctx->pc = 0x3f5910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 572), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5914: 0xc0fd76c  jal         func_3F5DB0
    ctx->pc = 0x3F5914u;
    SET_GPR_U32(ctx, 31, 0x3F591Cu);
    ctx->pc = 0x3F5918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5914u;
    // 0x3f5918: 0xa200023b  sb          $zero, 0x23B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 571), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5DB0u, 0x3F5914u, 0x3F591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F591Cu;
label_3f591c:
    // 0x3f591c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F591Cu;
    {
        const bool branch_taken_0x3f591c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f591c) {
            ctx->pc = 0x3F5930u;
            goto label_3f5930;
        }
    }
    ctx->pc = 0x3F5924u;
    // 0x3f5924: 0x9202023c  lbu         $v0, 0x23C($s0)
    ctx->pc = 0x3f5924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x3f5928: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3f5928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3f592c: 0xa202023c  sb          $v0, 0x23C($s0)
    ctx->pc = 0x3f592cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 572), (uint8_t)GPR_U32(ctx, 2));
label_3f5930:
    // 0x3f5930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5934: 0xc0fd820  jal         func_3F6080
    ctx->pc = 0x3F5934u;
    SET_GPR_U32(ctx, 31, 0x3F593Cu);
    ctx->pc = 0x3F5938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5934u;
    // 0x3f5938: 0xa6000244  sh          $zero, 0x244($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6080u, 0x3F5934u, 0x3F593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F593Cu;
label_3f593c:
    // 0x3f593c: 0x9202023d  lbu         $v0, 0x23D($s0)
    ctx->pc = 0x3f593cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
    // 0x3f5940: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f5940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f5944: 0xa202023d  sb          $v0, 0x23D($s0)
    ctx->pc = 0x3f5944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5948: 0x9202023c  lbu         $v0, 0x23C($s0)
    ctx->pc = 0x3f5948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x3f594c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f5950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F5950u;
    {
        const bool branch_taken_0x3f5950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5950u;
        // 0x3f5954: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5950) {
            ctx->pc = 0x3F5960u;
            goto label_3f5960;
        }
    }
    ctx->pc = 0x3F5958u;
    // 0x3f5958: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x3F5958u;
    {
        const bool branch_taken_0x3f5958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5958u;
        // 0x3f595c: 0xa2020238  sb          $v0, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5958) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5960u;
label_3f5960:
    // 0x3f5960: 0x9202023d  lbu         $v0, 0x23D($s0)
    ctx->pc = 0x3f5960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
    // 0x3f5964: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3f5964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f5968: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F5968u;
    {
        const bool branch_taken_0x3f5968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5968) {
            ctx->pc = 0x3F5978u;
            goto label_3f5978;
        }
    }
    ctx->pc = 0x3F5970u;
    // 0x3f5970: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x3F5970u;
    {
        const bool branch_taken_0x3f5970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5970u;
        // 0x3f5974: 0xa200023d  sb          $zero, 0x23D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5970) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5978u;
label_3f5978:
    // 0x3f5978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f5978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f597c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x3F597Cu;
    {
        const bool branch_taken_0x3f597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F597Cu;
        // 0x3f5980: 0xa2020238  sb          $v0, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f597c) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5984u;
    // 0x3f5984: 0x0  nop
    ctx->pc = 0x3f5984u;
    // NOP
label_3f5988:
    // 0x3f5988: 0x9203023c  lbu         $v1, 0x23C($s0)
    ctx->pc = 0x3f5988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x3f598c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f5990: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F5990u;
    {
        const bool branch_taken_0x3f5990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5990u;
        // 0x3f5994: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5990) {
            ctx->pc = 0x3F59C0u;
            goto label_3f59c0;
        }
    }
    ctx->pc = 0x3F5998u;
    // 0x3f5998: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F5998u;
    {
        const bool branch_taken_0x3f5998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5998) {
            ctx->pc = 0x3F59C0u;
            goto label_3f59c0;
        }
    }
    ctx->pc = 0x3F59A0u;
    // 0x3f59a0: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x3f59a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3f59a4: 0xc0fd76c  jal         func_3F5DB0
    ctx->pc = 0x3F59A4u;
    SET_GPR_U32(ctx, 31, 0x3F59ACu);
    ctx->pc = 0x3F59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F59A4u;
    // 0x3f59a8: 0xa202023c  sb          $v0, 0x23C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 572), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5DB0u, 0x3F59A4u, 0x3F59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F59ACu;
label_3f59ac:
    // 0x3f59ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F59ACu;
    {
        const bool branch_taken_0x3f59ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f59ac) {
            ctx->pc = 0x3F59C0u;
            goto label_3f59c0;
        }
    }
    ctx->pc = 0x3F59B4u;
    // 0x3f59b4: 0x9202023c  lbu         $v0, 0x23C($s0)
    ctx->pc = 0x3f59b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x3f59b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3f59b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3f59bc: 0xa202023c  sb          $v0, 0x23C($s0)
    ctx->pc = 0x3f59bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 572), (uint8_t)GPR_U32(ctx, 2));
label_3f59c0:
    // 0x3f59c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f59c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f59c4: 0xc0fd820  jal         func_3F6080
    ctx->pc = 0x3F59C4u;
    SET_GPR_U32(ctx, 31, 0x3F59CCu);
    ctx->pc = 0x3F59C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F59C4u;
    // 0x3f59c8: 0xa6000244  sh          $zero, 0x244($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6080u, 0x3F59C4u, 0x3F59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F59CCu;
label_3f59cc:
    // 0x3f59cc: 0x9202023d  lbu         $v0, 0x23D($s0)
    ctx->pc = 0x3f59ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
    // 0x3f59d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f59d4: 0xa202023d  sb          $v0, 0x23D($s0)
    ctx->pc = 0x3f59d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f59d8: 0x9202023c  lbu         $v0, 0x23C($s0)
    ctx->pc = 0x3f59d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x3f59dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f59dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f59e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F59E0u;
    {
        const bool branch_taken_0x3f59e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59E0u;
        // 0x3f59e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f59e0) {
            ctx->pc = 0x3F59F0u;
            goto label_3f59f0;
        }
    }
    ctx->pc = 0x3F59E8u;
    // 0x3f59e8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3F59E8u;
    {
        const bool branch_taken_0x3f59e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59E8u;
        // 0x3f59ec: 0xa2020238  sb          $v0, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f59e8) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F59F0u;
label_3f59f0:
    // 0x3f59f0: 0x9202023d  lbu         $v0, 0x23D($s0)
    ctx->pc = 0x3f59f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
    // 0x3f59f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3f59f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f59f8: 0x144000c7  bnez        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x3F59F8u;
    {
        const bool branch_taken_0x3f59f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59F8u;
        // 0x3f59fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f59f8) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5A00u;
    // 0x3f5a00: 0xa2020238  sb          $v0, 0x238($s0)
    ctx->pc = 0x3f5a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5a04: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x3F5A04u;
    {
        const bool branch_taken_0x3f5a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A04u;
        // 0x3f5a08: 0xa200023d  sb          $zero, 0x23D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a04) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5A0Cu;
    // 0x3f5a0c: 0x0  nop
    ctx->pc = 0x3f5a0cu;
    // NOP
label_3f5a10:
    // 0x3f5a10: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3f5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3f5a14: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3f5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f5a18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f5a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f5a1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f5a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f5a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f5a24: 0x0  nop
    ctx->pc = 0x3f5a24u;
    // NOP
    // 0x3f5a28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f5a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3f5a2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f5a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f5a30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5A30u;
    {
        const bool branch_taken_0x3f5a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f5a30) {
            ctx->pc = 0x3F5A48u;
            goto label_3f5a48;
        }
    }
    ctx->pc = 0x3F5A38u;
    // 0x3f5a38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5a3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5a40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5A40u;
    {
        const bool branch_taken_0x3f5a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5a40) {
            ctx->pc = 0x3F5A60u;
            goto label_3f5a60;
        }
    }
    ctx->pc = 0x3F5A48u;
label_3f5a48:
    // 0x3f5a48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f5a48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f5a4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f5a50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5a54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5a58: 0x0  nop
    ctx->pc = 0x3f5a58u;
    // NOP
    // 0x3f5a5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f5a60:
    // 0x3f5a60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5a64: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3f5a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3f5a68: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3f5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3f5a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f5a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f5a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f5a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5a78: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3F5A78u;
    SET_GPR_U32(ctx, 31, 0x3F5A80u);
    ctx->pc = 0x3F5A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A78u;
    // 0x3f5a7c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3F5A78u, 0x3F5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A80u;
label_3f5a80:
    // 0x3f5a80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3f5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f5a84: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3F5A84u;
    {
        const bool branch_taken_0x3f5a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A84u;
        // 0x3f5a88: 0xa2020238  sb          $v0, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a84) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5A8Cu;
    // 0x3f5a8c: 0x0  nop
    ctx->pc = 0x3f5a8cu;
    // NOP
label_3f5a90:
    // 0x3f5a90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5a94: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3F5A94u;
    SET_GPR_U32(ctx, 31, 0x3F5A9Cu);
    ctx->pc = 0x3F5A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A94u;
    // 0x3f5a98: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3F5A94u, 0x3F5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A9Cu;
label_3f5a9c:
    // 0x3f5a9c: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3F5A9Cu;
    {
        const bool branch_taken_0x3f5a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A9Cu;
        // 0x3f5aa0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a9c) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5AA4u;
    // 0x3f5aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5aa8: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x3f5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
    // 0x3f5aac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5ab0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3f5ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3f5ab4: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f5ab8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5abc: 0xac23cedc  sw          $v1, -0x3124($at)
    ctx->pc = 0x3f5abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEDCu, _value); } while (0);
    // 0x3f5ac0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5ac4: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x3f5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3f5ac8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3f5ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3f5acc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5ad0: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x3f5ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x3f5ad4: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x3f5ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x3f5ad8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F5AD8u;
    {
        const bool branch_taken_0x3f5ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AD8u;
        // 0x3f5adc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ad8) {
            ctx->pc = 0x3F5AE8u;
            goto label_3f5ae8;
        }
    }
    ctx->pc = 0x3F5AE0u;
    // 0x3f5ae0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x3F5AE0u;
    {
        const bool branch_taken_0x3f5ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AE0u;
        // 0x3f5ae4: 0xa2020238  sb          $v0, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ae0) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5AE8u;
label_3f5ae8:
    // 0x3f5ae8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3f5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3f5aec: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x3F5AECu;
    {
        const bool branch_taken_0x3f5aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5AECu;
        // 0x3f5af0: 0xa2020238  sb          $v0, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5aec) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5AF4u;
    // 0x3f5af4: 0x0  nop
    ctx->pc = 0x3f5af4u;
    // NOP
label_3f5af8:
    // 0x3f5af8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3f5afc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3f5afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f5b00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f5b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f5b04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f5b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f5b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f5b0c: 0x0  nop
    ctx->pc = 0x3f5b0cu;
    // NOP
    // 0x3f5b10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f5b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3f5b14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f5b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f5b18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5B18u;
    {
        const bool branch_taken_0x3f5b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f5b18) {
            ctx->pc = 0x3F5B30u;
            goto label_3f5b30;
        }
    }
    ctx->pc = 0x3F5B20u;
    // 0x3f5b20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5b20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5b24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5b28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5B28u;
    {
        const bool branch_taken_0x3f5b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b28) {
            ctx->pc = 0x3F5B48u;
            goto label_3f5b48;
        }
    }
    ctx->pc = 0x3F5B30u;
label_3f5b30:
    // 0x3f5b30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f5b30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f5b34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f5b38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5b38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5b3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5b3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5b40: 0x0  nop
    ctx->pc = 0x3f5b40u;
    // NOP
    // 0x3f5b44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f5b48:
    // 0x3f5b48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5b4c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3f5b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3f5b50: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3f5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3f5b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f5b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f5b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f5b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5b60: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3F5B60u;
    SET_GPR_U32(ctx, 31, 0x3F5B68u);
    ctx->pc = 0x3F5B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5B60u;
    // 0x3f5b64: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3F5B60u, 0x3F5B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5B68u;
label_3f5b68:
    // 0x3f5b68: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3f5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f5b6c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3f5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3f5b70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f5b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f5b74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f5b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f5b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f5b7c: 0x0  nop
    ctx->pc = 0x3f5b7cu;
    // NOP
    // 0x3f5b80: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f5b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3f5b84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f5b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f5b88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5B88u;
    {
        const bool branch_taken_0x3f5b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f5b88) {
            ctx->pc = 0x3F5BA0u;
            goto label_3f5ba0;
        }
    }
    ctx->pc = 0x3F5B90u;
    // 0x3f5b90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5b94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5b98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F5B98u;
    {
        const bool branch_taken_0x3f5b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5B98u;
        // 0x3f5b9c: 0xae030240  sw          $v1, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5b98) {
            ctx->pc = 0x3F5BBCu;
            goto label_3f5bbc;
        }
    }
    ctx->pc = 0x3F5BA0u;
label_3f5ba0:
    // 0x3f5ba0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f5ba0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f5ba4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f5ba8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5ba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5bac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5bb0: 0x0  nop
    ctx->pc = 0x3f5bb0u;
    // NOP
    // 0x3f5bb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5bb8: 0xae030240  sw          $v1, 0x240($s0)
    ctx->pc = 0x3f5bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
label_3f5bbc:
    // 0x3f5bbc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3f5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f5bc0: 0xa2020238  sb          $v0, 0x238($s0)
    ctx->pc = 0x3f5bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5bc4: 0x0  nop
    ctx->pc = 0x3f5bc4u;
    // NOP
label_3f5bc8:
    // 0x3f5bc8: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x3f5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x3f5bcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F5BCCu;
    {
        const bool branch_taken_0x3f5bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BCCu;
        // 0x3f5bd0: 0x3c040093  lui         $a0, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5bcc) {
            ctx->pc = 0x3F5BF8u;
            goto label_3f5bf8;
        }
    }
    ctx->pc = 0x3F5BD4u;
    // 0x3f5bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5bd8: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3f5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3f5bdc: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3F5BDCu;
    SET_GPR_U32(ctx, 31, 0x3F5BE4u);
    ctx->pc = 0x3F5BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5BDCu;
    // 0x3f5be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3F5BDCu, 0x3F5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5BE4u;
label_3f5be4:
    // 0x3f5be4: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x3f5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x3f5be8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3f5bec: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3F5BECu;
    {
        const bool branch_taken_0x3f5bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5BECu;
        // 0x3f5bf0: 0xae020240  sw          $v0, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5bec) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5BF4u;
    // 0x3f5bf4: 0x0  nop
    ctx->pc = 0x3f5bf4u;
    // NOP
label_3f5bf8:
    // 0x3f5bf8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3f5bfc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3f5bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f5c00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f5c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f5c04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f5c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f5c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f5c0c: 0x0  nop
    ctx->pc = 0x3f5c0cu;
    // NOP
    // 0x3f5c10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f5c10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3f5c14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f5c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f5c18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5C18u;
    {
        const bool branch_taken_0x3f5c18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f5c18) {
            ctx->pc = 0x3F5C30u;
            goto label_3f5c30;
        }
    }
    ctx->pc = 0x3F5C20u;
    // 0x3f5c20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5c20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5c24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5c28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5C28u;
    {
        const bool branch_taken_0x3f5c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5c28) {
            ctx->pc = 0x3F5C48u;
            goto label_3f5c48;
        }
    }
    ctx->pc = 0x3F5C30u;
label_3f5c30:
    // 0x3f5c30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f5c30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f5c34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f5c38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5c38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f5c3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f5c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f5c40: 0x0  nop
    ctx->pc = 0x3f5c40u;
    // NOP
    // 0x3f5c44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f5c48:
    // 0x3f5c48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5c4c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3f5c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3f5c50: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3f5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3f5c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f5c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f5c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f5c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c60: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3F5C60u;
    SET_GPR_U32(ctx, 31, 0x3F5C68u);
    ctx->pc = 0x3F5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C60u;
    // 0x3f5c64: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3F5C60u, 0x3F5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C68u;
label_3f5c68:
    // 0x3f5c68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3f5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f5c6c: 0xa2020238  sb          $v0, 0x238($s0)
    ctx->pc = 0x3f5c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
label_3f5c70:
    // 0x3f5c70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5c74: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3F5C74u;
    SET_GPR_U32(ctx, 31, 0x3F5C7Cu);
    ctx->pc = 0x3F5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C74u;
    // 0x3f5c78: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3F5C74u, 0x3F5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C7Cu;
label_3f5c7c:
    // 0x3f5c7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F5C7Cu;
    {
        const bool branch_taken_0x3f5c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C7Cu;
        // 0x3f5c80: 0x3c040093  lui         $a0, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c7c) {
            ctx->pc = 0x3F5CA0u;
            goto label_3f5ca0;
        }
    }
    ctx->pc = 0x3F5C84u;
    // 0x3f5c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5c88: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3f5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3f5c8c: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3F5C8Cu;
    SET_GPR_U32(ctx, 31, 0x3F5C94u);
    ctx->pc = 0x3F5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5C8Cu;
    // 0x3f5c90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3F5C8Cu, 0x3F5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5C94u;
label_3f5c94:
    // 0x3f5c94: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3F5C94u;
    {
        const bool branch_taken_0x3f5c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5c94) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5C9Cu;
    // 0x3f5c9c: 0x0  nop
    ctx->pc = 0x3f5c9cu;
    // NOP
label_3f5ca0:
    // 0x3f5ca0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3f5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3f5ca4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3F5CA4u;
    {
        const bool branch_taken_0x3f5ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CA4u;
        // 0x3f5ca8: 0xa2020238  sb          $v0, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ca4) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5CACu;
    // 0x3f5cac: 0x0  nop
    ctx->pc = 0x3f5cacu;
    // NOP
label_3f5cb0:
    // 0x3f5cb0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3f5cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3f5cb4: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x3f5cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x3f5cb8: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3f5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3f5cbc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3f5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3f5cc0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3f5cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3f5cc4: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x3F5CC4u;
    SET_GPR_U32(ctx, 31, 0x3F5CCCu);
    ctx->pc = 0x3F5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CC4u;
    // 0x3f5cc8: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x3F5CC4u, 0x3F5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CCCu;
label_3f5ccc:
    // 0x3f5ccc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3f5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3f5cd0: 0xa2020238  sb          $v0, 0x238($s0)
    ctx->pc = 0x3f5cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5cd4: 0x0  nop
    ctx->pc = 0x3f5cd4u;
    // NOP
label_3f5cd8:
    // 0x3f5cd8: 0xc05551c  jal         func_155470
    ctx->pc = 0x3F5CD8u;
    SET_GPR_U32(ctx, 31, 0x3F5CE0u);
    ctx->pc = 0x3F5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CD8u;
    // 0x3f5cdc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x3F5CD8u, 0x3F5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CE0u;
label_3f5ce0:
    // 0x3f5ce0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F5CE0u;
    {
        const bool branch_taken_0x3f5ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CE0u;
        // 0x3f5ce4: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ce0) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5CE8u;
    // 0x3f5ce8: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x3f5ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967084)));
    // 0x3f5cec: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3f5cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f5cf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3f5cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3f5cf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3f5cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f5cf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5CF8u;
    {
        const bool branch_taken_0x3f5cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CF8u;
        // 0x3f5cfc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cf8) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5D00u;
    // 0x3f5d00: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x3F5D00u;
    SET_GPR_U32(ctx, 31, 0x3F5D08u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x3F5D00u, 0x3F5D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D08u;
label_3f5d08:
    // 0x3f5d08: 0xc0fd5f8  jal         func_3F57E0
    ctx->pc = 0x3F5D08u;
    SET_GPR_U32(ctx, 31, 0x3F5D10u);
    ctx->pc = 0x3F5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D08u;
    // 0x3f5d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F57E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F57E0u, 0x3F5D08u, 0x3F5D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D10u;
label_3f5d10:
    // 0x3f5d10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F5D10u;
    {
        const bool branch_taken_0x3f5d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D10u;
        // 0x3f5d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5d10) {
            ctx->pc = 0x3F5D20u;
            goto label_3f5d20;
        }
    }
    ctx->pc = 0x3F5D18u;
label_3f5d18:
    // 0x3f5d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5d1c: 0x0  nop
    ctx->pc = 0x3f5d1cu;
    // NOP
label_3f5d20:
    // 0x3f5d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f5d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f5d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5d28: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D28u;
        // 0x3f5d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5D30u;
}
