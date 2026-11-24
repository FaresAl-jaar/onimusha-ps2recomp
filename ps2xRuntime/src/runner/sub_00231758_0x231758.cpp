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

// Function: sub_00231758
// Address: 0x231758 - 0x2318e4
void sub_00231758_0x231758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231758_0x231758");
#endif

    switch (ctx->pc) {
        case 0x2317a4u: goto label_2317a4;
        case 0x2317f8u: goto label_2317f8;
        case 0x231808u: goto label_231808;
        case 0x231818u: goto label_231818;
        case 0x231830u: goto label_231830;
        case 0x231850u: goto label_231850;
        case 0x231894u: goto label_231894;
        default: break;
    }

    ctx->pc = 0x231758u;

    // 0x231758: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x231758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23175c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x231760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231764: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x231764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x231768: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x231768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23176c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x231770: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x231770u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231774: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x231774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x231778: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x231778u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23177c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x23177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x231780: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x231780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x231784: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231788: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x231788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23178c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x231790: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x231790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x231794: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x231794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x231798: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x231798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x23179c: 0xc08c56a  jal         func_2315A8
    ctx->pc = 0x23179Cu;
    SET_GPR_U32(ctx, 31, 0x2317A4u);
    ctx->pc = 0x2317A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23179Cu;
    // 0x2317a0: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2315A8u, 0x23179Cu, 0x2317A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317A4u;
label_2317a4:
    // 0x2317a4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2317a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317a8: 0x7c30009  bgezl       $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x2317A8u;
    {
        const bool branch_taken_0x2317a8 = (GPR_S64(ctx, 30) >= 0);
        if (branch_taken_0x2317a8) {
            ctx->pc = 0x2317ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2317A8u;
            // 0x2317ac: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2317D0u;
            goto label_2317d0;
        }
    }
    ctx->pc = 0x2317B0u;
    // 0x2317b0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2317b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2317b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2317b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2317b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2317bc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2317bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2317c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2317c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2317c4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2317c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x2317c8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2317C8u;
    {
        const bool branch_taken_0x2317c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317C8u;
        // 0x2317cc: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317c8) {
            ctx->pc = 0x2318B4u;
            goto label_2318b4;
        }
    }
    ctx->pc = 0x2317D0u;
label_2317d0:
    // 0x2317d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2317d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2317d4: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x2317d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    // 0x2317d8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2317d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2317dc: 0x8e73c8b8  lw          $s3, -0x3748($s3)
    ctx->pc = 0x2317dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953144)));
    // 0x2317e0: 0x8263000f  lb          $v1, 0xF($s3)
    ctx->pc = 0x2317e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x2317e4: 0x54640016  bnel        $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2317E4u;
    {
        const bool branch_taken_0x2317e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2317e4) {
            ctx->pc = 0x2317E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2317E4u;
            // 0x2317e8: 0x96720118  lhu         $s2, 0x118($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231840u;
            goto label_231840;
        }
    }
    ctx->pc = 0x2317ECu;
    // 0x2317ec: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x2317ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x2317f0: 0xc08c728  jal         func_231CA0
    ctx->pc = 0x2317F0u;
    SET_GPR_U32(ctx, 31, 0x2317F8u);
    ctx->pc = 0x2317F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317F0u;
    // 0x2317f4: 0x2675011c  addiu       $s5, $s3, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CA0u, 0x2317F0u, 0x2317F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317F8u;
label_2317f8:
    // 0x2317f8: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2317F8u;
    {
        const bool branch_taken_0x2317f8 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2317FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317F8u;
        // 0x2317fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317f8) {
            ctx->pc = 0x231820u;
            goto label_231820;
        }
    }
    ctx->pc = 0x231800u;
    // 0x231800: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x231800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231804: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x231804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231808:
    // 0x231808: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x231808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23180c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23180cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x231810: 0xc08c728  jal         func_231CA0
    ctx->pc = 0x231810u;
    SET_GPR_U32(ctx, 31, 0x231818u);
    ctx->pc = 0x231814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231810u;
    // 0x231814: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CA0u, 0x231810u, 0x231818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231818u;
label_231818:
    // 0x231818: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x231818u;
    {
        const bool branch_taken_0x231818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231818u;
        // 0x23181c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231818) {
            ctx->pc = 0x231808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231808;
        }
    }
    ctx->pc = 0x231820u;
label_231820:
    // 0x231820: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x231820u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x231824: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x231828: 0xc08c728  jal         func_231CA0
    ctx->pc = 0x231828u;
    SET_GPR_U32(ctx, 31, 0x231830u);
    ctx->pc = 0x23182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231828u;
    // 0x23182c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CA0u, 0x231828u, 0x231830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231830u;
label_231830:
    // 0x231830: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x231830u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x231834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231838: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x231838u;
    {
        const bool branch_taken_0x231838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231838u;
        // 0x23183c: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231838) {
            ctx->pc = 0x231884u;
            goto label_231884;
        }
    }
    ctx->pc = 0x231840u;
label_231840:
    // 0x231840: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x231840u;
    {
        const bool branch_taken_0x231840 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x231844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231840u;
        // 0x231844: 0x2665011a  addiu       $a1, $s3, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231840) {
            ctx->pc = 0x23186Cu;
            goto label_23186c;
        }
    }
    ctx->pc = 0x231848u;
    // 0x231848: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x231848u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23184c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x23184cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231850:
    // 0x231850: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x231850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231854: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x231854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x231858: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x231858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x23185c: 0x0  nop
    ctx->pc = 0x23185cu;
    // NOP
    // 0x231860: 0x0  nop
    ctx->pc = 0x231860u;
    // NOP
    // 0x231864: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x231864u;
    {
        const bool branch_taken_0x231864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x231868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231864u;
        // 0x231868: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231864) {
            ctx->pc = 0x231850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231850;
        }
    }
    ctx->pc = 0x23186Cu;
label_23186c:
    // 0x23186c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x23186cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x231870: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x231870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x231874: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x231874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231878: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x231878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x23187c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x23187cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x231880: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x231880u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_231884:
    // 0x231884: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x231884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231888: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x231888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x23188c: 0xc04a040  jal         func_128100
    ctx->pc = 0x23188Cu;
    SET_GPR_U32(ctx, 31, 0x231894u);
    ctx->pc = 0x231890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23188Cu;
    // 0x231890: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x23188Cu, 0x231894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231894u;
label_231894:
    // 0x231894: 0x8e640110  lw          $a0, 0x110($s3)
    ctx->pc = 0x231894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x231898: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x231898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23189c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x23189cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318a0: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x2318a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2318a4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2318a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2318a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2318a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2318ac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2318acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2318b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2318b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2318b4:
    // 0x2318b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2318b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2318b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2318b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2318bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2318bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2318c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2318c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2318c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2318c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2318c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2318c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2318cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2318ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2318d0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2318d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2318d4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2318d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2318d8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2318d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2318dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2318DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2318E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318DCu;
        // 0x2318e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2318DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2318E4u;
}
