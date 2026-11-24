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

// Function: sub_003DA690
// Address: 0x3da690 - 0x3daa5c
void sub_003DA690_0x3da690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA690_0x3da690");
#endif

    switch (ctx->pc) {
        case 0x3da6b4u: goto label_3da6b4;
        case 0x3da6fcu: goto label_3da6fc;
        case 0x3da72cu: goto label_3da72c;
        case 0x3da744u: goto label_3da744;
        case 0x3da784u: goto label_3da784;
        case 0x3da7a8u: goto label_3da7a8;
        case 0x3da7f0u: goto label_3da7f0;
        case 0x3da804u: goto label_3da804;
        case 0x3da968u: goto label_3da968;
        case 0x3da988u: goto label_3da988;
        case 0x3da990u: goto label_3da990;
        case 0x3da9a0u: goto label_3da9a0;
        case 0x3daa10u: goto label_3daa10;
        case 0x3daa24u: goto label_3daa24;
        default: break;
    }

    ctx->pc = 0x3da690u;

    // 0x3da690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3da690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3da694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3da694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3da698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3da69c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da6a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da6a4: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3da6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3da6a8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3da6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3da6ac: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DA6ACu;
    SET_GPR_U32(ctx, 31, 0x3DA6B4u);
    ctx->pc = 0x3DA6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA6ACu;
    // 0x3da6b0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DA6ACu, 0x3DA6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA6B4u;
label_3da6b4:
    // 0x3da6b4: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x3da6b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3da6b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3da6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3da6bc: 0x108300d2  beq         $a0, $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3DA6BCu;
    {
        const bool branch_taken_0x3da6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA6BCu;
        // 0x3da6c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da6bc) {
            ctx->pc = 0x3DAA08u;
            goto label_3daa08;
        }
    }
    ctx->pc = 0x3DA6C4u;
    // 0x3da6c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3da6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3da6c8: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x3DA6C8u;
    {
        const bool branch_taken_0x3da6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA6C8u;
        // 0x3da6cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da6c8) {
            ctx->pc = 0x3DA850u;
            goto label_3da850;
        }
    }
    ctx->pc = 0x3DA6D0u;
    // 0x3da6d0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3DA6D0u;
    {
        const bool branch_taken_0x3da6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3da6d0) {
            ctx->pc = 0x3DA710u;
            goto label_3da710;
        }
    }
    ctx->pc = 0x3DA6D8u;
    // 0x3da6d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA6D8u;
    {
        const bool branch_taken_0x3da6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da6d8) {
            ctx->pc = 0x3DA6E8u;
            goto label_3da6e8;
        }
    }
    ctx->pc = 0x3DA6E0u;
    // 0x3da6e0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x3DA6E0u;
    {
        const bool branch_taken_0x3da6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da6e0) {
            ctx->pc = 0x3DAA48u;
            goto label_3daa48;
        }
    }
    ctx->pc = 0x3DA6E8u;
label_3da6e8:
    // 0x3da6e8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3da6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3da6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3da6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da6f0: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x3da6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3da6f4: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DA6F4u;
    SET_GPR_U32(ctx, 31, 0x3DA6FCu);
    ctx->pc = 0x3DA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA6F4u;
    // 0x3da6f8: 0x34460040  ori         $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DA6F4u, 0x3DA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA6FCu;
label_3da6fc:
    // 0x3da6fc: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3da6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3da700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da704: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x3DA704u;
    {
        const bool branch_taken_0x3da704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA704u;
        // 0x3da708: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da704) {
            ctx->pc = 0x3DAA48u;
            goto label_3daa48;
        }
    }
    ctx->pc = 0x3DA70Cu;
    // 0x3da70c: 0x0  nop
    ctx->pc = 0x3da70cu;
    // NOP
label_3da710:
    // 0x3da710: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3da710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3da714: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3DA714u;
    {
        const bool branch_taken_0x3da714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da714) {
            ctx->pc = 0x3DA750u;
            goto label_3da750;
        }
    }
    ctx->pc = 0x3DA71Cu;
    // 0x3da71c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA71Cu;
    {
        const bool branch_taken_0x3da71c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA71Cu;
        // 0x3da720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da71c) {
            ctx->pc = 0x3DA730u;
            goto label_3da730;
        }
    }
    ctx->pc = 0x3DA724u;
    // 0x3da724: 0xc0f6e60  jal         func_3DB980
    ctx->pc = 0x3DA724u;
    SET_GPR_U32(ctx, 31, 0x3DA72Cu);
    ctx->pc = 0x3DB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB980u, 0x3DA724u, 0x3DA72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA72Cu;
label_3da72c:
    // 0x3da72c: 0x0  nop
    ctx->pc = 0x3da72cu;
    // NOP
label_3da730:
    // 0x3da730: 0x120000c5  beqz        $s0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x3DA730u;
    {
        const bool branch_taken_0x3da730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA730u;
        // 0x3da734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da730) {
            ctx->pc = 0x3DAA48u;
            goto label_3daa48;
        }
    }
    ctx->pc = 0x3DA738u;
    // 0x3da738: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3da738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3da73c: 0xc0f6f08  jal         func_3DBC20
    ctx->pc = 0x3DA73Cu;
    SET_GPR_U32(ctx, 31, 0x3DA744u);
    ctx->pc = 0x3DA740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA73Cu;
    // 0x3da740: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBC20u, 0x3DA73Cu, 0x3DA744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA744u;
label_3da744:
    // 0x3da744: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x3DA744u;
    {
        const bool branch_taken_0x3da744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da744) {
            ctx->pc = 0x3DAA48u;
            goto label_3daa48;
        }
    }
    ctx->pc = 0x3DA74Cu;
    // 0x3da74c: 0x0  nop
    ctx->pc = 0x3da74cu;
    // NOP
label_3da750:
    // 0x3da750: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3DA750u;
    {
        const bool branch_taken_0x3da750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da750) {
            ctx->pc = 0x3DA7B0u;
            goto label_3da7b0;
        }
    }
    ctx->pc = 0x3DA758u;
    // 0x3da758: 0x92222be5  lbu         $v0, 0x2BE5($s1)
    ctx->pc = 0x3da758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3da75c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3da75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3da760: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DA760u;
    {
        const bool branch_taken_0x3da760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da760) {
            ctx->pc = 0x3DA790u;
            goto label_3da790;
        }
    }
    ctx->pc = 0x3DA768u;
    // 0x3da768: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3da768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3da76c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3da76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3da770: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3da770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da774: 0x26242b90  addiu       $a0, $s1, 0x2B90
    ctx->pc = 0x3da774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    // 0x3da778: 0x8c660088  lw          $a2, 0x88($v1)
    ctx->pc = 0x3da778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3da77c: 0xc0f5f9c  jal         func_3D7E70
    ctx->pc = 0x3DA77Cu;
    SET_GPR_U32(ctx, 31, 0x3DA784u);
    ctx->pc = 0x3DA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA77Cu;
    // 0x3da780: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7E70u, 0x3DA77Cu, 0x3DA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA784u;
label_3da784:
    // 0x3da784: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3DA784u;
    {
        const bool branch_taken_0x3da784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da784) {
            ctx->pc = 0x3DA820u;
            goto label_3da820;
        }
    }
    ctx->pc = 0x3DA78Cu;
    // 0x3da78c: 0x0  nop
    ctx->pc = 0x3da78cu;
    // NOP
label_3da790:
    // 0x3da790: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3da790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3da794: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3da794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da798: 0x26242b90  addiu       $a0, $s1, 0x2B90
    ctx->pc = 0x3da798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    // 0x3da79c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3da79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3da7a0: 0xc0f5f9c  jal         func_3D7E70
    ctx->pc = 0x3DA7A0u;
    SET_GPR_U32(ctx, 31, 0x3DA7A8u);
    ctx->pc = 0x3DA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA7A0u;
    // 0x3da7a4: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7E70u, 0x3DA7A0u, 0x3DA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA7A8u;
label_3da7a8:
    // 0x3da7a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3DA7A8u;
    {
        const bool branch_taken_0x3da7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da7a8) {
            ctx->pc = 0x3DA820u;
            goto label_3da820;
        }
    }
    ctx->pc = 0x3DA7B0u;
label_3da7b0:
    // 0x3da7b0: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x3da7b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3da7b4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3da7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3da7b8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3da7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3da7bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3da7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3da7c0: 0x26242b90  addiu       $a0, $s1, 0x2B90
    ctx->pc = 0x3da7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    // 0x3da7c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3da7c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3da7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3da7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3da7cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3da7ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3da7d0: 0x0  nop
    ctx->pc = 0x3da7d0u;
    // NOP
    // 0x3da7d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3da7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3da7d8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3da7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3da7dc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3da7dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3da7e0: 0x0  nop
    ctx->pc = 0x3da7e0u;
    // NOP
    // 0x3da7e4: 0x0  nop
    ctx->pc = 0x3da7e4u;
    // NOP
    // 0x3da7e8: 0xc096784  jal         func_259E10
    ctx->pc = 0x3DA7E8u;
    SET_GPR_U32(ctx, 31, 0x3DA7F0u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3DA7E8u, 0x3DA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA7F0u;
label_3da7f0:
    // 0x3da7f0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x3da7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3da7f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3da7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3da7f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3da7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da7fc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DA7FCu;
    SET_GPR_U32(ctx, 31, 0x3DA804u);
    ctx->pc = 0x3DA800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA7FCu;
    // 0x3da800: 0x26252b90  addiu       $a1, $s1, 0x2B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DA7FCu, 0x3DA804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA804u;
label_3da804:
    // 0x3da804: 0x26252b90  addiu       $a1, $s1, 0x2B90
    ctx->pc = 0x3da804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    // 0x3da808: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3da808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3da80c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3da80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3da810: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3da810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3da814: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3da814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3da818: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3da818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3da81c: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x3da81cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_3da820:
    // 0x3da820: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3da820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da824: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3da824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da828: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x3da828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3da82c: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3da82cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3da830: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3da830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3da834: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3da834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da838: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3da838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3da83c: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3da83cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3da840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da844: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3da844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da848: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x3da848u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da84c: 0x0  nop
    ctx->pc = 0x3da84cu;
    // NOP
label_3da850:
    // 0x3da850: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x3da850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x3da854: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3da854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3da858: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3da858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3da85c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3da85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3da860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3da860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3da864: 0x0  nop
    ctx->pc = 0x3da864u;
    // NOP
    // 0x3da868: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3da868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3da86c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3da86cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da870: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA870u;
    {
        const bool branch_taken_0x3da870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da870) {
            ctx->pc = 0x3DA888u;
            goto label_3da888;
        }
    }
    ctx->pc = 0x3DA878u;
    // 0x3da878: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da87c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da87cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA880u;
    {
        const bool branch_taken_0x3da880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA880u;
        // 0x3da884: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da880) {
            ctx->pc = 0x3DA8A4u;
            goto label_3da8a4;
        }
    }
    ctx->pc = 0x3DA888u;
label_3da888:
    // 0x3da888: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3da888u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3da88c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3da88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3da890: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da894: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da898: 0x0  nop
    ctx->pc = 0x3da898u;
    // NOP
    // 0x3da89c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3da89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3da8a0: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3da8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_3da8a4:
    // 0x3da8a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3da8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3da8a8: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x3DA8A8u;
    {
        const bool branch_taken_0x3da8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da8a8) {
            ctx->pc = 0x3DA9B0u;
            goto label_3da9b0;
        }
    }
    ctx->pc = 0x3DA8B0u;
    // 0x3da8b0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3da8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3da8b4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3da8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3da8b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3da8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3da8bc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3da8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3da8c0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3da8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3da8c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3da8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3da8c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3da8c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3da8cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3da8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3da8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3da8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3da8d4: 0x0  nop
    ctx->pc = 0x3da8d4u;
    // NOP
    // 0x3da8d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3da8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3da8dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3da8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da8e0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA8E0u;
    {
        const bool branch_taken_0x3da8e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da8e0) {
            ctx->pc = 0x3DA8F8u;
            goto label_3da8f8;
        }
    }
    ctx->pc = 0x3DA8E8u;
    // 0x3da8e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da8ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da8f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA8F0u;
    {
        const bool branch_taken_0x3da8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8F0u;
        // 0x3da8f4: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8f0) {
            ctx->pc = 0x3DA914u;
            goto label_3da914;
        }
    }
    ctx->pc = 0x3DA8F8u;
label_3da8f8:
    // 0x3da8f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3da8f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3da8fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3da8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3da900: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3da900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3da904: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3da904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3da908: 0x0  nop
    ctx->pc = 0x3da908u;
    // NOP
    // 0x3da90c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3da90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3da910: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3da910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_3da914:
    // 0x3da914: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x3da914u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3da918: 0x0  nop
    ctx->pc = 0x3da918u;
    // NOP
    // 0x3da91c: 0x0  nop
    ctx->pc = 0x3da91cu;
    // NOP
    // 0x3da920: 0x1010  mfhi        $v0
    ctx->pc = 0x3da920u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3da924: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DA924u;
    {
        const bool branch_taken_0x3da924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da924) {
            ctx->pc = 0x3DA990u;
            goto label_3da990;
        }
    }
    ctx->pc = 0x3DA92Cu;
    // 0x3da92c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DA92Cu;
    {
        const bool branch_taken_0x3da92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da92c) {
            ctx->pc = 0x3DA988u;
            goto label_3da988;
        }
    }
    ctx->pc = 0x3DA934u;
    // 0x3da934: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DA934u;
    {
        const bool branch_taken_0x3da934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da934) {
            ctx->pc = 0x3DA988u;
            goto label_3da988;
        }
    }
    ctx->pc = 0x3DA93Cu;
    // 0x3da93c: 0x92222be5  lbu         $v0, 0x2BE5($s1)
    ctx->pc = 0x3da93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3da940: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3da940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3da944: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DA944u;
    {
        const bool branch_taken_0x3da944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da944) {
            ctx->pc = 0x3DA970u;
            goto label_3da970;
        }
    }
    ctx->pc = 0x3DA94Cu;
    // 0x3da94c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3da94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3da950: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3da950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x3da954: 0x26242b90  addiu       $a0, $s1, 0x2B90
    ctx->pc = 0x3da954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    // 0x3da958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3da958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da95c: 0x8c650088  lw          $a1, 0x88($v1)
    ctx->pc = 0x3da95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3da960: 0xc0f5f9c  jal         func_3D7E70
    ctx->pc = 0x3DA960u;
    SET_GPR_U32(ctx, 31, 0x3DA968u);
    ctx->pc = 0x3DA964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA960u;
    // 0x3da964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7E70u, 0x3DA960u, 0x3DA968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA968u;
label_3da968:
    // 0x3da968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA968u;
    {
        const bool branch_taken_0x3da968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da968) {
            ctx->pc = 0x3DA988u;
            goto label_3da988;
        }
    }
    ctx->pc = 0x3DA970u;
label_3da970:
    // 0x3da970: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3da970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x3da974: 0x26242b90  addiu       $a0, $s1, 0x2B90
    ctx->pc = 0x3da974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    // 0x3da978: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3da978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3da97c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3da97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3da980: 0xc0f5f9c  jal         func_3D7E70
    ctx->pc = 0x3DA980u;
    SET_GPR_U32(ctx, 31, 0x3DA988u);
    ctx->pc = 0x3DA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA980u;
    // 0x3da984: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7E70u, 0x3DA980u, 0x3DA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA988u;
label_3da988:
    // 0x3da988: 0xc0f70fc  jal         func_3DC3F0
    ctx->pc = 0x3DA988u;
    SET_GPR_U32(ctx, 31, 0x3DA990u);
    ctx->pc = 0x3DA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA988u;
    // 0x3da98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC3F0u, 0x3DA988u, 0x3DA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA990u;
label_3da990:
    // 0x3da990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3da990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da994: 0x26252b90  addiu       $a1, $s1, 0x2B90
    ctx->pc = 0x3da994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11152));
    // 0x3da998: 0xc0f6f08  jal         func_3DBC20
    ctx->pc = 0x3DA998u;
    SET_GPR_U32(ctx, 31, 0x3DA9A0u);
    ctx->pc = 0x3DA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA998u;
    // 0x3da99c: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBC20u, 0x3DA998u, 0x3DA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA9A0u;
label_3da9a0:
    // 0x3da9a0: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3da9a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3da9a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da9a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3DA9A8u;
    {
        const bool branch_taken_0x3da9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9A8u;
        // 0x3da9ac: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da9a8) {
            ctx->pc = 0x3DAA48u;
            goto label_3daa48;
        }
    }
    ctx->pc = 0x3DA9B0u;
label_3da9b0:
    // 0x3da9b0: 0x92232be5  lbu         $v1, 0x2BE5($s1)
    ctx->pc = 0x3da9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3da9b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3da9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3da9b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA9B8u;
    {
        const bool branch_taken_0x3da9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9B8u;
        // 0x3da9bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da9b8) {
            ctx->pc = 0x3DA9D8u;
            goto label_3da9d8;
        }
    }
    ctx->pc = 0x3DA9C0u;
    // 0x3da9c0: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3da9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da9c4: 0xa2232be3  sb          $v1, 0x2BE3($s1)
    ctx->pc = 0x3da9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da9c8: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3da9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3da9cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da9d0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3DA9D0u;
    {
        const bool branch_taken_0x3da9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9D0u;
        // 0x3da9d4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da9d0) {
            ctx->pc = 0x3DAA48u;
            goto label_3daa48;
        }
    }
    ctx->pc = 0x3DA9D8u;
label_3da9d8:
    // 0x3da9d8: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3da9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da9dc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3da9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da9e0: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x3da9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3da9e4: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x3da9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da9e8: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3da9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x3da9ec: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3da9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3da9f0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3da9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3da9f4: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x3da9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x3da9f8: 0x92220821  lbu         $v0, 0x821($s1)
    ctx->pc = 0x3da9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3da9fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3daa00: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x3daa00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3daa04: 0x0  nop
    ctx->pc = 0x3daa04u;
    // NOP
label_3daa08:
    // 0x3daa08: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DAA08u;
    SET_GPR_U32(ctx, 31, 0x3DAA10u);
    ctx->pc = 0x3DAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAA08u;
    // 0x3daa0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DAA08u, 0x3DAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAA10u;
label_3daa10:
    // 0x3daa10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DAA10u;
    {
        const bool branch_taken_0x3daa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA10u;
        // 0x3daa14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa10) {
            ctx->pc = 0x3DAA30u;
            goto label_3daa30;
        }
    }
    ctx->pc = 0x3DAA18u;
    // 0x3daa18: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x3daa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3daa1c: 0xc0f6f28  jal         func_3DBCA0
    ctx->pc = 0x3DAA1Cu;
    SET_GPR_U32(ctx, 31, 0x3DAA24u);
    ctx->pc = 0x3DAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAA1Cu;
    // 0x3daa20: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBCA0u, 0x3DAA1Cu, 0x3DAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAA24u;
label_3daa24:
    // 0x3daa24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAA24u;
    {
        const bool branch_taken_0x3daa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3daa24) {
            ctx->pc = 0x3DAA48u;
            goto label_3daa48;
        }
    }
    ctx->pc = 0x3DAA2Cu;
    // 0x3daa2c: 0x0  nop
    ctx->pc = 0x3daa2cu;
    // NOP
label_3daa30:
    // 0x3daa30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3daa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3daa34: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3daa34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3daa38: 0xa2232be3  sb          $v1, 0x2BE3($s1)
    ctx->pc = 0x3daa38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3daa3c: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3daa3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3daa40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3daa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3daa44: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3daa44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3daa48:
    // 0x3daa48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3daa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3daa4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3daa4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3daa50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3daa50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daa54: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA54u;
        // 0x3daa58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAA5Cu;
}
