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

// Function: sub_003DE2F0
// Address: 0x3de2f0 - 0x3de574
void sub_003DE2F0_0x3de2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE2F0_0x3de2f0");
#endif

    switch (ctx->pc) {
        case 0x3de308u: goto label_3de308;
        case 0x3de348u: goto label_3de348;
        case 0x3de380u: goto label_3de380;
        case 0x3de38cu: goto label_3de38c;
        case 0x3de3a8u: goto label_3de3a8;
        case 0x3de3b4u: goto label_3de3b4;
        case 0x3de40cu: goto label_3de40c;
        case 0x3de44cu: goto label_3de44c;
        case 0x3de490u: goto label_3de490;
        case 0x3de500u: goto label_3de500;
        case 0x3de514u: goto label_3de514;
        default: break;
    }

    ctx->pc = 0x3de2f0u;

    // 0x3de2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3de2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3de2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3de2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3de2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3de2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3de2fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de300: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3DE300u;
    SET_GPR_U32(ctx, 31, 0x3DE308u);
    ctx->pc = 0x3DE304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE300u;
    // 0x3de304: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3DE300u, 0x3DE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE308u;
label_3de308:
    // 0x3de308: 0x92222b20  lbu         $v0, 0x2B20($s1)
    ctx->pc = 0x3de308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x3de30c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3de30cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3de310: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE310u;
    {
        const bool branch_taken_0x3de310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de310) {
            ctx->pc = 0x3DE320u;
            goto label_3de320;
        }
    }
    ctx->pc = 0x3DE318u;
    // 0x3de318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de31c: 0xa2222b20  sb          $v0, 0x2B20($s1)
    ctx->pc = 0x3de31cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11040), (uint8_t)GPR_U32(ctx, 2));
label_3de320:
    // 0x3de320: 0x92232b20  lbu         $v1, 0x2B20($s1)
    ctx->pc = 0x3de320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x3de324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3de324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3de328: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3DE328u;
    {
        const bool branch_taken_0x3de328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de328) {
            ctx->pc = 0x3DE3C0u;
            goto label_3de3c0;
        }
    }
    ctx->pc = 0x3DE330u;
    // 0x3de330: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3de330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3de334: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3de334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3de338: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3de338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3de33c: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x3de33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3de340: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3DE340u;
    SET_GPR_U32(ctx, 31, 0x3DE348u);
    ctx->pc = 0x3DE344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE340u;
    // 0x3de344: 0x24c647c0  addiu       $a2, $a2, 0x47C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3DE340u, 0x3DE348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE348u;
label_3de348:
    // 0x3de348: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x3de348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3de34c: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x3de34cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3de350: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x3DE350u;
    {
        const bool branch_taken_0x3de350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE350u;
        // 0x3de354: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de350) {
            ctx->pc = 0x3DE3B8u;
            goto label_3de3b8;
        }
    }
    ctx->pc = 0x3DE358u;
    // 0x3de358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3de358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3de35c: 0x246347d0  addiu       $v1, $v1, 0x47D0
    ctx->pc = 0x3de35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18384));
    // 0x3de360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3de360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3de364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3de364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3de368: 0x400008  jr          $v0
    ctx->pc = 0x3DE368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DE370u: goto label_3de370;
            case 0x3DE398u: goto label_3de398;
            case 0x3DE3B8u: goto label_3de3b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE368u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DE370u;
label_3de370:
    // 0x3de370: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x3de370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3de374: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3de374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3de378: 0xc0a9564  jal         func_2A5590
    ctx->pc = 0x3DE378u;
    SET_GPR_U32(ctx, 31, 0x3DE380u);
    ctx->pc = 0x3DE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE378u;
    // 0x3de37c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5590u, 0x3DE378u, 0x3DE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE380u;
label_3de380:
    // 0x3de380: 0x8e24296c  lw          $a0, 0x296C($s1)
    ctx->pc = 0x3de380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10604)));
    // 0x3de384: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3DE384u;
    SET_GPR_U32(ctx, 31, 0x3DE38Cu);
    ctx->pc = 0x3DE388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE384u;
    // 0x3de388: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3DE384u, 0x3DE38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE38Cu;
label_3de38c:
    // 0x3de38c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DE38Cu;
    {
        const bool branch_taken_0x3de38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE38Cu;
        // 0x3de390: 0xae30296c  sw          $s0, 0x296C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10604), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de38c) {
            ctx->pc = 0x3DE3B8u;
            goto label_3de3b8;
        }
    }
    ctx->pc = 0x3DE394u;
    // 0x3de394: 0x0  nop
    ctx->pc = 0x3de394u;
    // NOP
label_3de398:
    // 0x3de398: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x3de398u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3de39c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3de39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3de3a0: 0xc0a9574  jal         func_2A55D0
    ctx->pc = 0x3DE3A0u;
    SET_GPR_U32(ctx, 31, 0x3DE3A8u);
    ctx->pc = 0x3DE3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE3A0u;
    // 0x3de3a4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A55D0u, 0x3DE3A0u, 0x3DE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE3A8u;
label_3de3a8:
    // 0x3de3a8: 0x8e24296c  lw          $a0, 0x296C($s1)
    ctx->pc = 0x3de3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10604)));
    // 0x3de3ac: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3DE3ACu;
    SET_GPR_U32(ctx, 31, 0x3DE3B4u);
    ctx->pc = 0x3DE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE3ACu;
    // 0x3de3b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3DE3ACu, 0x3DE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE3B4u;
label_3de3b4:
    // 0x3de3b4: 0xae30296c  sw          $s0, 0x296C($s1)
    ctx->pc = 0x3de3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10604), GPR_U32(ctx, 16));
label_3de3b8:
    // 0x3de3b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3de3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3de3bc: 0xa2222b20  sb          $v0, 0x2B20($s1)
    ctx->pc = 0x3de3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11040), (uint8_t)GPR_U32(ctx, 2));
label_3de3c0:
    // 0x3de3c0: 0x922307d8  lbu         $v1, 0x7D8($s1)
    ctx->pc = 0x3de3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2008)));
    // 0x3de3c4: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x3de3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x3de3c8: 0x24426c20  addiu       $v0, $v0, 0x6C20
    ctx->pc = 0x3de3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27680));
    // 0x3de3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3de3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3de3d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3de3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3de3d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3de3d8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3DE3D8u;
    {
        const bool branch_taken_0x3de3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de3d8) {
            ctx->pc = 0x3DE4F8u;
            goto label_3de4f8;
        }
    }
    ctx->pc = 0x3DE3E0u;
    // 0x3de3e0: 0x96220828  lhu         $v0, 0x828($s1)
    ctx->pc = 0x3de3e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x3de3e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE3E4u;
    {
        const bool branch_taken_0x3de3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de3e4) {
            ctx->pc = 0x3DE3F8u;
            goto label_3de3f8;
        }
    }
    ctx->pc = 0x3DE3ECu;
    // 0x3de3ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3de3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3de3f0: 0xa6220828  sh          $v0, 0x828($s1)
    ctx->pc = 0x3de3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
    // 0x3de3f4: 0x0  nop
    ctx->pc = 0x3de3f4u;
    // NOP
label_3de3f8:
    // 0x3de3f8: 0x96220828  lhu         $v0, 0x828($s1)
    ctx->pc = 0x3de3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x3de3fc: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3DE3FCu;
    {
        const bool branch_taken_0x3de3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3FCu;
        // 0x3de400: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de3fc) {
            ctx->pc = 0x3DE4F8u;
            goto label_3de4f8;
        }
    }
    ctx->pc = 0x3DE404u;
    // 0x3de404: 0xc0f788c  jal         func_3DE230
    ctx->pc = 0x3DE404u;
    SET_GPR_U32(ctx, 31, 0x3DE40Cu);
    ctx->pc = 0x3DE230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE230u, 0x3DE404u, 0x3DE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE40Cu;
label_3de40c:
    // 0x3de40c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3DE40Cu;
    {
        const bool branch_taken_0x3de40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de40c) {
            ctx->pc = 0x3DE4F8u;
            goto label_3de4f8;
        }
    }
    ctx->pc = 0x3DE414u;
    // 0x3de414: 0x922307d8  lbu         $v1, 0x7D8($s1)
    ctx->pc = 0x3de414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2008)));
    // 0x3de418: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x3de418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x3de41c: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3de41cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3de420: 0x24426c20  addiu       $v0, $v0, 0x6C20
    ctx->pc = 0x3de420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27680));
    // 0x3de424: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3de424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3de428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3de428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3de42c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3de42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3de430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3de430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de434: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3de434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3de438: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3de438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3de43c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3de43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3de440: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x3de440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3de444: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3DE444u;
    SET_GPR_U32(ctx, 31, 0x3DE44Cu);
    ctx->pc = 0x3DE448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE444u;
    // 0x3de448: 0x24c647c0  addiu       $a2, $a2, 0x47C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3DE444u, 0x3DE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE44Cu;
label_3de44c:
    // 0x3de44c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3de44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3de450: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3de450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3de454: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3de454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3de458: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3de458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3de45c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3de45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3de460: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3de460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3de464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de468: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3de468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3de46c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3de46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3de470: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x3de470u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3de474: 0x9226082a  lbu         $a2, 0x82A($s1)
    ctx->pc = 0x3de474u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3de478: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3de478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3de47c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3de47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x3de480: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3de480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x3de484: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3de484u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3de488: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x3DE488u;
    SET_GPR_U32(ctx, 31, 0x3DE490u);
    ctx->pc = 0x3DE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE488u;
    // 0x3de48c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3DE488u, 0x3DE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE490u;
label_3de490:
    // 0x3de490: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3de490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3de494: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3de494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3de498: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3de498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3de49c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3de49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3de4a0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3de4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3de4a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3de4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3de4a8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3de4a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3de4ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3de4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3de4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3de4b4: 0x0  nop
    ctx->pc = 0x3de4b4u;
    // NOP
    // 0x3de4b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3de4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3de4bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3de4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3de4c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DE4C0u;
    {
        const bool branch_taken_0x3de4c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3de4c0) {
            ctx->pc = 0x3DE4D8u;
            goto label_3de4d8;
        }
    }
    ctx->pc = 0x3DE4C8u;
    // 0x3de4c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3de4c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3de4cc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3de4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3de4d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE4D0u;
    {
        const bool branch_taken_0x3de4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4D0u;
        // 0x3de4d4: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de4d0) {
            ctx->pc = 0x3DE4F4u;
            goto label_3de4f4;
        }
    }
    ctx->pc = 0x3DE4D8u;
label_3de4d8:
    // 0x3de4d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3de4d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3de4dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3de4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3de4e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3de4e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3de4e4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3de4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3de4e8: 0x0  nop
    ctx->pc = 0x3de4e8u;
    // NOP
    // 0x3de4ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3de4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3de4f0: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x3de4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_3de4f4:
    // 0x3de4f4: 0x0  nop
    ctx->pc = 0x3de4f4u;
    // NOP
label_3de4f8:
    // 0x3de4f8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3DE4F8u;
    SET_GPR_U32(ctx, 31, 0x3DE500u);
    ctx->pc = 0x3DE4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE4F8u;
    // 0x3de4fc: 0x8e24296c  lw          $a0, 0x296C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3DE4F8u, 0x3DE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE500u;
label_3de500:
    // 0x3de500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de504: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DE504u;
    {
        const bool branch_taken_0x3de504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de504) {
            ctx->pc = 0x3DE560u;
            goto label_3de560;
        }
    }
    ctx->pc = 0x3DE50Cu;
    // 0x3de50c: 0xc0b3498  jal         func_2CD260
    ctx->pc = 0x3DE50Cu;
    SET_GPR_U32(ctx, 31, 0x3DE514u);
    ctx->pc = 0x3DE510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE50Cu;
    // 0x3de510: 0x922407d8  lbu         $a0, 0x7D8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD260u, 0x3DE50Cu, 0x3DE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE514u;
label_3de514:
    // 0x3de514: 0x922507d8  lbu         $a1, 0x7D8($s1)
    ctx->pc = 0x3de514u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2008)));
    // 0x3de518: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3de518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3de51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3de520: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x3de520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x3de524: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x3de524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x3de528: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3de528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3de52c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3de52cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3de530: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3de530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3de534: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3de534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3de538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3de538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3de53c: 0x0  nop
    ctx->pc = 0x3de53cu;
    // NOP
    // 0x3de540: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3de540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3de544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3de544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3de548: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3de548u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3de54c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3de54cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3de550: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3de550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3de554: 0x0  nop
    ctx->pc = 0x3de554u;
    // NOP
    // 0x3de558: 0xa603006a  sh          $v1, 0x6A($s0)
    ctx->pc = 0x3de558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x3de55c: 0x0  nop
    ctx->pc = 0x3de55cu;
    // NOP
label_3de560:
    // 0x3de560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3de560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3de564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3de564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3de568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de56c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE56Cu;
        // 0x3de570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE574u;
}
