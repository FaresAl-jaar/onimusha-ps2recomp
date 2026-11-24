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

// Function: sub_003DB980
// Address: 0x3db980 - 0x3dba8c
void sub_003DB980_0x3db980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB980_0x3db980");
#endif

    switch (ctx->pc) {
        case 0x3db9b8u: goto label_3db9b8;
        case 0x3dba04u: goto label_3dba04;
        case 0x3dba14u: goto label_3dba14;
        default: break;
    }

    ctx->pc = 0x3db980u;

    // 0x3db980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3db980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3db984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3db984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3db988: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3db988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3db98c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3db98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3db990: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3db990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3db994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3db994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3db998: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3db998u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3db99c: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3db99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3db9a0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DB9A0u;
    {
        const bool branch_taken_0x3db9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9A0u;
        // 0x3db9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9a0) {
            ctx->pc = 0x3DB9C8u;
            goto label_3db9c8;
        }
    }
    ctx->pc = 0x3DB9A8u;
    // 0x3db9a8: 0x860600c2  lh          $a2, 0xC2($s0)
    ctx->pc = 0x3db9a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3db9ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x3db9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x3db9b0: 0xc0a2640  jal         func_289900
    ctx->pc = 0x3DB9B0u;
    SET_GPR_U32(ctx, 31, 0x3DB9B8u);
    ctx->pc = 0x3DB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB9B0u;
    // 0x3db9b4: 0x24a50cc0  addiu       $a1, $a1, 0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289900u, 0x3DB9B0u, 0x3DB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB9B8u;
label_3db9b8:
    // 0x3db9b8: 0x8e0207c0  lw          $v0, 0x7C0($s0)
    ctx->pc = 0x3db9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3db9bc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3DB9BCu;
    {
        const bool branch_taken_0x3db9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9BCu;
        // 0x3db9c0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9bc) {
            ctx->pc = 0x3DBA70u;
            goto label_3dba70;
        }
    }
    ctx->pc = 0x3DB9C4u;
    // 0x3db9c4: 0x0  nop
    ctx->pc = 0x3db9c4u;
    // NOP
label_3db9c8:
    // 0x3db9c8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3db9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3db9cc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3db9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3db9d0: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x3db9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3db9d4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3db9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3db9d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3db9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3db9dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3db9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3db9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3db9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3db9e4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3db9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3db9e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3db9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3db9ec: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DB9ECu;
    {
        const bool branch_taken_0x3db9ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9ECu;
        // 0x3db9f0: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9ec) {
            ctx->pc = 0x3DBA50u;
            goto label_3dba50;
        }
    }
    ctx->pc = 0x3DB9F4u;
    // 0x3db9f4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DB9F4u;
    {
        const bool branch_taken_0x3db9f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9F4u;
        // 0x3db9f8: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9f4) {
            ctx->pc = 0x3DBA40u;
            goto label_3dba40;
        }
    }
    ctx->pc = 0x3DB9FCu;
    // 0x3db9fc: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3DB9FCu;
    SET_GPR_U32(ctx, 31, 0x3DBA04u);
    ctx->pc = 0x3DBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB9FCu;
    // 0x3dba00: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3DB9FCu, 0x3DBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBA04u;
label_3dba04:
    // 0x3dba04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dba04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3dba08: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3dba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dba0c: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3DBA0Cu;
    SET_GPR_U32(ctx, 31, 0x3DBA14u);
    ctx->pc = 0x3DBA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBA0Cu;
    // 0x3dba10: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3DBA0Cu, 0x3DBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBA14u;
label_3dba14:
    // 0x3dba14: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3dba14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dba18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DBA18u;
    {
        const bool branch_taken_0x3dba18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dba18) {
            ctx->pc = 0x3DBA30u;
            goto label_3dba30;
        }
    }
    ctx->pc = 0x3DBA20u;
    // 0x3dba20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3dba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3dba24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBA24u;
    {
        const bool branch_taken_0x3dba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA24u;
        // 0x3dba28: 0xae0207c0  sw          $v0, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba24) {
            ctx->pc = 0x3DBA38u;
            goto label_3dba38;
        }
    }
    ctx->pc = 0x3DBA2Cu;
    // 0x3dba2c: 0x0  nop
    ctx->pc = 0x3dba2cu;
    // NOP
label_3dba30:
    // 0x3dba30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dba34: 0xae0207c0  sw          $v0, 0x7C0($s0)
    ctx->pc = 0x3dba34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 2));
label_3dba38:
    // 0x3dba38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3DBA38u;
    {
        const bool branch_taken_0x3dba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA38u;
        // 0x3dba3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba38) {
            ctx->pc = 0x3DBA70u;
            goto label_3dba70;
        }
    }
    ctx->pc = 0x3DBA40u;
label_3dba40:
    // 0x3dba40: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3dba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3dba44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DBA44u;
    {
        const bool branch_taken_0x3dba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA44u;
        // 0x3dba48: 0xae0307c0  sw          $v1, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba44) {
            ctx->pc = 0x3DBA70u;
            goto label_3dba70;
        }
    }
    ctx->pc = 0x3DBA4Cu;
    // 0x3dba4c: 0x0  nop
    ctx->pc = 0x3dba4cu;
    // NOP
label_3dba50:
    // 0x3dba50: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DBA50u;
    {
        const bool branch_taken_0x3dba50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dba50) {
            ctx->pc = 0x3DBA68u;
            goto label_3dba68;
        }
    }
    ctx->pc = 0x3DBA58u;
    // 0x3dba58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3dba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dba5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBA5Cu;
    {
        const bool branch_taken_0x3dba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA5Cu;
        // 0x3dba60: 0xae0307c0  sw          $v1, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba5c) {
            ctx->pc = 0x3DBA70u;
            goto label_3dba70;
        }
    }
    ctx->pc = 0x3DBA64u;
    // 0x3dba64: 0x0  nop
    ctx->pc = 0x3dba64u;
    // NOP
label_3dba68:
    // 0x3dba68: 0xae0007c0  sw          $zero, 0x7C0($s0)
    ctx->pc = 0x3dba68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
    // 0x3dba6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dba6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dba70:
    // 0x3dba70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dba70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dba74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dba74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dba78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dba7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dba7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dba80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dba80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dba84: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA84u;
        // 0x3dba88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBA8Cu;
}
