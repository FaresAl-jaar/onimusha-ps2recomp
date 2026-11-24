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

// Function: sub_0029D620
// Address: 0x29d620 - 0x29d794
void sub_0029D620_0x29d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D620_0x29d620");
#endif

    switch (ctx->pc) {
        case 0x29d658u: goto label_29d658;
        case 0x29d678u: goto label_29d678;
        case 0x29d688u: goto label_29d688;
        case 0x29d6b0u: goto label_29d6b0;
        case 0x29d6c0u: goto label_29d6c0;
        case 0x29d6e8u: goto label_29d6e8;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d720u: goto label_29d720;
        case 0x29d730u: goto label_29d730;
        case 0x29d748u: goto label_29d748;
        case 0x29d780u: goto label_29d780;
        default: break;
    }

    ctx->pc = 0x29d620u;

    // 0x29d620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29d628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d630: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d634: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x29d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x29d638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d63c: 0x90830086  lbu         $v1, 0x86($a0)
    ctx->pc = 0x29d63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x29d640: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x29d640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x29d644: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x29d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x29d648: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x29d648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x29d64c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x29d650: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x29D650u;
    SET_GPR_U32(ctx, 31, 0x29D658u);
    ctx->pc = 0x29D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D650u;
    // 0x29d654: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x29D650u, 0x29D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D658u;
label_29d658:
    // 0x29d658: 0x8e080088  lw          $t0, 0x88($s0)
    ctx->pc = 0x29d658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x29d65c: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D65Cu;
    {
        const bool branch_taken_0x29d65c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d65c) {
            ctx->pc = 0x29D690u;
            goto label_29d690;
        }
    }
    ctx->pc = 0x29D664u;
    // 0x29d664: 0x86060084  lh          $a2, 0x84($s0)
    ctx->pc = 0x29d664u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x29d668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d66c: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x29d66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x29d670: 0xc0a1258  jal         func_284960
    ctx->pc = 0x29D670u;
    SET_GPR_U32(ctx, 31, 0x29D678u);
    ctx->pc = 0x29D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D670u;
    // 0x29d674: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284960u, 0x29D670u, 0x29D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D678u;
label_29d678:
    // 0x29d678: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x29d678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x29d67c: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x29d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x29d680: 0xc0a13c0  jal         func_284F00
    ctx->pc = 0x29D680u;
    SET_GPR_U32(ctx, 31, 0x29D688u);
    ctx->pc = 0x29D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D680u;
    // 0x29d684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F00u, 0x29D680u, 0x29D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D688u;
label_29d688:
    // 0x29d688: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29d68c: 0x0  nop
    ctx->pc = 0x29d68cu;
    // NOP
label_29d690:
    // 0x29d690: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x29d690u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x29d694: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D694u;
    {
        const bool branch_taken_0x29d694 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d694) {
            ctx->pc = 0x29D6C8u;
            goto label_29d6c8;
        }
    }
    ctx->pc = 0x29D69Cu;
    // 0x29d69c: 0x86060084  lh          $a2, 0x84($s0)
    ctx->pc = 0x29d69cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x29d6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6a4: 0x8e07009c  lw          $a3, 0x9C($s0)
    ctx->pc = 0x29d6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x29d6a8: 0xc0a1258  jal         func_284960
    ctx->pc = 0x29D6A8u;
    SET_GPR_U32(ctx, 31, 0x29D6B0u);
    ctx->pc = 0x29D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6A8u;
    // 0x29d6ac: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284960u, 0x29D6A8u, 0x29D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6B0u;
label_29d6b0:
    // 0x29d6b0: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x29d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x29d6b4: 0x8e060098  lw          $a2, 0x98($s0)
    ctx->pc = 0x29d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x29d6b8: 0xc0a13c0  jal         func_284F00
    ctx->pc = 0x29D6B8u;
    SET_GPR_U32(ctx, 31, 0x29D6C0u);
    ctx->pc = 0x29D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6B8u;
    // 0x29d6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F00u, 0x29D6B8u, 0x29D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6C0u;
label_29d6c0:
    // 0x29d6c0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29d6c4: 0x0  nop
    ctx->pc = 0x29d6c4u;
    // NOP
label_29d6c8:
    // 0x29d6c8: 0x8e080090  lw          $t0, 0x90($s0)
    ctx->pc = 0x29d6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x29d6cc: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D6CCu;
    {
        const bool branch_taken_0x29d6cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d6cc) {
            ctx->pc = 0x29D700u;
            goto label_29d700;
        }
    }
    ctx->pc = 0x29D6D4u;
    // 0x29d6d4: 0x86060084  lh          $a2, 0x84($s0)
    ctx->pc = 0x29d6d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x29d6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6dc: 0x8e070094  lw          $a3, 0x94($s0)
    ctx->pc = 0x29d6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x29d6e0: 0xc0a19d8  jal         func_286760
    ctx->pc = 0x29D6E0u;
    SET_GPR_U32(ctx, 31, 0x29D6E8u);
    ctx->pc = 0x29D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6E0u;
    // 0x29d6e4: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286760u, 0x29D6E0u, 0x29D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6E8u;
label_29d6e8:
    // 0x29d6e8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x29d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x29d6ec: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x29d6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x29d6f0: 0xc0a1b6c  jal         func_286DB0
    ctx->pc = 0x29D6F0u;
    SET_GPR_U32(ctx, 31, 0x29D6F8u);
    ctx->pc = 0x29D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6F0u;
    // 0x29d6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DB0u, 0x29D6F0u, 0x29D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6F8u;
label_29d6f8:
    // 0x29d6f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29d6fc: 0x0  nop
    ctx->pc = 0x29d6fcu;
    // NOP
label_29d700:
    // 0x29d700: 0x8e0800a0  lw          $t0, 0xA0($s0)
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x29d704: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D704u;
    {
        const bool branch_taken_0x29d704 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d704) {
            ctx->pc = 0x29D738u;
            goto label_29d738;
        }
    }
    ctx->pc = 0x29D70Cu;
    // 0x29d70c: 0x86060084  lh          $a2, 0x84($s0)
    ctx->pc = 0x29d70cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x29d710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d714: 0x8e0700a4  lw          $a3, 0xA4($s0)
    ctx->pc = 0x29d714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x29d718: 0xc0a19d8  jal         func_286760
    ctx->pc = 0x29D718u;
    SET_GPR_U32(ctx, 31, 0x29D720u);
    ctx->pc = 0x29D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D718u;
    // 0x29d71c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286760u, 0x29D718u, 0x29D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D720u;
label_29d720:
    // 0x29d720: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x29d720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x29d724: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x29d724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x29d728: 0xc0a1b6c  jal         func_286DB0
    ctx->pc = 0x29D728u;
    SET_GPR_U32(ctx, 31, 0x29D730u);
    ctx->pc = 0x29D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D728u;
    // 0x29d72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DB0u, 0x29D728u, 0x29D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D730u;
label_29d730:
    // 0x29d730: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29d734: 0x0  nop
    ctx->pc = 0x29d734u;
    // NOP
label_29d738:
    // 0x29d738: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D738u;
    {
        const bool branch_taken_0x29d738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D738u;
        // 0x29d73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d738) {
            ctx->pc = 0x29D748u;
            goto label_29d748;
        }
    }
    ctx->pc = 0x29D740u;
    // 0x29d740: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x29D740u;
    SET_GPR_U32(ctx, 31, 0x29D748u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x29D740u, 0x29D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D748u;
label_29d748:
    // 0x29d748: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x29d748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x29d74c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29d750: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x29d750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x29d754: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x29d758: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x29d758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x29d75c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D75Cu;
    {
        const bool branch_taken_0x29d75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D75Cu;
        // 0x29d760: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d75c) {
            ctx->pc = 0x29D768u;
            goto label_29d768;
        }
    }
    ctx->pc = 0x29D764u;
    // 0x29d764: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x29d764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
label_29d768:
    // 0x29d768: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x29d768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x29d76c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29d76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29d770: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D770u;
    {
        const bool branch_taken_0x29d770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D770u;
        // 0x29d774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d770) {
            ctx->pc = 0x29D780u;
            goto label_29d780;
        }
    }
    ctx->pc = 0x29D778u;
    // 0x29d778: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x29D778u;
    SET_GPR_U32(ctx, 31, 0x29D780u);
    ctx->pc = 0x29D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D778u;
    // 0x29d77c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x29D778u, 0x29D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D780u;
label_29d780:
    // 0x29d780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d78c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D78Cu;
        // 0x29d790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D794u;
}
