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

// Function: sub_0038DF80
// Address: 0x38df80 - 0x38dfe8
void sub_0038DF80_0x38df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DF80_0x38df80");
#endif

    switch (ctx->pc) {
        case 0x38df98u: goto label_38df98;
        case 0x38dfd4u: goto label_38dfd4;
        default: break;
    }

    ctx->pc = 0x38df80u;

    // 0x38df80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38df84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38df88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38df8c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x38df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x38df90: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x38DF90u;
    SET_GPR_U32(ctx, 31, 0x38DF98u);
    ctx->pc = 0x38DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF90u;
    // 0x38df94: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x38DF90u, 0x38DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF98u;
label_38df98:
    // 0x38df98: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x38df98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x38df9c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x38df9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38dfa0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x38dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x38dfa4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38dfa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38dfac: 0x244220b0  addiu       $v0, $v0, 0x20B0
    ctx->pc = 0x38dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8368));
    // 0x38dfb0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x38dfb0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38dfb4: 0x0  nop
    ctx->pc = 0x38dfb4u;
    // NOP
    // 0x38dfb8: 0x0  nop
    ctx->pc = 0x38dfb8u;
    // NOP
    // 0x38dfbc: 0x1812  mflo        $v1
    ctx->pc = 0x38dfbcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x38dfc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38dfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x38dfc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38dfc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38dfcc: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x38DFCCu;
    SET_GPR_U32(ctx, 31, 0x38DFD4u);
    ctx->pc = 0x38DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFCCu;
    // 0x38dfd0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x38DFCCu, 0x38DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFD4u;
label_38dfd4:
    // 0x38dfd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38dfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38dfd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x38dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x38dfdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38dfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x38DFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFE0u;
        // 0x38dfe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DFE8u;
}
