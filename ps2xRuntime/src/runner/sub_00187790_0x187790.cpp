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

// Function: sub_00187790
// Address: 0x187790 - 0x187d68
void sub_00187790_0x187790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187790_0x187790");
#endif

    switch (ctx->pc) {
        case 0x1877f0u: goto label_1877f0;
        case 0x1877f8u: goto label_1877f8;
        case 0x187804u: goto label_187804;
        case 0x187810u: goto label_187810;
        case 0x18781cu: goto label_18781c;
        case 0x187828u: goto label_187828;
        case 0x1878d0u: goto label_1878d0;
        case 0x1878e0u: goto label_1878e0;
        case 0x1878f0u: goto label_1878f0;
        case 0x187910u: goto label_187910;
        case 0x187920u: goto label_187920;
        case 0x18793cu: goto label_18793c;
        case 0x187948u: goto label_187948;
        case 0x187968u: goto label_187968;
        case 0x18797cu: goto label_18797c;
        case 0x1879b8u: goto label_1879b8;
        case 0x1879c0u: goto label_1879c0;
        case 0x1879f4u: goto label_1879f4;
        case 0x187a04u: goto label_187a04;
        case 0x187a34u: goto label_187a34;
        case 0x187a44u: goto label_187a44;
        case 0x187a54u: goto label_187a54;
        case 0x187a68u: goto label_187a68;
        case 0x187a78u: goto label_187a78;
        case 0x187ab8u: goto label_187ab8;
        case 0x187ad8u: goto label_187ad8;
        case 0x187ae0u: goto label_187ae0;
        case 0x187b14u: goto label_187b14;
        case 0x187b24u: goto label_187b24;
        case 0x187b38u: goto label_187b38;
        case 0x187b4cu: goto label_187b4c;
        case 0x187b5cu: goto label_187b5c;
        case 0x187b70u: goto label_187b70;
        case 0x187b80u: goto label_187b80;
        case 0x187b98u: goto label_187b98;
        case 0x187bb0u: goto label_187bb0;
        case 0x187bccu: goto label_187bcc;
        case 0x187be0u: goto label_187be0;
        case 0x187bf4u: goto label_187bf4;
        case 0x187c0cu: goto label_187c0c;
        case 0x187c14u: goto label_187c14;
        case 0x187c1cu: goto label_187c1c;
        case 0x187c2cu: goto label_187c2c;
        case 0x187c3cu: goto label_187c3c;
        case 0x187c4cu: goto label_187c4c;
        case 0x187c54u: goto label_187c54;
        case 0x187c80u: goto label_187c80;
        default: break;
    }

    ctx->pc = 0x187790u;

    // 0x187790: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x187790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x187794: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x187794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x187798: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x187798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18779c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18779cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1877a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1877a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1877a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1877a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1877a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1877a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1877ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1877acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1877b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1877b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1877b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1877b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1877b8: 0x10600161  beqz        $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x1877B8u;
    {
        const bool branch_taken_0x1877b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B8u;
        // 0x1877bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877b8) {
            ctx->pc = 0x187D40u;
            goto label_187d40;
        }
    }
    ctx->pc = 0x1877C0u;
    // 0x1877c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1877c4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1877c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1877c8: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x1877c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1877cc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1877ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1877d0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1877d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1877d4: 0x1080015a  beqz        $a0, . + 4 + (0x15A << 2)
    ctx->pc = 0x1877D4u;
    {
        const bool branch_taken_0x1877d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877d4) {
            ctx->pc = 0x187D40u;
            goto label_187d40;
        }
    }
    ctx->pc = 0x1877DCu;
    // 0x1877dc: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1877e0: 0x43b024  and         $s6, $v0, $v1
    ctx->pc = 0x1877e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1877e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1877e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1877e8: 0xc041290  jal         func_104A40
    ctx->pc = 0x1877E8u;
    SET_GPR_U32(ctx, 31, 0x1877F0u);
    ctx->pc = 0x1877ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877E8u;
    // 0x1877ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x1877E8u, 0x1877F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877F0u;
label_1877f0:
    // 0x1877f0: 0xc041294  jal         func_104A50
    ctx->pc = 0x1877F0u;
    SET_GPR_U32(ctx, 31, 0x1877F8u);
    ctx->pc = 0x1877F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877F0u;
    // 0x1877f4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x1877F0u, 0x1877F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877F8u;
label_1877f8:
    // 0x1877f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1877f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1877fc: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x1877FCu;
    SET_GPR_U32(ctx, 31, 0x187804u);
    ctx->pc = 0x187800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877FCu;
    // 0x187800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x1877FCu, 0x187804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187804u;
label_187804:
    // 0x187804: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187808: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x187808u;
    SET_GPR_U32(ctx, 31, 0x187810u);
    ctx->pc = 0x18780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187808u;
    // 0x18780c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x187808u, 0x187810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187810u;
label_187810:
    // 0x187810: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187814: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x187814u;
    SET_GPR_U32(ctx, 31, 0x18781Cu);
    ctx->pc = 0x187818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187814u;
    // 0x187818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x187814u, 0x18781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18781Cu;
label_18781c:
    // 0x18781c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187820: 0xc041386  jal         func_104E18
    ctx->pc = 0x187820u;
    SET_GPR_U32(ctx, 31, 0x187828u);
    ctx->pc = 0x187824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187820u;
    // 0x187824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x187820u, 0x187828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187828u;
label_187828:
    // 0x187828: 0x97a90080  lhu         $t1, 0x80($sp)
    ctx->pc = 0x187828u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18782c: 0x24078000  addiu       $a3, $zero, -0x8000
    ctx->pc = 0x18782cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x187830: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x187830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x187834: 0x300c7fff  andi        $t4, $zero, 0x7FFF
    ctx->pc = 0x187834u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x187838: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x187838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18783c: 0x93a60085  lbu         $a2, 0x85($sp)
    ctx->pc = 0x18783cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 133)));
    // 0x187840: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x187840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x187844: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x187844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x187848: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18784c: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x18784cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x187850: 0x27a20087  addiu       $v0, $sp, 0x87
    ctx->pc = 0x187850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 135));
    // 0x187854: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x187854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x187858: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x187858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x18785c: 0xec6025  or          $t4, $a3, $t4
    ctx->pc = 0x18785cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x187860: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187864: 0xa7ac0080  sh          $t4, 0x80($sp)
    ctx->pc = 0x187864u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 12));
    // 0x187868: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x187868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18786c: 0x93ac0081  lbu         $t4, 0x81($sp)
    ctx->pc = 0x18786cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 129)));
    // 0x187870: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x187870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x187874: 0xa3a30085  sb          $v1, 0x85($sp)
    ctx->pc = 0x187874u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 133), (uint8_t)GPR_U32(ctx, 3));
    // 0x187878: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18787c: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x18787cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x187880: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x187884: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x187884u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x187888: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x187888u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x18788c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x18788cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x187890: 0xa3aa0081  sb          $t2, 0x81($sp)
    ctx->pc = 0x187890u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 10));
    // 0x187894: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x187894u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187898: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x187898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18789c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x18789cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1878a0: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x1878a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1878a4: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x1878a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1878a8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1878a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1878ac: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1878acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1878b0: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x1878b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1878b4: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x1878b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1878b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1878b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1878bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1878bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1878c0: 0xa3a20088  sb          $v0, 0x88($sp)
    ctx->pc = 0x1878c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x1878c4: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x1878c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1878c8: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x1878C8u;
    SET_GPR_U32(ctx, 31, 0x1878D0u);
    ctx->pc = 0x1878CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878C8u;
    // 0x1878cc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x1878C8u, 0x1878D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878D0u;
label_1878d0:
    // 0x1878d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1878d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1878d4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1878d8: 0xc041418  jal         func_105060
    ctx->pc = 0x1878D8u;
    SET_GPR_U32(ctx, 31, 0x1878E0u);
    ctx->pc = 0x1878DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878D8u;
    // 0x1878dc: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1878D8u, 0x1878E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878E0u;
label_1878e0:
    // 0x1878e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1878e4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1878e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1878e8: 0xc041418  jal         func_105060
    ctx->pc = 0x1878E8u;
    SET_GPR_U32(ctx, 31, 0x1878F0u);
    ctx->pc = 0x1878ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878E8u;
    // 0x1878ec: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1878E8u, 0x1878F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878F0u;
label_1878f0:
    // 0x1878f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1878f4: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1878f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1878f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1878f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1878fc: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1878fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x187900: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187904: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x187904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x187908: 0xc041418  jal         func_105060
    ctx->pc = 0x187908u;
    SET_GPR_U32(ctx, 31, 0x187910u);
    ctx->pc = 0x18790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187908u;
    // 0x18790c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187908u, 0x187910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187910u;
label_187910:
    // 0x187910: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187914: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x187918: 0xc041418  jal         func_105060
    ctx->pc = 0x187918u;
    SET_GPR_U32(ctx, 31, 0x187920u);
    ctx->pc = 0x18791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187918u;
    // 0x18791c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187918u, 0x187920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187920u;
label_187920:
    // 0x187920: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x187920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x187924: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x187924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x187928: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x187928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18792c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187930: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x187930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x187934: 0xc041418  jal         func_105060
    ctx->pc = 0x187934u;
    SET_GPR_U32(ctx, 31, 0x18793Cu);
    ctx->pc = 0x187938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187934u;
    // 0x187938: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187934u, 0x18793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18793Cu;
label_18793c:
    // 0x18793c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x18793Cu;
    {
        const bool branch_taken_0x18793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18793Cu;
        // 0x187940: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18793c) {
            ctx->pc = 0x187C88u;
            goto label_187c88;
        }
    }
    ctx->pc = 0x187944u;
    // 0x187944: 0x0  nop
    ctx->pc = 0x187944u;
    // NOP
label_187948:
    // 0x187948: 0x24020380  addiu       $v0, $zero, 0x380
    ctx->pc = 0x187948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x18794c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18794cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187950: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187954: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x187954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x187958: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x187958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18795c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x18795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x187960: 0xc041418  jal         func_105060
    ctx->pc = 0x187960u;
    SET_GPR_U32(ctx, 31, 0x187968u);
    ctx->pc = 0x187964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187960u;
    // 0x187964: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187960u, 0x187968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187968u;
label_187968:
    // 0x187968: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x187968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x18796c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187970: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x187970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x187974: 0xc041418  jal         func_105060
    ctx->pc = 0x187974u;
    SET_GPR_U32(ctx, 31, 0x18797Cu);
    ctx->pc = 0x187978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187974u;
    // 0x187978: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187974u, 0x18797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18797Cu;
label_18797c:
    // 0x18797c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18797cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187980: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187984: 0x9028cea4  lbu         $t0, -0x315C($at)
    ctx->pc = 0x187984u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x187988: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x187988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18798c: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x18798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x187990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x187990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187994: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x187994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x187998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x187998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18799c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1879a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1879a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1879a4: 0xc8380b  movn        $a3, $a2, $t0
    ctx->pc = 0x1879a4u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x1879a8: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1879a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1879ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1879acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1879b0: 0xc041418  jal         func_105060
    ctx->pc = 0x1879B0u;
    SET_GPR_U32(ctx, 31, 0x1879B8u);
    ctx->pc = 0x1879B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879B0u;
    // 0x1879b4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1879B0u, 0x1879B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879B8u;
label_1879b8:
    // 0x1879b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1879b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879bc: 0x0  nop
    ctx->pc = 0x1879bcu;
    // NOP
label_1879c0:
    // 0x1879c0: 0x2622001f  addiu       $v0, $s1, 0x1F
    ctx->pc = 0x1879c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1879c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1879c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1879c8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1879c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1879cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1879ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1879d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1879d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1879d4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x1879d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x1879d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1879dc: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1879dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1879e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1879e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1879e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1879e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1879e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1879e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1879ec: 0xc041418  jal         func_105060
    ctx->pc = 0x1879ECu;
    SET_GPR_U32(ctx, 31, 0x1879F4u);
    ctx->pc = 0x1879F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879ECu;
    // 0x1879f0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1879ECu, 0x1879F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879F4u;
label_1879f4:
    // 0x1879f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1879f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1879f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1879f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879fc: 0xc041418  jal         func_105060
    ctx->pc = 0x1879FCu;
    SET_GPR_U32(ctx, 31, 0x187A04u);
    ctx->pc = 0x187A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879FCu;
    // 0x187a00: 0x24060156  addiu       $a2, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1879FCu, 0x187A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A04u;
label_187a04:
    // 0x187a04: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x187a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x187a08: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187a0c: 0x50180b  movn        $v1, $v0, $s0
    ctx->pc = 0x187a0cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x187a10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187a14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x187a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x187a18: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x187a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x187a1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x187a1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x187a20: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x187a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x187a24: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x187a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x187a28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187a2c: 0xc041418  jal         func_105060
    ctx->pc = 0x187A2Cu;
    SET_GPR_U32(ctx, 31, 0x187A34u);
    ctx->pc = 0x187A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A2Cu;
    // 0x187a30: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187A2Cu, 0x187A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A34u;
label_187a34:
    // 0x187a34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187a38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187a3c: 0xc041418  jal         func_105060
    ctx->pc = 0x187A3Cu;
    SET_GPR_U32(ctx, 31, 0x187A44u);
    ctx->pc = 0x187A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A3Cu;
    // 0x187a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187A3Cu, 0x187A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A44u;
label_187a44:
    // 0x187a44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187a48: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x187a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x187a4c: 0xc041418  jal         func_105060
    ctx->pc = 0x187A4Cu;
    SET_GPR_U32(ctx, 31, 0x187A54u);
    ctx->pc = 0x187A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A4Cu;
    // 0x187a50: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187A4Cu, 0x187A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A54u;
label_187a54:
    // 0x187a54: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x187a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x187a58: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187a5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187a60: 0xc041418  jal         func_105060
    ctx->pc = 0x187A60u;
    SET_GPR_U32(ctx, 31, 0x187A68u);
    ctx->pc = 0x187A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A60u;
    // 0x187a64: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187A60u, 0x187A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A68u;
label_187a68:
    // 0x187a68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187a6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x187a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187a70: 0xc041418  jal         func_105060
    ctx->pc = 0x187A70u;
    SET_GPR_U32(ctx, 31, 0x187A78u);
    ctx->pc = 0x187A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A70u;
    // 0x187a74: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187A70u, 0x187A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A78u;
label_187a78:
    // 0x187a78: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x187a7c: 0x2e220200  sltiu       $v0, $s1, 0x200
    ctx->pc = 0x187a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x187a80: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x187A80u;
    {
        const bool branch_taken_0x187a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A80u;
        // 0x187a84: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a80) {
            ctx->pc = 0x1879C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1879c0;
        }
    }
    ctx->pc = 0x187A88u;
    // 0x187a88: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x187a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x187a8c: 0x9027cea4  lbu         $a3, -0x315C($at)
    ctx->pc = 0x187a8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x187a90: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x187a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x187a94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x187a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187a98: 0x34660040  ori         $a2, $v1, 0x40
    ctx->pc = 0x187a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x187a9c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x187a9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x187aa0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187aa4: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x187aa8: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x187aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x187aac: 0x67300a  movz        $a2, $v1, $a3
    ctx->pc = 0x187aacu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x187ab0: 0xc041418  jal         func_105060
    ctx->pc = 0x187AB0u;
    SET_GPR_U32(ctx, 31, 0x187AB8u);
    ctx->pc = 0x187AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187AB0u;
    // 0x187ab4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187AB0u, 0x187AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187AB8u;
label_187ab8:
    // 0x187ab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x187ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187abc: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x187abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x187ac0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x187ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x187ac4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x187ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x187ac8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187acc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x187ad0: 0xc041418  jal         func_105060
    ctx->pc = 0x187AD0u;
    SET_GPR_U32(ctx, 31, 0x187AD8u);
    ctx->pc = 0x187AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187AD0u;
    // 0x187ad4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187AD0u, 0x187AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187AD8u;
label_187ad8:
    // 0x187ad8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x187ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187adc: 0x0  nop
    ctx->pc = 0x187adcu;
    // NOP
label_187ae0:
    // 0x187ae0: 0x2622001f  addiu       $v0, $s1, 0x1F
    ctx->pc = 0x187ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x187ae4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x187ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187ae8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x187ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x187aec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x187aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x187af0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x187af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x187af4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x187af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x187af8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187afc: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x187b00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x187b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x187b04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x187b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187b08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187b0c: 0xc041418  jal         func_105060
    ctx->pc = 0x187B0Cu;
    SET_GPR_U32(ctx, 31, 0x187B14u);
    ctx->pc = 0x187B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B0Cu;
    // 0x187b10: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187B0Cu, 0x187B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B14u;
label_187b14:
    // 0x187b14: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b1c: 0xc041418  jal         func_105060
    ctx->pc = 0x187B1Cu;
    SET_GPR_U32(ctx, 31, 0x187B24u);
    ctx->pc = 0x187B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B1Cu;
    // 0x187b20: 0x24060156  addiu       $a2, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187B1Cu, 0x187B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B24u;
label_187b24:
    // 0x187b24: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x187b28: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187b2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187b30: 0xc041418  jal         func_105060
    ctx->pc = 0x187B30u;
    SET_GPR_U32(ctx, 31, 0x187B38u);
    ctx->pc = 0x187B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B30u;
    // 0x187b34: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187B30u, 0x187B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B38u;
label_187b38:
    // 0x187b38: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x187b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x187b3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187b40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187b44: 0xc041418  jal         func_105060
    ctx->pc = 0x187B44u;
    SET_GPR_U32(ctx, 31, 0x187B4Cu);
    ctx->pc = 0x187B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B44u;
    // 0x187b48: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187B44u, 0x187B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B4Cu;
label_187b4c:
    // 0x187b4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187b50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x187b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x187b54: 0xc041418  jal         func_105060
    ctx->pc = 0x187B54u;
    SET_GPR_U32(ctx, 31, 0x187B5Cu);
    ctx->pc = 0x187B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B54u;
    // 0x187b58: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187B54u, 0x187B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B5Cu;
label_187b5c:
    // 0x187b5c: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x187b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x187b60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187b64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187b68: 0xc041418  jal         func_105060
    ctx->pc = 0x187B68u;
    SET_GPR_U32(ctx, 31, 0x187B70u);
    ctx->pc = 0x187B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B68u;
    // 0x187b6c: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187B68u, 0x187B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B70u;
label_187b70:
    // 0x187b70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187b74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x187b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187b78: 0xc041418  jal         func_105060
    ctx->pc = 0x187B78u;
    SET_GPR_U32(ctx, 31, 0x187B80u);
    ctx->pc = 0x187B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B78u;
    // 0x187b7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187B78u, 0x187B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B80u;
label_187b80:
    // 0x187b80: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x187b84: 0x2e220200  sltiu       $v0, $s1, 0x200
    ctx->pc = 0x187b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x187b88: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x187B88u;
    {
        const bool branch_taken_0x187b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187b88) {
            ctx->pc = 0x187AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ae0;
        }
    }
    ctx->pc = 0x187B90u;
    // 0x187b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x187b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x187b94: 0x0  nop
    ctx->pc = 0x187b94u;
    // NOP
label_187b98:
    // 0x187b98: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x187b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x187b9c: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x187B9Cu;
    {
        const bool branch_taken_0x187b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B9Cu;
        // 0x187ba0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b9c) {
            ctx->pc = 0x187948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187948;
        }
    }
    ctx->pc = 0x187BA4u;
    // 0x187ba4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x187ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187ba8: 0xc041418  jal         func_105060
    ctx->pc = 0x187BA8u;
    SET_GPR_U32(ctx, 31, 0x187BB0u);
    ctx->pc = 0x187BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BA8u;
    // 0x187bac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187BA8u, 0x187BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BB0u;
label_187bb0:
    // 0x187bb0: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x187bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x187bb4: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x187bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x187bb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x187bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x187bbc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187bc0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x187bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187bc4: 0xc041418  jal         func_105060
    ctx->pc = 0x187BC4u;
    SET_GPR_U32(ctx, 31, 0x187BCCu);
    ctx->pc = 0x187BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BC4u;
    // 0x187bc8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187BC4u, 0x187BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BCCu;
label_187bcc:
    // 0x187bcc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x187bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x187bd0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187bd4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x187bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x187bd8: 0xc041418  jal         func_105060
    ctx->pc = 0x187BD8u;
    SET_GPR_U32(ctx, 31, 0x187BE0u);
    ctx->pc = 0x187BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BD8u;
    // 0x187bdc: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187BD8u, 0x187BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BE0u;
label_187be0:
    // 0x187be0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x187be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x187be4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187be8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x187bec: 0xc041418  jal         func_105060
    ctx->pc = 0x187BECu;
    SET_GPR_U32(ctx, 31, 0x187BF4u);
    ctx->pc = 0x187BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BECu;
    // 0x187bf0: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187BECu, 0x187BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BF4u;
label_187bf4:
    // 0x187bf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187bf8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187bfc: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F014u));
    // 0x187c00: 0xdc460040  ld          $a2, 0x40($v0)
    ctx->pc = 0x187c00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x187c04: 0xc041418  jal         func_105060
    ctx->pc = 0x187C04u;
    SET_GPR_U32(ctx, 31, 0x187C0Cu);
    ctx->pc = 0x187C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C04u;
    // 0x187c08: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x187C04u, 0x187C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C0Cu;
label_187c0c:
    // 0x187c0c: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x187C0Cu;
    SET_GPR_U32(ctx, 31, 0x187C14u);
    ctx->pc = 0x187C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C0Cu;
    // 0x187c10: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x187C0Cu, 0x187C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C14u;
label_187c14:
    // 0x187c14: 0xc04139c  jal         func_104E70
    ctx->pc = 0x187C14u;
    SET_GPR_U32(ctx, 31, 0x187C1Cu);
    ctx->pc = 0x187C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C14u;
    // 0x187c18: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x187C14u, 0x187C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C1Cu;
label_187c1c:
    // 0x187c1c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187c20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187c24: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x187C24u;
    SET_GPR_U32(ctx, 31, 0x187C2Cu);
    ctx->pc = 0x187C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C24u;
    // 0x187c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x187C24u, 0x187C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C2Cu;
label_187c2c:
    // 0x187c2c: 0x8fb00090  lw          $s0, 0x90($sp)
    ctx->pc = 0x187c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x187c30: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187c34: 0xc041338  jal         func_104CE0
    ctx->pc = 0x187C34u;
    SET_GPR_U32(ctx, 31, 0x187C3Cu);
    ctx->pc = 0x187C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C34u;
    // 0x187c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x187C34u, 0x187C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C3Cu;
label_187c3c:
    // 0x187c3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187c40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187c44: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x187C44u;
    SET_GPR_U32(ctx, 31, 0x187C4Cu);
    ctx->pc = 0x187C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C44u;
    // 0x187c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x187C44u, 0x187C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C4Cu;
label_187c4c:
    // 0x187c4c: 0xc041298  jal         func_104A60
    ctx->pc = 0x187C4Cu;
    SET_GPR_U32(ctx, 31, 0x187C54u);
    ctx->pc = 0x187C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C4Cu;
    // 0x187c50: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x187C4Cu, 0x187C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C54u;
label_187c54:
    // 0x187c54: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x187c58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x187c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x187c5c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x187c60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187c64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187c68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x187c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x187c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c70: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x187c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x187c74: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x187c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x187c78: 0xc061c60  jal         func_187180
    ctx->pc = 0x187C78u;
    SET_GPR_U32(ctx, 31, 0x187C80u);
    ctx->pc = 0x187C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C78u;
    // 0x187c7c: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x187C78u, 0x187C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C80u;
label_187c80:
    // 0x187c80: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x187C80u;
    {
        const bool branch_taken_0x187c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c80) {
            ctx->pc = 0x187D40u;
            goto label_187d40;
        }
    }
    ctx->pc = 0x187C88u;
label_187c88:
    // 0x187c88: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x187c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x187c8c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x187c90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187C90u;
    {
        const bool branch_taken_0x187c90 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x187C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C90u;
        // 0x187c94: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c90) {
            ctx->pc = 0x187CA0u;
            goto label_187ca0;
        }
    }
    ctx->pc = 0x187C98u;
    // 0x187c98: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x187c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x187c9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x187c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_187ca0:
    // 0x187ca0: 0x24047900  addiu       $a0, $zero, 0x7900
    ctx->pc = 0x187ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x187ca4: 0x24057000  addiu       $a1, $zero, 0x7000
    ctx->pc = 0x187ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x187ca8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x187ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x187cac: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x187cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x187cb0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x187cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x187cb4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x187cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x187cb8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x187cb8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x187cbc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x187cbcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x187cc0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x187cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x187cc4: 0x24657fff  addiu       $a1, $v1, 0x7FFF
    ctx->pc = 0x187cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x187cc8: 0xc4a825  or          $s5, $a2, $a0
    ctx->pc = 0x187cc8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x187ccc: 0x24a41001  addiu       $a0, $a1, 0x1001
    ctx->pc = 0x187cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4097));
    // 0x187cd0: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x187cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x187cd4: 0x24a41041  addiu       $a0, $a1, 0x1041
    ctx->pc = 0x187cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4161));
    // 0x187cd8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x187cd8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x187cdc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x187cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x187ce0: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x187ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x187ce4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x187ce4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x187ce8: 0x24860701  addiu       $a2, $a0, 0x701
    ctx->pc = 0x187ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1793));
    // 0x187cec: 0x24840721  addiu       $a0, $a0, 0x721
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1825));
    // 0x187cf0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x187cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x187cf4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x187cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x187cf8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x187cf8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x187cfc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x187cfcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x187d00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x187d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x187d04: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x187d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x187d08: 0xe6a025  or          $s4, $a3, $a2
    ctx->pc = 0x187d08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x187d0c: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x187d0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x187d10: 0x240478e0  addiu       $a0, $zero, 0x78E0
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30944));
    // 0x187d14: 0x24056fc0  addiu       $a1, $zero, 0x6FC0
    ctx->pc = 0x187d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28608));
    // 0x187d18: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x187d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x187d1c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x187d20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x187d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187d24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x187d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x187d28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x187d28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x187d2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x187d2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x187d30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x187d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x187d34: 0x1000ff98  b           . + 4 + (-0x68 << 2)
    ctx->pc = 0x187D34u;
    {
        const bool branch_taken_0x187d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D34u;
        // 0x187d38: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d34) {
            ctx->pc = 0x187B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187b98;
        }
    }
    ctx->pc = 0x187D3Cu;
    // 0x187d3c: 0x0  nop
    ctx->pc = 0x187d3cu;
    // NOP
label_187d40:
    // 0x187d40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x187d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187d44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x187d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187d48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x187d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187d4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187d50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187d60: 0x3e00008  jr          $ra
    ctx->pc = 0x187D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D60u;
        // 0x187d64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187D68u;
}
