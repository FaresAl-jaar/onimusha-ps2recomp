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

// Function: sub_0032EC60
// Address: 0x32ec60 - 0x32ecc8
void sub_0032EC60_0x32ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EC60_0x32ec60");
#endif

    ctx->pc = 0x32ec60u;

    // 0x32ec60: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x32ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x32ec64: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x32ec64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x32ec68: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x32ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x32ec6c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x32ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x32ec70: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32ec74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32ec78: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32ec7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32ec7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32ec80: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32EC80u;
    {
        const bool branch_taken_0x32ec80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ec80) {
            ctx->pc = 0x32ECC0u;
            goto label_32ecc0;
        }
    }
    ctx->pc = 0x32EC88u;
    // 0x32ec88: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x32ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x32ec8c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x32ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32ec90: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x32ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32ec94: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x32ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x32ec98: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x32ec98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32ec9c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x32ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32eca0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x32eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x32eca4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x32eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x32eca8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32ecac: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x32ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x32ecb0: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x32ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x32ecb4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x32ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x32ecb8: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x32ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x32ecbc: 0x0  nop
    ctx->pc = 0x32ecbcu;
    // NOP
label_32ecc0:
    // 0x32ecc0: 0x3e00008  jr          $ra
    ctx->pc = 0x32ECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ECC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ECC8u;
}
