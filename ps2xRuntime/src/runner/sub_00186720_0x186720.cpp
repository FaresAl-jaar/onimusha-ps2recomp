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

// Function: sub_00186720
// Address: 0x186720 - 0x186994
void sub_00186720_0x186720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186720_0x186720");
#endif

    switch (ctx->pc) {
        case 0x1867f0u: goto label_1867f0;
        case 0x186860u: goto label_186860;
        case 0x1868b0u: goto label_1868b0;
        case 0x18692cu: goto label_18692c;
        default: break;
    }

    ctx->pc = 0x186720u;

    // 0x186720: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x186720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x186724: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x186724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x186728: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x186728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x18672c: 0x24e7d330  addiu       $a3, $a3, -0x2CD0
    ctx->pc = 0x18672cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955824));
    // 0x186730: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x186730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x186734: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x186734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x186738: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x186738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x18673c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x18673cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186740: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x186740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x186744: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x186744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x186748: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x186748u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18674c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x186750: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x186750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186754: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x186754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x186758: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x186758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18675c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x186760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x186760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186764: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x186764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186768: 0x94a4006a  lhu         $a0, 0x6A($a1)
    ctx->pc = 0x186768u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 106)));
    // 0x18676c: 0x8cc311d4  lw          $v1, 0x11D4($a2)
    ctx->pc = 0x18676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4564)));
    // 0x186770: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x186770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x186774: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x186774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x186778: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x186778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x18677c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x18677cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x186780: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x186780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x186784: 0x24c6d334  addiu       $a2, $a2, -0x2CCC
    ctx->pc = 0x186784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955828));
    // 0x186788: 0x24a5d338  addiu       $a1, $a1, -0x2CC8
    ctx->pc = 0x186788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955832));
    // 0x18678c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x186790: 0x34042  srl         $t0, $v1, 1
    ctx->pc = 0x186790u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x186794: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x186794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x186798: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x186798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18679c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x18679cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1867a0: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x1867a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1867a4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1867a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1867a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1867ac: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1867b0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1867b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x1867b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1867b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1867b8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1867b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1867bc: 0x8cbe0000  lw          $fp, 0x0($a1)
    ctx->pc = 0x1867bcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1867c0: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1867C0u;
    {
        const bool branch_taken_0x1867c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867C0u;
        // 0x1867c4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867c0) {
            ctx->pc = 0x186880u;
            goto label_186880;
        }
    }
    ctx->pc = 0x1867C8u;
    // 0x1867c8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1867c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1867cc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1867ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867d0: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1867d4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1867d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867d8: 0x8fb100e0  lw          $s1, 0xE0($sp)
    ctx->pc = 0x1867d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1867dc: 0x30630005  andi        $v1, $v1, 0x5
    ctx->pc = 0x1867dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
    // 0x1867e0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1867e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x1867e4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1867e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1867e8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1867e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1867ec: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1867ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1867f0:
    // 0x1867f0: 0x8ee30080  lw          $v1, 0x80($s7)
    ctx->pc = 0x1867f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x1867f4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1867f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1867f8: 0x946400c6  lhu         $a0, 0xC6($v1)
    ctx->pc = 0x1867f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x1867fc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1867fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x186800: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x186800u;
    {
        const bool branch_taken_0x186800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186800) {
            ctx->pc = 0x186860u;
            goto label_186860;
        }
    }
    ctx->pc = 0x186808u;
    // 0x186808: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x186808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18680c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18680Cu;
    {
        const bool branch_taken_0x18680c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18680c) {
            ctx->pc = 0x186840u;
            goto label_186840;
        }
    }
    ctx->pc = 0x186814u;
    // 0x186814: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x186814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x186818: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x186818u;
    {
        const bool branch_taken_0x186818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186818u;
        // 0x18681c: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186818) {
            ctx->pc = 0x186830u;
            goto label_186830;
        }
    }
    ctx->pc = 0x186820u;
    // 0x186820: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x186820u;
    {
        const bool branch_taken_0x186820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186820) {
            ctx->pc = 0x186840u;
            goto label_186840;
        }
    }
    ctx->pc = 0x186828u;
    // 0x186828: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186828u;
    {
        const bool branch_taken_0x186828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186828) {
            ctx->pc = 0x186860u;
            goto label_186860;
        }
    }
    ctx->pc = 0x186830u;
label_186830:
    // 0x186830: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x186830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x186834: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x186834u;
    {
        const bool branch_taken_0x186834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186834) {
            ctx->pc = 0x186860u;
            goto label_186860;
        }
    }
    ctx->pc = 0x18683Cu;
    // 0x18683c: 0x0  nop
    ctx->pc = 0x18683cu;
    // NOP
label_186840:
    // 0x186840: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18684c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18684cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186850: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x186850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186854: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x186854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x186858: 0xc06011c  jal         func_180470
    ctx->pc = 0x186858u;
    SET_GPR_U32(ctx, 31, 0x186860u);
    ctx->pc = 0x18685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186858u;
    // 0x18685c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x186858u, 0x186860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186860u;
label_186860:
    // 0x186860: 0x96e3006a  lhu         $v1, 0x6A($s7)
    ctx->pc = 0x186860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 106)));
    // 0x186864: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x186864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x186868: 0x26d600e0  addiu       $s6, $s6, 0xE0
    ctx->pc = 0x186868u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x18686c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x18686cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x186870: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x186870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x186874: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x186874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x186878: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x186878u;
    {
        const bool branch_taken_0x186878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186878u;
        // 0x18687c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186878) {
            ctx->pc = 0x1867F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1867f0;
        }
    }
    ctx->pc = 0x186880u;
label_186880:
    // 0x186880: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x186880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x186884: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x186884u;
    {
        const bool branch_taken_0x186884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186884) {
            ctx->pc = 0x186948u;
            goto label_186948;
        }
    }
    ctx->pc = 0x18688Cu;
    // 0x18688c: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x18688cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x186890: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x186890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x186894: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x186894u;
    {
        const bool branch_taken_0x186894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x186898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186894u;
        // 0x186898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186894) {
            ctx->pc = 0x186948u;
            goto label_186948;
        }
    }
    ctx->pc = 0x18689Cu;
    // 0x18689c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18689cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1868a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1868a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868a4: 0x30720005  andi        $s2, $v1, 0x5
    ctx->pc = 0x1868a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
    // 0x1868a8: 0x30710004  andi        $s1, $v1, 0x4
    ctx->pc = 0x1868a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1868ac: 0x0  nop
    ctx->pc = 0x1868acu;
    // NOP
label_1868b0:
    // 0x1868b0: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x1868b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1868b4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1868b8: 0x946400c6  lhu         $a0, 0xC6($v1)
    ctx->pc = 0x1868b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x1868bc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1868bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1868c0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1868C0u;
    {
        const bool branch_taken_0x1868c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1868c0) {
            ctx->pc = 0x186930u;
            goto label_186930;
        }
    }
    ctx->pc = 0x1868C8u;
    // 0x1868c8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1868C8u;
    {
        const bool branch_taken_0x1868c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868c8) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x1868D0u;
    // 0x1868d0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1868D0u;
    {
        const bool branch_taken_0x1868d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868D0u;
        // 0x1868d4: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868d0) {
            ctx->pc = 0x1868E8u;
            goto label_1868e8;
        }
    }
    ctx->pc = 0x1868D8u;
    // 0x1868d8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1868D8u;
    {
        const bool branch_taken_0x1868d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1868d8) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x1868E0u;
    // 0x1868e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1868E0u;
    {
        const bool branch_taken_0x1868e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868e0) {
            ctx->pc = 0x186930u;
            goto label_186930;
        }
    }
    ctx->pc = 0x1868E8u;
label_1868e8:
    // 0x1868e8: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1868e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1868ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1868ECu;
    {
        const bool branch_taken_0x1868ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868ec) {
            ctx->pc = 0x186930u;
            goto label_186930;
        }
    }
    ctx->pc = 0x1868F4u;
    // 0x1868f4: 0x0  nop
    ctx->pc = 0x1868f4u;
    // NOP
label_1868f8:
    // 0x1868f8: 0x92a200cd  lbu         $v0, 0xCD($s5)
    ctx->pc = 0x1868f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 205)));
    // 0x1868fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1868fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x186900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186904: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x186904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x186908: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x186908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18690c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186910: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x186910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x186914: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x186914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x186918: 0x3c32821  addu        $a1, $fp, $v1
    ctx->pc = 0x186918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x18691c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x18691cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186920: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x186920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x186924: 0xc06011c  jal         func_180470
    ctx->pc = 0x186924u;
    SET_GPR_U32(ctx, 31, 0x18692Cu);
    ctx->pc = 0x186928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186924u;
    // 0x186928: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x186924u, 0x18692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18692Cu;
label_18692c:
    // 0x18692c: 0x0  nop
    ctx->pc = 0x18692cu;
    // NOP
label_186930:
    // 0x186930: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x186930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x186934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186938: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x186938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x18693c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x18693cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x186940: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x186940u;
    {
        const bool branch_taken_0x186940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186940u;
        // 0x186944: 0x267300e0  addiu       $s3, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186940) {
            ctx->pc = 0x1868B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1868b0;
        }
    }
    ctx->pc = 0x186948u;
label_186948:
    // 0x186948: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x186948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18694c: 0xc68111f8  lwc1        $f1, 0x11F8($s4)
    ctx->pc = 0x18694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186954: 0x0  nop
    ctx->pc = 0x186954u;
    // NOP
    // 0x186958: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18695c: 0xe68011f8  swc1        $f0, 0x11F8($s4)
    ctx->pc = 0x18695cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4600), bits); }
    // 0x186960: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x186960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x186964: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186968: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x186968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18696c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x18696cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186970: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x186970u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186974: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x186974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186978: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x186978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18697c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18697cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186980: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x186980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186988: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18698c: 0x3e00008  jr          $ra
    ctx->pc = 0x18698Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18698Cu;
        // 0x186990: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18698Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186994u;
}
