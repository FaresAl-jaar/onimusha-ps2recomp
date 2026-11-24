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

// Function: sub_002E5C40
// Address: 0x2e5c40 - 0x2e5d74
void sub_002E5C40_0x2e5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5C40_0x2e5c40");
#endif

    switch (ctx->pc) {
        case 0x2e5c70u: goto label_2e5c70;
        case 0x2e5c7cu: goto label_2e5c7c;
        case 0x2e5cb8u: goto label_2e5cb8;
        case 0x2e5cc4u: goto label_2e5cc4;
        case 0x2e5d44u: goto label_2e5d44;
        case 0x2e5d54u: goto label_2e5d54;
        default: break;
    }

    ctx->pc = 0x2e5c40u;

    // 0x2e5c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e5c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e5c44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5c48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e5c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5c4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e5c50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e5c54: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e5c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e5c5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e5c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c60: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e5c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c64: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e5c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c68: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E5C68u;
    SET_GPR_U32(ctx, 31, 0x2E5C70u);
    ctx->pc = 0x2E5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C68u;
    // 0x2e5c6c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E5C68u, 0x2E5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C70u;
label_2e5c70:
    // 0x2e5c70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5c74: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E5C74u;
    SET_GPR_U32(ctx, 31, 0x2E5C7Cu);
    ctx->pc = 0x2E5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C74u;
    // 0x2e5c78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E5C74u, 0x2E5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C7Cu;
label_2e5c7c:
    // 0x2e5c7c: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x2e5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x2e5c80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e5c80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5c84: 0x346337bd  ori         $v1, $v1, 0x37BD
    ctx->pc = 0x2e5c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x2e5c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c8c: 0x0  nop
    ctx->pc = 0x2e5c8cu;
    // NOP
    // 0x2e5c90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e5c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5c94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C94u;
    {
        const bool branch_taken_0x2e5c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5c94) {
            ctx->pc = 0x2E5CA8u;
            goto label_2e5ca8;
        }
    }
    ctx->pc = 0x2E5C9Cu;
    // 0x2e5c9c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2e5c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e5ca0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2E5CA0u;
    {
        const bool branch_taken_0x2e5ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CA0u;
        // 0x2e5ca4: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ca0) {
            ctx->pc = 0x2E5D58u;
            goto label_2e5d58;
        }
    }
    ctx->pc = 0x2E5CA8u;
label_2e5ca8:
    // 0x2e5ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5cac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e5cb0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E5CB0u;
    SET_GPR_U32(ctx, 31, 0x2E5CB8u);
    ctx->pc = 0x2E5CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5CB0u;
    // 0x2e5cb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E5CB0u, 0x2E5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CB8u;
label_2e5cb8:
    // 0x2e5cb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5cbc: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E5CBCu;
    SET_GPR_U32(ctx, 31, 0x2E5CC4u);
    ctx->pc = 0x2E5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5CBCu;
    // 0x2e5cc0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E5CBCu, 0x2E5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CC4u;
label_2e5cc4:
    // 0x2e5cc4: 0x0  nop
    ctx->pc = 0x2e5cc4u;
    // NOP
    // 0x2e5cc8: 0x0  nop
    ctx->pc = 0x2e5cc8u;
    // NOP
    // 0x2e5ccc: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x2e5cccu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x2e5cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5cd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5cd8: 0x0  nop
    ctx->pc = 0x2e5cd8u;
    // NOP
    // 0x2e5cdc: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x2e5cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5ce0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CE0u;
    {
        const bool branch_taken_0x2e5ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5ce0) {
            ctx->pc = 0x2E5CF0u;
            goto label_2e5cf0;
        }
    }
    ctx->pc = 0x2E5CE8u;
    // 0x2e5ce8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5CE8u;
    {
        const bool branch_taken_0x2e5ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CE8u;
        // 0x2e5cec: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ce8) {
            ctx->pc = 0x2E5CF0u;
            goto label_2e5cf0;
        }
    }
    ctx->pc = 0x2E5CF0u;
label_2e5cf0:
    // 0x2e5cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5cf4: 0x0  nop
    ctx->pc = 0x2e5cf4u;
    // NOP
    // 0x2e5cf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e5cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5cfc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5CFCu;
    {
        const bool branch_taken_0x2e5cfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5cfc) {
            ctx->pc = 0x2E5D10u;
            goto label_2e5d10;
        }
    }
    ctx->pc = 0x2E5D04u;
    // 0x2e5d04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E5D04u;
    {
        const bool branch_taken_0x2e5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D04u;
        // 0x2e5d08: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d04) {
            ctx->pc = 0x2E5D38u;
            goto label_2e5d38;
        }
    }
    ctx->pc = 0x2E5D0Cu;
    // 0x2e5d0c: 0x0  nop
    ctx->pc = 0x2e5d0cu;
    // NOP
label_2e5d10:
    // 0x2e5d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5d18: 0x0  nop
    ctx->pc = 0x2e5d18u;
    // NOP
    // 0x2e5d1c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2e5d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5d20: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D20u;
    {
        const bool branch_taken_0x2e5d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5d20) {
            ctx->pc = 0x2E5D30u;
            goto label_2e5d30;
        }
    }
    ctx->pc = 0x2E5D28u;
    // 0x2e5d28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D28u;
    {
        const bool branch_taken_0x2e5d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d28) {
            ctx->pc = 0x2E5D38u;
            goto label_2e5d38;
        }
    }
    ctx->pc = 0x2E5D30u;
label_2e5d30:
    // 0x2e5d30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e5d30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5d34: 0x0  nop
    ctx->pc = 0x2e5d34u;
    // NOP
label_2e5d38:
    // 0x2e5d38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e5d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5d3c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E5D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5D44u);
    ctx->pc = 0x2E5D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D3Cu;
    // 0x2e5d40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E5D3Cu, 0x2E5D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D44u;
label_2e5d44:
    // 0x2e5d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d4c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E5D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5D54u);
    ctx->pc = 0x2E5D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D4Cu;
    // 0x2e5d50: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E5D4Cu, 0x2E5D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D54u;
label_2e5d54:
    // 0x2e5d54: 0x0  nop
    ctx->pc = 0x2e5d54u;
    // NOP
label_2e5d58:
    // 0x2e5d58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5d5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e5d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5d60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5d64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D6Cu;
        // 0x2e5d70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5D74u;
}
