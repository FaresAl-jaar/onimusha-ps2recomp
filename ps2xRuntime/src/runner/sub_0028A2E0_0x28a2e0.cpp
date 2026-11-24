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

// Function: sub_0028A2E0
// Address: 0x28a2e0 - 0x28a388
void sub_0028A2E0_0x28a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A2E0_0x28a2e0");
#endif

    switch (ctx->pc) {
        case 0x28a340u: goto label_28a340;
        case 0x28a374u: goto label_28a374;
        default: break;
    }

    ctx->pc = 0x28a2e0u;

    // 0x28a2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28a2e4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a2e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28a2ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a2f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28a2f4: 0x24426b01  addiu       $v0, $v0, 0x6B01
    ctx->pc = 0x28a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27393));
    // 0x28a2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a2fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28a2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a300: 0x8ca8004c  lw          $t0, 0x4C($a1)
    ctx->pc = 0x28a300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x28a304: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28a304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a30c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28a30cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a310: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28a310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a314: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28a314u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28a318: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x28a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x28a31c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x28a31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28a320: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x28a320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x28a324: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x28a324u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x28a328: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a32c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a330: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x28a330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a334: 0x80490000  lb          $t1, 0x0($v0)
    ctx->pc = 0x28a334u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a338: 0xc0603b4  jal         func_180ED0
    ctx->pc = 0x28A338u;
    SET_GPR_U32(ctx, 31, 0x28A340u);
    ctx->pc = 0x28A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A338u;
    // 0x28a33c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x28A338u, 0x28A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A340u;
label_28a340:
    // 0x28a340: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x28a340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28a344: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a348: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a34c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x28a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a350: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x28a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x28a354: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x28a354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x28a358: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a35c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28a35cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28a360: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a368: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x28a368u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a36c: 0xc0a84b4  jal         func_2A12D0
    ctx->pc = 0x28A36Cu;
    SET_GPR_U32(ctx, 31, 0x28A374u);
    ctx->pc = 0x28A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A36Cu;
    // 0x28a370: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12D0u, 0x28A36Cu, 0x28A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A374u;
label_28a374:
    // 0x28a374: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28a374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a378: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a37c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a380: 0x3e00008  jr          $ra
    ctx->pc = 0x28A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A380u;
        // 0x28a384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A388u;
}
