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

// Function: sub_00280EF0
// Address: 0x280ef0 - 0x280fcc
void sub_00280EF0_0x280ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280EF0_0x280ef0");
#endif

    switch (ctx->pc) {
        case 0x280f1cu: goto label_280f1c;
        case 0x280f78u: goto label_280f78;
        default: break;
    }

    ctx->pc = 0x280ef0u;

    // 0x280ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x280ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x280ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x280ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280efc: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x280efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x280f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280f0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x280f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f10: 0xc7808130  lwc1        $f0, -0x7ED0($gp)
    ctx->pc = 0x280f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f14: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x280F14u;
    SET_GPR_U32(ctx, 31, 0x280F1Cu);
    ctx->pc = 0x280F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280F14u;
    // 0x280f18: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x280F14u, 0x280F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F1Cu;
label_280f1c:
    // 0x280f1c: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x280f1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x280f20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280f24: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x280F24u;
    {
        const bool branch_taken_0x280f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x280F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F24u;
        // 0x280f28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f24) {
            ctx->pc = 0x280F90u;
            goto label_280f90;
        }
    }
    ctx->pc = 0x280F2Cu;
    // 0x280f2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280f30: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x280F30u;
    {
        const bool branch_taken_0x280f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x280f30) {
            ctx->pc = 0x280F80u;
            goto label_280f80;
        }
    }
    ctx->pc = 0x280F38u;
    // 0x280f38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280F38u;
    {
        const bool branch_taken_0x280f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f38) {
            ctx->pc = 0x280F48u;
            goto label_280f48;
        }
    }
    ctx->pc = 0x280F40u;
    // 0x280f40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x280F40u;
    {
        const bool branch_taken_0x280f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280f40) {
            ctx->pc = 0x280FB8u;
            goto label_280fb8;
        }
    }
    ctx->pc = 0x280F48u;
label_280f48:
    // 0x280f48: 0x92230838  lbu         $v1, 0x838($s1)
    ctx->pc = 0x280f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x280f4c: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x280f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x280f50: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x280f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f58: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x280f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x280f5c: 0x9063007c  lbu         $v1, 0x7C($v1)
    ctx->pc = 0x280f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x280f60: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x280f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x280f64: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x280f64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x280f68: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x280f68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x280f6c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x280f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x280f70: 0xc096d04  jal         func_25B410
    ctx->pc = 0x280F70u;
    SET_GPR_U32(ctx, 31, 0x280F78u);
    ctx->pc = 0x280F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280F70u;
    // 0x280f74: 0xae2207ec  sw          $v0, 0x7EC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x280F70u, 0x280F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F78u;
label_280f78:
    // 0x280f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280f7c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x280f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_280f80:
    // 0x280f80: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x280f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x280f84: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x280F84u;
    {
        const bool branch_taken_0x280f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F84u;
        // 0x280f88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f84) {
            ctx->pc = 0x280FB8u;
            goto label_280fb8;
        }
    }
    ctx->pc = 0x280F8Cu;
    // 0x280f8c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x280f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_280f90:
    // 0x280f90: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280F90u;
    {
        const bool branch_taken_0x280f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f90) {
            ctx->pc = 0x280FB8u;
            goto label_280fb8;
        }
    }
    ctx->pc = 0x280F98u;
    // 0x280f98: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x280f98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280f9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280fa0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280FA0u;
    {
        const bool branch_taken_0x280fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x280FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FA0u;
        // 0x280fa4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fa0) {
            ctx->pc = 0x280FB0u;
            goto label_280fb0;
        }
    }
    ctx->pc = 0x280FA8u;
    // 0x280fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280FA8u;
    {
        const bool branch_taken_0x280fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FA8u;
        // 0x280fac: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fa8) {
            ctx->pc = 0x280FB8u;
            goto label_280fb8;
        }
    }
    ctx->pc = 0x280FB0u;
label_280fb0:
    // 0x280fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280fb4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x280fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_280fb8:
    // 0x280fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x280fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x280FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FC4u;
        // 0x280fc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280FCCu;
}
