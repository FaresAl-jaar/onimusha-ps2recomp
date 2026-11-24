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

// Function: sub_0018F130
// Address: 0x18f130 - 0x18f1b4
void sub_0018F130_0x18f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F130_0x18f130");
#endif

    ctx->pc = 0x18f130u;

    // 0x18f130: 0x3c021818  lui         $v0, 0x1818
    ctx->pc = 0x18f130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6168 << 16));
    // 0x18f134: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x18f134u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x18f138: 0x344c0046  ori         $t4, $v0, 0x46
    ctx->pc = 0x18f138u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x18f13c: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x18f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 13));
    // 0x18f140: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x18f140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x18f144: 0xac8c0004  sw          $t4, 0x4($a0)
    ctx->pc = 0x18f144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 12));
    // 0x18f148: 0x344b7000  ori         $t3, $v0, 0x7000
    ctx->pc = 0x18f148u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x18f14c: 0x340afffd  ori         $t2, $zero, 0xFFFD
    ctx->pc = 0x18f14cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x18f150: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x18f154: 0xac8b0010  sw          $t3, 0x10($a0)
    ctx->pc = 0x18f154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
    // 0x18f158: 0x34492000  ori         $t1, $v0, 0x2000
    ctx->pc = 0x18f158u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x18f15c: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x18f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x18f160: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x18f164: 0xac890018  sw          $t1, 0x18($a0)
    ctx->pc = 0x18f164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
    // 0x18f168: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x18f168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x18f16c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f170: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18f174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18f178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f17c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x18f17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18f180: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f184: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x18f184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18f188: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x18f188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f18c: 0xac8d0020  sw          $t5, 0x20($a0)
    ctx->pc = 0x18f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 13));
    // 0x18f190: 0xac8c0024  sw          $t4, 0x24($a0)
    ctx->pc = 0x18f190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 12));
    // 0x18f194: 0xac8b0030  sw          $t3, 0x30($a0)
    ctx->pc = 0x18f194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 11));
    // 0x18f198: 0xac8a0034  sw          $t2, 0x34($a0)
    ctx->pc = 0x18f198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 10));
    // 0x18f19c: 0xac890038  sw          $t1, 0x38($a0)
    ctx->pc = 0x18f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 9));
    // 0x18f1a0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x18f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x18f1a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f1a8: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x18f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x18f1ac: 0x8063d30  j           func_18F4C0
    ctx->pc = 0x18F1ACu;
    ctx->pc = 0x18F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1ACu;
    // 0x18f1b0: 0xa080002f  sb          $zero, 0x2F($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 47), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    sub_0018F4C0_0x18f4c0(rdram, ctx, runtime); return;
    ctx->pc = 0x18F1B4u;
}
