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

// Function: sub_00363980
// Address: 0x363980 - 0x3639ec
void sub_00363980_0x363980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363980_0x363980");
#endif

    switch (ctx->pc) {
        case 0x363990u: goto label_363990;
        default: break;
    }

    ctx->pc = 0x363980u;

    // 0x363980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363988: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x363988u;
    SET_GPR_U32(ctx, 31, 0x363990u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x363988u, 0x363990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363990u;
label_363990:
    // 0x363990: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x363990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x363994: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x363994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x363998: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x363998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x36399c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x36399cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3639a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3639a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3639a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3639a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3639a8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x3639a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3639ac: 0x0  nop
    ctx->pc = 0x3639acu;
    // NOP
    // 0x3639b0: 0x0  nop
    ctx->pc = 0x3639b0u;
    // NOP
    // 0x3639b4: 0x1810  mfhi        $v1
    ctx->pc = 0x3639b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3639b8: 0x8c22c0f0  lw          $v0, -0x3F10($at)
    ctx->pc = 0x3639b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294951152)));
    // 0x3639bc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3639bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3639c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3639c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3639c4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3639c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3639c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3639c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3639cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3639ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3639d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3639d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3639d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3639d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3639d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3639d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3639dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3639dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3639e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3639e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3639e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3639E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3639E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639E4u;
        // 0x3639e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3639ECu;
}
