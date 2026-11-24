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

// Function: sub_001DC820
// Address: 0x1dc820 - 0x1dc8bc
void sub_001DC820_0x1dc820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC820_0x1dc820");
#endif

    switch (ctx->pc) {
        case 0x1dc854u: goto label_1dc854;
        case 0x1dc87cu: goto label_1dc87c;
        case 0x1dc894u: goto label_1dc894;
        default: break;
    }

    ctx->pc = 0x1dc820u;

    // 0x1dc820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dc820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dc824: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dc824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dc828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc830: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dc830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc838: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dc838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc83c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc840: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dc840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc844: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc848: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1dc848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc84c: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1DC84Cu;
    SET_GPR_U32(ctx, 31, 0x1DC854u);
    ctx->pc = 0x1DC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC84Cu;
    // 0x1dc850: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1DC84Cu, 0x1DC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC854u;
label_1dc854:
    // 0x1dc854: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x1dc854u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
    // 0x1dc858: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1dc858u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1dc85c: 0xae92000c  sw          $s2, 0xC($s4)
    ctx->pc = 0x1dc85cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 18));
    // 0x1dc860: 0xae910010  sw          $s1, 0x10($s4)
    ctx->pc = 0x1dc860u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 17));
    // 0x1dc864: 0xa6900014  sh          $s0, 0x14($s4)
    ctx->pc = 0x1dc864u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 16));
    // 0x1dc868: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1dc868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1dc86c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DC86Cu;
    {
        const bool branch_taken_0x1dc86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc86c) {
            ctx->pc = 0x1DC898u;
            goto label_1dc898;
        }
    }
    ctx->pc = 0x1DC874u;
    // 0x1dc874: 0xc07bc14  jal         func_1EF050
    ctx->pc = 0x1DC874u;
    SET_GPR_U32(ctx, 31, 0x1DC87Cu);
    ctx->pc = 0x1DC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC874u;
    // 0x1dc878: 0x86850014  lh          $a1, 0x14($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF050u, 0x1DC874u, 0x1DC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC87Cu;
label_1dc87c:
    // 0x1dc87c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC87Cu;
    {
        const bool branch_taken_0x1dc87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc87c) {
            ctx->pc = 0x1DC898u;
            goto label_1dc898;
        }
    }
    ctx->pc = 0x1DC884u;
    // 0x1dc884: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1dc884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1dc888: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1dc888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1dc88c: 0xc076554  jal         func_1D9550
    ctx->pc = 0x1DC88Cu;
    SET_GPR_U32(ctx, 31, 0x1DC894u);
    ctx->pc = 0x1DC890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC88Cu;
    // 0x1dc890: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9550u, 0x1DC88Cu, 0x1DC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC894u;
label_1dc894:
    // 0x1dc894: 0x0  nop
    ctx->pc = 0x1dc894u;
    // NOP
label_1dc898:
    // 0x1dc898: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dc898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc89c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc89cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc8a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc8a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc8a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc8ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8B4u;
        // 0x1dc8b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC8BCu;
}
