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

// Function: sub_0010B890
// Address: 0x10b890 - 0x10b940
void sub_0010B890_0x10b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B890_0x10b890");
#endif

    switch (ctx->pc) {
        case 0x10b8a0u: goto label_10b8a0;
        case 0x10b914u: goto label_10b914;
        case 0x10b930u: goto label_10b930;
        default: break;
    }

    ctx->pc = 0x10b890u;

    // 0x10b890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b898: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10B898u;
    SET_GPR_U32(ctx, 31, 0x10B8A0u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10B898u, 0x10B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8A0u;
label_10b8a0:
    // 0x10b8a0: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x10b8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x10b8a4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x10b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x10b8a8: 0x3529f520  ori         $t1, $t1, 0xF520
    ctx->pc = 0x10b8a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)62752);
    // 0x10b8ac: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x10b8acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x10b8b0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b8b4: 0x354af590  ori         $t2, $t2, 0xF590
    ctx->pc = 0x10b8b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)62864);
    // 0x10b8b8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b8bc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x10b8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x10b8c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10b8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10b8c4: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x10b8c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x10b8c8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x10b8c8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x10b8cc: 0x3508feff  ori         $t0, $t0, 0xFEFF
    ctx->pc = 0x10b8ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65279);
    // 0x10b8d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b8d4: 0x3c07fffe  lui         $a3, 0xFFFE
    ctx->pc = 0x10b8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65534 << 16));
    // 0x10b8d8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x10b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x10b8dc: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x10b8e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x10b8e4: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x10b8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x10b8e8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x10b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x10b8ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b8f0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x10b8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x10b8f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10b8f8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x10b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10b8fc: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x10b8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x10b900: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x10b900u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x10b904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B904u;
    {
        const bool branch_taken_0x10b904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B904u;
        // 0x10b908: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b904) {
            ctx->pc = 0x10B918u;
            goto label_10b918;
        }
    }
    ctx->pc = 0x10B90Cu;
    // 0x10b90c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10B90Cu;
    SET_GPR_U32(ctx, 31, 0x10B914u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10B90Cu, 0x10B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B914u;
label_10b914:
    // 0x10b914: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10b918:
    // 0x10b918: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b91c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10b920: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10b924: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10b924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10b928: 0xc04365e  jal         func_10D978
    ctx->pc = 0x10B928u;
    SET_GPR_U32(ctx, 31, 0x10B930u);
    ctx->pc = 0x10B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B928u;
    // 0x10b92c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D978u, 0x10B928u, 0x10B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B930u;
label_10b930:
    // 0x10b930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b938: 0x3e00008  jr          $ra
    ctx->pc = 0x10B938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B938u;
        // 0x10b93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B940u;
}
