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

// Function: sub_00255150
// Address: 0x255150 - 0x2551f0
void sub_00255150_0x255150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255150_0x255150");
#endif

    switch (ctx->pc) {
        case 0x255170u: goto label_255170;
        case 0x255198u: goto label_255198;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551d4u: goto label_2551d4;
        default: break;
    }

    ctx->pc = 0x255150u;

    // 0x255150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x255154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x255154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x255158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x255158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25515c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255164: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x255164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x255168: 0xc095158  jal         func_254560
    ctx->pc = 0x255168u;
    SET_GPR_U32(ctx, 31, 0x255170u);
    ctx->pc = 0x25516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255168u;
    // 0x25516c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254560u, 0x255168u, 0x255170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255170u;
label_255170:
    // 0x255170: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x255170u;
    {
        const bool branch_taken_0x255170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255170) {
            ctx->pc = 0x2551D8u;
            goto label_2551d8;
        }
    }
    ctx->pc = 0x255178u;
    // 0x255178: 0x86420038  lh          $v0, 0x38($s2)
    ctx->pc = 0x255178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x25517c: 0x26513140  addiu       $s1, $s2, 0x3140
    ctx->pc = 0x25517cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12608));
    // 0x255180: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x255180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x255184: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x255184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x255188: 0x24503140  addiu       $s0, $v0, 0x3140
    ctx->pc = 0x255188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12608));
    // 0x25518c: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x25518cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x255190: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x255190u;
    {
        const bool branch_taken_0x255190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x255190) {
            ctx->pc = 0x2551C8u;
            goto label_2551c8;
        }
    }
    ctx->pc = 0x255198u;
label_255198:
    // 0x255198: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x255198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x25519c: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x25519cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2551a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2551a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2551a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2551a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2551a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2551a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2551ac: 0xc095330  jal         func_254CC0
    ctx->pc = 0x2551ACu;
    SET_GPR_U32(ctx, 31, 0x2551B4u);
    ctx->pc = 0x2551B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551ACu;
    // 0x2551b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CC0u, 0x2551ACu, 0x2551B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551B4u;
label_2551b4:
    // 0x2551b4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2551b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2551b8: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2551b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2551bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2551BCu;
    {
        const bool branch_taken_0x2551bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2551bc) {
            ctx->pc = 0x255198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255198;
        }
    }
    ctx->pc = 0x2551C4u;
    // 0x2551c4: 0x0  nop
    ctx->pc = 0x2551c4u;
    // NOP
label_2551c8:
    // 0x2551c8: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2551c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2551cc: 0xc095184  jal         func_254610
    ctx->pc = 0x2551CCu;
    SET_GPR_U32(ctx, 31, 0x2551D4u);
    ctx->pc = 0x2551D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551CCu;
    // 0x2551d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254610u, 0x2551CCu, 0x2551D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551D4u;
label_2551d4:
    // 0x2551d4: 0x0  nop
    ctx->pc = 0x2551d4u;
    // NOP
label_2551d8:
    // 0x2551d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2551d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2551dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2551dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2551e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2551e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2551e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2551e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2551e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2551E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2551ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551E8u;
        // 0x2551ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2551E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2551F0u;
}
