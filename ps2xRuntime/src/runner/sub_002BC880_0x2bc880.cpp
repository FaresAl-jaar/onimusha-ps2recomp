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

// Function: sub_002BC880
// Address: 0x2bc880 - 0x2bc910
void sub_002BC880_0x2bc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC880_0x2bc880");
#endif

    switch (ctx->pc) {
        case 0x2bc8acu: goto label_2bc8ac;
        case 0x2bc8c4u: goto label_2bc8c4;
        case 0x2bc8dcu: goto label_2bc8dc;
        default: break;
    }

    ctx->pc = 0x2bc880u;

    // 0x2bc880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bc880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bc884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bc888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bc88c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bc890: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bc890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc89c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bc89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8a0: 0x80860082  lb          $a2, 0x82($a0)
    ctx->pc = 0x2bc8a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x2bc8a4: 0xc0b22ac  jal         func_2C8AB0
    ctx->pc = 0x2BC8A4u;
    SET_GPR_U32(ctx, 31, 0x2BC8ACu);
    ctx->pc = 0x2BC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8A4u;
    // 0x2bc8a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AB0u, 0x2BC8A4u, 0x2BC8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8ACu;
label_2bc8ac:
    // 0x2bc8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BC8B0u;
    {
        const bool branch_taken_0x2bc8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8B0u;
        // 0x2bc8b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8b0) {
            ctx->pc = 0x2BC8E8u;
            goto label_2bc8e8;
        }
    }
    ctx->pc = 0x2BC8B8u;
    // 0x2bc8b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8bc: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2BC8BCu;
    SET_GPR_U32(ctx, 31, 0x2BC8C4u);
    ctx->pc = 0x2BC8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8BCu;
    // 0x2bc8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A20u, 0x2BC8BCu, 0x2BC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8C4u;
label_2bc8c4:
    // 0x2bc8c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2bc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc8c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8d0: 0xae620094  sw          $v0, 0x94($s3)
    ctx->pc = 0x2bc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
    // 0x2bc8d4: 0xc0b25e8  jal         func_2C97A0
    ctx->pc = 0x2BC8D4u;
    SET_GPR_U32(ctx, 31, 0x2BC8DCu);
    ctx->pc = 0x2BC8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8D4u;
    // 0x2bc8d8: 0xae4207c0  sw          $v0, 0x7C0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C97A0u, 0x2BC8D4u, 0x2BC8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8DCu;
label_2bc8dc:
    // 0x2bc8dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC8DCu;
    {
        const bool branch_taken_0x2bc8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8DCu;
        // 0x2bc8e0: 0xa66200e4  sh          $v0, 0xE4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 228), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8dc) {
            ctx->pc = 0x2BC8F0u;
            goto label_2bc8f0;
        }
    }
    ctx->pc = 0x2BC8E4u;
    // 0x2bc8e4: 0x0  nop
    ctx->pc = 0x2bc8e4u;
    // NOP
label_2bc8e8:
    // 0x2bc8e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bc8ec: 0x0  nop
    ctx->pc = 0x2bc8ecu;
    // NOP
label_2bc8f0:
    // 0x2bc8f0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x2bc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2bc8f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bc8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc8f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bc8f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc8fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bc8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc908: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC908u;
        // 0x2bc90c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC910u;
}
