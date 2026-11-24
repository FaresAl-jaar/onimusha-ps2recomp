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

// Function: sub_00249288
// Address: 0x249288 - 0x249404
void sub_00249288_0x249288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249288_0x249288");
#endif

    switch (ctx->pc) {
        case 0x2492c8u: goto label_2492c8;
        case 0x2492e0u: goto label_2492e0;
        case 0x249300u: goto label_249300;
        case 0x24933cu: goto label_24933c;
        case 0x249358u: goto label_249358;
        case 0x249364u: goto label_249364;
        case 0x24937cu: goto label_24937c;
        case 0x24938cu: goto label_24938c;
        case 0x2493c4u: goto label_2493c4;
        case 0x2493d0u: goto label_2493d0;
        default: break;
    }

    ctx->pc = 0x249288u;

    // 0x249288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24928c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x249290: 0x3c140088  lui         $s4, 0x88
    ctx->pc = 0x249290u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)136 << 16));
    // 0x249294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24929c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2492a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2492a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2492a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2492a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2492a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492ac: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2492acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2492b0: 0x26846480  addiu       $a0, $s4, 0x6480
    ctx->pc = 0x2492b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25728));
    // 0x2492b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2492b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2492b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2492bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2492bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2492c0: 0xc049590  jal         func_125640
    ctx->pc = 0x2492C0u;
    SET_GPR_U32(ctx, 31, 0x2492C8u);
    ctx->pc = 0x2492C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492C0u;
    // 0x2492c4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2492C0u, 0x2492C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492C8u;
label_2492c8:
    // 0x2492c8: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x2492c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x2492cc: 0x8c620b40  lw          $v0, 0xB40($v1)
    ctx->pc = 0x2492ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D0B40u));
    // 0x2492d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2492D0u;
    {
        const bool branch_taken_0x2492d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2492d0) {
            ctx->pc = 0x2492E0u;
            goto label_2492e0;
        }
    }
    ctx->pc = 0x2492D8u;
    // 0x2492d8: 0xc092420  jal         func_249080
    ctx->pc = 0x2492D8u;
    SET_GPR_U32(ctx, 31, 0x2492E0u);
    ctx->pc = 0x249080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249080u, 0x2492D8u, 0x2492E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492E0u;
label_2492e0:
    // 0x2492e0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2492E0u;
    {
        const bool branch_taken_0x2492e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2492e0) {
            ctx->pc = 0x2492F8u;
            goto label_2492f8;
        }
    }
    ctx->pc = 0x2492E8u;
    // 0x2492e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2492E8u;
    {
        const bool branch_taken_0x2492e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2492e8) {
            ctx->pc = 0x2492F8u;
            goto label_2492f8;
        }
    }
    ctx->pc = 0x2492F0u;
    // 0x2492f0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2492F0u;
    {
        const bool branch_taken_0x2492f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2492f0) {
            ctx->pc = 0x249300u;
            goto label_249300;
        }
    }
    ctx->pc = 0x2492F8u;
label_2492f8:
    // 0x2492f8: 0xc092420  jal         func_249080
    ctx->pc = 0x2492F8u;
    SET_GPR_U32(ctx, 31, 0x249300u);
    ctx->pc = 0x249080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249080u, 0x2492F8u, 0x249300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249300u;
label_249300:
    // 0x249300: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x249300u;
    {
        const bool branch_taken_0x249300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249300u;
        // 0x249304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249300) {
            ctx->pc = 0x2493E4u;
            goto label_2493e4;
        }
    }
    ctx->pc = 0x249308u;
    // 0x249308: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x249308u;
    {
        const bool branch_taken_0x249308 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249308u;
        // 0x24930c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249308) {
            ctx->pc = 0x249320u;
            goto label_249320;
        }
    }
    ctx->pc = 0x249310u;
    // 0x249310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249314u;
    {
        const bool branch_taken_0x249314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249314u;
        // 0x249318: 0x2484d160  addiu       $a0, $a0, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249314) {
            ctx->pc = 0x249334u;
            goto label_249334;
        }
    }
    ctx->pc = 0x24931Cu;
    // 0x24931c: 0x0  nop
    ctx->pc = 0x24931cu;
    // NOP
label_249320:
    // 0x249320: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x249320u;
    {
        const bool branch_taken_0x249320 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x249324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249320u;
        // 0x249324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249320) {
            ctx->pc = 0x249348u;
            goto label_249348;
        }
    }
    ctx->pc = 0x249328u;
    // 0x249328: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x249328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24932c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249330: 0x2484d190  addiu       $a0, $a0, -0x2E70
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955408));
label_249334:
    // 0x249334: 0xc08d460  jal         func_235180
    ctx->pc = 0x249334u;
    SET_GPR_U32(ctx, 31, 0x24933Cu);
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x249334u, 0x24933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24933Cu;
label_24933c:
    // 0x24933c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24933Cu;
    {
        const bool branch_taken_0x24933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24933Cu;
        // 0x249340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24933c) {
            ctx->pc = 0x2493E4u;
            goto label_2493e4;
        }
    }
    ctx->pc = 0x249344u;
    // 0x249344: 0x0  nop
    ctx->pc = 0x249344u;
    // NOP
label_249348:
    // 0x249348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24934c: 0x26946480  addiu       $s4, $s4, 0x6480
    ctx->pc = 0x24934cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 25728));
    // 0x249350: 0xc049590  jal         func_125640
    ctx->pc = 0x249350u;
    SET_GPR_U32(ctx, 31, 0x249358u);
    ctx->pc = 0x249354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249350u;
    // 0x249354: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x249350u, 0x249358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249358u;
label_249358:
    // 0x249358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24935c: 0xc092328  jal         func_248CA0
    ctx->pc = 0x24935Cu;
    SET_GPR_U32(ctx, 31, 0x249364u);
    ctx->pc = 0x249360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24935Cu;
    // 0x249360: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CA0u, 0x24935Cu, 0x249364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249364u;
label_249364:
    // 0x249364: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x249364u;
    {
        const bool branch_taken_0x249364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249364) {
            ctx->pc = 0x249368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249364u;
            // 0x249368: 0x26700009  addiu       $s0, $s3, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249398u;
            goto label_249398;
        }
    }
    ctx->pc = 0x24936Cu;
    // 0x24936c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24936cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x249370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249374: 0xc08d460  jal         func_235180
    ctx->pc = 0x249374u;
    SET_GPR_U32(ctx, 31, 0x24937Cu);
    ctx->pc = 0x249378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249374u;
    // 0x249378: 0x2484d1c0  addiu       $a0, $a0, -0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x249374u, 0x24937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24937Cu;
label_24937c:
    // 0x24937c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24937cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249380: 0x24a5d1e8  addiu       $a1, $a1, -0x2E18
    ctx->pc = 0x249380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955496));
    // 0x249384: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x249384u;
    SET_GPR_U32(ctx, 31, 0x24938Cu);
    ctx->pc = 0x249388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249384u;
    // 0x249388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x249384u, 0x24938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24938Cu;
label_24938c:
    // 0x24938c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24938Cu;
    {
        const bool branch_taken_0x24938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24938Cu;
        // 0x249390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24938c) {
            ctx->pc = 0x2493E4u;
            goto label_2493e4;
        }
    }
    ctx->pc = 0x249394u;
    // 0x249394: 0x0  nop
    ctx->pc = 0x249394u;
    // NOP
label_249398:
    // 0x249398: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x249398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24939c: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x24939cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2493a0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2493a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2493a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2493a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493ac: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2493ACu;
    {
        const bool branch_taken_0x2493ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2493ac) {
            ctx->pc = 0x2493B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2493ACu;
            // 0x2493b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493B4u;
            goto label_2493b4;
        }
    }
    ctx->pc = 0x2493B4u;
label_2493b4:
    // 0x2493b4: 0x8812  mflo        $s1
    ctx->pc = 0x2493b4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2493b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2493b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493bc: 0xc0922c2  jal         func_248B08
    ctx->pc = 0x2493BCu;
    SET_GPR_U32(ctx, 31, 0x2493C4u);
    ctx->pc = 0x2493C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493BCu;
    // 0x2493c0: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B08u, 0x2493BCu, 0x2493C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493C4u;
label_2493c4:
    // 0x2493c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2493c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493c8: 0xc09238a  jal         func_248E28
    ctx->pc = 0x2493C8u;
    SET_GPR_U32(ctx, 31, 0x2493D0u);
    ctx->pc = 0x2493CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493C8u;
    // 0x2493cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E28u, 0x2493C8u, 0x2493D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493D0u;
label_2493d0:
    // 0x2493d0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2493D0u;
    {
        const bool branch_taken_0x2493d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2493d0) {
            ctx->pc = 0x2493D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2493D0u;
            // 0x2493d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493D8u;
            goto label_2493d8;
        }
    }
    ctx->pc = 0x2493D8u;
label_2493d8:
    // 0x2493d8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2493dc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2493dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2493e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2493e4:
    // 0x2493e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2493e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2493e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2493e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2493ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2493ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2493f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2493f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2493f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2493f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2493f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2493f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2493fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2493FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493FCu;
        // 0x249400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2493FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249404u;
}
