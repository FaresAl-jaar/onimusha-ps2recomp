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

// Function: sub_003D6150
// Address: 0x3d6150 - 0x3d61c4
void sub_003D6150_0x3d6150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6150_0x3d6150");
#endif

    switch (ctx->pc) {
        case 0x3d6168u: goto label_3d6168;
        case 0x3d61a0u: goto label_3d61a0;
        default: break;
    }

    ctx->pc = 0x3d6150u;

    // 0x3d6150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d6150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d6154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d6158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d615c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3d615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3d6160: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3D6160u;
    SET_GPR_U32(ctx, 31, 0x3D6168u);
    ctx->pc = 0x3D6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6160u;
    // 0x3d6164: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3D6160u, 0x3D6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6168u;
label_3d6168:
    // 0x3d6168: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3d6168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3d616c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3d616cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d6170: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3d6170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d6174: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d6174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d6178: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3d6178u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d617c: 0x24424580  addiu       $v0, $v0, 0x4580
    ctx->pc = 0x3d617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17792));
    // 0x3d6180: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d6180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d6184: 0x1812  mflo        $v1
    ctx->pc = 0x3d6184u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3d6188: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3d6188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3d618c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3d618cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3d6190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d6194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d6194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d6198: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x3D6198u;
    SET_GPR_U32(ctx, 31, 0x3D61A0u);
    ctx->pc = 0x3D619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6198u;
    // 0x3d619c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x3D6198u, 0x3D61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D61A0u;
label_3d61a0:
    // 0x3d61a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3d61a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d61a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d61a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d61a8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d61ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d61acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d61b0: 0x24424570  addiu       $v0, $v0, 0x4570
    ctx->pc = 0x3d61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17776));
    // 0x3d61b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d61b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3d61b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d61bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D61BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61BCu;
        // 0x3d61c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D61BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D61C4u;
}
