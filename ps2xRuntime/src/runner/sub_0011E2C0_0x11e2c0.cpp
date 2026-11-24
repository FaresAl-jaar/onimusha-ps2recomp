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

// Function: sub_0011E2C0
// Address: 0x11e2c0 - 0x11e494
void sub_0011E2C0_0x11e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E2C0_0x11e2c0");
#endif

    switch (ctx->pc) {
        case 0x11e314u: goto label_11e314;
        case 0x11e320u: goto label_11e320;
        case 0x11e338u: goto label_11e338;
        case 0x11e33cu: goto label_11e33c;
        case 0x11e360u: goto label_11e360;
        case 0x11e364u: goto label_11e364;
        case 0x11e3c0u: goto label_11e3c0;
        case 0x11e3ccu: goto label_11e3cc;
        case 0x11e418u: goto label_11e418;
        case 0x11e43cu: goto label_11e43c;
        case 0x11e448u: goto label_11e448;
        case 0x11e468u: goto label_11e468;
        default: break;
    }

    ctx->pc = 0x11e2c0u;

    // 0x11e2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e2c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11e2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11e2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e2d0: 0x4883f  dsra32      $s1, $a0, 0
    ctx->pc = 0x11e2d0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e2d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11e2d8: 0x117503  sra         $t6, $s1, 20
    ctx->pc = 0x11e2d8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 17), 20));
    // 0x11e2dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11e2e0: 0x31ce07ff  andi        $t6, $t6, 0x7FF
    ctx->pc = 0x11e2e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2047);
    // 0x11e2e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11e2e8: 0x4903c  dsll32      $s2, $a0, 0
    ctx->pc = 0x11e2e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11e2ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11e2f0: 0x25d0fc01  addiu       $s0, $t6, -0x3FF
    ctx->pc = 0x11e2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966273));
    // 0x11e2f4: 0x2a0f0014  slti        $t7, $s0, 0x14
    ctx->pc = 0x11e2f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x11e2f8: 0x11e0003f  beqz        $t7, . + 4 + (0x3F << 2)
    ctx->pc = 0x11E2F8u;
    {
        const bool branch_taken_0x11e2f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2F8u;
        // 0x11e2fc: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2f8) {
            ctx->pc = 0x11E3F8u;
            goto label_11e3f8;
        }
    }
    ctx->pc = 0x11E300u;
    // 0x11e300: 0x6010027  bgez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x11E300u;
    {
        const bool branch_taken_0x11e300 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x11E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E300u;
        // 0x11e304: 0x3c0e000f  lui         $t6, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e300) {
            ctx->pc = 0x11E3A0u;
            goto label_11e3a0;
        }
    }
    ctx->pc = 0x11E308u;
    // 0x11e308: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e308u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e30c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11E30Cu;
    SET_GPR_U32(ctx, 31, 0x11E314u);
    ctx->pc = 0x11E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E30Cu;
    // 0x11e310: 0xdde535d0  ld          $a1, 0x35D0($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11E30Cu, 0x11E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E314u;
label_11e314:
    // 0x11e314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e318: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11E318u;
    SET_GPR_U32(ctx, 31, 0x11E320u);
    ctx->pc = 0x11E31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E318u;
    // 0x11e31c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11E318u, 0x11E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E320u;
label_11e320:
    // 0x11e320: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E320u;
    {
        const bool branch_taken_0x11e320 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11e320) {
            ctx->pc = 0x11E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E320u;
            // 0x11e324: 0x13983c  dsll32      $s3, $s3, 0 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E33Cu;
            goto label_11e33c;
        }
    }
    ctx->pc = 0x11E328u;
    // 0x11e328: 0x6200015  bltz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E328u;
    {
        const bool branch_taken_0x11e328 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x11E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E328u;
        // 0x11e32c: 0x3c0f7fff  lui         $t7, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e328) {
            ctx->pc = 0x11E380u;
            goto label_11e380;
        }
    }
    ctx->pc = 0x11E330u;
    // 0x11e330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11e330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e334: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11e334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e338:
    // 0x11e338: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x11e338u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
label_11e33c:
    // 0x11e33c: 0x11783c  dsll32      $t7, $s1, 0
    ctx->pc = 0x11e33cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
    // 0x11e340: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x11e340u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x11e344: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x11e344u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x11e348: 0x26f9825  or          $s3, $s3, $t7
    ctx->pc = 0x11e348u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 15));
    // 0x11e34c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11e34cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11e350: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x11e350u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e354: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11e354u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11e358: 0x26f9824  and         $s3, $s3, $t7
    ctx->pc = 0x11e358u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 15));
    // 0x11e35c: 0x26e1025  or          $v0, $s3, $t6
    ctx->pc = 0x11e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 14));
label_11e360:
    // 0x11e360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e364:
    // 0x11e364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11e364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11e368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e36c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11e36cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11e370: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11e370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e374: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11e374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11e378: 0x3e00008  jr          $ra
    ctx->pc = 0x11E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E378u;
        // 0x11e37c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E380u;
label_11e380:
    // 0x11e380: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e380u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e384: 0x22f7824  and         $t7, $s1, $t7
    ctx->pc = 0x11e384u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x11e388: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x11e388u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x11e38c: 0x51e0ffeb  beql        $t7, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11E38Cu;
    {
        const bool branch_taken_0x11e38c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e38c) {
            ctx->pc = 0x11E390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E38Cu;
            // 0x11e390: 0x13983c  dsll32      $s3, $s3, 0 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e33c;
        }
    }
    ctx->pc = 0x11E394u;
    // 0x11e394: 0x3c11bff0  lui         $s1, 0xBFF0
    ctx->pc = 0x11e394u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49136 << 16));
    // 0x11e398: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x11E398u;
    {
        const bool branch_taken_0x11e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E398u;
        // 0x11e39c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e398) {
            ctx->pc = 0x11E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e338;
        }
    }
    ctx->pc = 0x11E3A0u;
label_11e3a0:
    // 0x11e3a0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11e3a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11e3a4: 0x20ea007  srav        $s4, $t6, $s0
    ctx->pc = 0x11e3a4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 16) & 0x1F));
    // 0x11e3a8: 0x2347824  and         $t7, $s1, $s4
    ctx->pc = 0x11e3a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x11e3ac: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x11e3acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x11e3b0: 0x11e0ffeb  beqz        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11E3B0u;
    {
        const bool branch_taken_0x11e3b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3B0u;
        // 0x11e3b4: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3b0) {
            ctx->pc = 0x11E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e360;
        }
    }
    ctx->pc = 0x11E3B8u;
    // 0x11e3b8: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11E3B8u;
    SET_GPR_U32(ctx, 31, 0x11E3C0u);
    ctx->pc = 0x11E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3B8u;
    // 0x11e3bc: 0xdde535d0  ld          $a1, 0x35D0($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11E3B8u, 0x11E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3C0u;
label_11e3c0:
    // 0x11e3c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3c4: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11E3C4u;
    SET_GPR_U32(ctx, 31, 0x11E3CCu);
    ctx->pc = 0x11E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3C4u;
    // 0x11e3c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11E3C4u, 0x11E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3CCu;
label_11e3cc:
    // 0x11e3cc: 0x443ffdb  bgezl       $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x11E3CCu;
    {
        const bool branch_taken_0x11e3cc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11e3cc) {
            ctx->pc = 0x11E3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3CCu;
            // 0x11e3d0: 0x13983c  dsll32      $s3, $s3, 0 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e33c;
        }
    }
    ctx->pc = 0x11E3D4u;
    // 0x11e3d4: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E3D4u;
    {
        const bool branch_taken_0x11e3d4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x11E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3D4u;
        // 0x11e3d8: 0x147827  nor         $t7, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3d4) {
            ctx->pc = 0x11E3ECu;
            goto label_11e3ec;
        }
    }
    ctx->pc = 0x11E3DCu;
    // 0x11e3dc: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x11e3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
    // 0x11e3e0: 0x20f7807  srav        $t7, $t7, $s0
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 16) & 0x1F));
    // 0x11e3e4: 0x22f8821  addu        $s1, $s1, $t7
    ctx->pc = 0x11e3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x11e3e8: 0x147827  nor         $t7, $zero, $s4
    ctx->pc = 0x11e3e8u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_11e3ec:
    // 0x11e3ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11e3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3f0: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x11E3F0u;
    {
        const bool branch_taken_0x11e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3F0u;
        // 0x11e3f4: 0x22f8824  and         $s1, $s1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3f0) {
            ctx->pc = 0x11E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e338;
        }
    }
    ctx->pc = 0x11E3F8u;
label_11e3f8:
    // 0x11e3f8: 0x2a0f0034  slti        $t7, $s0, 0x34
    ctx->pc = 0x11e3f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x11e3fc: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E3FCu;
    {
        const bool branch_taken_0x11e3fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3FCu;
        // 0x11e400: 0x25cffbed  addiu       $t7, $t6, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3fc) {
            ctx->pc = 0x11E420u;
            goto label_11e420;
        }
    }
    ctx->pc = 0x11E404u;
    // 0x11e404: 0x240f0400  addiu       $t7, $zero, 0x400
    ctx->pc = 0x11e404u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11e408: 0x560fffd6  bnel        $s0, $t7, . + 4 + (-0x2A << 2)
    ctx->pc = 0x11E408u;
    {
        const bool branch_taken_0x11e408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x11e408) {
            ctx->pc = 0x11E40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E408u;
            // 0x11e40c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e364;
        }
    }
    ctx->pc = 0x11E410u;
    // 0x11e410: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11E410u;
    SET_GPR_U32(ctx, 31, 0x11E418u);
    ctx->pc = 0x11E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E410u;
    // 0x11e414: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11E410u, 0x11E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E418u;
label_11e418:
    // 0x11e418: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x11E418u;
    {
        const bool branch_taken_0x11e418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E418u;
        // 0x11e41c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e418) {
            ctx->pc = 0x11E364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e364;
        }
    }
    ctx->pc = 0x11E420u;
label_11e420:
    // 0x11e420: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11e420u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e424: 0x1eea006  srlv        $s4, $t6, $t7
    ctx->pc = 0x11e424u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x11e428: 0x2546824  and         $t5, $s2, $s4
    ctx->pc = 0x11e428u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x11e42c: 0x11a0ffcc  beqz        $t5, . + 4 + (-0x34 << 2)
    ctx->pc = 0x11E42Cu;
    {
        const bool branch_taken_0x11e42c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E42Cu;
        // 0x11e430: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e42c) {
            ctx->pc = 0x11E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e360;
        }
    }
    ctx->pc = 0x11E434u;
    // 0x11e434: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11E434u;
    SET_GPR_U32(ctx, 31, 0x11E43Cu);
    ctx->pc = 0x11E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E434u;
    // 0x11e438: 0xdde535d0  ld          $a1, 0x35D0($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11E434u, 0x11E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E43Cu;
label_11e43c:
    // 0x11e43c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e440: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11E440u;
    SET_GPR_U32(ctx, 31, 0x11E448u);
    ctx->pc = 0x11E444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E440u;
    // 0x11e444: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11E440u, 0x11E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E448u;
label_11e448:
    // 0x11e448: 0x443ffbc  bgezl       $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x11E448u;
    {
        const bool branch_taken_0x11e448 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11e448) {
            ctx->pc = 0x11E44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E448u;
            // 0x11e44c: 0x13983c  dsll32      $s3, $s3, 0 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e33c;
        }
    }
    ctx->pc = 0x11E450u;
    // 0x11e450: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E450u;
    {
        const bool branch_taken_0x11e450 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x11E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E450u;
        // 0x11e454: 0x147827  nor         $t7, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e450) {
            ctx->pc = 0x11E46Cu;
            goto label_11e46c;
        }
    }
    ctx->pc = 0x11E458u;
    // 0x11e458: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11e45c: 0x160f0005  bne         $s0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E45Cu;
    {
        const bool branch_taken_0x11e45c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x11E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E45Cu;
        // 0x11e460: 0x240f0034  addiu       $t7, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e45c) {
            ctx->pc = 0x11E474u;
            goto label_11e474;
        }
    }
    ctx->pc = 0x11E464u;
    // 0x11e464: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11e464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11e468:
    // 0x11e468: 0x147827  nor         $t7, $zero, $s4
    ctx->pc = 0x11e468u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_11e46c:
    // 0x11e46c: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x11E46Cu;
    {
        const bool branch_taken_0x11e46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E46Cu;
        // 0x11e470: 0x24f9024  and         $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e46c) {
            ctx->pc = 0x11E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e338;
        }
    }
    ctx->pc = 0x11E474u;
label_11e474:
    // 0x11e474: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11e474u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e478: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x11e478u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x11e47c: 0x1ee7004  sllv        $t6, $t6, $t7
    ctx->pc = 0x11e47cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x11e480: 0x24e7021  addu        $t6, $s2, $t6
    ctx->pc = 0x11e480u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x11e484: 0x1d2782b  sltu        $t7, $t6, $s2
    ctx->pc = 0x11e484u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x11e488: 0x22f8821  addu        $s1, $s1, $t7
    ctx->pc = 0x11e488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x11e48c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11E48Cu;
    {
        const bool branch_taken_0x11e48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E48Cu;
        // 0x11e490: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e48c) {
            ctx->pc = 0x11E468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e468;
        }
    }
    ctx->pc = 0x11E494u;
}
