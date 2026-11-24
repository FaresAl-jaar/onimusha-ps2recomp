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

// Function: sub_003B4A60
// Address: 0x3b4a60 - 0x3b4ab0
void sub_003B4A60_0x3b4a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4A60_0x3b4a60");
#endif

    ctx->pc = 0x3b4a60u;

    // 0x3b4a60: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3b4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b4a64: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4A64u;
    {
        const bool branch_taken_0x3b4a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4a64) {
            ctx->pc = 0x3B4A88u;
            goto label_3b4a88;
        }
    }
    ctx->pc = 0x3B4A6Cu;
    // 0x3b4a6c: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x3b4a6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3b4a70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b4a74: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4A74u;
    {
        const bool branch_taken_0x3b4a74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b4a74) {
            ctx->pc = 0x3B4A88u;
            goto label_3b4a88;
        }
    }
    ctx->pc = 0x3B4A7Cu;
    // 0x3b4a7c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3b4a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3b4a80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4A80u;
    {
        const bool branch_taken_0x3b4a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A80u;
        // 0x3b4a84: 0x2463dea0  addiu       $v1, $v1, -0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a80) {
            ctx->pc = 0x3B4A90u;
            goto label_3b4a90;
        }
    }
    ctx->pc = 0x3B4A88u;
label_3b4a88:
    // 0x3b4a88: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3b4a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3b4a8c: 0x2463dec0  addiu       $v1, $v1, -0x2140
    ctx->pc = 0x3b4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958784));
label_3b4a90:
    // 0x3b4a90: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x3b4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x3b4a94: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3b4a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4a98: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x3b4a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x3b4a9c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3b4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4aa0: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x3b4aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x3b4aa4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3b4aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AA8u;
        // 0x3b4aac: 0xe4800054  swc1        $f0, 0x54($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4AB0u;
}
