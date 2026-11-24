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

// Function: sub_00302580
// Address: 0x302580 - 0x3025f4
void sub_00302580_0x302580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302580_0x302580");
#endif

    switch (ctx->pc) {
        case 0x3025b0u: goto label_3025b0;
        case 0x3025c8u: goto label_3025c8;
        default: break;
    }

    ctx->pc = 0x302580u;

    // 0x302580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x302580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x302584: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x302584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302588: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x302588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30258c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x302590: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x302590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302594: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x302594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x302598: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x302598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30259c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30259cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3025a0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3025a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3025a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3025a8: 0xc0c081c  jal         func_302070
    ctx->pc = 0x3025A8u;
    SET_GPR_U32(ctx, 31, 0x3025B0u);
    ctx->pc = 0x3025ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025A8u;
    // 0x3025ac: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302070u, 0x3025A8u, 0x3025B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025B0u;
label_3025b0:
    // 0x3025b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3025B0u;
    {
        const bool branch_taken_0x3025b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3025B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025B0u;
        // 0x3025b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025b0) {
            ctx->pc = 0x3025D0u;
            goto label_3025d0;
        }
    }
    ctx->pc = 0x3025B8u;
    // 0x3025b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3025b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3025bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025c0: 0xc0c07f8  jal         func_301FE0
    ctx->pc = 0x3025C0u;
    SET_GPR_U32(ctx, 31, 0x3025C8u);
    ctx->pc = 0x3025C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025C0u;
    // 0x3025c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x301FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FE0u, 0x3025C0u, 0x3025C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025C8u;
label_3025c8:
    // 0x3025c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3025C8u;
    {
        const bool branch_taken_0x3025c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3025CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025C8u;
        // 0x3025cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025c8) {
            ctx->pc = 0x3025D8u;
            goto label_3025d8;
        }
    }
    ctx->pc = 0x3025D0u;
label_3025d0:
    // 0x3025d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3025d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3025d4: 0x0  nop
    ctx->pc = 0x3025d4u;
    // NOP
label_3025d8:
    // 0x3025d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3025d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3025dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3025dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3025e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3025e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3025e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3025e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3025e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3025e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3025ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3025ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3025F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025ECu;
        // 0x3025f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3025ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3025F4u;
}
