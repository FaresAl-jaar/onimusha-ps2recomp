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

// Function: sub_003D2110
// Address: 0x3d2110 - 0x3d217c
void sub_003D2110_0x3d2110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2110_0x3d2110");
#endif

    switch (ctx->pc) {
        case 0x3d2150u: goto label_3d2150;
        case 0x3d2160u: goto label_3d2160;
        case 0x3d2170u: goto label_3d2170;
        default: break;
    }

    ctx->pc = 0x3d2110u;

    // 0x3d2110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d2110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d2114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d2114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d2118: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x3d2118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3d211c: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x3d211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x3d2120: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x3d2120u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3d2124: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D2124u;
    {
        const bool branch_taken_0x3d2124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2124u;
        // 0x3d2128: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2124) {
            ctx->pc = 0x3D2168u;
            goto label_3d2168;
        }
    }
    ctx->pc = 0x3D212Cu;
    // 0x3d212c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d212cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d2130: 0x246331d0  addiu       $v1, $v1, 0x31D0
    ctx->pc = 0x3d2130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12752));
    // 0x3d2134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d2138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d213c: 0x400008  jr          $v0
    ctx->pc = 0x3D213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D2148u: goto label_3d2148;
            case 0x3D2158u: goto label_3d2158;
            case 0x3D2168u: goto label_3d2168;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D213Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D2144u;
    // 0x3d2144: 0x0  nop
    ctx->pc = 0x3d2144u;
    // NOP
label_3d2148:
    // 0x3d2148: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3D2148u;
    SET_GPR_U32(ctx, 31, 0x3D2150u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3D2148u, 0x3D2150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2150u;
label_3d2150:
    // 0x3d2150: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2150u;
    {
        const bool branch_taken_0x3d2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2150) {
            ctx->pc = 0x3D2170u;
            goto label_3d2170;
        }
    }
    ctx->pc = 0x3D2158u;
label_3d2158:
    // 0x3d2158: 0xc0f481c  jal         func_3D2070
    ctx->pc = 0x3D2158u;
    SET_GPR_U32(ctx, 31, 0x3D2160u);
    ctx->pc = 0x3D2070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2070u, 0x3D2158u, 0x3D2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2160u;
label_3d2160:
    // 0x3d2160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2160u;
    {
        const bool branch_taken_0x3d2160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2160) {
            ctx->pc = 0x3D2170u;
            goto label_3d2170;
        }
    }
    ctx->pc = 0x3D2168u;
label_3d2168:
    // 0x3d2168: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3D2168u;
    SET_GPR_U32(ctx, 31, 0x3D2170u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3D2168u, 0x3D2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2170u;
label_3d2170:
    // 0x3d2170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d2170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2174: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2174u;
        // 0x3d2178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D217Cu;
}
