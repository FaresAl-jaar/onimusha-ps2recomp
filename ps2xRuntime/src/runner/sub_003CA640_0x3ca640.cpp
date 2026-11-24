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

// Function: sub_003CA640
// Address: 0x3ca640 - 0x3ca880
void sub_003CA640_0x3ca640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA640_0x3ca640");
#endif

    switch (ctx->pc) {
        case 0x3ca6c4u: goto label_3ca6c4;
        case 0x3ca704u: goto label_3ca704;
        case 0x3ca720u: goto label_3ca720;
        case 0x3ca73cu: goto label_3ca73c;
        case 0x3ca758u: goto label_3ca758;
        case 0x3ca768u: goto label_3ca768;
        case 0x3ca778u: goto label_3ca778;
        case 0x3ca7bcu: goto label_3ca7bc;
        case 0x3ca800u: goto label_3ca800;
        default: break;
    }

    ctx->pc = 0x3ca640u;

    // 0x3ca640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ca640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3ca644: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ca644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ca648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ca64c: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x3ca64cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x3ca650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ca650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ca654: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3ca654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3ca658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ca65c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3ca65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3ca660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ca664: 0x2442e390  addiu       $v0, $v0, -0x1C70
    ctx->pc = 0x3ca664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x3ca668: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x3ca668u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x65E390u));
    // 0x3ca66c: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x3ca66cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ca670: 0x2529e3a0  addiu       $t1, $t1, -0x1C60
    ctx->pc = 0x3ca670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960032));
    // 0x3ca674: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x3ca674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ca678: 0x24e7e3b0  addiu       $a3, $a3, -0x1C50
    ctx->pc = 0x3ca678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960048));
    // 0x3ca67c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x3ca67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ca680: 0x24a5e3c0  addiu       $a1, $a1, -0x1C40
    ctx->pc = 0x3ca680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960064));
    // 0x3ca684: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3ca684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ca688: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3ca688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ca68c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ca68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca690: 0x7d8b0000  sq          $t3, 0x0($t4)
    ctx->pc = 0x3ca690u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 11));
    // 0x3ca694: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ca694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ca698: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x3ca698u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x65E3A0u));
    // 0x3ca69c: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x3ca69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
    // 0x3ca6a0: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x3ca6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x3ca6a4: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x3ca6a4u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x65E3B0u));
    // 0x3ca6a8: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3ca6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x3ca6ac: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3ca6acu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65E3C0u));
    // 0x3ca6b0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3ca6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3ca6b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3ca6b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E3D0u));
    // 0x3ca6b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3ca6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3ca6bc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3CA6BCu;
    SET_GPR_U32(ctx, 31, 0x3CA6C4u);
    ctx->pc = 0x3CA6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6BCu;
    // 0x3ca6c0: 0xac802b24  sw          $zero, 0x2B24($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 11044), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3CA6BCu, 0x3CA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6C4u;
label_3ca6c4:
    // 0x3ca6c4: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x3ca6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca6c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CA6C8u;
    {
        const bool branch_taken_0x3ca6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6C8u;
        // 0x3ca6cc: 0x3c03457a  lui         $v1, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca6c8) {
            ctx->pc = 0x3CA6E8u;
            goto label_3ca6e8;
        }
    }
    ctx->pc = 0x3CA6D0u;
    // 0x3ca6d0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3ca6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3ca6d4: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x3ca6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x3ca6d8: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x3ca6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca6dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ca6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ca6e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ca6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ca6e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3ca6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3ca6e8:
    // 0x3ca6e8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x3ca6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca6ec: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3ca6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3ca6f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ca6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca6f4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3ca6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ca6f8: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x3ca6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ca6fc: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3CA6FCu;
    SET_GPR_U32(ctx, 31, 0x3CA704u);
    ctx->pc = 0x3CA700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6FCu;
    // 0x3ca700: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3CA6FCu, 0x3CA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA704u;
label_3ca704:
    // 0x3ca704: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x3ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca708: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3ca708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3ca70c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ca70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca710: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3ca710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ca714: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x3ca714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ca718: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3CA718u;
    SET_GPR_U32(ctx, 31, 0x3CA720u);
    ctx->pc = 0x3CA71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA718u;
    // 0x3ca71c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3CA718u, 0x3CA720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA720u;
label_3ca720:
    // 0x3ca720: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x3ca720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca724: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3ca724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3ca728: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ca728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca72c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3ca72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ca730: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x3ca730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ca734: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3CA734u;
    SET_GPR_U32(ctx, 31, 0x3CA73Cu);
    ctx->pc = 0x3CA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA734u;
    // 0x3ca738: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3CA734u, 0x3CA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA73Cu;
label_3ca73c:
    // 0x3ca73c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x3ca73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca740: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3ca740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3ca744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ca744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca748: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3ca748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ca74c: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x3ca74cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ca750: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3CA750u;
    SET_GPR_U32(ctx, 31, 0x3CA758u);
    ctx->pc = 0x3CA754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA750u;
    // 0x3ca754: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3CA750u, 0x3CA758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA758u;
label_3ca758:
    // 0x3ca758: 0x87828440  lh          $v0, -0x7BC0($gp)
    ctx->pc = 0x3ca758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935616)));
    // 0x3ca75c: 0x27b0009c  addiu       $s0, $sp, 0x9C
    ctx->pc = 0x3ca75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x3ca760: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ca760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca764: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3ca764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_3ca768:
    // 0x3ca768: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x3ca768u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ca76c: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x3ca76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca770: 0xc0a8540  jal         func_2A1500
    ctx->pc = 0x3CA770u;
    SET_GPR_U32(ctx, 31, 0x3CA778u);
    ctx->pc = 0x3CA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA770u;
    // 0x3ca774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1500u, 0x3CA770u, 0x3CA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA778u;
label_3ca778:
    // 0x3ca778: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x3ca778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3ca77c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3ca77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3ca780: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x3ca780u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ca784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ca784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca788: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x3ca788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ca78c: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x3ca78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3ca790: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3ca790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3ca794: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ca794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ca798: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ca798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ca79c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3ca79cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ca7a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ca7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ca7a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3CA7A4u;
    {
        const bool branch_taken_0x3ca7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7A4u;
        // 0x3ca7a8: 0xa066004a  sb          $a2, 0x4A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 74), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7a4) {
            ctx->pc = 0x3CA768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca768;
        }
    }
    ctx->pc = 0x3CA7ACu;
    // 0x3ca7ac: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x3ca7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x3ca7b0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3ca7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ca7b4: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x3CA7B4u;
    SET_GPR_U32(ctx, 31, 0x3CA7BCu);
    ctx->pc = 0x3CA7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA7B4u;
    // 0x3ca7b8: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x3CA7B4u, 0x3CA7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA7BCu;
label_3ca7bc:
    // 0x3ca7bc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3CA7BCu;
    {
        const bool branch_taken_0x3ca7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7BCu;
        // 0x3ca7c0: 0x3c0350ff  lui         $v1, 0x50FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20735 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7bc) {
            ctx->pc = 0x3CA868u;
            goto label_3ca868;
        }
    }
    ctx->pc = 0x3CA7C4u;
    // 0x3ca7c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ca7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca7c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3ca7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3ca7cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ca7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ca7d0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3ca7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x3ca7d4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3ca7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ca7d8: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x3ca7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
    // 0x3ca7dc: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3ca7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3ca7e0: 0xac460040  sw          $a2, 0x40($v0)
    ctx->pc = 0x3ca7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
    // 0x3ca7e4: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x3ca7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x3ca7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ca7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca7ec: 0xa0400024  sb          $zero, 0x24($v0)
    ctx->pc = 0x3ca7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca7f0: 0xa0440025  sb          $a0, 0x25($v0)
    ctx->pc = 0x3ca7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ca7f4: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x3ca7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ca7f8: 0xa0430015  sb          $v1, 0x15($v0)
    ctx->pc = 0x3ca7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ca7fc: 0x0  nop
    ctx->pc = 0x3ca7fcu;
    // NOP
label_3ca800:
    // 0x3ca800: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3ca800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3ca804: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3ca804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ca808: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3ca808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ca80c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x3ca80cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca810: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ca810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ca814: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3ca814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ca818: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x3ca818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3ca81c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x3ca81cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca820: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ca820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ca824: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3ca824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ca828: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x3ca828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x3ca82c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x3ca82cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca830: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ca830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ca834: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3ca834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ca838: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x3ca838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ca83c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x3ca83cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca840: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ca840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ca844: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3ca844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ca848: 0x24c30005  addiu       $v1, $a2, 0x5
    ctx->pc = 0x3ca848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x3ca84c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x3ca84cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ca850: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x3ca850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ca854: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3CA854u;
    {
        const bool branch_taken_0x3ca854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA854u;
        // 0x3ca858: 0xa0800044  sb          $zero, 0x44($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca854) {
            ctx->pc = 0x3CA800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca800;
        }
    }
    ctx->pc = 0x3CA85Cu;
    // 0x3ca85c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3ca85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ca860: 0xa0430044  sb          $v1, 0x44($v0)
    ctx->pc = 0x3ca860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ca864: 0x0  nop
    ctx->pc = 0x3ca864u;
    // NOP
label_3ca868:
    // 0x3ca868: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ca868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ca86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca878: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA878u;
        // 0x3ca87c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA880u;
}
