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

// Function: sub_002117B8
// Address: 0x2117b8 - 0x21180c
void sub_002117B8_0x2117b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002117B8_0x2117b8");
#endif

    switch (ctx->pc) {
        case 0x2117ccu: goto label_2117cc;
        case 0x2117e4u: goto label_2117e4;
        case 0x2117f8u: goto label_2117f8;
        default: break;
    }

    ctx->pc = 0x2117b8u;

    // 0x2117b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2117b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2117bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2117bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2117c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2117c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2117c4: 0xc088df4  jal         func_2237D0
    ctx->pc = 0x2117C4u;
    SET_GPR_U32(ctx, 31, 0x2117CCu);
    ctx->pc = 0x2237D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2237D0u, 0x2117C4u, 0x2117CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117CCu;
label_2117cc:
    // 0x2117cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2117ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2117d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117d4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2117D4u;
    {
        const bool branch_taken_0x2117d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117D4u;
        // 0x2117d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117d4) {
            ctx->pc = 0x2117FCu;
            goto label_2117fc;
        }
    }
    ctx->pc = 0x2117DCu;
    // 0x2117dc: 0xc088e7a  jal         func_2239E8
    ctx->pc = 0x2117DCu;
    SET_GPR_U32(ctx, 31, 0x2117E4u);
    ctx->pc = 0x2239E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E8u, 0x2117DCu, 0x2117E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117E4u;
label_2117e4:
    // 0x2117e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2117e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2117e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2117ec: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2117ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2117f0: 0xc088e26  jal         func_223898
    ctx->pc = 0x2117F0u;
    SET_GPR_U32(ctx, 31, 0x2117F8u);
    ctx->pc = 0x2117F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2117F0u;
    // 0x2117f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223898u, 0x2117F0u, 0x2117F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2117F8u;
label_2117f8:
    // 0x2117f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2117f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2117fc:
    // 0x2117fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2117fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211800: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x211800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211804: 0x3e00008  jr          $ra
    ctx->pc = 0x211804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211804u;
        // 0x211808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21180Cu;
}
