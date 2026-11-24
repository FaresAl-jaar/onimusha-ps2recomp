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

// Function: sub_002A4080
// Address: 0x2a4080 - 0x2a4120
void sub_002A4080_0x2a4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4080_0x2a4080");
#endif

    switch (ctx->pc) {
        case 0x2a40d8u: goto label_2a40d8;
        case 0x2a4104u: goto label_2a4104;
        default: break;
    }

    ctx->pc = 0x2a4080u;

    // 0x2a4080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a4080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a4084: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2a4084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2a4088: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a408c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a408cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4090: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a4090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a4094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a4094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a4098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a409c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a409cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a40a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a40a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a40a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a40a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a40ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a40acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a40b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a40b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a40bc: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a40bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a40c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a40c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a40c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a40c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a40ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40d0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A40D0u;
    SET_GPR_U32(ctx, 31, 0x2A40D8u);
    ctx->pc = 0x2A40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40D0u;
    // 0x2a40d4: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A40D0u, 0x2A40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40D8u;
label_2a40d8:
    // 0x2a40d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a40d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a40dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a40dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40e0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a40e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40e4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a40e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a40e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40ec: 0x24050aac  addiu       $a1, $zero, 0xAAC
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2732));
    // 0x2a40f0: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x2a40f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2a40f4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a40f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a40f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40fc: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2A40FCu;
    SET_GPR_U32(ctx, 31, 0x2A4104u);
    ctx->pc = 0x2A4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40FCu;
    // 0x2a4100: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2A40FCu, 0x2A4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4104u;
label_2a4104:
    // 0x2a4104: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a4104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4108: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a4108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a410c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a410cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4110: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4114: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4118: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4118u;
        // 0x2a411c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4120u;
}
