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

// Function: sub_0025B170
// Address: 0x25b170 - 0x25b1e8
void sub_0025B170_0x25b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B170_0x25b170");
#endif

    switch (ctx->pc) {
        case 0x25b194u: goto label_25b194;
        default: break;
    }

    ctx->pc = 0x25b170u;

    // 0x25b170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b174: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25b174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b17c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x25b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x25b180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b184: 0x2484c6e0  addiu       $a0, $a0, -0x3920
    ctx->pc = 0x25b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    // 0x25b188: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25b188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b18c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25B18Cu;
    SET_GPR_U32(ctx, 31, 0x25B194u);
    ctx->pc = 0x25B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B18Cu;
    // 0x25b190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25B18Cu, 0x25B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B194u;
label_25b194:
    // 0x25b194: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25B194u;
    {
        const bool branch_taken_0x25b194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b194) {
            ctx->pc = 0x25B1D8u;
            goto label_25b1d8;
        }
    }
    ctx->pc = 0x25B19Cu;
    // 0x25b19c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B19Cu;
    {
        const bool branch_taken_0x25b19c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b19c) {
            ctx->pc = 0x25B1C0u;
            goto label_25b1c0;
        }
    }
    ctx->pc = 0x25B1A4u;
    // 0x25b1a4: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x25b1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25b1a8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x25b1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x25b1ac: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x25b1acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b1b0: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x25b1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25b1b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x25b1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x25b1b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B1B8u;
    {
        const bool branch_taken_0x25b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1B8u;
        // 0x25b1bc: 0xa0430064  sb          $v1, 0x64($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1b8) {
            ctx->pc = 0x25B1D8u;
            goto label_25b1d8;
        }
    }
    ctx->pc = 0x25B1C0u;
label_25b1c0:
    // 0x25b1c0: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x25b1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25b1c4: 0x306300f7  andi        $v1, $v1, 0xF7
    ctx->pc = 0x25b1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
    // 0x25b1c8: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x25b1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b1cc: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x25b1ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25b1d0: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x25b1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x25b1d4: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x25b1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
label_25b1d8:
    // 0x25b1d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1E0u;
        // 0x25b1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B1E8u;
}
