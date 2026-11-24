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

// Function: sub_002BCA90
// Address: 0x2bca90 - 0x2bcb64
void sub_002BCA90_0x2bca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCA90_0x2bca90");
#endif

    switch (ctx->pc) {
        case 0x2bcab0u: goto label_2bcab0;
        case 0x2bcac0u: goto label_2bcac0;
        case 0x2bcb34u: goto label_2bcb34;
        default: break;
    }

    ctx->pc = 0x2bca90u;

    // 0x2bca90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bca94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bca98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bca9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bcaa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bcaa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bcaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaa8: 0xc0b2bc0  jal         func_2CAF00
    ctx->pc = 0x2BCAA8u;
    SET_GPR_U32(ctx, 31, 0x2BCAB0u);
    ctx->pc = 0x2BCAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAA8u;
    // 0x2bcaac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2BCAA8u, 0x2BCAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAB0u;
label_2bcab0:
    // 0x2bcab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcab4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2bcab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcab8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BCAB8u;
    {
        const bool branch_taken_0x2bcab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcab8) {
            ctx->pc = 0x2BCB48u;
            goto label_2bcb48;
        }
    }
    ctx->pc = 0x2BCAC0u;
label_2bcac0:
    // 0x2bcac0: 0x1250001d  beq         $s2, $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BCAC0u;
    {
        const bool branch_taken_0x2bcac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x2bcac0) {
            ctx->pc = 0x2BCB38u;
            goto label_2bcb38;
        }
    }
    ctx->pc = 0x2BCAC8u;
    // 0x2bcac8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2bcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2bcacc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2bcaccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bcad0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCAD0u;
    {
        const bool branch_taken_0x2bcad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAD0u;
        // 0x2bcad4: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcad0) {
            ctx->pc = 0x2BCAE0u;
            goto label_2bcae0;
        }
    }
    ctx->pc = 0x2BCAD8u;
    // 0x2bcad8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bcad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcadc: 0x0  nop
    ctx->pc = 0x2bcadcu;
    // NOP
label_2bcae0:
    // 0x2bcae0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BCAE0u;
    {
        const bool branch_taken_0x2bcae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcae0) {
            ctx->pc = 0x2BCB38u;
            goto label_2bcb38;
        }
    }
    ctx->pc = 0x2BCAE8u;
    // 0x2bcae8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2bcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2bcaec: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2bcaecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcaf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BCAF0u;
    {
        const bool branch_taken_0x2bcaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcaf0) {
            ctx->pc = 0x2BCB38u;
            goto label_2bcb38;
        }
    }
    ctx->pc = 0x2BCAF8u;
    // 0x2bcaf8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2bcaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2bcafc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCAFCu;
    {
        const bool branch_taken_0x2bcafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcafc) {
            ctx->pc = 0x2BCB18u;
            goto label_2bcb18;
        }
    }
    ctx->pc = 0x2BCB04u;
    // 0x2bcb04: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2bcb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bcb08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bcb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bcb0c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2bcb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2bcb10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCB10u;
    {
        const bool branch_taken_0x2bcb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB10u;
        // 0x2bcb14: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb10) {
            ctx->pc = 0x2BCB1Cu;
            goto label_2bcb1c;
        }
    }
    ctx->pc = 0x2BCB18u;
label_2bcb18:
    // 0x2bcb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcb1c:
    // 0x2bcb1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCB1Cu;
    {
        const bool branch_taken_0x2bcb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb1c) {
            ctx->pc = 0x2BCB38u;
            goto label_2bcb38;
        }
    }
    ctx->pc = 0x2BCB24u;
    // 0x2bcb24: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x2bcb24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2bcb28: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x2bcb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x2bcb2c: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BCB2Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB34u);
    ctx->pc = 0x2BCB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB2Cu;
    // 0x2bcb30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BCB2Cu, 0x2BCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB34u;
label_2bcb34:
    // 0x2bcb34: 0x0  nop
    ctx->pc = 0x2bcb34u;
    // NOP
label_2bcb38:
    // 0x2bcb38: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x2bcb38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2bcb3c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2bcb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcb40: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2BCB40u;
    {
        const bool branch_taken_0x2bcb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb40) {
            ctx->pc = 0x2BCAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcac0;
        }
    }
    ctx->pc = 0x2BCB48u;
label_2bcb48:
    // 0x2bcb48: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2bcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2bcb4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bcb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bcb50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bcb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bcb54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB5Cu;
        // 0x2bcb60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB64u;
}
