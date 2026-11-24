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

// Function: sub_00331980
// Address: 0x331980 - 0x331a00
void sub_00331980_0x331980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331980_0x331980");
#endif

    switch (ctx->pc) {
        case 0x3319bcu: goto label_3319bc;
        case 0x3319e4u: goto label_3319e4;
        default: break;
    }

    ctx->pc = 0x331980u;

    // 0x331980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331984: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x331988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x331988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33198c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x331990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331998: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x331998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33199c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33199cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3319a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3319a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3319a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3319a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3319a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319ac: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3319acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3319b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3319b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3319b4: 0xc0bd30c  jal         func_2F4C30
    ctx->pc = 0x3319B4u;
    SET_GPR_U32(ctx, 31, 0x3319BCu);
    ctx->pc = 0x3319B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319B4u;
    // 0x3319b8: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C30u, 0x3319B4u, 0x3319BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319BCu;
label_3319bc:
    // 0x3319bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3319bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319c0: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3319C0u;
    {
        const bool branch_taken_0x3319c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3319c0) {
            ctx->pc = 0x3319E8u;
            goto label_3319e8;
        }
    }
    ctx->pc = 0x3319C8u;
    // 0x3319c8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x3319c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3319cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3319ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319d0: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x3319d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x3319d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3319d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319d8: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x3319d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3319dc: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x3319DCu;
    SET_GPR_U32(ctx, 31, 0x3319E4u);
    ctx->pc = 0x3319E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319DCu;
    // 0x3319e0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x3319DCu, 0x3319E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319E4u;
label_3319e4:
    // 0x3319e4: 0x0  nop
    ctx->pc = 0x3319e4u;
    // NOP
label_3319e8:
    // 0x3319e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3319e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3319ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3319ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3319f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3319f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3319f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3319f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3319f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3319F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3319FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319F8u;
        // 0x3319fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3319F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331A00u;
}
