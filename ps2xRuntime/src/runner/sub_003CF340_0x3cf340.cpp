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

// Function: sub_003CF340
// Address: 0x3cf340 - 0x3cf4cc
void sub_003CF340_0x3cf340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF340_0x3cf340");
#endif

    switch (ctx->pc) {
        case 0x3cf3a4u: goto label_3cf3a4;
        case 0x3cf3ecu: goto label_3cf3ec;
        case 0x3cf434u: goto label_3cf434;
        case 0x3cf47cu: goto label_3cf47c;
        case 0x3cf4b4u: goto label_3cf4b4;
        default: break;
    }

    ctx->pc = 0x3cf340u;

    // 0x3cf340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cf340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3cf344: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cf344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cf348: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cf348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3cf34c: 0x24633070  addiu       $v1, $v1, 0x3070
    ctx->pc = 0x3cf34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
    // 0x3cf350: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cf350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3cf354: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cf354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf358: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cf358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3cf35c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cf35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cf360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3cf364: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cf364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf368: 0x90850600  lbu         $a1, 0x600($a0)
    ctx->pc = 0x3cf368u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x3cf36c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cf36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf370: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3cf370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cf374: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3cf374u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3cf378: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cf378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cf37c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cf37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cf380: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x3cf380u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cf384: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CF384u;
    {
        const bool branch_taken_0x3cf384 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cf384) {
            ctx->pc = 0x3CF3A8u;
            goto label_3cf3a8;
        }
    }
    ctx->pc = 0x3CF38Cu;
    // 0x3cf38c: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3cf38cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3cf390: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3cf390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf394: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3cf394u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cf398: 0x924805d4  lbu         $t0, 0x5D4($s2)
    ctx->pc = 0x3cf398u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1492)));
    // 0x3cf39c: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x3CF39Cu;
    SET_GPR_U32(ctx, 31, 0x3CF3A4u);
    ctx->pc = 0x3CF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF39Cu;
    // 0x3cf3a0: 0x264905e0  addiu       $t1, $s2, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x3CF39Cu, 0x3CF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF3A4u;
label_3cf3a4:
    // 0x3cf3a4: 0xae4205b0  sw          $v0, 0x5B0($s2)
    ctx->pc = 0x3cf3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1456), GPR_U32(ctx, 2));
label_3cf3a8:
    // 0x3cf3a8: 0x92450600  lbu         $a1, 0x600($s2)
    ctx->pc = 0x3cf3a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x3cf3ac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cf3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cf3b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf3b4: 0x24633071  addiu       $v1, $v1, 0x3071
    ctx->pc = 0x3cf3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12401));
    // 0x3cf3b8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3cf3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cf3bc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3cf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3cf3c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cf3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cf3c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cf3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cf3c8: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x3cf3c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cf3cc: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CF3CCu;
    {
        const bool branch_taken_0x3cf3cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cf3cc) {
            ctx->pc = 0x3CF3F0u;
            goto label_3cf3f0;
        }
    }
    ctx->pc = 0x3CF3D4u;
    // 0x3cf3d4: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3cf3d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3cf3d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3cf3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf3dc: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3cf3dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cf3e0: 0x924805d4  lbu         $t0, 0x5D4($s2)
    ctx->pc = 0x3cf3e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1492)));
    // 0x3cf3e4: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x3CF3E4u;
    SET_GPR_U32(ctx, 31, 0x3CF3ECu);
    ctx->pc = 0x3CF3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF3E4u;
    // 0x3cf3e8: 0x264905e0  addiu       $t1, $s2, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x3CF3E4u, 0x3CF3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF3ECu;
label_3cf3ec:
    // 0x3cf3ec: 0xae4205b4  sw          $v0, 0x5B4($s2)
    ctx->pc = 0x3cf3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1460), GPR_U32(ctx, 2));
label_3cf3f0:
    // 0x3cf3f0: 0x92450600  lbu         $a1, 0x600($s2)
    ctx->pc = 0x3cf3f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x3cf3f4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cf3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cf3f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cf3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf3fc: 0x24633072  addiu       $v1, $v1, 0x3072
    ctx->pc = 0x3cf3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12402));
    // 0x3cf400: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3cf400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cf404: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3cf404u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3cf408: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cf408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cf40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cf40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cf410: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x3cf410u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cf414: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CF414u;
    {
        const bool branch_taken_0x3cf414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cf414) {
            ctx->pc = 0x3CF438u;
            goto label_3cf438;
        }
    }
    ctx->pc = 0x3CF41Cu;
    // 0x3cf41c: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3cf41cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3cf420: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3cf420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf424: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3cf424u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cf428: 0x924805d4  lbu         $t0, 0x5D4($s2)
    ctx->pc = 0x3cf428u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1492)));
    // 0x3cf42c: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x3CF42Cu;
    SET_GPR_U32(ctx, 31, 0x3CF434u);
    ctx->pc = 0x3CF430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF42Cu;
    // 0x3cf430: 0x264905f0  addiu       $t1, $s2, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x3CF42Cu, 0x3CF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF434u;
label_3cf434:
    // 0x3cf434: 0xae4205b8  sw          $v0, 0x5B8($s2)
    ctx->pc = 0x3cf434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1464), GPR_U32(ctx, 2));
label_3cf438:
    // 0x3cf438: 0x92450600  lbu         $a1, 0x600($s2)
    ctx->pc = 0x3cf438u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x3cf43c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cf43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cf440: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cf440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf444: 0x24633073  addiu       $v1, $v1, 0x3073
    ctx->pc = 0x3cf444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12403));
    // 0x3cf448: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3cf448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cf44c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3cf44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3cf450: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cf450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cf454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cf454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cf458: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x3cf458u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cf45c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CF45Cu;
    {
        const bool branch_taken_0x3cf45c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cf45c) {
            ctx->pc = 0x3CF480u;
            goto label_3cf480;
        }
    }
    ctx->pc = 0x3CF464u;
    // 0x3cf464: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3cf464u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3cf468: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3cf468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf46c: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3cf46cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cf470: 0x924805d4  lbu         $t0, 0x5D4($s2)
    ctx->pc = 0x3cf470u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1492)));
    // 0x3cf474: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x3CF474u;
    SET_GPR_U32(ctx, 31, 0x3CF47Cu);
    ctx->pc = 0x3CF478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF474u;
    // 0x3cf478: 0x264905f0  addiu       $t1, $s2, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x3CF474u, 0x3CF47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF47Cu;
label_3cf47c:
    // 0x3cf47c: 0xae4205bc  sw          $v0, 0x5BC($s2)
    ctx->pc = 0x3cf47cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1468), GPR_U32(ctx, 2));
label_3cf480:
    // 0x3cf480: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x3cf480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3cf484: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cf484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cf488: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3cf488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3cf48c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3cf48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf490: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cf490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cf494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf498: 0x34454e02  ori         $a1, $v0, 0x4E02
    ctx->pc = 0x3cf498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19970);
    // 0x3cf49c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cf49cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf4a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cf4a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf4a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cf4a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf4a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cf4a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf4ac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CF4ACu;
    SET_GPR_U32(ctx, 31, 0x3CF4B4u);
    ctx->pc = 0x3CF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4ACu;
    // 0x3cf4b0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CF4ACu, 0x3CF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4B4u;
label_3cf4b4:
    // 0x3cf4b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cf4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cf4b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3cf4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cf4bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cf4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cf4c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cf4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF4C4u;
        // 0x3cf4c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF4CCu;
}
