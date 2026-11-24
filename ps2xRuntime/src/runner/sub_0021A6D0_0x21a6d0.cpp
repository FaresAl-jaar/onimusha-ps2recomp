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

// Function: sub_0021A6D0
// Address: 0x21a6d0 - 0x21a734
void sub_0021A6D0_0x21a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A6D0_0x21a6d0");
#endif

    switch (ctx->pc) {
        case 0x21a6e4u: goto label_21a6e4;
        default: break;
    }

    ctx->pc = 0x21a6d0u;

    // 0x21a6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a6d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a6dc: 0xc046028  jal         func_1180A0
    ctx->pc = 0x21A6DCu;
    SET_GPR_U32(ctx, 31, 0x21A6E4u);
    ctx->pc = 0x21A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6DCu;
    // 0x21a6e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x21A6DCu, 0x21A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6E4u;
label_21a6e4:
    // 0x21a6e4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x21a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x21a6e8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x21a6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x21a6ec: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x21a6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x21a6f0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x21a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x21a6f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x21a6f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21a6fc: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x21a6fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x21a700: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x21a700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x21a704: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x21a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x21a708: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x21a708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x21a70c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21a70cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2)); // MMIO: 0x1000f590
    // 0x21a710: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21a710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21a714: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x21a714u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x21a718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a71c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x21a720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a724: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21a728: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21a728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x21a72c: 0x804603c  j           func_1180F0
    ctx->pc = 0x21A72Cu;
    ctx->pc = 0x21A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A72Cu;
    // 0x21a730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x21A734u;
}
