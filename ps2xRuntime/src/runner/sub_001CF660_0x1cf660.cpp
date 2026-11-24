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

// Function: sub_001CF660
// Address: 0x1cf660 - 0x1cf708
void sub_001CF660_0x1cf660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF660_0x1cf660");
#endif

    switch (ctx->pc) {
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6e0u: goto label_1cf6e0;
        default: break;
    }

    ctx->pc = 0x1cf660u;

    // 0x1cf660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf674: 0x90843022  lbu         $a0, 0x3022($a0)
    ctx->pc = 0x1cf674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
    // 0x1cf678: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF678u;
    {
        const bool branch_taken_0x1cf678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cf678) {
            ctx->pc = 0x1CF6A8u;
            goto label_1cf6a8;
        }
    }
    ctx->pc = 0x1CF680u;
    // 0x1cf680: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF680u;
    {
        const bool branch_taken_0x1cf680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf680) {
            ctx->pc = 0x1CF690u;
            goto label_1cf690;
        }
    }
    ctx->pc = 0x1CF688u;
    // 0x1cf688: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CF688u;
    {
        const bool branch_taken_0x1cf688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf688) {
            ctx->pc = 0x1CF6F8u;
            goto label_1cf6f8;
        }
    }
    ctx->pc = 0x1CF690u;
label_1cf690:
    // 0x1cf690: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cf690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cf694: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1cf694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1cf698: 0xa2023023  sb          $v0, 0x3023($s0)
    ctx->pc = 0x1cf698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf69c: 0x92023022  lbu         $v0, 0x3022($s0)
    ctx->pc = 0x1cf69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cf6a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf6a4: 0xa2023022  sb          $v0, 0x3022($s0)
    ctx->pc = 0x1cf6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 2));
label_1cf6a8:
    // 0x1cf6a8: 0xc074050  jal         func_1D0140
    ctx->pc = 0x1CF6A8u;
    SET_GPR_U32(ctx, 31, 0x1CF6B0u);
    ctx->pc = 0x1CF6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6A8u;
    // 0x1cf6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0140u, 0x1CF6A8u, 0x1CF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6B0u;
label_1cf6b0:
    // 0x1cf6b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CF6B0u;
    {
        const bool branch_taken_0x1cf6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf6b0) {
            ctx->pc = 0x1CF6F8u;
            goto label_1cf6f8;
        }
    }
    ctx->pc = 0x1CF6B8u;
    // 0x1cf6b8: 0x8e043030  lw          $a0, 0x3030($s0)
    ctx->pc = 0x1cf6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12336)));
    // 0x1cf6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6c0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf6c4: 0xc073b80  jal         func_1CEE00
    ctx->pc = 0x1CF6C4u;
    SET_GPR_U32(ctx, 31, 0x1CF6CCu);
    ctx->pc = 0x1CF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6C4u;
    // 0x1cf6c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEE00u, 0x1CF6C4u, 0x1CF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6CCu;
label_1cf6cc:
    // 0x1cf6cc: 0x8e043034  lw          $a0, 0x3034($s0)
    ctx->pc = 0x1cf6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12340)));
    // 0x1cf6d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf6d4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf6d8: 0xc073b80  jal         func_1CEE00
    ctx->pc = 0x1CF6D8u;
    SET_GPR_U32(ctx, 31, 0x1CF6E0u);
    ctx->pc = 0x1CF6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6D8u;
    // 0x1cf6dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEE00u, 0x1CF6D8u, 0x1CF6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6E0u;
label_1cf6e0:
    // 0x1cf6e0: 0xae003028  sw          $zero, 0x3028($s0)
    ctx->pc = 0x1cf6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 0));
    // 0x1cf6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf6e8: 0x92043022  lbu         $a0, 0x3022($s0)
    ctx->pc = 0x1cf6e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cf6ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cf6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cf6f0: 0xa2043022  sb          $a0, 0x3022($s0)
    ctx->pc = 0x1cf6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf6f4: 0xa2033021  sb          $v1, 0x3021($s0)
    ctx->pc = 0x1cf6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12321), (uint8_t)GPR_U32(ctx, 3));
label_1cf6f8:
    // 0x1cf6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf700: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF700u;
        // 0x1cf704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF708u;
}
