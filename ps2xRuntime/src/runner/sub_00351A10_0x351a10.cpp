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

// Function: sub_00351A10
// Address: 0x351a10 - 0x351ab8
void sub_00351A10_0x351a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351A10_0x351a10");
#endif

    switch (ctx->pc) {
        case 0x351a70u: goto label_351a70;
        case 0x351a8cu: goto label_351a8c;
        default: break;
    }

    ctx->pc = 0x351a10u;

    // 0x351a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351a20: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x351a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x351a24: 0x10450016  beq         $v0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x351A24u;
    {
        const bool branch_taken_0x351a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x351A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A24u;
        // 0x351a28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a24) {
            ctx->pc = 0x351A80u;
            goto label_351a80;
        }
    }
    ctx->pc = 0x351A2Cu;
    // 0x351a2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x351A2Cu;
    {
        const bool branch_taken_0x351a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351a2c) {
            ctx->pc = 0x351A40u;
            goto label_351a40;
        }
    }
    ctx->pc = 0x351A34u;
    // 0x351a34: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x351A34u;
    {
        const bool branch_taken_0x351a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351a34) {
            ctx->pc = 0x351AA0u;
            goto label_351aa0;
        }
    }
    ctx->pc = 0x351A3Cu;
    // 0x351a3c: 0x0  nop
    ctx->pc = 0x351a3cu;
    // NOP
label_351a40:
    // 0x351a40: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x351a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x351a44: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x351a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x351a48: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x351a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x351a4c: 0x8c22a0f4  lw          $v0, -0x5F0C($at)
    ctx->pc = 0x351a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x91A0F4u));
    // 0x351a50: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x351a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x351a54: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x351a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x351a58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x351a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x351a5c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x351a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x351a60: 0xac22a0f4  sw          $v0, -0x5F0C($at)
    ctx->pc = 0x351a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x91A0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91A0F4u, _value); } while (0);
    // 0x351a64: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x351a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x351a68: 0xc0d3a34  jal         func_34E8D0
    ctx->pc = 0x351A68u;
    SET_GPR_U32(ctx, 31, 0x351A70u);
    ctx->pc = 0x351A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351A68u;
    // 0x351a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E8D0u, 0x351A68u, 0x351A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A70u;
label_351a70:
    // 0x351a70: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x351a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x351a74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x351a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x351a78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x351A78u;
    {
        const bool branch_taken_0x351a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A78u;
        // 0x351a7c: 0xa2020011  sb          $v0, 0x11($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a78) {
            ctx->pc = 0x351AA0u;
            goto label_351aa0;
        }
    }
    ctx->pc = 0x351A80u;
label_351a80:
    // 0x351a80: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x351a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x351a84: 0xc0d3a60  jal         func_34E980
    ctx->pc = 0x351A84u;
    SET_GPR_U32(ctx, 31, 0x351A8Cu);
    ctx->pc = 0x351A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351A84u;
    // 0x351a88: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E980u, 0x351A84u, 0x351A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A8Cu;
label_351a8c:
    // 0x351a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x351A8Cu;
    {
        const bool branch_taken_0x351a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351a8c) {
            ctx->pc = 0x351AA0u;
            goto label_351aa0;
        }
    }
    ctx->pc = 0x351A94u;
    // 0x351a94: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x351a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x351a98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x351A98u;
    {
        const bool branch_taken_0x351a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A98u;
        // 0x351a9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a98) {
            ctx->pc = 0x351AA8u;
            goto label_351aa8;
        }
    }
    ctx->pc = 0x351AA0u;
label_351aa0:
    // 0x351aa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x351aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351aa4: 0x0  nop
    ctx->pc = 0x351aa4u;
    // NOP
label_351aa8:
    // 0x351aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x351AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AB0u;
        // 0x351ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351AB8u;
}
