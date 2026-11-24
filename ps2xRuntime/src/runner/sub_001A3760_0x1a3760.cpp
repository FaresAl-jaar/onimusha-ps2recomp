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

// Function: sub_001A3760
// Address: 0x1a3760 - 0x1a37e0
void sub_001A3760_0x1a3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3760_0x1a3760");
#endif

    switch (ctx->pc) {
        case 0x1a3790u: goto label_1a3790;
        case 0x1a37c4u: goto label_1a37c4;
        default: break;
    }

    ctx->pc = 0x1a3760u;

    // 0x1a3760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a3764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a3768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a376c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3770: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a3778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a377c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1a377cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1a3780: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a3780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3784: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1a3784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1a3788: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1A3788u;
    SET_GPR_U32(ctx, 31, 0x1A3790u);
    ctx->pc = 0x1A378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3788u;
    // 0x1a378c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1A3788u, 0x1A3790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3790u;
label_1a3790:
    // 0x1a3790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a3790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3794: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3794u;
    {
        const bool branch_taken_0x1a3794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3794) {
            ctx->pc = 0x1A37C8u;
            goto label_1a37c8;
        }
    }
    ctx->pc = 0x1A379Cu;
    // 0x1a379c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a37a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1a37a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1a37a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a37a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a37a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37ac: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1a37b0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1a37b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1a37b4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1a37b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1a37b8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1a37bc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1A37BCu;
    SET_GPR_U32(ctx, 31, 0x1A37C4u);
    ctx->pc = 0x1A37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A37BCu;
    // 0x1a37c0: 0xfcb00008  sd          $s0, 0x8($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1A37BCu, 0x1A37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37C4u;
label_1a37c4:
    // 0x1a37c4: 0x0  nop
    ctx->pc = 0x1a37c4u;
    // NOP
label_1a37c8:
    // 0x1a37c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a37c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a37cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a37ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a37d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a37d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a37d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a37d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a37d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A37D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37D8u;
        // 0x1a37dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A37D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A37E0u;
}
