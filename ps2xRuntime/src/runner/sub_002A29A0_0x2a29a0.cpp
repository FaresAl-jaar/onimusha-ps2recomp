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

// Function: sub_002A29A0
// Address: 0x2a29a0 - 0x2a2a3c
void sub_002A29A0_0x2a29a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A29A0_0x2a29a0");
#endif

    switch (ctx->pc) {
        case 0x2a29d8u: goto label_2a29d8;
        case 0x2a2a08u: goto label_2a2a08;
        default: break;
    }

    ctx->pc = 0x2a29a0u;

    // 0x2a29a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a29a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a29a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a29a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a29a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a29a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a29ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a29acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a29b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a29b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a29b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a29b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a29b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a29bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a29bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a29c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a29c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29c8: 0x94530000  lhu         $s3, 0x0($v0)
    ctx->pc = 0x2a29c8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a29cc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2a29ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a29d0: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A29D0u;
    SET_GPR_U32(ctx, 31, 0x2A29D8u);
    ctx->pc = 0x2A29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29D0u;
    // 0x2a29d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A29D0u, 0x2A29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29D8u;
label_2a29d8:
    // 0x2a29d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a29dc: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x2a29dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2a29e0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2a29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a29e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a29e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29e8: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x2a29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x2a29ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a29f0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2a29f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a29f4: 0x2624000f  addiu       $a0, $s1, 0xF
    ctx->pc = 0x2a29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x2a29f8: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x2a29f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a29fc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2a29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a2a00: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A2A00u;
    SET_GPR_U32(ctx, 31, 0x2A2A08u);
    ctx->pc = 0x2A2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A00u;
    // 0x2a2a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A2A00u, 0x2A2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A08u;
label_2a2a08:
    // 0x2a2a08: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2a2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a2a0c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2a2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a2a10: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x2a2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x2a2a14: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2a2a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a2a18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a2a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2a1c: 0x2623000f  addiu       $v1, $s1, 0xF
    ctx->pc = 0x2a2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x2a2a20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2a24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2a28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A34u;
        // 0x2a2a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2A3Cu;
}
