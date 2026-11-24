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

// Function: sub_00378C20
// Address: 0x378c20 - 0x378ca4
void sub_00378C20_0x378c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378C20_0x378c20");
#endif

    switch (ctx->pc) {
        case 0x378c58u: goto label_378c58;
        case 0x378c68u: goto label_378c68;
        case 0x378c74u: goto label_378c74;
        default: break;
    }

    ctx->pc = 0x378c20u;

    // 0x378c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x378c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x378c24: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x378c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x378c28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x378c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x378c2c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x378c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x378c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x378c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378c38: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x378c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x378c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378c40: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x378c40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x378c44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x378c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378c4c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x378c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378c50: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x378C50u;
    SET_GPR_U32(ctx, 31, 0x378C58u);
    ctx->pc = 0x378C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C50u;
    // 0x378c54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x378C50u, 0x378C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C58u;
label_378c58:
    // 0x378c58: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x378c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x378c5c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x378c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x378c60: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x378C60u;
    SET_GPR_U32(ctx, 31, 0x378C68u);
    ctx->pc = 0x378C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C60u;
    // 0x378c64: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x378C60u, 0x378C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C68u;
label_378c68:
    // 0x378c68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x378c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x378c6c: 0xc076654  jal         func_1D9950
    ctx->pc = 0x378C6Cu;
    SET_GPR_U32(ctx, 31, 0x378C74u);
    ctx->pc = 0x378C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C6Cu;
    // 0x378c70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x378C6Cu, 0x378C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378C74u;
label_378c74:
    // 0x378c74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x378c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378c78: 0x0  nop
    ctx->pc = 0x378c78u;
    // NOP
    // 0x378c7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x378c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378c80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x378C80u;
    {
        const bool branch_taken_0x378c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x378C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C80u;
        // 0x378c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c80) {
            ctx->pc = 0x378C8Cu;
            goto label_378c8c;
        }
    }
    ctx->pc = 0x378C88u;
    // 0x378c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378c8c:
    // 0x378c8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x378c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x378c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x378c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x378C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C9Cu;
        // 0x378ca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378CA4u;
}
