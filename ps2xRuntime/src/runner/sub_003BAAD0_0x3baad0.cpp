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

// Function: sub_003BAAD0
// Address: 0x3baad0 - 0x3bac38
void sub_003BAAD0_0x3baad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAAD0_0x3baad0");
#endif

    switch (ctx->pc) {
        case 0x3bab54u: goto label_3bab54;
        case 0x3bab60u: goto label_3bab60;
        case 0x3babc8u: goto label_3babc8;
        case 0x3bac0cu: goto label_3bac0c;
        default: break;
    }

    ctx->pc = 0x3baad0u;

    // 0x3baad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3baad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3baad4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3baad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3baad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3baad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3baadc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3baadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3baae0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3baae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3baae4: 0x1066003c  beq         $v1, $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x3BAAE4u;
    {
        const bool branch_taken_0x3baae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3BAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAAE4u;
        // 0x3baae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baae4) {
            ctx->pc = 0x3BABD8u;
            goto label_3babd8;
        }
    }
    ctx->pc = 0x3BAAECu;
    // 0x3baaec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3baaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3baaf0: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BAAF0u;
    {
        const bool branch_taken_0x3baaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3baaf0) {
            ctx->pc = 0x3BAB38u;
            goto label_3bab38;
        }
    }
    ctx->pc = 0x3BAAF8u;
    // 0x3baaf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BAAF8u;
    {
        const bool branch_taken_0x3baaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baaf8) {
            ctx->pc = 0x3BAB08u;
            goto label_3bab08;
        }
    }
    ctx->pc = 0x3BAB00u;
    // 0x3bab00: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3BAB00u;
    {
        const bool branch_taken_0x3bab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bab00) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BAB08u;
label_3bab08:
    // 0x3bab08: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3bab08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bab0c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3bab0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bab10: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3bab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3bab14: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3bab14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bab18: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3bab18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3bab1c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3bab1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bab20: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bab20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bab24: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3bab24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3bab28: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3bab28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bab2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bab30: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3BAB30u;
    {
        const bool branch_taken_0x3bab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB30u;
        // 0x3bab34: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab30) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BAB38u;
label_3bab38:
    // 0x3bab38: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3bab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3bab3c: 0x944200c4  lhu         $v0, 0xC4($v0)
    ctx->pc = 0x3bab3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x3bab40: 0x2841002d  slti        $at, $v0, 0x2D
    ctx->pc = 0x3bab40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x3bab44: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BAB44u;
    {
        const bool branch_taken_0x3bab44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bab44) {
            ctx->pc = 0x3BAB68u;
            goto label_3bab68;
        }
    }
    ctx->pc = 0x3BAB4Cu;
    // 0x3bab4c: 0xc0ef26c  jal         func_3BC9B0
    ctx->pc = 0x3BAB4Cu;
    SET_GPR_U32(ctx, 31, 0x3BAB54u);
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3BAB4Cu, 0x3BAB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAB54u;
label_3bab54:
    // 0x3bab54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bab54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bab58: 0xc0ef2e4  jal         func_3BCB90
    ctx->pc = 0x3BAB58u;
    SET_GPR_U32(ctx, 31, 0x3BAB60u);
    ctx->pc = 0x3BAB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAB58u;
    // 0x3bab5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB90u, 0x3BAB58u, 0x3BAB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAB60u;
label_3bab60:
    // 0x3bab60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3BAB60u;
    {
        const bool branch_taken_0x3bab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bab60) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BAB68u;
label_3bab68:
    // 0x3bab68: 0x92042b4d  lbu         $a0, 0x2B4D($s0)
    ctx->pc = 0x3bab68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11085)));
    // 0x3bab6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bab70: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3BAB70u;
    {
        const bool branch_taken_0x3bab70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB70u;
        // 0x3bab74: 0x30c700ff  andi        $a3, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab70) {
            ctx->pc = 0x3BABB0u;
            goto label_3babb0;
        }
    }
    ctx->pc = 0x3BAB78u;
    // 0x3bab78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3bab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bab7c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BAB7Cu;
    {
        const bool branch_taken_0x3bab7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bab7c) {
            ctx->pc = 0x3BABA8u;
            goto label_3baba8;
        }
    }
    ctx->pc = 0x3BAB84u;
    // 0x3bab84: 0x10860006  beq         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BAB84u;
    {
        const bool branch_taken_0x3bab84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x3bab84) {
            ctx->pc = 0x3BABA0u;
            goto label_3baba0;
        }
    }
    ctx->pc = 0x3BAB8Cu;
    // 0x3bab8c: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BAB8Cu;
    {
        const bool branch_taken_0x3bab8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3bab8c) {
            ctx->pc = 0x3BABA0u;
            goto label_3baba0;
        }
    }
    ctx->pc = 0x3BAB94u;
    // 0x3bab94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BAB94u;
    {
        const bool branch_taken_0x3bab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bab94) {
            ctx->pc = 0x3BABB8u;
            goto label_3babb8;
        }
    }
    ctx->pc = 0x3BAB9Cu;
    // 0x3bab9c: 0x0  nop
    ctx->pc = 0x3bab9cu;
    // NOP
label_3baba0:
    // 0x3baba0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BABA0u;
    {
        const bool branch_taken_0x3baba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BABA0u;
        // 0x3baba4: 0x64070002  daddiu      $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baba0) {
            ctx->pc = 0x3BABB8u;
            goto label_3babb8;
        }
    }
    ctx->pc = 0x3BABA8u;
label_3baba8:
    // 0x3baba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BABA8u;
    {
        const bool branch_taken_0x3baba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BABA8u;
        // 0x3babac: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baba8) {
            ctx->pc = 0x3BABB8u;
            goto label_3babb8;
        }
    }
    ctx->pc = 0x3BABB0u;
label_3babb0:
    // 0x3babb0: 0x64070005  daddiu      $a3, $zero, 0x5
    ctx->pc = 0x3babb0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x3babb4: 0x0  nop
    ctx->pc = 0x3babb4u;
    // NOP
label_3babb8:
    // 0x3babb8: 0x72e3c  dsll32      $a1, $a3, 24
    ctx->pc = 0x3babb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 24));
    // 0x3babbc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3babbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3babc0: 0xc0ef460  jal         func_3BD180
    ctx->pc = 0x3BABC0u;
    SET_GPR_U32(ctx, 31, 0x3BABC8u);
    ctx->pc = 0x3BABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BABC0u;
    // 0x3babc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD180u, 0x3BABC0u, 0x3BABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BABC8u;
label_3babc8:
    // 0x3babc8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3babc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3babcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3babccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3babd0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3babd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3babd4: 0x0  nop
    ctx->pc = 0x3babd4u;
    // NOP
label_3babd8:
    // 0x3babd8: 0x8e04085c  lw          $a0, 0x85C($s0)
    ctx->pc = 0x3babd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x3babdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BABDCu;
    {
        const bool branch_taken_0x3babdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3babdc) {
            ctx->pc = 0x3BABF0u;
            goto label_3babf0;
        }
    }
    ctx->pc = 0x3BABE4u;
    // 0x3babe4: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3babe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3babe8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3babe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3babec: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3babecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_3babf0:
    // 0x3babf0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3babf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3babf4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BABF4u;
    {
        const bool branch_taken_0x3babf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3babf4) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BABFCu;
    // 0x3babfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3babfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bac00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bac00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bac04: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BAC04u;
    SET_GPR_U32(ctx, 31, 0x3BAC0Cu);
    ctx->pc = 0x3BAC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAC04u;
    // 0x3bac08: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BAC04u, 0x3BAC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAC0Cu;
label_3bac0c:
    // 0x3bac0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BAC0Cu;
    {
        const bool branch_taken_0x3bac0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC0Cu;
        // 0x3bac10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac0c) {
            ctx->pc = 0x3BAC18u;
            goto label_3bac18;
        }
    }
    ctx->pc = 0x3BAC14u;
    // 0x3bac14: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3bac14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
label_3bac18:
    // 0x3bac18: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3bac18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bac1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bac20: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3bac20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bac24: 0x0  nop
    ctx->pc = 0x3bac24u;
    // NOP
label_3bac28:
    // 0x3bac28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bac28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bac2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bac2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bac30: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC30u;
        // 0x3bac34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAC38u;
}
