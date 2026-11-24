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

// Function: sub_0038DF00
// Address: 0x38df00 - 0x38df80
void sub_0038DF00_0x38df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DF00_0x38df00");
#endif

    switch (ctx->pc) {
        case 0x38df18u: goto label_38df18;
        case 0x38df58u: goto label_38df58;
        default: break;
    }

    ctx->pc = 0x38df00u;

    // 0x38df00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38df04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38df08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38df08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38df0c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x38df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x38df10: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x38DF10u;
    SET_GPR_U32(ctx, 31, 0x38DF18u);
    ctx->pc = 0x38DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF10u;
    // 0x38df14: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x38DF10u, 0x38DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF18u;
label_38df18:
    // 0x38df18: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x38df18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x38df1c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x38df1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38df20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x38df20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x38df24: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38df24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38df28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38df2c: 0x24422060  addiu       $v0, $v0, 0x2060
    ctx->pc = 0x38df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8288));
    // 0x38df30: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x38df30u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38df34: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38df38: 0x0  nop
    ctx->pc = 0x38df38u;
    // NOP
    // 0x38df3c: 0x1812  mflo        $v1
    ctx->pc = 0x38df3cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x38df40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x38df40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x38df44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x38df44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38df48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38df48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38df4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38df50: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x38DF50u;
    SET_GPR_U32(ctx, 31, 0x38DF58u);
    ctx->pc = 0x38DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF50u;
    // 0x38df54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x38DF50u, 0x38DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF58u;
label_38df58:
    // 0x38df58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x38df58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x38df5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38df5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38df60: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38df64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x38df64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x38df68: 0x24422050  addiu       $v0, $v0, 0x2050
    ctx->pc = 0x38df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8272));
    // 0x38df6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38df6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38df70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38df74: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x38df74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38df78: 0x3e00008  jr          $ra
    ctx->pc = 0x38DF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF78u;
        // 0x38df7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DF80u;
}
