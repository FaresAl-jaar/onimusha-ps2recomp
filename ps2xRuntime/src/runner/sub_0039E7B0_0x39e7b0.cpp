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

// Function: sub_0039E7B0
// Address: 0x39e7b0 - 0x39e89c
void sub_0039E7B0_0x39e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E7B0_0x39e7b0");
#endif

    switch (ctx->pc) {
        case 0x39e800u: goto label_39e800;
        case 0x39e828u: goto label_39e828;
        case 0x39e850u: goto label_39e850;
        default: break;
    }

    ctx->pc = 0x39e7b0u;

    // 0x39e7b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39e7b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x39e7b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39e7bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39e7c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39e7c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39e7c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39e7c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39e7d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39e7d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39e7d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x39e7d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x39e7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7e4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39e7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x39e7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39e7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e7f0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x39e7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x39e7f4: 0x2508e740  addiu       $t0, $t0, -0x18C0
    ctx->pc = 0x39e7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960960));
    // 0x39e7f8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x39E7F8u;
    SET_GPR_U32(ctx, 31, 0x39E800u);
    ctx->pc = 0x39E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E7F8u;
    // 0x39e7fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x39E7F8u, 0x39E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E800u;
label_39e800:
    // 0x39e800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39e800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e804: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x39E804u;
    {
        const bool branch_taken_0x39e804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E804u;
        // 0x39e808: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e804) {
            ctx->pc = 0x39E870u;
            goto label_39e870;
        }
    }
    ctx->pc = 0x39E80Cu;
    // 0x39e80c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x39e80cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e810: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x39e810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e814: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x39e814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e81c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x39e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x39e820: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x39E820u;
    SET_GPR_U32(ctx, 31, 0x39E828u);
    ctx->pc = 0x39E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E820u;
    // 0x39e824: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x39E820u, 0x39E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E828u;
label_39e828:
    // 0x39e828: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x39e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x39e82c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39e830: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x39e830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x39e834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e838: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x39e838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x39e83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e840: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x39e840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x39e844: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x39e844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e848: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x39E848u;
    SET_GPR_U32(ctx, 31, 0x39E850u);
    ctx->pc = 0x39E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E848u;
    // 0x39e84c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x39E848u, 0x39E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E850u;
label_39e850:
    // 0x39e850: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x39e850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x39e854: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39e854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39e858: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x39e858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x39e85c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x39e85cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x39e860: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x39e860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39E864u;
    {
        const bool branch_taken_0x39e864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E864u;
        // 0x39e868: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e864) {
            ctx->pc = 0x39E878u;
            goto label_39e878;
        }
    }
    ctx->pc = 0x39E86Cu;
    // 0x39e86c: 0x0  nop
    ctx->pc = 0x39e86cu;
    // NOP
label_39e870:
    // 0x39e870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39e870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e874: 0x0  nop
    ctx->pc = 0x39e874u;
    // NOP
label_39e878:
    // 0x39e878: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39e878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39e87c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39e87cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39e880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39e880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39e884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39e884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39e888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39e88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39e890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e894: 0x3e00008  jr          $ra
    ctx->pc = 0x39E894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E894u;
        // 0x39e898: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E89Cu;
}
