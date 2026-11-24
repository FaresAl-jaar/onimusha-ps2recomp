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

// Function: sub_0010E8D8
// Address: 0x10e8d8 - 0x10e954
void sub_0010E8D8_0x10e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E8D8_0x10e8d8");
#endif

    switch (ctx->pc) {
        case 0x10e910u: goto label_10e910;
        case 0x10e924u: goto label_10e924;
        default: break;
    }

    ctx->pc = 0x10e8d8u;

    // 0x10e8d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e8dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e8e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e8e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e8ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10e8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e8f4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10e8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10e8f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10e8fc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10e8fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10e900: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E900u;
    {
        const bool branch_taken_0x10e900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e900) {
            ctx->pc = 0x10E910u;
            goto label_10e910;
        }
    }
    ctx->pc = 0x10E908u;
    // 0x10e908: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10E908u;
    SET_GPR_U32(ctx, 31, 0x10E910u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10E908u, 0x10E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E910u;
label_10e910:
    // 0x10e910: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10e910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10e914: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10e914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10e918: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10e918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10e91c: 0xc043a0c  jal         func_10E830
    ctx->pc = 0x10E91Cu;
    SET_GPR_U32(ctx, 31, 0x10E924u);
    ctx->pc = 0x10E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E91Cu;
    // 0x10e920: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E830u, 0x10E91Cu, 0x10E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E924u;
label_10e924:
    // 0x10e924: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E924u;
    {
        const bool branch_taken_0x10e924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E924u;
        // 0x10e928: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e924) {
            ctx->pc = 0x10E940u;
            goto label_10e940;
        }
    }
    ctx->pc = 0x10E92Cu;
    // 0x10e92c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e930: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e938: 0x804603c  j           func_1180F0
    ctx->pc = 0x10E938u;
    ctx->pc = 0x10E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E938u;
    // 0x10e93c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10E940u;
label_10e940:
    // 0x10e940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e944: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e94c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E94Cu;
        // 0x10e950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E954u;
}
