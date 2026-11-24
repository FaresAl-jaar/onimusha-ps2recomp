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

// Function: sub_00258E50
// Address: 0x258e50 - 0x258fa4
void sub_00258E50_0x258e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258E50_0x258e50");
#endif

    switch (ctx->pc) {
        case 0x258ec4u: goto label_258ec4;
        case 0x258ed8u: goto label_258ed8;
        case 0x258f10u: goto label_258f10;
        case 0x258f24u: goto label_258f24;
        case 0x258f48u: goto label_258f48;
        default: break;
    }

    ctx->pc = 0x258e50u;

    // 0x258e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258e58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x258e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x258e5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258e60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258e64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x258e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258e6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x258e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e70: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x258e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x258e74: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x258E74u;
    {
        const bool branch_taken_0x258e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E74u;
        // 0x258e78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e74) {
            ctx->pc = 0x258F80u;
            goto label_258f80;
        }
    }
    ctx->pc = 0x258E7Cu;
    // 0x258e7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x258E7Cu;
    {
        const bool branch_taken_0x258e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258e7c) {
            ctx->pc = 0x258E90u;
            goto label_258e90;
        }
    }
    ctx->pc = 0x258E84u;
    // 0x258e84: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x258E84u;
    {
        const bool branch_taken_0x258e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258e84) {
            ctx->pc = 0x258F88u;
            goto label_258f88;
        }
    }
    ctx->pc = 0x258E8Cu;
    // 0x258e8c: 0x0  nop
    ctx->pc = 0x258e8cu;
    // NOP
label_258e90:
    // 0x258e90: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x258e90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x258e94: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x258e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258e98: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x258e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x258e9c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x258E9Cu;
    {
        const bool branch_taken_0x258e9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x258e9c) {
            ctx->pc = 0x258EE0u;
            goto label_258ee0;
        }
    }
    ctx->pc = 0x258EA4u;
    // 0x258ea4: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x258EA4u;
    {
        const bool branch_taken_0x258ea4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x258EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EA4u;
        // 0x258ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ea4) {
            ctx->pc = 0x258EBCu;
            goto label_258ebc;
        }
    }
    ctx->pc = 0x258EACu;
    // 0x258eac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x258eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x258eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258EB4u;
    {
        const bool branch_taken_0x258eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EB4u;
        // 0x258eb8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258eb4) {
            ctx->pc = 0x258EC8u;
            goto label_258ec8;
        }
    }
    ctx->pc = 0x258EBCu;
label_258ebc:
    // 0x258ebc: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x258EBCu;
    SET_GPR_U32(ctx, 31, 0x258EC4u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x258EBCu, 0x258EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EC4u;
label_258ec4:
    // 0x258ec4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x258ec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_258ec8:
    // 0x258ec8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x258ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258ecc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x258eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258ed0: 0xc0767f4  jal         func_1D9FD0
    ctx->pc = 0x258ED0u;
    SET_GPR_U32(ctx, 31, 0x258ED8u);
    ctx->pc = 0x258ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258ED0u;
    // 0x258ed4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x258ED0u, 0x258ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258ED8u;
label_258ed8:
    // 0x258ed8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x258ED8u;
    {
        const bool branch_taken_0x258ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258ed8) {
            ctx->pc = 0x258F38u;
            goto label_258f38;
        }
    }
    ctx->pc = 0x258EE0u;
label_258ee0:
    // 0x258ee0: 0x8625000a  lh          $a1, 0xA($s1)
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x258ee4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x258ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x258ee8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x258EE8u;
    {
        const bool branch_taken_0x258ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258ee8) {
            ctx->pc = 0x258F30u;
            goto label_258f30;
        }
    }
    ctx->pc = 0x258EF0u;
    // 0x258ef0: 0x86260006  lh          $a2, 0x6($s1)
    ctx->pc = 0x258ef0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x258ef4: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x258EF4u;
    {
        const bool branch_taken_0x258ef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x258EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EF4u;
        // 0x258ef8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ef4) {
            ctx->pc = 0x258F08u;
            goto label_258f08;
        }
    }
    ctx->pc = 0x258EFCu;
    // 0x258efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258f00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258F00u;
    {
        const bool branch_taken_0x258f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F00u;
        // 0x258f04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f00) {
            ctx->pc = 0x258F14u;
            goto label_258f14;
        }
    }
    ctx->pc = 0x258F08u;
label_258f08:
    // 0x258f08: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x258F08u;
    SET_GPR_U32(ctx, 31, 0x258F10u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x258F08u, 0x258F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F10u;
label_258f10:
    // 0x258f10: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x258f10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_258f14:
    // 0x258f14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x258f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258f18: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x258f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x258f1c: 0xc0767f4  jal         func_1D9FD0
    ctx->pc = 0x258F1Cu;
    SET_GPR_U32(ctx, 31, 0x258F24u);
    ctx->pc = 0x258F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F1Cu;
    // 0x258f20: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x258F1Cu, 0x258F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F24u;
label_258f24:
    // 0x258f24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258F24u;
    {
        const bool branch_taken_0x258f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258f24) {
            ctx->pc = 0x258F38u;
            goto label_258f38;
        }
    }
    ctx->pc = 0x258F2Cu;
    // 0x258f2c: 0x0  nop
    ctx->pc = 0x258f2cu;
    // NOP
label_258f30:
    // 0x258f30: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x258f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x258f34: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x258f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_258f38:
    // 0x258f38: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x258f38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x258f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f40: 0xc0b9a08  jal         func_2E6820
    ctx->pc = 0x258F40u;
    SET_GPR_U32(ctx, 31, 0x258F48u);
    ctx->pc = 0x258F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F40u;
    // 0x258f44: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6820u, 0x258F40u, 0x258F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F48u;
label_258f48:
    // 0x258f48: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x258f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x258f4c: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x258f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258f50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258f54: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x258f54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x258f58: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258f5c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x258f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x258f60: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258f64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258F64u;
    {
        const bool branch_taken_0x258f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258f64) {
            ctx->pc = 0x258F88u;
            goto label_258f88;
        }
    }
    ctx->pc = 0x258F6Cu;
    // 0x258f6c: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x258f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x258f70: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x258f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x258f74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258f78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258F78u;
    {
        const bool branch_taken_0x258f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F78u;
        // 0x258f7c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f78) {
            ctx->pc = 0x258F88u;
            goto label_258f88;
        }
    }
    ctx->pc = 0x258F80u;
label_258f80:
    // 0x258f80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x258f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258f84: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x258f84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_258f88:
    // 0x258f88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x258f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x258f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258f90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x258F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F9Cu;
        // 0x258fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258FA4u;
}
