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

// Function: sub_0025C790
// Address: 0x25c790 - 0x25c8d4
void sub_0025C790_0x25c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C790_0x25c790");
#endif

    switch (ctx->pc) {
        case 0x25c7d8u: goto label_25c7d8;
        case 0x25c7f0u: goto label_25c7f0;
        case 0x25c81cu: goto label_25c81c;
        case 0x25c82cu: goto label_25c82c;
        case 0x25c850u: goto label_25c850;
        case 0x25c864u: goto label_25c864;
        case 0x25c884u: goto label_25c884;
        case 0x25c8a0u: goto label_25c8a0;
        case 0x25c8b0u: goto label_25c8b0;
        default: break;
    }

    ctx->pc = 0x25c790u;

    // 0x25c790: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25c794: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25c794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c798: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25c79c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25c7a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25c7a4: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x25c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x25c7a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25c7ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25c7acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c7b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25c7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c7bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25c7bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c7c4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x25c7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7c8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x25c7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25c7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7d0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25C7D0u;
    SET_GPR_U32(ctx, 31, 0x25C7D8u);
    ctx->pc = 0x25C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7D0u;
    // 0x25c7d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25C7D0u, 0x25C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C7D8u;
label_25c7d8:
    // 0x25c7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25c7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x25c7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7e8: 0xc0a22a8  jal         func_288AA0
    ctx->pc = 0x25C7E8u;
    SET_GPR_U32(ctx, 31, 0x25C7F0u);
    ctx->pc = 0x25C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7E8u;
    // 0x25c7ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288AA0u, 0x25C7E8u, 0x25C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C7F0u;
label_25c7f0:
    // 0x25c7f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x25C7F0u;
    {
        const bool branch_taken_0x25c7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c7f0) {
            ctx->pc = 0x25C858u;
            goto label_25c858;
        }
    }
    ctx->pc = 0x25C7F8u;
    // 0x25c7f8: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x25c7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25c7fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25c800: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x25c800u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c804: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x25c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x25c808: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x25c808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c80c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x25c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25c810: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x25c810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x25c814: 0xc0766ec  jal         func_1D9BB0
    ctx->pc = 0x25C814u;
    SET_GPR_U32(ctx, 31, 0x25C81Cu);
    ctx->pc = 0x25C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C814u;
    // 0x25c818: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BB0u, 0x25C814u, 0x25C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C81Cu;
label_25c81c:
    // 0x25c81c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c820: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25c820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25c824: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x25C824u;
    SET_GPR_U32(ctx, 31, 0x25C82Cu);
    ctx->pc = 0x25C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C824u;
    // 0x25c828: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x25C824u, 0x25C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C82Cu;
label_25c82c:
    // 0x25c82c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x25c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x25c830: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25c830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c834: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x25c834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c83c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x25c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25c840: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x25c840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x25c844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c848: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x25C848u;
    SET_GPR_U32(ctx, 31, 0x25C850u);
    ctx->pc = 0x25C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C848u;
    // 0x25c84c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x25C848u, 0x25C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C850u;
label_25c850:
    // 0x25c850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25C850u;
    {
        const bool branch_taken_0x25c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c850) {
            ctx->pc = 0x25C878u;
            goto label_25c878;
        }
    }
    ctx->pc = 0x25C858u;
label_25c858:
    // 0x25c858: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c85c: 0xc096f84  jal         func_25BE10
    ctx->pc = 0x25C85Cu;
    SET_GPR_U32(ctx, 31, 0x25C864u);
    ctx->pc = 0x25C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C85Cu;
    // 0x25c860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE10u, 0x25C85Cu, 0x25C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C864u;
label_25c864:
    // 0x25c864: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x25c864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c868: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25c868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25c86c: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x25c86cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x25c870: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x25c870u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x25c874: 0x0  nop
    ctx->pc = 0x25c874u;
    // NOP
label_25c878:
    // 0x25c878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c87c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25C87Cu;
    SET_GPR_U32(ctx, 31, 0x25C884u);
    ctx->pc = 0x25C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C87Cu;
    // 0x25c880: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25C87Cu, 0x25C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C884u;
label_25c884:
    // 0x25c884: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x25c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x25c888: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25c88c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x25c88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c890: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x25c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25c894: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x25c894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x25c898: 0xc076708  jal         func_1D9C20
    ctx->pc = 0x25C898u;
    SET_GPR_U32(ctx, 31, 0x25C8A0u);
    ctx->pc = 0x25C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C898u;
    // 0x25c89c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C20u, 0x25C898u, 0x25C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8A0u;
label_25c8a0:
    // 0x25c8a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25c8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8a8: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x25C8A8u;
    SET_GPR_U32(ctx, 31, 0x25C8B0u);
    ctx->pc = 0x25C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8A8u;
    // 0x25c8ac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x25C8A8u, 0x25C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8B0u;
label_25c8b0:
    // 0x25c8b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25c8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c8b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25c8b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c8b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25c8b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c8bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c8c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c8c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c8c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c8c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25C8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8CCu;
        // 0x25c8d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C8D4u;
}
