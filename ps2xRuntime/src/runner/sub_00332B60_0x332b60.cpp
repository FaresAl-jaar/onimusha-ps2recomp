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

// Function: sub_00332B60
// Address: 0x332b60 - 0x332bd8
void sub_00332B60_0x332b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332B60_0x332b60");
#endif

    switch (ctx->pc) {
        case 0x332b8cu: goto label_332b8c;
        case 0x332b9cu: goto label_332b9c;
        case 0x332bb0u: goto label_332bb0;
        case 0x332bc0u: goto label_332bc0;
        case 0x332bccu: goto label_332bcc;
        default: break;
    }

    ctx->pc = 0x332b60u;

    // 0x332b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332b64: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x332b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x332b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b70: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x332b70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x332b74: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x332b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x332b78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x332b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332b7c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x332b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332b80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x332b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x332b84: 0xc064114  jal         func_190450
    ctx->pc = 0x332B84u;
    SET_GPR_U32(ctx, 31, 0x332B8Cu);
    ctx->pc = 0x332B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B84u;
    // 0x332b88: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190450u, 0x332B84u, 0x332B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B8Cu;
label_332b8c:
    // 0x332b8c: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x332b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
    // 0x332b90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332b94: 0xc0640e4  jal         func_190390
    ctx->pc = 0x332B94u;
    SET_GPR_U32(ctx, 31, 0x332B9Cu);
    ctx->pc = 0x190390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190390u, 0x332B94u, 0x332B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B9Cu;
label_332b9c:
    // 0x332b9c: 0x3c02bf40  lui         $v0, 0xBF40
    ctx->pc = 0x332b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48960 << 16));
    // 0x332ba0: 0x34422038  ori         $v0, $v0, 0x2038
    ctx->pc = 0x332ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8248);
    // 0x332ba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332ba8: 0xc064104  jal         func_190410
    ctx->pc = 0x332BA8u;
    SET_GPR_U32(ctx, 31, 0x332BB0u);
    ctx->pc = 0x190410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190410u, 0x332BA8u, 0x332BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332BB0u;
label_332bb0:
    // 0x332bb0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x332bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x332bb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332bb8: 0xc0640f4  jal         func_1903D0
    ctx->pc = 0x332BB8u;
    SET_GPR_U32(ctx, 31, 0x332BC0u);
    ctx->pc = 0x1903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1903D0u, 0x332BB8u, 0x332BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332BC0u;
label_332bc0:
    // 0x332bc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x332bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x332bc4: 0xc0640c4  jal         func_190310
    ctx->pc = 0x332BC4u;
    SET_GPR_U32(ctx, 31, 0x332BCCu);
    ctx->pc = 0x332BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332BC4u;
    // 0x332bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190310u, 0x332BC4u, 0x332BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332BCCu;
label_332bcc:
    // 0x332bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x332BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BD0u;
        // 0x332bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332BD8u;
}
