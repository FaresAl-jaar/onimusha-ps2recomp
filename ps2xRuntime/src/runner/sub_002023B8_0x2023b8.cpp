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

// Function: sub_002023B8
// Address: 0x2023b8 - 0x202410
void sub_002023B8_0x2023b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002023B8_0x2023b8");
#endif

    switch (ctx->pc) {
        case 0x2023d8u: goto label_2023d8;
        case 0x2023e4u: goto label_2023e4;
        default: break;
    }

    ctx->pc = 0x2023b8u;

    // 0x2023b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2023b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2023bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2023bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2023c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2023c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2023c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2023c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2023c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2023cc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2023ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2023d0: 0xc0821d8  jal         func_208760
    ctx->pc = 0x2023D0u;
    SET_GPR_U32(ctx, 31, 0x2023D8u);
    ctx->pc = 0x2023D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023D0u;
    // 0x2023d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208760u, 0x2023D0u, 0x2023D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023D8u;
label_2023d8:
    // 0x2023d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2023d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023dc: 0xc0824d4  jal         func_209350
    ctx->pc = 0x2023DCu;
    SET_GPR_U32(ctx, 31, 0x2023E4u);
    ctx->pc = 0x2023E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023DCu;
    // 0x2023e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209350u, 0x2023DCu, 0x2023E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023E4u;
label_2023e4:
    // 0x2023e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2023e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2023e8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2023e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2023ec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2023ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2023f0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2023f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2023f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2023f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2023f8: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x2023f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x2023fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2023fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202400: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x202400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202408: 0x3e00008  jr          $ra
    ctx->pc = 0x202408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202408u;
        // 0x20240c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202410u;
}
