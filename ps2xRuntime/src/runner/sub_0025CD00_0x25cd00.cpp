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

// Function: sub_0025CD00
// Address: 0x25cd00 - 0x25ce0c
void sub_0025CD00_0x25cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD00_0x25cd00");
#endif

    switch (ctx->pc) {
        case 0x25cd28u: goto label_25cd28;
        case 0x25cd34u: goto label_25cd34;
        case 0x25cd40u: goto label_25cd40;
        case 0x25cd94u: goto label_25cd94;
        case 0x25cda4u: goto label_25cda4;
        case 0x25cdc8u: goto label_25cdc8;
        case 0x25cdd8u: goto label_25cdd8;
        default: break;
    }

    ctx->pc = 0x25cd00u;

    // 0x25cd00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25cd04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25cd08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25cd0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cd10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25cd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cd18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd1c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25cd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd20: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25CD20u;
    SET_GPR_U32(ctx, 31, 0x25CD28u);
    ctx->pc = 0x25CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD20u;
    // 0x25cd24: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25CD20u, 0x25CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD28u;
label_25cd28:
    // 0x25cd28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd2c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25CD2Cu;
    SET_GPR_U32(ctx, 31, 0x25CD34u);
    ctx->pc = 0x25CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD2Cu;
    // 0x25cd30: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25CD2Cu, 0x25CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD34u;
label_25cd34:
    // 0x25cd34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25cd38: 0xc076654  jal         func_1D9950
    ctx->pc = 0x25CD38u;
    SET_GPR_U32(ctx, 31, 0x25CD40u);
    ctx->pc = 0x25CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD38u;
    // 0x25cd3c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x25CD38u, 0x25CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD40u;
label_25cd40:
    // 0x25cd40: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x25cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x25cd44: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x25cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x25cd48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25cd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cd4c: 0x0  nop
    ctx->pc = 0x25cd4cu;
    // NOP
    // 0x25cd50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25cd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cd54: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25CD54u;
    {
        const bool branch_taken_0x25cd54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD54u;
        // 0x25cd58: 0x3c02bf7f  lui         $v0, 0xBF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd54) {
            ctx->pc = 0x25CD78u;
            goto label_25cd78;
        }
    }
    ctx->pc = 0x25CD5Cu;
    // 0x25cd5c: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x25cd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x25cd60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cd64: 0x0  nop
    ctx->pc = 0x25cd64u;
    // NOP
    // 0x25cd68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25cd68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cd6c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x25CD6Cu;
    {
        const bool branch_taken_0x25cd6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25cd6c) {
            ctx->pc = 0x25CDB0u;
            goto label_25cdb0;
        }
    }
    ctx->pc = 0x25CD74u;
    // 0x25cd74: 0x0  nop
    ctx->pc = 0x25cd74u;
    // NOP
label_25cd78:
    // 0x25cd78: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x25cd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cd7c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x25cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x25cd80: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x25cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25cd84: 0x24a55c60  addiu       $a1, $a1, 0x5C60
    ctx->pc = 0x25cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23648));
    // 0x25cd88: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25cd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25cd8c: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CD8Cu;
    SET_GPR_U32(ctx, 31, 0x25CD94u);
    ctx->pc = 0x25CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD8Cu;
    // 0x25cd90: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CD8Cu, 0x25CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD94u;
label_25cd94:
    // 0x25cd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd98: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25cd9c: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CD9Cu;
    SET_GPR_U32(ctx, 31, 0x25CDA4u);
    ctx->pc = 0x25CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD9Cu;
    // 0x25cda0: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CD9Cu, 0x25CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDA4u;
label_25cda4:
    // 0x25cda4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25cda4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25cda8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25CDA8u;
    {
        const bool branch_taken_0x25cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDA8u;
        // 0x25cdac: 0x7e230030  sq          $v1, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cda8) {
            ctx->pc = 0x25CDE0u;
            goto label_25cde0;
        }
    }
    ctx->pc = 0x25CDB0u;
label_25cdb0:
    // 0x25cdb0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x25cdb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cdb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cdb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25cdbc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25cdc0: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CDC0u;
    SET_GPR_U32(ctx, 31, 0x25CDC8u);
    ctx->pc = 0x25CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDC0u;
    // 0x25cdc4: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CDC0u, 0x25CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDC8u;
label_25cdc8:
    // 0x25cdc8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x25cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25cdcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25cdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cdd0: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CDD0u;
    SET_GPR_U32(ctx, 31, 0x25CDD8u);
    ctx->pc = 0x25CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDD0u;
    // 0x25cdd4: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CDD0u, 0x25CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDD8u;
label_25cdd8:
    // 0x25cdd8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25cdd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25cddc: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x25cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
label_25cde0:
    // 0x25cde0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x25cde4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x25cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x25cde8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25cdec: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x25cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x25cdf0: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x25cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x25cdf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25cdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cdf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25cdf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cdfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cdfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ce00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ce00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ce04: 0x3e00008  jr          $ra
    ctx->pc = 0x25CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE04u;
        // 0x25ce08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CE0Cu;
}
