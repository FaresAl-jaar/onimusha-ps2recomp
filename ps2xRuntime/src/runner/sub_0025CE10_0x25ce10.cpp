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

// Function: sub_0025CE10
// Address: 0x25ce10 - 0x25cf1c
void sub_0025CE10_0x25ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CE10_0x25ce10");
#endif

    switch (ctx->pc) {
        case 0x25ce38u: goto label_25ce38;
        case 0x25ce44u: goto label_25ce44;
        case 0x25ce50u: goto label_25ce50;
        case 0x25cea4u: goto label_25cea4;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cee8u: goto label_25cee8;
        default: break;
    }

    ctx->pc = 0x25ce10u;

    // 0x25ce10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25ce14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25ce18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ce1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ce20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25ce20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ce28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ce28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce2c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25ce2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce30: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25CE30u;
    SET_GPR_U32(ctx, 31, 0x25CE38u);
    ctx->pc = 0x25CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE30u;
    // 0x25ce34: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25CE30u, 0x25CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE38u;
label_25ce38:
    // 0x25ce38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce3c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25CE3Cu;
    SET_GPR_U32(ctx, 31, 0x25CE44u);
    ctx->pc = 0x25CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE3Cu;
    // 0x25ce40: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25CE3Cu, 0x25CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE44u;
label_25ce44:
    // 0x25ce44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ce48: 0xc076654  jal         func_1D9950
    ctx->pc = 0x25CE48u;
    SET_GPR_U32(ctx, 31, 0x25CE50u);
    ctx->pc = 0x25CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE48u;
    // 0x25ce4c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x25CE48u, 0x25CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE50u;
label_25ce50:
    // 0x25ce50: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x25ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x25ce54: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x25ce54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x25ce58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ce58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ce5c: 0x0  nop
    ctx->pc = 0x25ce5cu;
    // NOP
    // 0x25ce60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25ce60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ce64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25CE64u;
    {
        const bool branch_taken_0x25ce64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE64u;
        // 0x25ce68: 0x3c02bf7f  lui         $v0, 0xBF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce64) {
            ctx->pc = 0x25CE88u;
            goto label_25ce88;
        }
    }
    ctx->pc = 0x25CE6Cu;
    // 0x25ce6c: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x25ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x25ce70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ce70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ce74: 0x0  nop
    ctx->pc = 0x25ce74u;
    // NOP
    // 0x25ce78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25ce78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ce7c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x25CE7Cu;
    {
        const bool branch_taken_0x25ce7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ce7c) {
            ctx->pc = 0x25CEC0u;
            goto label_25cec0;
        }
    }
    ctx->pc = 0x25CE84u;
    // 0x25ce84: 0x0  nop
    ctx->pc = 0x25ce84u;
    // NOP
label_25ce88:
    // 0x25ce88: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x25ce88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ce8c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x25ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x25ce90: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x25ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25ce94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ce98: 0x24c65c60  addiu       $a2, $a2, 0x5C60
    ctx->pc = 0x25ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23648));
    // 0x25ce9c: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CE9Cu;
    SET_GPR_U32(ctx, 31, 0x25CEA4u);
    ctx->pc = 0x25CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE9Cu;
    // 0x25cea0: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CE9Cu, 0x25CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEA4u;
label_25cea4:
    // 0x25cea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cea8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25ceac: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CEACu;
    SET_GPR_U32(ctx, 31, 0x25CEB4u);
    ctx->pc = 0x25CEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEACu;
    // 0x25ceb0: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CEACu, 0x25CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEB4u;
label_25ceb4:
    // 0x25ceb4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25ceb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ceb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25CEB8u;
    {
        const bool branch_taken_0x25ceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEB8u;
        // 0x25cebc: 0x7e230030  sq          $v1, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ceb8) {
            ctx->pc = 0x25CEF0u;
            goto label_25cef0;
        }
    }
    ctx->pc = 0x25CEC0u;
label_25cec0:
    // 0x25cec0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x25cec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cec8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25cec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25cecc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25ceccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ced0: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CED0u;
    SET_GPR_U32(ctx, 31, 0x25CED8u);
    ctx->pc = 0x25CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CED0u;
    // 0x25ced4: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CED0u, 0x25CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CED8u;
label_25ced8:
    // 0x25ced8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x25ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25cedc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x25cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25cee0: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CEE0u;
    SET_GPR_U32(ctx, 31, 0x25CEE8u);
    ctx->pc = 0x25CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEE0u;
    // 0x25cee4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CEE0u, 0x25CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEE8u;
label_25cee8:
    // 0x25cee8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25cee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ceec: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x25ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
label_25cef0:
    // 0x25cef0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x25cef4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x25cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x25cef8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25cefc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x25cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x25cf00: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x25cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x25cf04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cf08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25cf08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cf0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x25CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF14u;
        // 0x25cf18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CF1Cu;
}
