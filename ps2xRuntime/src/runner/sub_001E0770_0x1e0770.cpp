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

// Function: sub_001E0770
// Address: 0x1e0770 - 0x1e08b0
void sub_001E0770_0x1e0770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0770_0x1e0770");
#endif

    switch (ctx->pc) {
        case 0x1e0770u: goto label_1e0770;
        case 0x1e0774u: goto label_1e0774;
        case 0x1e0778u: goto label_1e0778;
        case 0x1e077cu: goto label_1e077c;
        case 0x1e0780u: goto label_1e0780;
        case 0x1e0784u: goto label_1e0784;
        case 0x1e0788u: goto label_1e0788;
        case 0x1e078cu: goto label_1e078c;
        case 0x1e0790u: goto label_1e0790;
        case 0x1e0794u: goto label_1e0794;
        case 0x1e0798u: goto label_1e0798;
        case 0x1e079cu: goto label_1e079c;
        case 0x1e07a0u: goto label_1e07a0;
        case 0x1e07a4u: goto label_1e07a4;
        case 0x1e07a8u: goto label_1e07a8;
        case 0x1e07acu: goto label_1e07ac;
        case 0x1e07b0u: goto label_1e07b0;
        case 0x1e07b4u: goto label_1e07b4;
        case 0x1e07b8u: goto label_1e07b8;
        case 0x1e07bcu: goto label_1e07bc;
        case 0x1e07c0u: goto label_1e07c0;
        case 0x1e07c4u: goto label_1e07c4;
        case 0x1e07c8u: goto label_1e07c8;
        case 0x1e07ccu: goto label_1e07cc;
        case 0x1e07d0u: goto label_1e07d0;
        case 0x1e07d4u: goto label_1e07d4;
        case 0x1e07d8u: goto label_1e07d8;
        case 0x1e07dcu: goto label_1e07dc;
        case 0x1e07e0u: goto label_1e07e0;
        case 0x1e07e4u: goto label_1e07e4;
        case 0x1e07e8u: goto label_1e07e8;
        case 0x1e07ecu: goto label_1e07ec;
        case 0x1e07f0u: goto label_1e07f0;
        case 0x1e07f4u: goto label_1e07f4;
        case 0x1e07f8u: goto label_1e07f8;
        case 0x1e07fcu: goto label_1e07fc;
        case 0x1e0800u: goto label_1e0800;
        case 0x1e0804u: goto label_1e0804;
        case 0x1e0808u: goto label_1e0808;
        case 0x1e080cu: goto label_1e080c;
        case 0x1e0810u: goto label_1e0810;
        case 0x1e0814u: goto label_1e0814;
        case 0x1e0818u: goto label_1e0818;
        case 0x1e081cu: goto label_1e081c;
        case 0x1e0820u: goto label_1e0820;
        case 0x1e0824u: goto label_1e0824;
        case 0x1e0828u: goto label_1e0828;
        case 0x1e082cu: goto label_1e082c;
        case 0x1e0830u: goto label_1e0830;
        case 0x1e0834u: goto label_1e0834;
        case 0x1e0838u: goto label_1e0838;
        case 0x1e083cu: goto label_1e083c;
        case 0x1e0840u: goto label_1e0840;
        case 0x1e0844u: goto label_1e0844;
        case 0x1e0848u: goto label_1e0848;
        case 0x1e084cu: goto label_1e084c;
        case 0x1e0850u: goto label_1e0850;
        case 0x1e0854u: goto label_1e0854;
        case 0x1e0858u: goto label_1e0858;
        case 0x1e085cu: goto label_1e085c;
        case 0x1e0860u: goto label_1e0860;
        case 0x1e0864u: goto label_1e0864;
        case 0x1e0868u: goto label_1e0868;
        case 0x1e086cu: goto label_1e086c;
        case 0x1e0870u: goto label_1e0870;
        case 0x1e0874u: goto label_1e0874;
        case 0x1e0878u: goto label_1e0878;
        case 0x1e087cu: goto label_1e087c;
        case 0x1e0880u: goto label_1e0880;
        case 0x1e0884u: goto label_1e0884;
        case 0x1e0888u: goto label_1e0888;
        case 0x1e088cu: goto label_1e088c;
        case 0x1e0890u: goto label_1e0890;
        case 0x1e0894u: goto label_1e0894;
        case 0x1e0898u: goto label_1e0898;
        case 0x1e089cu: goto label_1e089c;
        case 0x1e08a0u: goto label_1e08a0;
        case 0x1e08a4u: goto label_1e08a4;
        case 0x1e08a8u: goto label_1e08a8;
        case 0x1e08acu: goto label_1e08ac;
        default: break;
    }

    ctx->pc = 0x1e0770u;

label_1e0770:
    // 0x1e0770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0774:
    // 0x1e0774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0778:
    // 0x1e0778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e077c:
    // 0x1e077c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e0780:
    // 0x1e0780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e0784:
    if (ctx->pc == 0x1E0784u) {
        ctx->pc = 0x1E0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0780u;
        // 0x1e0784: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0788u;
        goto label_1e0788;
    }
    ctx->pc = 0x1E0780u;
    {
        const bool branch_taken_0x1e0780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0780u;
        // 0x1e0784: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0780) {
            ctx->pc = 0x1E0790u;
            goto label_1e0790;
        }
    }
    ctx->pc = 0x1E0788u;
label_1e0788:
    // 0x1e0788: 0x10000045  b           . + 4 + (0x45 << 2)
label_1e078c:
    if (ctx->pc == 0x1E078Cu) {
        ctx->pc = 0x1E078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0788u;
        // 0x1e078c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0790u;
        goto label_1e0790;
    }
    ctx->pc = 0x1E0788u;
    {
        const bool branch_taken_0x1e0788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0788u;
        // 0x1e078c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0788) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E0790u;
label_1e0790:
    // 0x1e0790: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e0790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e0794:
    // 0x1e0794: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e0794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e0798:
    // 0x1e0798: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e0798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e079c:
    // 0x1e079c: 0x320f809  jalr        $t9
label_1e07a0:
    if (ctx->pc == 0x1E07A0u) {
        ctx->pc = 0x1E07A4u;
        goto label_1e07a4;
    }
    ctx->pc = 0x1E079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E07A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E079Cu, 0x1E07A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E07A4u;
label_1e07a4:
    // 0x1e07a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e07a8:
    if (ctx->pc == 0x1E07A8u) {
        ctx->pc = 0x1E07ACu;
        goto label_1e07ac;
    }
    ctx->pc = 0x1E07A4u;
    {
        const bool branch_taken_0x1e07a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e07a4) {
            ctx->pc = 0x1E07C8u;
            goto label_1e07c8;
        }
    }
    ctx->pc = 0x1E07ACu;
label_1e07ac:
    // 0x1e07ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e07acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e07b0:
    // 0x1e07b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e07b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e07b4:
    // 0x1e07b4: 0x320f809  jalr        $t9
label_1e07b8:
    if (ctx->pc == 0x1E07B8u) {
        ctx->pc = 0x1E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07B4u;
        // 0x1e07b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07BCu;
        goto label_1e07bc;
    }
    ctx->pc = 0x1E07B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E07BCu);
        ctx->pc = 0x1E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07B4u;
        // 0x1e07b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E07B4u, 0x1E07BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E07BCu;
label_1e07bc:
    // 0x1e07bc: 0x10000038  b           . + 4 + (0x38 << 2)
label_1e07c0:
    if (ctx->pc == 0x1E07C0u) {
        ctx->pc = 0x1E07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07BCu;
        // 0x1e07c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07C4u;
        goto label_1e07c4;
    }
    ctx->pc = 0x1E07BCu;
    {
        const bool branch_taken_0x1e07bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07BCu;
        // 0x1e07c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07bc) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E07C4u;
label_1e07c4:
    // 0x1e07c4: 0x0  nop
    ctx->pc = 0x1e07c4u;
    // NOP
label_1e07c8:
    // 0x1e07c8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e07cc:
    // 0x1e07cc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e07ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e07d0:
    // 0x1e07d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e07d4:
    if (ctx->pc == 0x1E07D4u) {
        ctx->pc = 0x1E07D8u;
        goto label_1e07d8;
    }
    ctx->pc = 0x1E07D0u;
    {
        const bool branch_taken_0x1e07d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e07d0) {
            ctx->pc = 0x1E07E0u;
            goto label_1e07e0;
        }
    }
    ctx->pc = 0x1E07D8u;
label_1e07d8:
    // 0x1e07d8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1e07dc:
    if (ctx->pc == 0x1E07DCu) {
        ctx->pc = 0x1E07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D8u;
        // 0x1e07dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07E0u;
        goto label_1e07e0;
    }
    ctx->pc = 0x1E07D8u;
    {
        const bool branch_taken_0x1e07d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D8u;
        // 0x1e07dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07d8) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E07E0u;
label_1e07e0:
    // 0x1e07e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e07e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e07e4:
    // 0x1e07e4: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1e07e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e07e8:
    // 0x1e07e8: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e07e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e07ec:
    // 0x1e07ec: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e07ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e07f0:
    // 0x1e07f0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e07f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e07f4:
    // 0x1e07f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e07f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e07f8:
    // 0x1e07f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e07f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e07fc:
    // 0x1e07fc: 0x84a7000c  lh          $a3, 0xC($a1)
    ctx->pc = 0x1e07fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_1e0800:
    // 0x1e0800: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_1e0804:
    // 0x1e0804: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1e0804u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e0808:
    // 0x1e0808: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1e0808u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1e080c:
    // 0x1e080c: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1e080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1e0810:
    // 0x1e0810: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e0810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e0814:
    // 0x1e0814: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0818:
    // 0x1e0818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e081c:
    // 0x1e081c: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1e081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e0820:
    // 0x1e0820: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e0824:
    // 0x1e0824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0828:
    if (ctx->pc == 0x1E0828u) {
        ctx->pc = 0x1E082Cu;
        goto label_1e082c;
    }
    ctx->pc = 0x1E0824u;
    {
        const bool branch_taken_0x1e0824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0824) {
            ctx->pc = 0x1E0838u;
            goto label_1e0838;
        }
    }
    ctx->pc = 0x1E082Cu;
label_1e082c:
    // 0x1e082c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e0830:
    if (ctx->pc == 0x1E0830u) {
        ctx->pc = 0x1E0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E082Cu;
        // 0x1e0830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0834u;
        goto label_1e0834;
    }
    ctx->pc = 0x1E082Cu;
    {
        const bool branch_taken_0x1e082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E082Cu;
        // 0x1e0830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e082c) {
            ctx->pc = 0x1E08A0u;
            goto label_1e08a0;
        }
    }
    ctx->pc = 0x1E0834u;
label_1e0834:
    // 0x1e0834: 0x0  nop
    ctx->pc = 0x1e0834u;
    // NOP
label_1e0838:
    // 0x1e0838: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1e0838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1e083c:
    // 0x1e083c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e083cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e0840:
    // 0x1e0840: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e0840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1e0844:
    // 0x1e0844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0848:
    if (ctx->pc == 0x1E0848u) {
        ctx->pc = 0x1E084Cu;
        goto label_1e084c;
    }
    ctx->pc = 0x1E0844u;
    {
        const bool branch_taken_0x1e0844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0844) {
            ctx->pc = 0x1E0858u;
            goto label_1e0858;
        }
    }
    ctx->pc = 0x1E084Cu;
label_1e084c:
    // 0x1e084c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0850:
    // 0x1e0850: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e0850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0854:
    // 0x1e0854: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1e0854u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_1e0858:
    // 0x1e0858: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e085c:
    // 0x1e085c: 0x8446000e  lh          $a2, 0xE($v0)
    ctx->pc = 0x1e085cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1e0860:
    // 0x1e0860: 0x8445000c  lh          $a1, 0xC($v0)
    ctx->pc = 0x1e0860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1e0864:
    // 0x1e0864: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_1e0868:
    if (ctx->pc == 0x1E0868u) {
        ctx->pc = 0x1E0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0864u;
        // 0x1e0868: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E086Cu;
        goto label_1e086c;
    }
    ctx->pc = 0x1E0864u;
    {
        const bool branch_taken_0x1e0864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0864u;
        // 0x1e0868: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0864) {
            ctx->pc = 0x1E0878u;
            goto label_1e0878;
        }
    }
    ctx->pc = 0x1E086Cu;
label_1e086c:
    // 0x1e086c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e086cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0870:
    // 0x1e0870: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e0874:
    if (ctx->pc == 0x1E0874u) {
        ctx->pc = 0x1E0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0870u;
        // 0x1e0874: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0878u;
        goto label_1e0878;
    }
    ctx->pc = 0x1E0870u;
    {
        const bool branch_taken_0x1e0870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0870u;
        // 0x1e0874: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0870) {
            ctx->pc = 0x1E0888u;
            goto label_1e0888;
        }
    }
    ctx->pc = 0x1E0878u;
label_1e0878:
    // 0x1e0878: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e087c:
    // 0x1e087c: 0xc0767d4  jal         func_1D9F50
label_1e0880:
    if (ctx->pc == 0x1E0880u) {
        ctx->pc = 0x1E0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E087Cu;
        // 0x1e0880: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0884u;
        goto label_1e0884;
    }
    ctx->pc = 0x1E087Cu;
    SET_GPR_U32(ctx, 31, 0x1E0884u);
    ctx->pc = 0x1E0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E087Cu;
    // 0x1e0880: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E087Cu, 0x1E0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0884u;
label_1e0884:
    // 0x1e0884: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0888:
    // 0x1e0888: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e0888u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e088c:
    // 0x1e088c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0890:
    // 0x1e0890: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1e0890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1e0894:
    // 0x1e0894: 0xc0767f4  jal         func_1D9FD0
label_1e0898:
    if (ctx->pc == 0x1E0898u) {
        ctx->pc = 0x1E0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0894u;
        // 0x1e0898: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E089Cu;
        goto label_1e089c;
    }
    ctx->pc = 0x1E0894u;
    SET_GPR_U32(ctx, 31, 0x1E089Cu);
    ctx->pc = 0x1E0898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0894u;
    // 0x1e0898: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x1E0894u, 0x1E089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E089Cu;
label_1e089c:
    // 0x1e089c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e08a0:
    // 0x1e08a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e08a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e08a4:
    // 0x1e08a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e08a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e08a8:
    // 0x1e08a8: 0x3e00008  jr          $ra
label_1e08ac:
    if (ctx->pc == 0x1E08ACu) {
        ctx->pc = 0x1E08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08A8u;
        // 0x1e08ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E08B0u;
        goto label_fallthrough_0x1e08a8;
    }
    ctx->pc = 0x1E08A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08A8u;
        // 0x1e08ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E08A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e08a8:
    ctx->pc = 0x1E08B0u;
}
