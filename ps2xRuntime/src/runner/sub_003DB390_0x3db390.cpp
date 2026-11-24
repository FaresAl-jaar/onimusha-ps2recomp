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

// Function: sub_003DB390
// Address: 0x3db390 - 0x3db3fc
void sub_003DB390_0x3db390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB390_0x3db390");
#endif

    switch (ctx->pc) {
        case 0x3db3b4u: goto label_3db3b4;
        case 0x3db3c8u: goto label_3db3c8;
        default: break;
    }

    ctx->pc = 0x3db390u;

    // 0x3db390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3db394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3db394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3db398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3db39c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3db39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3db3a4: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3db3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3db3a8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3db3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3db3ac: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DB3ACu;
    SET_GPR_U32(ctx, 31, 0x3DB3B4u);
    ctx->pc = 0x3DB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB3ACu;
    // 0x3db3b0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DB3ACu, 0x3DB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3B4u;
label_3db3b4:
    // 0x3db3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3db3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db3b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB3B8u;
    {
        const bool branch_taken_0x3db3b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3B8u;
        // 0x3db3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db3b8) {
            ctx->pc = 0x3DB3C8u;
            goto label_3db3c8;
        }
    }
    ctx->pc = 0x3DB3C0u;
    // 0x3db3c0: 0xc0f6e60  jal         func_3DB980
    ctx->pc = 0x3DB3C0u;
    SET_GPR_U32(ctx, 31, 0x3DB3C8u);
    ctx->pc = 0x3DB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB980u, 0x3DB3C0u, 0x3DB3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3C8u;
label_3db3c8:
    // 0x3db3c8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB3C8u;
    {
        const bool branch_taken_0x3db3c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3C8u;
        // 0x3db3cc: 0x26242ba0  addiu       $a0, $s1, 0x2BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db3c8) {
            ctx->pc = 0x3DB3E8u;
            goto label_3db3e8;
        }
    }
    ctx->pc = 0x3DB3D0u;
    // 0x3db3d0: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x3db3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3db3d4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3db3d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db3d8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3db3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3db3dc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3db3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db3e0: 0xe6202ba0  swc1        $f0, 0x2BA0($s1)
    ctx->pc = 0x3db3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11168), bits); }
    // 0x3db3e4: 0x0  nop
    ctx->pc = 0x3db3e4u;
    // NOP
label_3db3e8:
    // 0x3db3e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db3ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db3ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db3f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3F4u;
        // 0x3db3f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB3FCu;
}
