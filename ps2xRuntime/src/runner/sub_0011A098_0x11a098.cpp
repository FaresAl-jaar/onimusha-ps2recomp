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

// Function: sub_0011A098
// Address: 0x11a098 - 0x11a114
void sub_0011A098_0x11a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A098_0x11a098");
#endif

    switch (ctx->pc) {
        case 0x11a0bcu: goto label_11a0bc;
        case 0x11a0e4u: goto label_11a0e4;
        case 0x11a0f4u: goto label_11a0f4;
        default: break;
    }

    ctx->pc = 0x11a098u;

    // 0x11a098: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a09c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a0a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a0ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a0b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a0b4: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11A0B4u;
    SET_GPR_U32(ctx, 31, 0x11A0BCu);
    ctx->pc = 0x11A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0B4u;
    // 0x11a0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x11A0B4u, 0x11A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0BCu;
label_11a0bc:
    // 0x11a0bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11a0c0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x11a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x11a0c4: 0x8c734168  lw          $s3, 0x4168($v1)
    ctx->pc = 0x11a0c4u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x404168u));
    // 0x11a0c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0cc: 0xacb1416c  sw          $s1, 0x416C($a1)
    ctx->pc = 0x11a0ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x40416Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40416Cu, _value); } while (0);
    // 0x11a0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0d4: 0xac704168  sw          $s0, 0x4168($v1)
    ctx->pc = 0x11a0d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x404168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x404168u, _value); } while (0);
    // 0x11a0d8: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x11a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11a0dc: 0xc049590  jal         func_125640
    ctx->pc = 0x11A0DCu;
    SET_GPR_U32(ctx, 31, 0x11A0E4u);
    ctx->pc = 0x11A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0DCu;
    // 0x11a0e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x11A0DCu, 0x11A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0E4u;
label_11a0e4:
    // 0x11a0e4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A0E4u;
    {
        const bool branch_taken_0x11a0e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E4u;
        // 0x11a0e8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e4) {
            ctx->pc = 0x11A0F8u;
            goto label_11a0f8;
        }
    }
    ctx->pc = 0x11A0ECu;
    // 0x11a0ec: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x11A0ECu;
    SET_GPR_U32(ctx, 31, 0x11A0F4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x11A0ECu, 0x11A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0F4u;
label_11a0f4:
    // 0x11a0f4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x11a0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a0f8:
    // 0x11a0f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a0fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a0fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a100: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a104: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A10Cu;
        // 0x11a110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A114u;
}
