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

// Function: sub_00320660
// Address: 0x320660 - 0x32087c
void sub_00320660_0x320660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320660_0x320660");
#endif

    switch (ctx->pc) {
        case 0x3206dcu: goto label_3206dc;
        case 0x320710u: goto label_320710;
        case 0x320850u: goto label_320850;
        default: break;
    }

    ctx->pc = 0x320660u;

    // 0x320660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x320664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x320664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x320668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32066c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x320670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320678: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x320678u;
    {
        const bool branch_taken_0x320678 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320678u;
        // 0x32067c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320678) {
            ctx->pc = 0x3206A0u;
            goto label_3206a0;
        }
    }
    ctx->pc = 0x320680u;
    // 0x320680: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x320680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x320684: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x320684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x320688: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x320688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x32068c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32068cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x320690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320694: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x320694u;
    {
        const bool branch_taken_0x320694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320694u;
        // 0x320698: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320694) {
            ctx->pc = 0x3206C8u;
            goto label_3206c8;
        }
    }
    ctx->pc = 0x32069Cu;
    // 0x32069c: 0x0  nop
    ctx->pc = 0x32069cu;
    // NOP
label_3206a0:
    // 0x3206a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3206a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3206a4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3206A4u;
    {
        const bool branch_taken_0x3206a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206A4u;
        // 0x3206a8: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206a4) {
            ctx->pc = 0x3206C8u;
            goto label_3206c8;
        }
    }
    ctx->pc = 0x3206ACu;
    // 0x3206ac: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3206acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3206b0: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3206b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3206b4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3206b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3206b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3206b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3206bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3206bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3206c0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3206c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3206c4: 0x0  nop
    ctx->pc = 0x3206c4u;
    // NOP
label_3206c8:
    // 0x3206c8: 0x12200065  beqz        $s1, . + 4 + (0x65 << 2)
    ctx->pc = 0x3206C8u;
    {
        const bool branch_taken_0x3206c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3206CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206C8u;
        // 0x3206cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206c8) {
            ctx->pc = 0x320860u;
            goto label_320860;
        }
    }
    ctx->pc = 0x3206D0u;
    // 0x3206d0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x3206d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3206d4: 0xc0c7fec  jal         func_31FFB0
    ctx->pc = 0x3206D4u;
    SET_GPR_U32(ctx, 31, 0x3206DCu);
    ctx->pc = 0x3206D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206D4u;
    // 0x3206d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FFB0u, 0x3206D4u, 0x3206DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206DCu;
label_3206dc:
    // 0x3206dc: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3206DCu;
    {
        const bool branch_taken_0x3206dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3206dc) {
            ctx->pc = 0x320860u;
            goto label_320860;
        }
    }
    ctx->pc = 0x3206E4u;
    // 0x3206e4: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x3206e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3206e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3206e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3206ec: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x3206ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3206f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3206f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3206f4: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x3206f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3206f8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x3206f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3206fc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3206fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x320700: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x320700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320704: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x320704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320708: 0xc0c8068  jal         func_3201A0
    ctx->pc = 0x320708u;
    SET_GPR_U32(ctx, 31, 0x320710u);
    ctx->pc = 0x32070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320708u;
    // 0x32070c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3201A0u, 0x320708u, 0x320710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320710u;
label_320710:
    // 0x320710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320710u;
    {
        const bool branch_taken_0x320710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320710) {
            ctx->pc = 0x320720u;
            goto label_320720;
        }
    }
    ctx->pc = 0x320718u;
    // 0x320718: 0x36020001  ori         $v0, $s0, 0x1
    ctx->pc = 0x320718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x32071c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x32071cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320720:
    // 0x320720: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x320720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x320724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320728: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x320728u;
    {
        const bool branch_taken_0x320728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320728u;
        // 0x32072c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320728) {
            ctx->pc = 0x320820u;
            goto label_320820;
        }
    }
    ctx->pc = 0x320730u;
    // 0x320730: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x320730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x320734: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x320734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x320738: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x320738u;
    {
        const bool branch_taken_0x320738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320738) {
            ctx->pc = 0x3207C8u;
            goto label_3207c8;
        }
    }
    ctx->pc = 0x320740u;
    // 0x320740: 0x96222ac8  lhu         $v0, 0x2AC8($s1)
    ctx->pc = 0x320740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10952)));
    // 0x320744: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x320744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x320748: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x320748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32074c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32074Cu;
    {
        const bool branch_taken_0x32074c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32074Cu;
        // 0x320750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32074c) {
            ctx->pc = 0x320760u;
            goto label_320760;
        }
    }
    ctx->pc = 0x320754u;
    // 0x320754: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x320754u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x320758: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x320758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x32075c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32075cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320760:
    // 0x320760: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x320760u;
    {
        const bool branch_taken_0x320760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320760) {
            ctx->pc = 0x32078Cu;
            goto label_32078c;
        }
    }
    ctx->pc = 0x320768u;
    // 0x320768: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x320768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x32076c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x320770: 0x8e2329c8  lw          $v1, 0x29C8($s1)
    ctx->pc = 0x320770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
    // 0x320774: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x320774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x320778: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x320778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32077c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320780: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x320780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x320784: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x320784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x320788: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32078c:
    // 0x32078c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32078Cu;
    {
        const bool branch_taken_0x32078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32078c) {
            ctx->pc = 0x3207C0u;
            goto label_3207c0;
        }
    }
    ctx->pc = 0x320794u;
    // 0x320794: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x320794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x320798: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x320798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32079c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x32079cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3207a0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3207A0u;
    {
        const bool branch_taken_0x3207a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3207A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207A0u;
        // 0x3207a4: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207a0) {
            ctx->pc = 0x3207B0u;
            goto label_3207b0;
        }
    }
    ctx->pc = 0x3207A8u;
    // 0x3207a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3207a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207ac: 0x0  nop
    ctx->pc = 0x3207acu;
    // NOP
label_3207b0:
    // 0x3207b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3207B0u;
    {
        const bool branch_taken_0x3207b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207b0) {
            ctx->pc = 0x3207C0u;
            goto label_3207c0;
        }
    }
    ctx->pc = 0x3207B8u;
    // 0x3207b8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x3207b8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3207bc: 0x0  nop
    ctx->pc = 0x3207bcu;
    // NOP
label_3207c0:
    // 0x3207c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3207C0u;
    {
        const bool branch_taken_0x3207c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3207C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207C0u;
        // 0x3207c4: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207c0) {
            ctx->pc = 0x320830u;
            goto label_320830;
        }
    }
    ctx->pc = 0x3207C8u;
label_3207c8:
    // 0x3207c8: 0x96222ac8  lhu         $v0, 0x2AC8($s1)
    ctx->pc = 0x3207c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10952)));
    // 0x3207cc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x3207ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x3207d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3207d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3207d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3207D4u;
    {
        const bool branch_taken_0x3207d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3207D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207D4u;
        // 0x3207d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207d4) {
            ctx->pc = 0x3207E8u;
            goto label_3207e8;
        }
    }
    ctx->pc = 0x3207DCu;
    // 0x3207dc: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x3207dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x3207e0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3207e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3207e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3207e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3207e8:
    // 0x3207e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3207E8u;
    {
        const bool branch_taken_0x3207e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207e8) {
            ctx->pc = 0x320818u;
            goto label_320818;
        }
    }
    ctx->pc = 0x3207F0u;
    // 0x3207f0: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x3207f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x3207f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3207f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3207f8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3207f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3207fc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3207FCu;
    {
        const bool branch_taken_0x3207fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x320800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207FCu;
        // 0x320800: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207fc) {
            ctx->pc = 0x320808u;
            goto label_320808;
        }
    }
    ctx->pc = 0x320804u;
    // 0x320804: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x320804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320808:
    // 0x320808: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320808u;
    {
        const bool branch_taken_0x320808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x320808) {
            ctx->pc = 0x320818u;
            goto label_320818;
        }
    }
    ctx->pc = 0x320810u;
    // 0x320810: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x320810u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x320814: 0x0  nop
    ctx->pc = 0x320814u;
    // NOP
label_320818:
    // 0x320818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x320818u;
    {
        const bool branch_taken_0x320818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320818u;
        // 0x32081c: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320818) {
            ctx->pc = 0x320830u;
            goto label_320830;
        }
    }
    ctx->pc = 0x320820u;
label_320820:
    // 0x320820: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x320820u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x320824: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x320824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x320828: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32082c: 0x0  nop
    ctx->pc = 0x32082cu;
    // NOP
label_320830:
    // 0x320830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320830u;
    {
        const bool branch_taken_0x320830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320830) {
            ctx->pc = 0x320840u;
            goto label_320840;
        }
    }
    ctx->pc = 0x320838u;
    // 0x320838: 0x36020004  ori         $v0, $s0, 0x4
    ctx->pc = 0x320838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x32083c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x32083cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320840:
    // 0x320840: 0x862600c2  lh          $a2, 0xC2($s1)
    ctx->pc = 0x320840u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x320844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320848: 0xc0c8128  jal         func_3204A0
    ctx->pc = 0x320848u;
    SET_GPR_U32(ctx, 31, 0x320850u);
    ctx->pc = 0x32084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320848u;
    // 0x32084c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3204A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3204A0u, 0x320848u, 0x320850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320850u;
label_320850:
    // 0x320850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320850u;
    {
        const bool branch_taken_0x320850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320850) {
            ctx->pc = 0x320860u;
            goto label_320860;
        }
    }
    ctx->pc = 0x320858u;
    // 0x320858: 0x36020002  ori         $v0, $s0, 0x2
    ctx->pc = 0x320858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x32085c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x32085cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_320860:
    // 0x320860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x320860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x320864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32086c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32086cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320874: 0x3e00008  jr          $ra
    ctx->pc = 0x320874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320874u;
        // 0x320878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32087Cu;
}
