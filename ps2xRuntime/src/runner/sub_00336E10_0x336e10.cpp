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

// Function: sub_00336E10
// Address: 0x336e10 - 0x336f40
void sub_00336E10_0x336e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336E10_0x336e10");
#endif

    switch (ctx->pc) {
        case 0x336e3cu: goto label_336e3c;
        case 0x336e70u: goto label_336e70;
        case 0x336e8cu: goto label_336e8c;
        case 0x336eb8u: goto label_336eb8;
        default: break;
    }

    ctx->pc = 0x336e10u;

    // 0x336e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x336e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x336e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x336e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x336e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336e24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x336e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x336e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336e2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x336e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e30: 0x94520004  lhu         $s2, 0x4($v0)
    ctx->pc = 0x336e30u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336e34: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x336E34u;
    SET_GPR_U32(ctx, 31, 0x336E3Cu);
    ctx->pc = 0x336E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E34u;
    // 0x336e38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x336E34u, 0x336E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E3Cu;
label_336e3c:
    // 0x336e3c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x336e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x336e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x336e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x336e44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336E44u;
    {
        const bool branch_taken_0x336e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E44u;
        // 0x336e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e44) {
            ctx->pc = 0x336E58u;
            goto label_336e58;
        }
    }
    ctx->pc = 0x336E4Cu;
    // 0x336e4c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x336E4Cu;
    {
        const bool branch_taken_0x336e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336e4c) {
            ctx->pc = 0x336F28u;
            goto label_336f28;
        }
    }
    ctx->pc = 0x336E54u;
    // 0x336e54: 0x0  nop
    ctx->pc = 0x336e54u;
    // NOP
label_336e58:
    // 0x336e58: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x336e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x336e5c: 0x8c221598  lw          $v0, 0x1598($at)
    ctx->pc = 0x336e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x921598u));
    // 0x336e60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x336E60u;
    {
        const bool branch_taken_0x336e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E60u;
        // 0x336e64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e60) {
            ctx->pc = 0x336E80u;
            goto label_336e80;
        }
    }
    ctx->pc = 0x336E68u;
    // 0x336e68: 0xc0da978  jal         func_36A5E0
    ctx->pc = 0x336E68u;
    SET_GPR_U32(ctx, 31, 0x336E70u);
    ctx->pc = 0x36A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A5E0u, 0x336E68u, 0x336E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E70u;
label_336e70:
    // 0x336e70: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x336E70u;
    {
        const bool branch_taken_0x336e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336e70) {
            ctx->pc = 0x336EA8u;
            goto label_336ea8;
        }
    }
    ctx->pc = 0x336E78u;
    // 0x336e78: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x336E78u;
    {
        const bool branch_taken_0x336e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E78u;
        // 0x336e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e78) {
            ctx->pc = 0x336F28u;
            goto label_336f28;
        }
    }
    ctx->pc = 0x336E80u;
label_336e80:
    // 0x336e80: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x336e80u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336e84: 0xc0da9a0  jal         func_36A680
    ctx->pc = 0x336E84u;
    SET_GPR_U32(ctx, 31, 0x336E8Cu);
    ctx->pc = 0x336E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E84u;
    // 0x336e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A680u, 0x336E84u, 0x336E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E8Cu;
label_336e8c:
    // 0x336e8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x336e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336e90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x336e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x336e94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336E94u;
    {
        const bool branch_taken_0x336e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x336e94) {
            ctx->pc = 0x336EA8u;
            goto label_336ea8;
        }
    }
    ctx->pc = 0x336E9Cu;
    // 0x336e9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x336E9Cu;
    {
        const bool branch_taken_0x336e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E9Cu;
        // 0x336ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e9c) {
            ctx->pc = 0x336F28u;
            goto label_336f28;
        }
    }
    ctx->pc = 0x336EA4u;
    // 0x336ea4: 0x0  nop
    ctx->pc = 0x336ea4u;
    // NOP
label_336ea8:
    // 0x336ea8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x336ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x336eac: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x336eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x336eb0: 0xc0dace0  jal         func_36B380
    ctx->pc = 0x336EB0u;
    SET_GPR_U32(ctx, 31, 0x336EB8u);
    ctx->pc = 0x336EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336EB0u;
    // 0x336eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B380u, 0x336EB0u, 0x336EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336EB8u;
label_336eb8:
    // 0x336eb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x336eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336ebc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x336EBCu;
    {
        const bool branch_taken_0x336ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x336ebc) {
            ctx->pc = 0x336EE8u;
            goto label_336ee8;
        }
    }
    ctx->pc = 0x336EC4u;
    // 0x336ec4: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x336ec4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x336ec8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336ecc: 0x64040005  daddiu      $a0, $zero, 0x5
    ctx->pc = 0x336eccu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x336ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ed4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336ed8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336edc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x336EDCu;
    {
        const bool branch_taken_0x336edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336EDCu;
        // 0x336ee0: 0xa2230008  sb          $v1, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336edc) {
            ctx->pc = 0x336F28u;
            goto label_336f28;
        }
    }
    ctx->pc = 0x336EE4u;
    // 0x336ee4: 0x0  nop
    ctx->pc = 0x336ee4u;
    // NOP
label_336ee8:
    // 0x336ee8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x336ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x336eec: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x336eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336ef0: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x336ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x336ef4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x336EF4u;
    {
        const bool branch_taken_0x336ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x336ef4) {
            ctx->pc = 0x336F20u;
            goto label_336f20;
        }
    }
    ctx->pc = 0x336EFCu;
    // 0x336efc: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x336efcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x336f00: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336f04: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x336f04u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x336f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336f0c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336f10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336f14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336F14u;
    {
        const bool branch_taken_0x336f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F14u;
        // 0x336f18: 0xa2230008  sb          $v1, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f14) {
            ctx->pc = 0x336F28u;
            goto label_336f28;
        }
    }
    ctx->pc = 0x336F1Cu;
    // 0x336f1c: 0x0  nop
    ctx->pc = 0x336f1cu;
    // NOP
label_336f20:
    // 0x336f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336f24: 0x0  nop
    ctx->pc = 0x336f24u;
    // NOP
label_336f28:
    // 0x336f28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x336f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f38: 0x3e00008  jr          $ra
    ctx->pc = 0x336F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F38u;
        // 0x336f3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336F40u;
}
