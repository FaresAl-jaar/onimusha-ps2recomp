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

// Function: sub_0025CBF0
// Address: 0x25cbf0 - 0x25ccfc
void sub_0025CBF0_0x25cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CBF0_0x25cbf0");
#endif

    switch (ctx->pc) {
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc24u: goto label_25cc24;
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc84u: goto label_25cc84;
        case 0x25cc94u: goto label_25cc94;
        case 0x25ccb8u: goto label_25ccb8;
        case 0x25ccc8u: goto label_25ccc8;
        default: break;
    }

    ctx->pc = 0x25cbf0u;

    // 0x25cbf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25cbf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25cbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25cbf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25cbfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cc00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25cc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cc08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc0c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25cc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc10: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25CC10u;
    SET_GPR_U32(ctx, 31, 0x25CC18u);
    ctx->pc = 0x25CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC10u;
    // 0x25cc14: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25CC10u, 0x25CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC18u;
label_25cc18:
    // 0x25cc18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc1c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25CC1Cu;
    SET_GPR_U32(ctx, 31, 0x25CC24u);
    ctx->pc = 0x25CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC1Cu;
    // 0x25cc20: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25CC1Cu, 0x25CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC24u;
label_25cc24:
    // 0x25cc24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25cc28: 0xc076654  jal         func_1D9950
    ctx->pc = 0x25CC28u;
    SET_GPR_U32(ctx, 31, 0x25CC30u);
    ctx->pc = 0x25CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC28u;
    // 0x25cc2c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x25CC28u, 0x25CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC30u;
label_25cc30:
    // 0x25cc30: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x25cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x25cc34: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x25cc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x25cc38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25cc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cc3c: 0x0  nop
    ctx->pc = 0x25cc3cu;
    // NOP
    // 0x25cc40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25cc40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cc44: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25CC44u;
    {
        const bool branch_taken_0x25cc44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC44u;
        // 0x25cc48: 0x3c02bf7f  lui         $v0, 0xBF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc44) {
            ctx->pc = 0x25CC68u;
            goto label_25cc68;
        }
    }
    ctx->pc = 0x25CC4Cu;
    // 0x25cc4c: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x25cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x25cc50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25cc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cc54: 0x0  nop
    ctx->pc = 0x25cc54u;
    // NOP
    // 0x25cc58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25cc58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cc5c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x25CC5Cu;
    {
        const bool branch_taken_0x25cc5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25cc5c) {
            ctx->pc = 0x25CCA0u;
            goto label_25cca0;
        }
    }
    ctx->pc = 0x25CC64u;
    // 0x25cc64: 0x0  nop
    ctx->pc = 0x25cc64u;
    // NOP
label_25cc68:
    // 0x25cc68: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x25cc68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cc6c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x25cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x25cc70: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x25cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25cc74: 0x24a55c80  addiu       $a1, $a1, 0x5C80
    ctx->pc = 0x25cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23680));
    // 0x25cc78: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25cc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25cc7c: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CC7Cu;
    SET_GPR_U32(ctx, 31, 0x25CC84u);
    ctx->pc = 0x25CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC7Cu;
    // 0x25cc80: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CC7Cu, 0x25CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC84u;
label_25cc84:
    // 0x25cc84: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25cc88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25cc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc8c: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CC8Cu;
    SET_GPR_U32(ctx, 31, 0x25CC94u);
    ctx->pc = 0x25CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC8Cu;
    // 0x25cc90: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CC8Cu, 0x25CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC94u;
label_25cc94:
    // 0x25cc94: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25cc94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25cc98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25CC98u;
    {
        const bool branch_taken_0x25cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC98u;
        // 0x25cc9c: 0x7e230030  sq          $v1, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc98) {
            ctx->pc = 0x25CCD0u;
            goto label_25ccd0;
        }
    }
    ctx->pc = 0x25CCA0u;
label_25cca0:
    // 0x25cca0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x25cca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cca4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x25cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25cca8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ccac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25ccacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ccb0: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CCB0u;
    SET_GPR_U32(ctx, 31, 0x25CCB8u);
    ctx->pc = 0x25CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCB0u;
    // 0x25ccb4: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CCB0u, 0x25CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCB8u;
label_25ccb8:
    // 0x25ccb8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x25ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25ccbc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x25ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25ccc0: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x25CCC0u;
    SET_GPR_U32(ctx, 31, 0x25CCC8u);
    ctx->pc = 0x25CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCC0u;
    // 0x25ccc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x25CCC0u, 0x25CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCC8u;
label_25ccc8:
    // 0x25ccc8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25ccc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25cccc: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x25ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
label_25ccd0:
    // 0x25ccd0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x25ccd4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x25ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x25ccd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25ccdc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x25ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x25cce0: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x25cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x25cce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25cce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25cce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ccec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ccecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ccf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ccf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCF4u;
        // 0x25ccf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CCFCu;
}
