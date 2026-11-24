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

// Function: sub_003B5940
// Address: 0x3b5940 - 0x3b59b0
void sub_003B5940_0x3b5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5940_0x3b5940");
#endif

    switch (ctx->pc) {
        case 0x3b5954u: goto label_3b5954;
        case 0x3b5984u: goto label_3b5984;
        case 0x3b599cu: goto label_3b599c;
        default: break;
    }

    ctx->pc = 0x3b5940u;

    // 0x3b5940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b5944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b5948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b594c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3B594Cu;
    SET_GPR_U32(ctx, 31, 0x3B5954u);
    ctx->pc = 0x3B5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B594Cu;
    // 0x3b5950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3B594Cu, 0x3B5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5954u;
label_3b5954:
    // 0x3b5954: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3b5954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3b5958: 0x240308a5  addiu       $v1, $zero, 0x8A5
    ctx->pc = 0x3b5958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2213));
    // 0x3b595c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3b595cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3b5960: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B5960u;
    {
        const bool branch_taken_0x3b5960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5960u;
        // 0x3b5964: 0x24030480  addiu       $v1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5960) {
            ctx->pc = 0x3B5990u;
            goto label_3b5990;
        }
    }
    ctx->pc = 0x3B5968u;
    // 0x3b5968: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5968u;
    {
        const bool branch_taken_0x3b5968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b5968) {
            ctx->pc = 0x3B5978u;
            goto label_3b5978;
        }
    }
    ctx->pc = 0x3B5970u;
    // 0x3b5970: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B5970u;
    {
        const bool branch_taken_0x3b5970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5970) {
            ctx->pc = 0x3B59A0u;
            goto label_3b59a0;
        }
    }
    ctx->pc = 0x3B5978u;
label_3b5978:
    // 0x3b5978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b597c: 0xc097904  jal         func_25E410
    ctx->pc = 0x3B597Cu;
    SET_GPR_U32(ctx, 31, 0x3B5984u);
    ctx->pc = 0x3B5980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B597Cu;
    // 0x3b5980: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x3B597Cu, 0x3B5984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5984u;
label_3b5984:
    // 0x3b5984: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5984u;
    {
        const bool branch_taken_0x3b5984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5984) {
            ctx->pc = 0x3B59A0u;
            goto label_3b59a0;
        }
    }
    ctx->pc = 0x3B598Cu;
    // 0x3b598c: 0x0  nop
    ctx->pc = 0x3b598cu;
    // NOP
label_3b5990:
    // 0x3b5990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5994: 0xc097904  jal         func_25E410
    ctx->pc = 0x3B5994u;
    SET_GPR_U32(ctx, 31, 0x3B599Cu);
    ctx->pc = 0x3B5998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5994u;
    // 0x3b5998: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x3B5994u, 0x3B599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B599Cu;
label_3b599c:
    // 0x3b599c: 0x0  nop
    ctx->pc = 0x3b599cu;
    // NOP
label_3b59a0:
    // 0x3b59a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b59a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b59a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b59a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b59a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B59A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59A8u;
        // 0x3b59ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B59A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B59B0u;
}
