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

// Function: sub_00266440
// Address: 0x266440 - 0x26649c
void sub_00266440_0x266440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266440_0x266440");
#endif

    ctx->pc = 0x266440u;

    // 0x266440: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x266440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x266444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266448: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266448u;
    {
        const bool branch_taken_0x266448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x266448) {
            ctx->pc = 0x266470u;
            goto label_266470;
        }
    }
    ctx->pc = 0x266450u;
    // 0x266450: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x266450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x266454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266458: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x266458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x26645c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x266460: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x266460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x266464: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x266464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x266468: 0xa4820036  sh          $v0, 0x36($a0)
    ctx->pc = 0x266468u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x26646c: 0x0  nop
    ctx->pc = 0x26646cu;
    // NOP
label_266470:
    // 0x266470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x266470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266474: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x266474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26647c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26647cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266484: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x266484u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x266488: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x266488u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x26648c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x26648cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x266490: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x266490u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x266494: 0x8063e1c  j           func_18F870
    ctx->pc = 0x266494u;
    ctx->pc = 0x266498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266494u;
    // 0x266498: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F870u;
    sub_0018F870_0x18f870(rdram, ctx, runtime); return;
    ctx->pc = 0x26649Cu;
}
