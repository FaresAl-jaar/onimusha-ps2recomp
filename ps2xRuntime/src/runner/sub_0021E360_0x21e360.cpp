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

// Function: sub_0021E360
// Address: 0x21e360 - 0x21e454
void sub_0021E360_0x21e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E360_0x21e360");
#endif

    switch (ctx->pc) {
        case 0x21e360u: goto label_21e360;
        case 0x21e364u: goto label_21e364;
        case 0x21e368u: goto label_21e368;
        case 0x21e36cu: goto label_21e36c;
        case 0x21e370u: goto label_21e370;
        case 0x21e374u: goto label_21e374;
        case 0x21e378u: goto label_21e378;
        case 0x21e37cu: goto label_21e37c;
        case 0x21e380u: goto label_21e380;
        case 0x21e384u: goto label_21e384;
        case 0x21e388u: goto label_21e388;
        case 0x21e38cu: goto label_21e38c;
        case 0x21e390u: goto label_21e390;
        case 0x21e394u: goto label_21e394;
        case 0x21e398u: goto label_21e398;
        case 0x21e39cu: goto label_21e39c;
        case 0x21e3a0u: goto label_21e3a0;
        case 0x21e3a4u: goto label_21e3a4;
        case 0x21e3a8u: goto label_21e3a8;
        case 0x21e3acu: goto label_21e3ac;
        case 0x21e3b0u: goto label_21e3b0;
        case 0x21e3b4u: goto label_21e3b4;
        case 0x21e3b8u: goto label_21e3b8;
        case 0x21e3bcu: goto label_21e3bc;
        case 0x21e3c0u: goto label_21e3c0;
        case 0x21e3c4u: goto label_21e3c4;
        case 0x21e3c8u: goto label_21e3c8;
        case 0x21e3ccu: goto label_21e3cc;
        case 0x21e3d0u: goto label_21e3d0;
        case 0x21e3d4u: goto label_21e3d4;
        case 0x21e3d8u: goto label_21e3d8;
        case 0x21e3dcu: goto label_21e3dc;
        case 0x21e3e0u: goto label_21e3e0;
        case 0x21e3e4u: goto label_21e3e4;
        case 0x21e3e8u: goto label_21e3e8;
        case 0x21e3ecu: goto label_21e3ec;
        case 0x21e3f0u: goto label_21e3f0;
        case 0x21e3f4u: goto label_21e3f4;
        case 0x21e3f8u: goto label_21e3f8;
        case 0x21e3fcu: goto label_21e3fc;
        case 0x21e400u: goto label_21e400;
        case 0x21e404u: goto label_21e404;
        case 0x21e408u: goto label_21e408;
        case 0x21e40cu: goto label_21e40c;
        case 0x21e410u: goto label_21e410;
        case 0x21e414u: goto label_21e414;
        case 0x21e418u: goto label_21e418;
        case 0x21e41cu: goto label_21e41c;
        case 0x21e420u: goto label_21e420;
        case 0x21e424u: goto label_21e424;
        case 0x21e428u: goto label_21e428;
        case 0x21e42cu: goto label_21e42c;
        case 0x21e430u: goto label_21e430;
        case 0x21e434u: goto label_21e434;
        case 0x21e438u: goto label_21e438;
        case 0x21e43cu: goto label_21e43c;
        case 0x21e440u: goto label_21e440;
        case 0x21e444u: goto label_21e444;
        case 0x21e448u: goto label_21e448;
        case 0x21e44cu: goto label_21e44c;
        case 0x21e450u: goto label_21e450;
        default: break;
    }

    ctx->pc = 0x21e360u;

label_21e360:
    // 0x21e360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21e364:
    // 0x21e364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21e368:
    // 0x21e368: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e36c:
    // 0x21e36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21e370:
    // 0x21e370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e374:
    // 0x21e374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_21e378:
    // 0x21e378: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_21e37c:
    // 0x21e37c: 0xc084968  jal         func_2125A0
label_21e380:
    if (ctx->pc == 0x21E380u) {
        ctx->pc = 0x21E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E37Cu;
        // 0x21e380: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E384u;
        goto label_21e384;
    }
    ctx->pc = 0x21E37Cu;
    SET_GPR_U32(ctx, 31, 0x21E384u);
    ctx->pc = 0x21E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E37Cu;
    // 0x21e380: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E37Cu, 0x21E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E384u;
label_21e384:
    // 0x21e384: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_21e388:
    if (ctx->pc == 0x21E388u) {
        ctx->pc = 0x21E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E384u;
        // 0x21e388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E38Cu;
        goto label_21e38c;
    }
    ctx->pc = 0x21E384u;
    {
        const bool branch_taken_0x21e384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E384u;
        // 0x21e388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e384) {
            ctx->pc = 0x21E3B0u;
            goto label_21e3b0;
        }
    }
    ctx->pc = 0x21E38Cu;
label_21e38c:
    // 0x21e38c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_21e390:
    // 0x21e390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e394:
    // 0x21e394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21e398:
    // 0x21e398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21e39c:
    // 0x21e39c: 0x34a50136  ori         $a1, $a1, 0x136
    ctx->pc = 0x21e39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)310);
label_21e3a0:
    // 0x21e3a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21e3a4:
    // 0x21e3a4: 0x80848e0  j           func_212380
label_21e3a8:
    if (ctx->pc == 0x21E3A8u) {
        ctx->pc = 0x21E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3A4u;
        // 0x21e3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3ACu;
        goto label_21e3ac;
    }
    ctx->pc = 0x21E3A4u;
    ctx->pc = 0x21E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3A4u;
    // 0x21e3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E3ACu;
label_21e3ac:
    // 0x21e3ac: 0x0  nop
    ctx->pc = 0x21e3acu;
    // NOP
label_21e3b0:
    // 0x21e3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e3b4:
    // 0x21e3b4: 0xc087940  jal         func_21E500
label_21e3b8:
    if (ctx->pc == 0x21E3B8u) {
        ctx->pc = 0x21E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3B4u;
        // 0x21e3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3BCu;
        goto label_21e3bc;
    }
    ctx->pc = 0x21E3B4u;
    SET_GPR_U32(ctx, 31, 0x21E3BCu);
    ctx->pc = 0x21E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3B4u;
    // 0x21e3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E500u, 0x21E3B4u, 0x21E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3BCu;
label_21e3bc:
    // 0x21e3bc: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_21e3c0:
    if (ctx->pc == 0x21E3C0u) {
        ctx->pc = 0x21E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3BCu;
        // 0x21e3c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3C4u;
        goto label_21e3c4;
    }
    ctx->pc = 0x21E3BCu;
    {
        const bool branch_taken_0x21e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e3bc) {
            ctx->pc = 0x21E3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E3BCu;
            // 0x21e3c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E440u;
            goto label_21e440;
        }
    }
    ctx->pc = 0x21E3C4u;
label_21e3c4:
    // 0x21e3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e3c8:
    // 0x21e3c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21e3cc:
    // 0x21e3cc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21e3d0:
    // 0x21e3d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e3d4:
    // 0x21e3d4: 0xc0888d6  jal         func_222358
label_21e3d8:
    if (ctx->pc == 0x21E3D8u) {
        ctx->pc = 0x21E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3D4u;
        // 0x21e3d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3DCu;
        goto label_21e3dc;
    }
    ctx->pc = 0x21E3D4u;
    SET_GPR_U32(ctx, 31, 0x21E3DCu);
    ctx->pc = 0x21E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3D4u;
    // 0x21e3d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x21E3D4u, 0x21E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3DCu;
label_21e3dc:
    // 0x21e3dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21e3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e3e0:
    // 0x21e3e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e3e4:
    // 0x21e3e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_21e3e8:
    if (ctx->pc == 0x21E3E8u) {
        ctx->pc = 0x21E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3E4u;
        // 0x21e3e8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3ECu;
        goto label_21e3ec;
    }
    ctx->pc = 0x21E3E4u;
    {
        const bool branch_taken_0x21e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3E4u;
        // 0x21e3e8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3e4) {
            ctx->pc = 0x21E420u;
            goto label_21e420;
        }
    }
    ctx->pc = 0x21E3ECu;
label_21e3ec:
    // 0x21e3ec: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x21e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_21e3f0:
    // 0x21e3f0: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x21e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
label_21e3f4:
    // 0x21e3f4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_21e3f8:
    if (ctx->pc == 0x21E3F8u) {
        ctx->pc = 0x21E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3F4u;
        // 0x21e3f8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E3FCu;
        goto label_21e3fc;
    }
    ctx->pc = 0x21E3F4u;
    {
        const bool branch_taken_0x21e3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e3f4) {
            ctx->pc = 0x21E3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E3F4u;
            // 0x21e3f8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E420u;
            goto label_21e420;
        }
    }
    ctx->pc = 0x21E3FCu;
label_21e3fc:
    // 0x21e3fc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_21e400:
    if (ctx->pc == 0x21E400u) {
        ctx->pc = 0x21E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3FCu;
        // 0x21e400: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E404u;
        goto label_21e404;
    }
    ctx->pc = 0x21E3FCu;
    {
        const bool branch_taken_0x21e3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e3fc) {
            ctx->pc = 0x21E400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E3FCu;
            // 0x21e400: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E418u;
            goto label_21e418;
        }
    }
    ctx->pc = 0x21E404u;
label_21e404:
    // 0x21e404: 0xc0886b8  jal         func_221AE0
label_21e408:
    if (ctx->pc == 0x21E408u) {
        ctx->pc = 0x21E40Cu;
        goto label_21e40c;
    }
    ctx->pc = 0x21E404u;
    SET_GPR_U32(ctx, 31, 0x21E40Cu);
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x21E404u, 0x21E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E40Cu;
label_21e40c:
    // 0x21e40c: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x21e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_21e410:
    // 0x21e410: 0xfe023780  sd          $v0, 0x3780($s0)
    ctx->pc = 0x21e410u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 14208), GPR_U64(ctx, 2));
label_21e414:
    // 0x21e414: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x21e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21e418:
    // 0x21e418: 0xae020968  sw          $v0, 0x968($s0)
    ctx->pc = 0x21e418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 2));
label_21e41c:
    // 0x21e41c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_21e420:
    // 0x21e420: 0x8c42a214  lw          $v0, -0x5DEC($v0)
    ctx->pc = 0x21e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943252)));
label_21e424:
    // 0x21e424: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21e428:
    if (ctx->pc == 0x21E428u) {
        ctx->pc = 0x21E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E424u;
        // 0x21e428: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E42Cu;
        goto label_21e42c;
    }
    ctx->pc = 0x21E424u;
    {
        const bool branch_taken_0x21e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e424) {
            ctx->pc = 0x21E428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E424u;
            // 0x21e428: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E43Cu;
            goto label_21e43c;
        }
    }
    ctx->pc = 0x21E42Cu;
label_21e42c:
    // 0x21e42c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x21e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e430:
    // 0x21e430: 0x40f809  jalr        $v0
label_21e434:
    if (ctx->pc == 0x21E434u) {
        ctx->pc = 0x21E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E430u;
        // 0x21e434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E438u;
        goto label_21e438;
    }
    ctx->pc = 0x21E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E438u);
        ctx->pc = 0x21E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E430u;
        // 0x21e434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E430u, 0x21E438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E438u;
label_21e438:
    // 0x21e438: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21e438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e43c:
    // 0x21e43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e440:
    // 0x21e440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21e444:
    // 0x21e444: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21e448:
    // 0x21e448: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21e44c:
    // 0x21e44c: 0x3e00008  jr          $ra
label_21e450:
    if (ctx->pc == 0x21E450u) {
        ctx->pc = 0x21E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E44Cu;
        // 0x21e450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E454u;
        goto label_fallthrough_0x21e44c;
    }
    ctx->pc = 0x21E44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E44Cu;
        // 0x21e450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21e44c:
    ctx->pc = 0x21E454u;
}
