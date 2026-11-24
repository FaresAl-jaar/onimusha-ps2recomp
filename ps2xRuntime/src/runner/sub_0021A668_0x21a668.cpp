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

// Function: sub_0021A668
// Address: 0x21a668 - 0x21a6cc
void sub_0021A668_0x21a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A668_0x21a668");
#endif

    switch (ctx->pc) {
        case 0x21a67cu: goto label_21a67c;
        default: break;
    }

    ctx->pc = 0x21a668u;

    // 0x21a668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a674: 0xc046028  jal         func_1180A0
    ctx->pc = 0x21A674u;
    SET_GPR_U32(ctx, 31, 0x21A67Cu);
    ctx->pc = 0x21A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A674u;
    // 0x21a678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x21A674u, 0x21A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A67Cu;
label_21a67c:
    // 0x21a67c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x21a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x21a680: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x21a680u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x21a684: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x21a684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x21a688: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x21a688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x21a68c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x21a690: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21a690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21a694: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x21a694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x21a698: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x21a698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x21a69c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x21a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x21a6a0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x21a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x21a6a4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21a6a4u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2)); // MMIO: 0x1000f590
    // 0x21a6a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21a6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21a6ac: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x21a6acu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16)); // MMIO: 0x1000b000
    // 0x21a6b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a6b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x21a6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a6bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21a6c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x21a6c4: 0x804603c  j           func_1180F0
    ctx->pc = 0x21A6C4u;
    ctx->pc = 0x21A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6C4u;
    // 0x21a6c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x21A6CCu;
}
