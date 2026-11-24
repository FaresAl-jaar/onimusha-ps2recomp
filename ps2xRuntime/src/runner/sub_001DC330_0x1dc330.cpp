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

// Function: sub_001DC330
// Address: 0x1dc330 - 0x1dc440
void sub_001DC330_0x1dc330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC330_0x1dc330");
#endif

    ctx->pc = 0x1dc330u;

    // 0x1dc330: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1dc330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc334: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1dc334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1dc338: 0x2c41001a  sltiu       $at, $v0, 0x1A
    ctx->pc = 0x1dc338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1dc33c: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DC33Cu;
    {
        const bool branch_taken_0x1dc33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC33Cu;
        // 0x1dc340: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc33c) {
            ctx->pc = 0x1DC430u;
            goto label_1dc430;
        }
    }
    ctx->pc = 0x1DC344u;
    // 0x1dc344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc348: 0x24635d60  addiu       $v1, $v1, 0x5D60
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23904));
    // 0x1dc34c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc350: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc354: 0x400008  jr          $v0
    ctx->pc = 0x1DC354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC360u: goto label_1dc360;
            case 0x1DC368u: goto label_1dc368;
            case 0x1DC370u: goto label_1dc370;
            case 0x1DC378u: goto label_1dc378;
            case 0x1DC380u: goto label_1dc380;
            case 0x1DC388u: goto label_1dc388;
            case 0x1DC390u: goto label_1dc390;
            case 0x1DC398u: goto label_1dc398;
            case 0x1DC3A0u: goto label_1dc3a0;
            case 0x1DC3A8u: goto label_1dc3a8;
            case 0x1DC3B0u: goto label_1dc3b0;
            case 0x1DC3B8u: goto label_1dc3b8;
            case 0x1DC3C0u: goto label_1dc3c0;
            case 0x1DC3C8u: goto label_1dc3c8;
            case 0x1DC3D0u: goto label_1dc3d0;
            case 0x1DC3D8u: goto label_1dc3d8;
            case 0x1DC3E0u: goto label_1dc3e0;
            case 0x1DC3E8u: goto label_1dc3e8;
            case 0x1DC3F0u: goto label_1dc3f0;
            case 0x1DC3F8u: goto label_1dc3f8;
            case 0x1DC400u: goto label_1dc400;
            case 0x1DC408u: goto label_1dc408;
            case 0x1DC410u: goto label_1dc410;
            case 0x1DC418u: goto label_1dc418;
            case 0x1DC420u: goto label_1dc420;
            case 0x1DC428u: goto label_1dc428;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC354u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DC35Cu;
    // 0x1dc35c: 0x0  nop
    ctx->pc = 0x1dc35cu;
    // NOP
label_1dc360:
    // 0x1dc360: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DC360u;
    {
        const bool branch_taken_0x1dc360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC360u;
        // 0x1dc364: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc360) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC368u;
label_1dc368:
    // 0x1dc368: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1DC368u;
    {
        const bool branch_taken_0x1dc368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC368u;
        // 0x1dc36c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc368) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC370u;
label_1dc370:
    // 0x1dc370: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1DC370u;
    {
        const bool branch_taken_0x1dc370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC370u;
        // 0x1dc374: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc370) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC378u;
label_1dc378:
    // 0x1dc378: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1DC378u;
    {
        const bool branch_taken_0x1dc378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC378u;
        // 0x1dc37c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc378) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC380u;
label_1dc380:
    // 0x1dc380: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1DC380u;
    {
        const bool branch_taken_0x1dc380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC380u;
        // 0x1dc384: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc380) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC388u;
label_1dc388:
    // 0x1dc388: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DC388u;
    {
        const bool branch_taken_0x1dc388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC388u;
        // 0x1dc38c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc388) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC390u;
label_1dc390:
    // 0x1dc390: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1DC390u;
    {
        const bool branch_taken_0x1dc390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC390u;
        // 0x1dc394: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc390) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC398u;
label_1dc398:
    // 0x1dc398: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1DC398u;
    {
        const bool branch_taken_0x1dc398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC398u;
        // 0x1dc39c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc398) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3A0u;
label_1dc3a0:
    // 0x1dc3a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1DC3A0u;
    {
        const bool branch_taken_0x1dc3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A0u;
        // 0x1dc3a4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3a0) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3A8u;
label_1dc3a8:
    // 0x1dc3a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DC3A8u;
    {
        const bool branch_taken_0x1dc3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A8u;
        // 0x1dc3ac: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3a8) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3B0u;
label_1dc3b0:
    // 0x1dc3b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1DC3B0u;
    {
        const bool branch_taken_0x1dc3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3B0u;
        // 0x1dc3b4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3b0) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3B8u;
label_1dc3b8:
    // 0x1dc3b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DC3B8u;
    {
        const bool branch_taken_0x1dc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3B8u;
        // 0x1dc3bc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3b8) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3C0u;
label_1dc3c0:
    // 0x1dc3c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1DC3C0u;
    {
        const bool branch_taken_0x1dc3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3C0u;
        // 0x1dc3c4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3c0) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3C8u;
label_1dc3c8:
    // 0x1dc3c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DC3C8u;
    {
        const bool branch_taken_0x1dc3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3C8u;
        // 0x1dc3cc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3c8) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3D0u;
label_1dc3d0:
    // 0x1dc3d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DC3D0u;
    {
        const bool branch_taken_0x1dc3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3D0u;
        // 0x1dc3d4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3d0) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3D8u;
label_1dc3d8:
    // 0x1dc3d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC3D8u;
    {
        const bool branch_taken_0x1dc3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3D8u;
        // 0x1dc3dc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3d8) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3E0u;
label_1dc3e0:
    // 0x1dc3e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1DC3E0u;
    {
        const bool branch_taken_0x1dc3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3E0u;
        // 0x1dc3e4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3e0) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3E8u;
label_1dc3e8:
    // 0x1dc3e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DC3E8u;
    {
        const bool branch_taken_0x1dc3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3E8u;
        // 0x1dc3ec: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3e8) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3F0u;
label_1dc3f0:
    // 0x1dc3f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DC3F0u;
    {
        const bool branch_taken_0x1dc3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F0u;
        // 0x1dc3f4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3f0) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC3F8u;
label_1dc3f8:
    // 0x1dc3f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DC3F8u;
    {
        const bool branch_taken_0x1dc3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F8u;
        // 0x1dc3fc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3f8) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC400u;
label_1dc400:
    // 0x1dc400: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DC400u;
    {
        const bool branch_taken_0x1dc400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC400u;
        // 0x1dc404: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc400) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC408u;
label_1dc408:
    // 0x1dc408: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DC408u;
    {
        const bool branch_taken_0x1dc408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC408u;
        // 0x1dc40c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc408) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC410u;
label_1dc410:
    // 0x1dc410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC410u;
    {
        const bool branch_taken_0x1dc410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC410u;
        // 0x1dc414: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc410) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC418u;
label_1dc418:
    // 0x1dc418: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC418u;
    {
        const bool branch_taken_0x1dc418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC418u;
        // 0x1dc41c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc418) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC420u;
label_1dc420:
    // 0x1dc420: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC420u;
    {
        const bool branch_taken_0x1dc420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC420u;
        // 0x1dc424: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc420) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC428u;
label_1dc428:
    // 0x1dc428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC428u;
    {
        const bool branch_taken_0x1dc428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC428u;
        // 0x1dc42c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc428) {
            ctx->pc = 0x1DC438u;
            goto label_1dc438;
        }
    }
    ctx->pc = 0x1DC430u;
label_1dc430:
    // 0x1dc430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc434: 0x0  nop
    ctx->pc = 0x1dc434u;
    // NOP
label_1dc438:
    // 0x1dc438: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC440u;
}
