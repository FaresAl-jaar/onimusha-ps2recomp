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

// Function: sub_00307B90
// Address: 0x307b90 - 0x307e40
void sub_00307B90_0x307b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307B90_0x307b90");
#endif

    switch (ctx->pc) {
        case 0x307be8u: goto label_307be8;
        case 0x307c28u: goto label_307c28;
        case 0x307c34u: goto label_307c34;
        case 0x307c58u: goto label_307c58;
        case 0x307c8cu: goto label_307c8c;
        case 0x307c9cu: goto label_307c9c;
        case 0x307cacu: goto label_307cac;
        case 0x307cbcu: goto label_307cbc;
        case 0x307cccu: goto label_307ccc;
        case 0x307cdcu: goto label_307cdc;
        case 0x307cf4u: goto label_307cf4;
        case 0x307d04u: goto label_307d04;
        case 0x307d50u: goto label_307d50;
        case 0x307d68u: goto label_307d68;
        case 0x307dc8u: goto label_307dc8;
        case 0x307dd8u: goto label_307dd8;
        case 0x307e08u: goto label_307e08;
        case 0x307e20u: goto label_307e20;
        default: break;
    }

    ctx->pc = 0x307b90u;

    // 0x307b90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x307b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x307b94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x307b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x307b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x307b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x307b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x307b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x307ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307ba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307bac: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x307bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x307bb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x307bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x307bb4: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x307BB4u;
    {
        const bool branch_taken_0x307bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BB4u;
        // 0x307bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bb4) {
            ctx->pc = 0x307D40u;
            goto label_307d40;
        }
    }
    ctx->pc = 0x307BBCu;
    // 0x307bbc: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x307bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x307bc0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x307BC0u;
    {
        const bool branch_taken_0x307bc0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x307BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BC0u;
        // 0x307bc4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bc0) {
            ctx->pc = 0x307BD4u;
            goto label_307bd4;
        }
    }
    ctx->pc = 0x307BC8u;
    // 0x307bc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x307BC8u;
    {
        const bool branch_taken_0x307bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307bc8) {
            ctx->pc = 0x307BD4u;
            goto label_307bd4;
        }
    }
    ctx->pc = 0x307BD0u;
    // 0x307bd0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x307bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_307bd4:
    // 0x307bd4: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x307BD4u;
    {
        const bool branch_taken_0x307bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BD4u;
        // 0x307bd8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bd4) {
            ctx->pc = 0x307D40u;
            goto label_307d40;
        }
    }
    ctx->pc = 0x307BDCu;
    // 0x307bdc: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x307bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x307be0: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x307be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x307be4: 0x0  nop
    ctx->pc = 0x307be4u;
    // NOP
label_307be8:
    // 0x307be8: 0x8e040370  lw          $a0, 0x370($s0)
    ctx->pc = 0x307be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x307bec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x307becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x307bf0: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x307bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x307bf4: 0x278682a4  addiu       $a2, $gp, -0x7D5C
    ctx->pc = 0x307bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935204));
    // 0x307bf8: 0x278782a8  addiu       $a3, $gp, -0x7D58
    ctx->pc = 0x307bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935208));
    // 0x307bfc: 0x278882ac  addiu       $t0, $gp, -0x7D54
    ctx->pc = 0x307bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935212));
    // 0x307c00: 0x27898ad8  addiu       $t1, $gp, -0x7528
    ctx->pc = 0x307c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937304));
    // 0x307c04: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x307c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x307c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x307c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x307c0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x307c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x307c10: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x307c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x307c14: 0xa4620096  sh          $v0, 0x96($v1)
    ctx->pc = 0x307c14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x307c18: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x307c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x307c1c: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x307c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x307c20: 0xc096da0  jal         func_25B680
    ctx->pc = 0x307C20u;
    SET_GPR_U32(ctx, 31, 0x307C28u);
    ctx->pc = 0x307C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C20u;
    // 0x307c24: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x307C20u, 0x307C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C28u;
label_307c28:
    // 0x307c28: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x307c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x307c2c: 0xc078bac  jal         func_1E2EB0
    ctx->pc = 0x307C2Cu;
    SET_GPR_U32(ctx, 31, 0x307C34u);
    ctx->pc = 0x307C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C2Cu;
    // 0x307c30: 0xa6620022  sh          $v0, 0x22($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x307C2Cu, 0x307C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C34u;
label_307c34:
    // 0x307c34: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x307c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c3c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x307c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x307c40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x307c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307c44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x307c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x307c48: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x307c48u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x307c4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x307c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307c50: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x307C50u;
    SET_GPR_U32(ctx, 31, 0x307C58u);
    ctx->pc = 0x307C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C50u;
    // 0x307c54: 0xa2650024  sb          $a1, 0x24($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x307C50u, 0x307C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C58u;
label_307c58:
    // 0x307c58: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x307c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x307c5c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x307c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x307c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x307c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307c64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x307c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307c68: 0x0  nop
    ctx->pc = 0x307c68u;
    // NOP
    // 0x307c6c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x307c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x307c70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x307c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307c74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x307C74u;
    {
        const bool branch_taken_0x307c74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C74u;
        // 0x307c78: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c74) {
            ctx->pc = 0x307C80u;
            goto label_307c80;
        }
    }
    ctx->pc = 0x307C7Cu;
    // 0x307c7c: 0xe6610028  swc1        $f1, 0x28($s3)
    ctx->pc = 0x307c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_307c80:
    // 0x307c80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x307c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c84: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x307C84u;
    SET_GPR_U32(ctx, 31, 0x307C8Cu);
    ctx->pc = 0x307C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C84u;
    // 0x307c88: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x307C84u, 0x307C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C8Cu;
label_307c8c:
    // 0x307c8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x307c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x307c90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x307c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307c94: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x307C94u;
    SET_GPR_U32(ctx, 31, 0x307C9Cu);
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x307C94u, 0x307C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C9Cu;
label_307c9c:
    // 0x307c9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x307c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x307ca0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x307ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307ca4: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x307CA4u;
    SET_GPR_U32(ctx, 31, 0x307CACu);
    ctx->pc = 0x307CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CA4u;
    // 0x307ca8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x307CA4u, 0x307CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CACu;
label_307cac:
    // 0x307cac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x307cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x307cb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x307cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307cb4: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x307CB4u;
    SET_GPR_U32(ctx, 31, 0x307CBCu);
    ctx->pc = 0x307CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CB4u;
    // 0x307cb8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x307CB4u, 0x307CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CBCu;
label_307cbc:
    // 0x307cbc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x307cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x307cc0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x307cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x307cc4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x307CC4u;
    SET_GPR_U32(ctx, 31, 0x307CCCu);
    ctx->pc = 0x307CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CC4u;
    // 0x307cc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x307CC4u, 0x307CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CCCu;
label_307ccc:
    // 0x307ccc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x307cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x307cd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x307cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307cd4: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x307CD4u;
    SET_GPR_U32(ctx, 31, 0x307CDCu);
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x307CD4u, 0x307CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CDCu;
label_307cdc:
    // 0x307cdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x307cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x307ce0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x307ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x307ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x307ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307ce8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x307ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cec: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x307CECu;
    SET_GPR_U32(ctx, 31, 0x307CF4u);
    ctx->pc = 0x307CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CECu;
    // 0x307cf0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x307CECu, 0x307CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CF4u;
label_307cf4:
    // 0x307cf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x307cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x307cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cfc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x307CFCu;
    SET_GPR_U32(ctx, 31, 0x307D04u);
    ctx->pc = 0x307D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CFCu;
    // 0x307d00: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x307CFCu, 0x307D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D04u;
label_307d04:
    // 0x307d04: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x307d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x307d08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x307d0c: 0xae020370  sw          $v0, 0x370($s0)
    ctx->pc = 0x307d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x307d10: 0x8e030370  lw          $v1, 0x370($s0)
    ctx->pc = 0x307d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x307d14: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x307D14u;
    {
        const bool branch_taken_0x307d14 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x307D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D14u;
        // 0x307d18: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d14) {
            ctx->pc = 0x307D28u;
            goto label_307d28;
        }
    }
    ctx->pc = 0x307D1Cu;
    // 0x307d1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x307D1Cu;
    {
        const bool branch_taken_0x307d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d1c) {
            ctx->pc = 0x307D28u;
            goto label_307d28;
        }
    }
    ctx->pc = 0x307D24u;
    // 0x307d24: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x307d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_307d28:
    // 0x307d28: 0xae020370  sw          $v0, 0x370($s0)
    ctx->pc = 0x307d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x307d2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x307d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x307d30: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x307d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x307d34: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x307D34u;
    {
        const bool branch_taken_0x307d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d34) {
            ctx->pc = 0x307BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307be8;
        }
    }
    ctx->pc = 0x307D3Cu;
    // 0x307d3c: 0x0  nop
    ctx->pc = 0x307d3cu;
    // NOP
label_307d40:
    // 0x307d40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x307d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d48: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x307d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d4c: 0x0  nop
    ctx->pc = 0x307d4cu;
    // NOP
label_307d50:
    // 0x307d50: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x307d50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x307d54: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x307d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x307d58: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x307D58u;
    {
        const bool branch_taken_0x307d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D58u;
        // 0x307d5c: 0x26330070  addiu       $s3, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d58) {
            ctx->pc = 0x307DB0u;
            goto label_307db0;
        }
    }
    ctx->pc = 0x307D60u;
    // 0x307d60: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x307D60u;
    SET_GPR_U32(ctx, 31, 0x307D68u);
    ctx->pc = 0x307D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D60u;
    // 0x307d64: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x307D60u, 0x307D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D68u;
label_307d68:
    // 0x307d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307D68u;
    {
        const bool branch_taken_0x307d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d68) {
            ctx->pc = 0x307D80u;
            goto label_307d80;
        }
    }
    ctx->pc = 0x307D70u;
    // 0x307d70: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x307d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x307d74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x307D74u;
    {
        const bool branch_taken_0x307d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D74u;
        // 0x307d78: 0xa6620020  sh          $v0, 0x20($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d74) {
            ctx->pc = 0x307DB0u;
            goto label_307db0;
        }
    }
    ctx->pc = 0x307D7Cu;
    // 0x307d7c: 0x0  nop
    ctx->pc = 0x307d7cu;
    // NOP
label_307d80:
    // 0x307d80: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x307d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x307d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x307d88: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x307d88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x307d8c: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x307d8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x307d90: 0x86620026  lh          $v0, 0x26($s3)
    ctx->pc = 0x307d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x307d94: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x307d94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x307d98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x307D98u;
    {
        const bool branch_taken_0x307d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D98u;
        // 0x307d9c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d98) {
            ctx->pc = 0x307DA8u;
            goto label_307da8;
        }
    }
    ctx->pc = 0x307DA0u;
    // 0x307da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307DA0u;
    {
        const bool branch_taken_0x307da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DA0u;
        // 0x307da4: 0xa6620020  sh          $v0, 0x20($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307da0) {
            ctx->pc = 0x307DB0u;
            goto label_307db0;
        }
    }
    ctx->pc = 0x307DA8u;
label_307da8:
    // 0x307da8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x307da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x307dac: 0x0  nop
    ctx->pc = 0x307dacu;
    // NOP
label_307db0:
    // 0x307db0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x307db0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x307db4: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x307db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x307db8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x307DB8u;
    {
        const bool branch_taken_0x307db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DB8u;
        // 0x307dbc: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307db8) {
            ctx->pc = 0x307D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307d50;
        }
    }
    ctx->pc = 0x307DC0u;
    // 0x307dc0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x307DC0u;
    SET_GPR_U32(ctx, 31, 0x307DC8u);
    ctx->pc = 0x307DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DC0u;
    // 0x307dc4: 0x26040378  addiu       $a0, $s0, 0x378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x307DC0u, 0x307DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DC8u;
label_307dc8:
    // 0x307dc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307DC8u;
    {
        const bool branch_taken_0x307dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DC8u;
        // 0x307dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307dc8) {
            ctx->pc = 0x307DD8u;
            goto label_307dd8;
        }
    }
    ctx->pc = 0x307DD0u;
    // 0x307dd0: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x307DD0u;
    SET_GPR_U32(ctx, 31, 0x307DD8u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x307DD0u, 0x307DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DD8u;
label_307dd8:
    // 0x307dd8: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x307dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x307ddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x307de0: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x307de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x307de4: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x307de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x307de8: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x307de8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x307dec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x307DECu;
    {
        const bool branch_taken_0x307dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307dec) {
            ctx->pc = 0x307DF8u;
            goto label_307df8;
        }
    }
    ctx->pc = 0x307DF4u;
    // 0x307df4: 0xa6000054  sh          $zero, 0x54($s0)
    ctx->pc = 0x307df4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 0));
label_307df8:
    // 0x307df8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x307DF8u;
    {
        const bool branch_taken_0x307df8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x307DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DF8u;
        // 0x307dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307df8) {
            ctx->pc = 0x307E08u;
            goto label_307e08;
        }
    }
    ctx->pc = 0x307E00u;
    // 0x307e00: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x307E00u;
    SET_GPR_U32(ctx, 31, 0x307E08u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x307E00u, 0x307E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E08u;
label_307e08:
    // 0x307e08: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x307e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x307e0c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x307e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x307e10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307E10u;
    {
        const bool branch_taken_0x307e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E10u;
        // 0x307e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e10) {
            ctx->pc = 0x307E20u;
            goto label_307e20;
        }
    }
    ctx->pc = 0x307E18u;
    // 0x307e18: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x307E18u;
    SET_GPR_U32(ctx, 31, 0x307E20u);
    ctx->pc = 0x307E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E18u;
    // 0x307e1c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x307E18u, 0x307E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E20u;
label_307e20:
    // 0x307e20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x307e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307e24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x307e24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307e28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x307e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307e2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307e38: 0x3e00008  jr          $ra
    ctx->pc = 0x307E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E38u;
        // 0x307e3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307E40u;
}
