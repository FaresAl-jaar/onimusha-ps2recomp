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

// Function: sub_003C6D20
// Address: 0x3c6d20 - 0x3c6e28
void sub_003C6D20_0x3c6d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6D20_0x3c6d20");
#endif

    switch (ctx->pc) {
        case 0x3c6d60u: goto label_3c6d60;
        case 0x3c6d9cu: goto label_3c6d9c;
        case 0x3c6db8u: goto label_3c6db8;
        case 0x3c6dc8u: goto label_3c6dc8;
        default: break;
    }

    ctx->pc = 0x3c6d20u;

    // 0x3c6d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c6d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c6d24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c6d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3c6d28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c6d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c6d2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c6d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c6d30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c6d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6d34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c6d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c6d38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c6d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6d3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c6d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c6d40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c6d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c6d44: 0x8c820568  lw          $v0, 0x568($a0)
    ctx->pc = 0x3c6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c6d48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3c6d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3c6d4c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x3c6d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c6d50: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x3C6D50u;
    {
        const bool branch_taken_0x3c6d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D50u;
        // 0x3c6d54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d50) {
            ctx->pc = 0x3C6E00u;
            goto label_3c6e00;
        }
    }
    ctx->pc = 0x3C6D58u;
    // 0x3c6d58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c6d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6d5c: 0x0  nop
    ctx->pc = 0x3c6d5cu;
    // NOP
label_3c6d60:
    // 0x3c6d60: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c6d64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c6d68: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x3c6d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3c6d6c: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c6d70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c6d74: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C6D74u;
    {
        const bool branch_taken_0x3c6d74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D74u;
        // 0x3c6d78: 0xe454001c  swc1        $f20, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d74) {
            ctx->pc = 0x3C6DD8u;
            goto label_3c6dd8;
        }
    }
    ctx->pc = 0x3C6D7Cu;
    // 0x3c6d7c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C6D7Cu;
    {
        const bool branch_taken_0x3c6d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6d7c) {
            ctx->pc = 0x3C6DB0u;
            goto label_3c6db0;
        }
    }
    ctx->pc = 0x3C6D84u;
    // 0x3c6d84: 0x8e630574  lw          $v1, 0x574($s3)
    ctx->pc = 0x3c6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c6d88: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x3c6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3c6d8c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c6d90: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3c6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c6d94: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3C6D94u;
    SET_GPR_U32(ctx, 31, 0x3C6D9Cu);
    ctx->pc = 0x3C6D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6D94u;
    // 0x3c6d98: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3C6D94u, 0x3C6D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6D9Cu;
label_3c6d9c:
    // 0x3c6d9c: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c6d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c6da0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c6da4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C6DA4u;
    {
        const bool branch_taken_0x3c6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DA4u;
        // 0x3c6da8: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6da4) {
            ctx->pc = 0x3C6DD8u;
            goto label_3c6dd8;
        }
    }
    ctx->pc = 0x3C6DACu;
    // 0x3c6dac: 0x0  nop
    ctx->pc = 0x3c6dacu;
    // NOP
label_3c6db0:
    // 0x3c6db0: 0xc0f1a8c  jal         func_3C6A30
    ctx->pc = 0x3C6DB0u;
    SET_GPR_U32(ctx, 31, 0x3C6DB8u);
    ctx->pc = 0x3C6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6DB0u;
    // 0x3c6db4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A30u, 0x3C6DB0u, 0x3C6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6DB8u;
label_3c6db8:
    // 0x3c6db8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3c6db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3c6dbc: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c6dc0: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3C6DC0u;
    SET_GPR_U32(ctx, 31, 0x3C6DC8u);
    ctx->pc = 0x3C6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6DC0u;
    // 0x3c6dc4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3C6DC0u, 0x3C6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6DC8u;
label_3c6dc8:
    // 0x3c6dc8: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c6dcc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c6dd0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3c6dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3c6dd4: 0x0  nop
    ctx->pc = 0x3c6dd4u;
    // NOP
label_3c6dd8:
    // 0x3c6dd8: 0x8e630574  lw          $v1, 0x574($s3)
    ctx->pc = 0x3c6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c6ddc: 0x8e620568  lw          $v0, 0x568($s3)
    ctx->pc = 0x3c6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1384)));
    // 0x3c6de0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c6de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c6de4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c6de8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3c6de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6dec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3c6decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c6df0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x3c6df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3c6df4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3C6DF4u;
    {
        const bool branch_taken_0x3c6df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DF4u;
        // 0x3c6df8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6df4) {
            ctx->pc = 0x3C6D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6d60;
        }
    }
    ctx->pc = 0x3C6DFCu;
    // 0x3c6dfc: 0x0  nop
    ctx->pc = 0x3c6dfcu;
    // NOP
label_3c6e00:
    // 0x3c6e00: 0xe6740570  swc1        $f20, 0x570($s3)
    ctx->pc = 0x3c6e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1392), bits); }
    // 0x3c6e04: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x3c6e04u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x3c6e08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c6e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c6e0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c6e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c6e10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c6e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c6e14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c6e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c6e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c6e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c6e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6e20: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E20u;
        // 0x3c6e24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6E28u;
}
