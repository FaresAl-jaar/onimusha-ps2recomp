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

// Function: sub_00144ED0
// Address: 0x144ed0 - 0x145010
void sub_00144ED0_0x144ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144ED0_0x144ed0");
#endif

    switch (ctx->pc) {
        case 0x144fa4u: goto label_144fa4;
        default: break;
    }

    ctx->pc = 0x144ed0u;

    // 0x144ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144ed4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144ed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144ee0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x144ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144ee8: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x144ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x144eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144EECu;
    {
        const bool branch_taken_0x144eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EECu;
        // 0x144ef0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144eec) {
            ctx->pc = 0x144F00u;
            goto label_144f00;
        }
    }
    ctx->pc = 0x144EF4u;
    // 0x144ef4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x144EF4u;
    {
        const bool branch_taken_0x144ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144ef4) {
            ctx->pc = 0x144FF8u;
            goto label_144ff8;
        }
    }
    ctx->pc = 0x144EFCu;
    // 0x144efc: 0x0  nop
    ctx->pc = 0x144efcu;
    // NOP
label_144f00:
    // 0x144f00: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x144f00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x144f04: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x144f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x144f08: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x144F08u;
    {
        const bool branch_taken_0x144f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x144F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F08u;
        // 0x144f0c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f08) {
            ctx->pc = 0x144F80u;
            goto label_144f80;
        }
    }
    ctx->pc = 0x144F10u;
    // 0x144f10: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x144F10u;
    {
        const bool branch_taken_0x144f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x144f10) {
            ctx->pc = 0x144F70u;
            goto label_144f70;
        }
    }
    ctx->pc = 0x144F18u;
    // 0x144f18: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x144f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x144f1c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x144F1Cu;
    {
        const bool branch_taken_0x144f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x144F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F1Cu;
        // 0x144f20: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f1c) {
            ctx->pc = 0x144F60u;
            goto label_144f60;
        }
    }
    ctx->pc = 0x144F24u;
    // 0x144f24: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x144F24u;
    {
        const bool branch_taken_0x144f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x144f24) {
            ctx->pc = 0x144F50u;
            goto label_144f50;
        }
    }
    ctx->pc = 0x144F2Cu;
    // 0x144f2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x144f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x144f30: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144F30u;
    {
        const bool branch_taken_0x144f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x144f30) {
            ctx->pc = 0x144F40u;
            goto label_144f40;
        }
    }
    ctx->pc = 0x144F38u;
    // 0x144f38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x144F38u;
    {
        const bool branch_taken_0x144f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144f38) {
            ctx->pc = 0x144F90u;
            goto label_144f90;
        }
    }
    ctx->pc = 0x144F40u;
label_144f40:
    // 0x144f40: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x144f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x144f44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x144F44u;
    {
        const bool branch_taken_0x144f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F44u;
        // 0x144f48: 0x24a5fbd0  addiu       $a1, $a1, -0x430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f44) {
            ctx->pc = 0x144F98u;
            goto label_144f98;
        }
    }
    ctx->pc = 0x144F4Cu;
    // 0x144f4c: 0x0  nop
    ctx->pc = 0x144f4cu;
    // NOP
label_144f50:
    // 0x144f50: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x144f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x144f54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x144F54u;
    {
        const bool branch_taken_0x144f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F54u;
        // 0x144f58: 0x24a5fc20  addiu       $a1, $a1, -0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f54) {
            ctx->pc = 0x144F98u;
            goto label_144f98;
        }
    }
    ctx->pc = 0x144F5Cu;
    // 0x144f5c: 0x0  nop
    ctx->pc = 0x144f5cu;
    // NOP
label_144f60:
    // 0x144f60: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x144f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x144f64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x144F64u;
    {
        const bool branch_taken_0x144f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F64u;
        // 0x144f68: 0x24a5fc40  addiu       $a1, $a1, -0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f64) {
            ctx->pc = 0x144F98u;
            goto label_144f98;
        }
    }
    ctx->pc = 0x144F6Cu;
    // 0x144f6c: 0x0  nop
    ctx->pc = 0x144f6cu;
    // NOP
label_144f70:
    // 0x144f70: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x144f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x144f74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144F74u;
    {
        const bool branch_taken_0x144f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F74u;
        // 0x144f78: 0x24a5fc60  addiu       $a1, $a1, -0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f74) {
            ctx->pc = 0x144F98u;
            goto label_144f98;
        }
    }
    ctx->pc = 0x144F7Cu;
    // 0x144f7c: 0x0  nop
    ctx->pc = 0x144f7cu;
    // NOP
label_144f80:
    // 0x144f80: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x144f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x144f84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x144F84u;
    {
        const bool branch_taken_0x144f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F84u;
        // 0x144f88: 0x24a5fc80  addiu       $a1, $a1, -0x380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f84) {
            ctx->pc = 0x144F98u;
            goto label_144f98;
        }
    }
    ctx->pc = 0x144F8Cu;
    // 0x144f8c: 0x0  nop
    ctx->pc = 0x144f8cu;
    // NOP
label_144f90:
    // 0x144f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f94: 0x0  nop
    ctx->pc = 0x144f94u;
    // NOP
label_144f98:
    // 0x144f98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f9c: 0xc051404  jal         func_145010
    ctx->pc = 0x144F9Cu;
    SET_GPR_U32(ctx, 31, 0x144FA4u);
    ctx->pc = 0x144FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F9Cu;
    // 0x144fa0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145010u, 0x144F9Cu, 0x144FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144FA4u;
label_144fa4:
    // 0x144fa4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x144FA4u;
    {
        const bool branch_taken_0x144fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FA4u;
        // 0x144fa8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fa4) {
            ctx->pc = 0x144FF8u;
            goto label_144ff8;
        }
    }
    ctx->pc = 0x144FACu;
    // 0x144fac: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x144FACu;
    {
        const bool branch_taken_0x144fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x144fac) {
            ctx->pc = 0x144FD0u;
            goto label_144fd0;
        }
    }
    ctx->pc = 0x144FB4u;
    // 0x144fb4: 0x2603ffdc  addiu       $v1, $s0, -0x24
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967260));
    // 0x144fb8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x144fb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x144fbc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x144FBCu;
    {
        const bool branch_taken_0x144fbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FBCu;
        // 0x144fc0: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fbc) {
            ctx->pc = 0x144FD0u;
            goto label_144fd0;
        }
    }
    ctx->pc = 0x144FC4u;
    // 0x144fc4: 0x1603000c  bne         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x144FC4u;
    {
        const bool branch_taken_0x144fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x144fc4) {
            ctx->pc = 0x144FF8u;
            goto label_144ff8;
        }
    }
    ctx->pc = 0x144FCCu;
    // 0x144fcc: 0x0  nop
    ctx->pc = 0x144fccu;
    // NOP
label_144fd0:
    // 0x144fd0: 0x83828550  lb          $v0, -0x7AB0($gp)
    ctx->pc = 0x144fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935888)));
    // 0x144fd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x144FD4u;
    {
        const bool branch_taken_0x144fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FD4u;
        // 0x144fd8: 0x3c010041  lui         $at, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fd4) {
            ctx->pc = 0x144FF0u;
            goto label_144ff0;
        }
    }
    ctx->pc = 0x144FDCu;
    // 0x144fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144fe0: 0xa032aa30  sb          $s2, -0x55D0($at)
    ctx->pc = 0x144fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294945328), (uint8_t)GPR_U32(ctx, 18));
    // 0x144fe4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x144fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x144fe8: 0xa3828550  sb          $v0, -0x7AB0($gp)
    ctx->pc = 0x144fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935888), (uint8_t)GPR_U32(ctx, 2));
    // 0x144fec: 0xa031aa31  sb          $s1, -0x55CF($at)
    ctx->pc = 0x144fecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x40AA31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x40AA31u, _value); } while (0);
label_144ff0:
    // 0x144ff0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x144ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x144ff4: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
label_144ff8:
    // 0x144ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x144ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145008: 0x3e00008  jr          $ra
    ctx->pc = 0x145008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145008u;
        // 0x14500c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145010u;
}
