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

// Function: sub_0014D370
// Address: 0x14d370 - 0x14d4d8
void sub_0014D370_0x14d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D370_0x14d370");
#endif

    switch (ctx->pc) {
        case 0x14d410u: goto label_14d410;
        case 0x14d428u: goto label_14d428;
        case 0x14d448u: goto label_14d448;
        case 0x14d464u: goto label_14d464;
        case 0x14d478u: goto label_14d478;
        case 0x14d494u: goto label_14d494;
        case 0x14d4b4u: goto label_14d4b4;
        default: break;
    }

    ctx->pc = 0x14d370u;

    // 0x14d370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14d374: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x14d374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14d378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14d378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14d37c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14d380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d38c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14d38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14d394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d398: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D398u;
    {
        const bool branch_taken_0x14d398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D398u;
        // 0x14d39c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d398) {
            ctx->pc = 0x14D3A8u;
            goto label_14d3a8;
        }
    }
    ctx->pc = 0x14D3A0u;
    // 0x14d3a0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14D3A0u;
    {
        const bool branch_taken_0x14d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3a0) {
            ctx->pc = 0x14D4A0u;
            goto label_14d4a0;
        }
    }
    ctx->pc = 0x14D3A8u;
label_14d3a8:
    // 0x14d3a8: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x14d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x14d3ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14d3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d3b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14d3b4: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14D3B4u;
    {
        const bool branch_taken_0x14d3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3B4u;
        // 0x14d3b8: 0x71c02  srl         $v1, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3b4) {
            ctx->pc = 0x14D480u;
            goto label_14d480;
        }
    }
    ctx->pc = 0x14D3BCu;
    // 0x14d3bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d3c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d3c4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14D3C4u;
    {
        const bool branch_taken_0x14d3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3C4u;
        // 0x14d3c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3c4) {
            ctx->pc = 0x14D430u;
            goto label_14d430;
        }
    }
    ctx->pc = 0x14D3CCu;
    // 0x14d3cc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14D3CCu;
    {
        const bool branch_taken_0x14d3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3CCu;
        // 0x14d3d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3cc) {
            ctx->pc = 0x14D430u;
            goto label_14d430;
        }
    }
    ctx->pc = 0x14D3D4u;
    // 0x14d3d4: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14D3D4u;
    {
        const bool branch_taken_0x14d3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x14D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3D4u;
        // 0x14d3d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3d4) {
            ctx->pc = 0x14D418u;
            goto label_14d418;
        }
    }
    ctx->pc = 0x14D3DCu;
    // 0x14d3dc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D3DCu;
    {
        const bool branch_taken_0x14d3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d3dc) {
            ctx->pc = 0x14D3F8u;
            goto label_14d3f8;
        }
    }
    ctx->pc = 0x14D3E4u;
    // 0x14d3e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D3E4u;
    {
        const bool branch_taken_0x14d3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3e4) {
            ctx->pc = 0x14D3F8u;
            goto label_14d3f8;
        }
    }
    ctx->pc = 0x14D3ECu;
    // 0x14d3ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14D3ECu;
    {
        const bool branch_taken_0x14d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3ec) {
            ctx->pc = 0x14D450u;
            goto label_14d450;
        }
    }
    ctx->pc = 0x14D3F4u;
    // 0x14d3f4: 0x0  nop
    ctx->pc = 0x14d3f4u;
    // NOP
label_14d3f8:
    // 0x14d3f8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d400: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d404: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x14d404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14d408: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D408u;
    SET_GPR_U32(ctx, 31, 0x14D410u);
    ctx->pc = 0x14D40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D408u;
    // 0x14d40c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D408u, 0x14D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D410u;
label_14d410:
    // 0x14d410: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14D410u;
    {
        const bool branch_taken_0x14d410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D410u;
        // 0x14d414: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d410) {
            ctx->pc = 0x14D4B8u;
            goto label_14d4b8;
        }
    }
    ctx->pc = 0x14D418u;
label_14d418:
    // 0x14d418: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d41c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d420: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D420u;
    SET_GPR_U32(ctx, 31, 0x14D428u);
    ctx->pc = 0x14D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D420u;
    // 0x14d424: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D420u, 0x14D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D428u;
label_14d428:
    // 0x14d428: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14D428u;
    {
        const bool branch_taken_0x14d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D428u;
        // 0x14d42c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d428) {
            ctx->pc = 0x14D4B8u;
            goto label_14d4b8;
        }
    }
    ctx->pc = 0x14D430u;
label_14d430:
    // 0x14d430: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d438: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d43c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x14d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14d440: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D440u;
    SET_GPR_U32(ctx, 31, 0x14D448u);
    ctx->pc = 0x14D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D440u;
    // 0x14d444: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D440u, 0x14D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D448u;
label_14d448:
    // 0x14d448: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14D448u;
    {
        const bool branch_taken_0x14d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D448u;
        // 0x14d44c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d448) {
            ctx->pc = 0x14D4B8u;
            goto label_14d4b8;
        }
    }
    ctx->pc = 0x14D450u;
label_14d450:
    // 0x14d450: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d454: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14d458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d45c: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D45Cu;
    SET_GPR_U32(ctx, 31, 0x14D464u);
    ctx->pc = 0x14D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D45Cu;
    // 0x14d460: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D45Cu, 0x14D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D464u;
label_14d464:
    // 0x14d464: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14d464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d46c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d470: 0xc0536fc  jal         func_14DBF0
    ctx->pc = 0x14D470u;
    SET_GPR_U32(ctx, 31, 0x14D478u);
    ctx->pc = 0x14D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D470u;
    // 0x14d474: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBF0u, 0x14D470u, 0x14D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D478u;
label_14d478:
    // 0x14d478: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14D478u;
    {
        const bool branch_taken_0x14d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d478) {
            ctx->pc = 0x14D4B8u;
            goto label_14d4b8;
        }
    }
    ctx->pc = 0x14D480u;
label_14d480:
    // 0x14d480: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d484: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x14d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d488: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d48c: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D48Cu;
    SET_GPR_U32(ctx, 31, 0x14D494u);
    ctx->pc = 0x14D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D48Cu;
    // 0x14d490: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D48Cu, 0x14D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D494u;
label_14d494:
    // 0x14d494: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D494u;
    {
        const bool branch_taken_0x14d494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D494u;
        // 0x14d498: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d494) {
            ctx->pc = 0x14D4B8u;
            goto label_14d4b8;
        }
    }
    ctx->pc = 0x14D49Cu;
    // 0x14d49c: 0x0  nop
    ctx->pc = 0x14d49cu;
    // NOP
label_14d4a0:
    // 0x14d4a0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d4a4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x14d4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d4a8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x14d4ac: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x14D4ACu;
    SET_GPR_U32(ctx, 31, 0x14D4B4u);
    ctx->pc = 0x14D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4ACu;
    // 0x14d4b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x14D4ACu, 0x14D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4B4u;
label_14d4b4:
    // 0x14d4b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14d4b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d4b8:
    // 0x14d4b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x14d4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d4bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14d4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d4c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d4c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4D0u;
        // 0x14d4d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D4D8u;
}
