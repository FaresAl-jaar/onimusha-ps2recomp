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

// Function: sub_0010D370
// Address: 0x10d370 - 0x10d410
void sub_0010D370_0x10d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D370_0x10d370");
#endif

    switch (ctx->pc) {
        case 0x10d380u: goto label_10d380;
        case 0x10d3dcu: goto label_10d3dc;
        default: break;
    }

    ctx->pc = 0x10d370u;

    // 0x10d370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d378: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10D378u;
    SET_GPR_U32(ctx, 31, 0x10D380u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10D378u, 0x10D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D380u;
label_10d380:
    // 0x10d380: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10d380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10d384: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x10d384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x10d388: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x10d388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x10d38c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x10d38cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x10d390: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10d390u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d394: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x10d394u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x10d398: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10d398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10d39c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10d39cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10d3a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10d3a4: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x10d3a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x10d3a8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x10d3a8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10d3ac: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x10d3acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x10d3b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x10d3b0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x10d3b4: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10d3b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10d3b8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x10d3bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10d3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10d3c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d3c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10d3c8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x10d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x10d3cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D3CCu;
    {
        const bool branch_taken_0x10d3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3CCu;
        // 0x10d3d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3cc) {
            ctx->pc = 0x10D3E0u;
            goto label_10d3e0;
        }
    }
    ctx->pc = 0x10D3D4u;
    // 0x10d3d4: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10D3D4u;
    SET_GPR_U32(ctx, 31, 0x10D3DCu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10D3D4u, 0x10D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3DCu;
label_10d3dc:
    // 0x10d3dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10d3e0:
    // 0x10d3e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d3e4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10d3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10d3e8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10d3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10d3ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10d3ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x10d3f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d3f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10d3f4u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x10d3f8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10d3fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x10d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x10d400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d404: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10d404u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
    // 0x10d408: 0x3e00008  jr          $ra
    ctx->pc = 0x10D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D408u;
        // 0x10d40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D410u;
}
