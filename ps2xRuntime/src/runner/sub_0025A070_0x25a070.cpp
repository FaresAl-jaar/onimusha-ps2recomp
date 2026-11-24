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

// Function: sub_0025A070
// Address: 0x25a070 - 0x25a0d8
void sub_0025A070_0x25a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A070_0x25a070");
#endif

    ctx->pc = 0x25a070u;

    // 0x25a070: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25a070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25a074: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25a074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25a078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a07c: 0x0  nop
    ctx->pc = 0x25a07cu;
    // NOP
    // 0x25a080: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x25a080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a084: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25A084u;
    {
        const bool branch_taken_0x25a084 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A084u;
        // 0x25a088: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a084) {
            ctx->pc = 0x25A0A0u;
            goto label_25a0a0;
        }
    }
    ctx->pc = 0x25A08Cu;
    // 0x25a08c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25a090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a094: 0x0  nop
    ctx->pc = 0x25a094u;
    // NOP
    // 0x25a098: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x25a098u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x25a09c: 0x0  nop
    ctx->pc = 0x25a09cu;
    // NOP
label_25a0a0:
    // 0x25a0a0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x25a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x25a0a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25a0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a0ac: 0x0  nop
    ctx->pc = 0x25a0acu;
    // NOP
    // 0x25a0b0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25a0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a0b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25A0B4u;
    {
        const bool branch_taken_0x25a0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0B4u;
        // 0x25a0b8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0b4) {
            ctx->pc = 0x25A0D0u;
            goto label_25a0d0;
        }
    }
    ctx->pc = 0x25A0BCu;
    // 0x25a0bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25a0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25a0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a0c4: 0x0  nop
    ctx->pc = 0x25a0c4u;
    // NOP
    // 0x25a0c8: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x25a0c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x25a0cc: 0x0  nop
    ctx->pc = 0x25a0ccu;
    // NOP
label_25a0d0:
    // 0x25a0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0D0u;
        // 0x25a0d4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A0D8u;
}
