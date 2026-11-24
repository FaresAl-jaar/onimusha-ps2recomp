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

// Function: sub_0018E430
// Address: 0x18e430 - 0x18e4c8
void sub_0018E430_0x18e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E430_0x18e430");
#endif

    switch (ctx->pc) {
        case 0x18e454u: goto label_18e454;
        case 0x18e480u: goto label_18e480;
        case 0x18e498u: goto label_18e498;
        default: break;
    }

    ctx->pc = 0x18e430u;

    // 0x18e430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18e440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18e448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e44c: 0xc0638f4  jal         func_18E3D0
    ctx->pc = 0x18E44Cu;
    SET_GPR_U32(ctx, 31, 0x18E454u);
    ctx->pc = 0x18E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E44Cu;
    // 0x18e450: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E3D0u, 0x18E44Cu, 0x18E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E454u;
label_18e454:
    // 0x18e454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e458: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x18E458u;
    {
        const bool branch_taken_0x18e458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E458u;
        // 0x18e45c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e458) {
            ctx->pc = 0x18E4A0u;
            goto label_18e4a0;
        }
    }
    ctx->pc = 0x18E460u;
    // 0x18e460: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E460u;
    {
        const bool branch_taken_0x18e460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18e460) {
            ctx->pc = 0x18E478u;
            goto label_18e478;
        }
    }
    ctx->pc = 0x18E468u;
    // 0x18e468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E468u;
    {
        const bool branch_taken_0x18e468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e468) {
            ctx->pc = 0x18E478u;
            goto label_18e478;
        }
    }
    ctx->pc = 0x18E470u;
    // 0x18e470: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18E470u;
    {
        const bool branch_taken_0x18e470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e470) {
            ctx->pc = 0x18E4A8u;
            goto label_18e4a8;
        }
    }
    ctx->pc = 0x18E478u;
label_18e478:
    // 0x18e478: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x18E478u;
    SET_GPR_U32(ctx, 31, 0x18E480u);
    ctx->pc = 0x18E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E478u;
    // 0x18e47c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0C0u, 0x18E478u, 0x18E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E480u;
label_18e480:
    // 0x18e480: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e488: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18e488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18e48c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18e48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e490: 0xc063848  jal         func_18E120
    ctx->pc = 0x18E490u;
    SET_GPR_U32(ctx, 31, 0x18E498u);
    ctx->pc = 0x18E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E490u;
    // 0x18e494: 0x2446fff0  addiu       $a2, $v0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E120u, 0x18E490u, 0x18E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E498u;
label_18e498:
    // 0x18e498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E498u;
    {
        const bool branch_taken_0x18e498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E498u;
        // 0x18e49c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e498) {
            ctx->pc = 0x18E4A8u;
            goto label_18e4a8;
        }
    }
    ctx->pc = 0x18E4A0u;
label_18e4a0:
    // 0x18e4a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E4A0u;
    {
        const bool branch_taken_0x18e4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4A0u;
        // 0x18e4a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4a0) {
            ctx->pc = 0x18E4B0u;
            goto label_18e4b0;
        }
    }
    ctx->pc = 0x18E4A8u;
label_18e4a8:
    // 0x18e4a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4ac: 0x0  nop
    ctx->pc = 0x18e4acu;
    // NOP
label_18e4b0:
    // 0x18e4b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18e4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e4b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e4b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e4b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C0u;
        // 0x18e4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E4C8u;
}
