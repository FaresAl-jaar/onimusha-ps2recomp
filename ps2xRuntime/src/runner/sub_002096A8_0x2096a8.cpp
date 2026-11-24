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

// Function: sub_002096A8
// Address: 0x2096a8 - 0x209704
void sub_002096A8_0x2096a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002096A8_0x2096a8");
#endif

    switch (ctx->pc) {
        case 0x2096e4u: goto label_2096e4;
        default: break;
    }

    ctx->pc = 0x2096a8u;

    // 0x2096a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2096a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2096ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2096b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2096b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2096b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2096b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2096b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2096bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2096bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2096c0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2096c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2096c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2096c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2096c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2096c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2096cc: 0x24900188  addiu       $s0, $a0, 0x188
    ctx->pc = 0x2096ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x2096d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2096D0u;
    {
        const bool branch_taken_0x2096d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2096D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096D0u;
        // 0x2096d4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096d0) {
            ctx->pc = 0x2096E4u;
            goto label_2096e4;
        }
    }
    ctx->pc = 0x2096D8u;
    // 0x2096d8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2096d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2096dc: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2096DCu;
    SET_GPR_U32(ctx, 31, 0x2096E4u);
    ctx->pc = 0x2096E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096DCu;
    // 0x2096e0: 0x24847ff8  addiu       $a0, $a0, 0x7FF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2096DCu, 0x2096E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096E4u;
label_2096e4:
    // 0x2096e4: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2096e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2096e8: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2096e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2096ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2096ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2096f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2096f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2096f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2096f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2096f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2096f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2096fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2096FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096FCu;
        // 0x209700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2096FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209704u;
}
