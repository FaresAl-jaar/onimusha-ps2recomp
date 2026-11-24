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

// Function: sub_00371380
// Address: 0x371380 - 0x37142c
void sub_00371380_0x371380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371380_0x371380");
#endif

    switch (ctx->pc) {
        case 0x3713d0u: goto label_3713d0;
        case 0x3713dcu: goto label_3713dc;
        case 0x371410u: goto label_371410;
        default: break;
    }

    ctx->pc = 0x371380u;

    // 0x371380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x371380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x371384: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x371384u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371388: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x371388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x37138c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37138cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371390: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x371390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x371394: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x371394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x371398: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x371398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37139c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3713a0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3713a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3713a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3713a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3713a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3713a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713ac: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3713acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713b0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3713b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713b4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3713b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3713b8: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3713b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3713bc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3713bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3713c0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3713c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3713c4: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3713c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3713c8: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3713C8u;
    SET_GPR_U32(ctx, 31, 0x3713D0u);
    ctx->pc = 0x3713CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3713C8u;
    // 0x3713cc: 0x25291948  addiu       $t1, $t1, 0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3713C8u, 0x3713D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713D0u;
label_3713d0:
    // 0x3713d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3713d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713d4: 0xc0ed934  jal         func_3B64D0
    ctx->pc = 0x3713D4u;
    SET_GPR_U32(ctx, 31, 0x3713DCu);
    ctx->pc = 0x3713D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3713D4u;
    // 0x3713d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B64D0u, 0x3713D4u, 0x3713DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713DCu;
label_3713dc:
    // 0x3713dc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3713dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3713e0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3713e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3713e4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3713e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3713e8: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x3713e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3713ec: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3713ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3713f0: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x3713f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x3713f4: 0x322affff  andi        $t2, $s1, 0xFFFF
    ctx->pc = 0x3713f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3713f8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x3713f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3713fc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3713fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371400: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x371400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x371404: 0x25291950  addiu       $t1, $t1, 0x1950
    ctx->pc = 0x371404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6480));
    // 0x371408: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371408u;
    SET_GPR_U32(ctx, 31, 0x371410u);
    ctx->pc = 0x37140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371408u;
    // 0x37140c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371408u, 0x371410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371410u;
label_371410:
    // 0x371410: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x371410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371414: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x371414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371418: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x371418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37141c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37141cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x371420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371424: 0x3e00008  jr          $ra
    ctx->pc = 0x371424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371424u;
        // 0x371428: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37142Cu;
}
