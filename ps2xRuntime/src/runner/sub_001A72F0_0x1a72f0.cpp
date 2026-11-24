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

// Function: sub_001A72F0
// Address: 0x1a72f0 - 0x1a7460
void sub_001A72F0_0x1a72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A72F0_0x1a72f0");
#endif

    switch (ctx->pc) {
        case 0x1a7330u: goto label_1a7330;
        case 0x1a7340u: goto label_1a7340;
        case 0x1a7378u: goto label_1a7378;
        case 0x1a73e8u: goto label_1a73e8;
        case 0x1a7400u: goto label_1a7400;
        case 0x1a743cu: goto label_1a743c;
        case 0x1a7444u: goto label_1a7444;
        default: break;
    }

    ctx->pc = 0x1a72f0u;

    // 0x1a72f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a72f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a72f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a72f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a72f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a72fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a72fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7304: 0x8c917840  lw          $s1, 0x7840($a0)
    ctx->pc = 0x1a7304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1a7308: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7308u;
    {
        const bool branch_taken_0x1a7308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7308u;
        // 0x1a730c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7308) {
            ctx->pc = 0x1A7318u;
            goto label_1a7318;
        }
    }
    ctx->pc = 0x1A7310u;
    // 0x1a7310: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1A7310u;
    {
        const bool branch_taken_0x1a7310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7310u;
        // 0x1a7314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7310) {
            ctx->pc = 0x1A7448u;
            goto label_1a7448;
        }
    }
    ctx->pc = 0x1A7318u;
label_1a7318:
    // 0x1a7318: 0xae407840  sw          $zero, 0x7840($s2)
    ctx->pc = 0x1a7318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30784), GPR_U32(ctx, 0));
    // 0x1a731c: 0x8e427830  lw          $v0, 0x7830($s2)
    ctx->pc = 0x1a731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30768)));
    // 0x1a7320: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7320u;
    {
        const bool branch_taken_0x1a7320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7320) {
            ctx->pc = 0x1A7338u;
            goto label_1a7338;
        }
    }
    ctx->pc = 0x1A7328u;
    // 0x1a7328: 0xc069c4c  jal         func_1A7130
    ctx->pc = 0x1A7328u;
    SET_GPR_U32(ctx, 31, 0x1A7330u);
    ctx->pc = 0x1A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7130u, 0x1A7328u, 0x1A7330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7330u;
label_1a7330:
    // 0x1a7330: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1A7330u;
    {
        const bool branch_taken_0x1a7330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7330u;
        // 0x1a7334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7330) {
            ctx->pc = 0x1A7448u;
            goto label_1a7448;
        }
    }
    ctx->pc = 0x1A7338u;
label_1a7338:
    // 0x1a7338: 0xc069860  jal         func_1A6180
    ctx->pc = 0x1A7338u;
    SET_GPR_U32(ctx, 31, 0x1A7340u);
    ctx->pc = 0x1A733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7338u;
    // 0x1a733c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6180u, 0x1A7338u, 0x1A7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7340u;
label_1a7340:
    // 0x1a7340: 0x8e47783c  lw          $a3, 0x783C($s2)
    ctx->pc = 0x1a7340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1a7344: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x1a7344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a7348: 0xae42783c  sw          $v0, 0x783C($s2)
    ctx->pc = 0x1a7348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30780), GPR_U32(ctx, 2));
    // 0x1a734c: 0x8e457834  lw          $a1, 0x7834($s2)
    ctx->pc = 0x1a734cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a7350: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x1a7350u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a7354: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7354u;
    {
        const bool branch_taken_0x1a7354 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7354u;
        // 0x1a7358: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7354) {
            ctx->pc = 0x1A7364u;
            goto label_1a7364;
        }
    }
    ctx->pc = 0x1A735Cu;
    // 0x1a735c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1a735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1a7360: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a7360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a7364:
    // 0x1a7364: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x1a7364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7368: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7368u;
    {
        const bool branch_taken_0x1a7368 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7368u;
        // 0x1a736c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7368) {
            ctx->pc = 0x1A7380u;
            goto label_1a7380;
        }
    }
    ctx->pc = 0x1A7370u;
    // 0x1a7370: 0xc069c4c  jal         func_1A7130
    ctx->pc = 0x1A7370u;
    SET_GPR_U32(ctx, 31, 0x1A7378u);
    ctx->pc = 0x1A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7130u, 0x1A7370u, 0x1A7378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7378u;
label_1a7378:
    // 0x1a7378: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1A7378u;
    {
        const bool branch_taken_0x1a7378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7378u;
        // 0x1a737c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7378) {
            ctx->pc = 0x1A7448u;
            goto label_1a7448;
        }
    }
    ctx->pc = 0x1A7380u;
label_1a7380:
    // 0x1a7380: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x1a7380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a7384: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a7384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a7388: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a7388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a738c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a7390: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1a7390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1a7394: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1a7394u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1a7398: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x1a7398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1a739c: 0x8e437834  lw          $v1, 0x7834($s2)
    ctx->pc = 0x1a739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a73a0: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x1a73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x1a73a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a73a8: 0x8e437834  lw          $v1, 0x7834($s2)
    ctx->pc = 0x1a73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a73ac: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1a73acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1a73b0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1a73b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1a73b4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1a73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1a73b8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1a73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1a73bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a73c0: 0xe21823  subu        $v1, $a3, $v0
    ctx->pc = 0x1a73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a73c4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A73C4u;
    {
        const bool branch_taken_0x1a73c4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C4u;
        // 0x1a73c8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73c4) {
            ctx->pc = 0x1A73D4u;
            goto label_1a73d4;
        }
    }
    ctx->pc = 0x1A73CCu;
    // 0x1a73cc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1a73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1a73d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a73d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a73d4:
    // 0x1a73d4: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1a73d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a73d8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A73D8u;
    {
        const bool branch_taken_0x1a73d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73D8u;
        // 0x1a73dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73d8) {
            ctx->pc = 0x1A73F0u;
            goto label_1a73f0;
        }
    }
    ctx->pc = 0x1A73E0u;
    // 0x1a73e0: 0xc069c4c  jal         func_1A7130
    ctx->pc = 0x1A73E0u;
    SET_GPR_U32(ctx, 31, 0x1A73E8u);
    ctx->pc = 0x1A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7130u, 0x1A73E0u, 0x1A73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73E8u;
label_1a73e8:
    // 0x1a73e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A73E8u;
    {
        const bool branch_taken_0x1a73e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73E8u;
        // 0x1a73ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73e8) {
            ctx->pc = 0x1A7448u;
            goto label_1a7448;
        }
    }
    ctx->pc = 0x1A73F0u;
label_1a73f0:
    // 0x1a73f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a73f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a73f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73f8: 0xc0708a8  jal         func_1C22A0
    ctx->pc = 0x1A73F8u;
    SET_GPR_U32(ctx, 31, 0x1A7400u);
    ctx->pc = 0x1A73FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73F8u;
    // 0x1a73fc: 0xa630000c  sh          $s0, 0xC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22A0u, 0x1A73F8u, 0x1A7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7400u;
label_1a7400:
    // 0x1a7400: 0x8e437848  lw          $v1, 0x7848($s2)
    ctx->pc = 0x1a7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30792)));
    // 0x1a7404: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7408: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a7408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a740c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a740cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a7410: 0x8e427848  lw          $v0, 0x7848($s2)
    ctx->pc = 0x1a7410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30792)));
    // 0x1a7414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7418: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a7418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a741c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7420: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7420u;
    {
        const bool branch_taken_0x1a7420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7420) {
            ctx->pc = 0x1A7430u;
            goto label_1a7430;
        }
    }
    ctx->pc = 0x1A7428u;
    // 0x1a7428: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7428u;
    {
        const bool branch_taken_0x1a7428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7428u;
        // 0x1a742c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7428) {
            ctx->pc = 0x1A7448u;
            goto label_1a7448;
        }
    }
    ctx->pc = 0x1A7430u;
label_1a7430:
    // 0x1a7430: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1a7430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a7434: 0xc049522  jal         func_125488
    ctx->pc = 0x1A7434u;
    SET_GPR_U32(ctx, 31, 0x1A743Cu);
    ctx->pc = 0x1A7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7434u;
    // 0x1a7438: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A7434u, 0x1A743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A743Cu;
label_1a743c:
    // 0x1a743c: 0xc069c4c  jal         func_1A7130
    ctx->pc = 0x1A743Cu;
    SET_GPR_U32(ctx, 31, 0x1A7444u);
    ctx->pc = 0x1A7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A743Cu;
    // 0x1a7440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7130u, 0x1A743Cu, 0x1A7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7444u;
label_1a7444:
    // 0x1a7444: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a7444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7448:
    // 0x1a7448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a7448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a744c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a744cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7458: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7458u;
        // 0x1a745c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7460u;
}
