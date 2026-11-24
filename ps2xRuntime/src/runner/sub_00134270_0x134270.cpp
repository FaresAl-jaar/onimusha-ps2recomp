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

// Function: sub_00134270
// Address: 0x134270 - 0x13439c
void sub_00134270_0x134270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134270_0x134270");
#endif

    switch (ctx->pc) {
        case 0x1342a8u: goto label_1342a8;
        case 0x1342d8u: goto label_1342d8;
        case 0x1342e4u: goto label_1342e4;
        case 0x13431cu: goto label_13431c;
        case 0x134328u: goto label_134328;
        case 0x134338u: goto label_134338;
        case 0x134344u: goto label_134344;
        case 0x134354u: goto label_134354;
        case 0x13437cu: goto label_13437c;
        default: break;
    }

    ctx->pc = 0x134270u;

    // 0x134270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x134270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x134274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x134274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x134278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x134278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13427c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x134280: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x134280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134284: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134288: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x134288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13428c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134290: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x134290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134298: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x134298u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13429c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13429cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342a0: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x1342A0u;
    {
        const bool branch_taken_0x1342a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342A0u;
        // 0x1342a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342a0) {
            ctx->pc = 0x134370u;
            goto label_134370;
        }
    }
    ctx->pc = 0x1342A8u;
label_1342a8:
    // 0x1342a8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1342A8u;
    {
        const bool branch_taken_0x1342a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342A8u;
        // 0x1342ac: 0x132c3c  dsll32      $a1, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342a8) {
            ctx->pc = 0x1342F0u;
            goto label_1342f0;
        }
    }
    ctx->pc = 0x1342B0u;
    // 0x1342b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1342b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1342b4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1342b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1342b8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1342b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1342bc: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1342bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x1342c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1342c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1342c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1342c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1342c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1342ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342d0: 0xc040df4  jal         func_1037D0
    ctx->pc = 0x1342D0u;
    SET_GPR_U32(ctx, 31, 0x1342D8u);
    ctx->pc = 0x1342D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342D0u;
    // 0x1342d4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1037D0u, 0x1342D0u, 0x1342D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342D8u;
label_1342d8:
    // 0x1342d8: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x1342d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1342dc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1342DCu;
    SET_GPR_U32(ctx, 31, 0x1342E4u);
    ctx->pc = 0x1342E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342DCu;
    // 0x1342e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344A0u, 0x1342DCu, 0x1342E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342E4u;
label_1342e4:
    // 0x1342e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1342E4u;
    {
        const bool branch_taken_0x1342e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342E4u;
        // 0x1342e8: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342e4) {
            ctx->pc = 0x134330u;
            goto label_134330;
        }
    }
    ctx->pc = 0x1342ECu;
    // 0x1342ec: 0x0  nop
    ctx->pc = 0x1342ecu;
    // NOP
label_1342f0:
    // 0x1342f0: 0x132c3c  dsll32      $a1, $s3, 16
    ctx->pc = 0x1342f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1342f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1342f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1342f8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1342f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1342fc: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1342fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x134300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x134300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134308: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x134308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13430c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13430cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134310: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x134310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x134314: 0xc040df4  jal         func_1037D0
    ctx->pc = 0x134314u;
    SET_GPR_U32(ctx, 31, 0x13431Cu);
    ctx->pc = 0x134318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134314u;
    // 0x134318: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1037D0u, 0x134314u, 0x13431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13431Cu;
label_13431c:
    // 0x13431c: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x13431cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x134320: 0xc04d130  jal         func_1344C0
    ctx->pc = 0x134320u;
    SET_GPR_U32(ctx, 31, 0x134328u);
    ctx->pc = 0x134324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134320u;
    // 0x134324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344C0u, 0x134320u, 0x134328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134328u;
label_134328:
    // 0x134328: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x134328u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13432c: 0x0  nop
    ctx->pc = 0x13432cu;
    // NOP
label_134330:
    // 0x134330: 0xc043898  jal         func_10E260
    ctx->pc = 0x134330u;
    SET_GPR_U32(ctx, 31, 0x134338u);
    ctx->pc = 0x134334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134330u;
    // 0x134334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x134330u, 0x134338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134338u;
label_134338:
    // 0x134338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13433c: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x13433Cu;
    SET_GPR_U32(ctx, 31, 0x134344u);
    ctx->pc = 0x134340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13433Cu;
    // 0x134340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x13433Cu, 0x134344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134344u;
label_134344:
    // 0x134344: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x134344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x134348: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x134348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13434c: 0xc040e6e  jal         func_1039B8
    ctx->pc = 0x13434Cu;
    SET_GPR_U32(ctx, 31, 0x134354u);
    ctx->pc = 0x134350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13434Cu;
    // 0x134350: 0x24840d70  addiu       $a0, $a0, 0xD70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1039B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039B8u, 0x13434Cu, 0x134354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134354u;
label_134354:
    // 0x134354: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x134354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134358: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x134358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13435c: 0x51180a  movz        $v1, $v0, $s1
    ctx->pc = 0x13435cu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x134360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x134360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x134364: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x134364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x134368: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x134368u;
    {
        const bool branch_taken_0x134368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134368u;
        // 0x13436c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134368) {
            ctx->pc = 0x1342A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1342a8;
        }
    }
    ctx->pc = 0x134370u;
label_134370:
    // 0x134370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134374: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x134374u;
    SET_GPR_U32(ctx, 31, 0x13437Cu);
    ctx->pc = 0x134378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134374u;
    // 0x134378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x134374u, 0x13437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13437Cu;
label_13437c:
    // 0x13437c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13437cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134380: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134384: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13438c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13438cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134394: 0x3e00008  jr          $ra
    ctx->pc = 0x134394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134394u;
        // 0x134398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13439Cu;
}
