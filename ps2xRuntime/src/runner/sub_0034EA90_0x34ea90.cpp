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

// Function: sub_0034EA90
// Address: 0x34ea90 - 0x34ebb8
void sub_0034EA90_0x34ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EA90_0x34ea90");
#endif

    switch (ctx->pc) {
        case 0x34eaecu: goto label_34eaec;
        case 0x34eb84u: goto label_34eb84;
        case 0x34eb9cu: goto label_34eb9c;
        default: break;
    }

    ctx->pc = 0x34ea90u;

    // 0x34ea90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ea94: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x34ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34ea98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34ea9c: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34ea9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34eaa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34eaa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34eaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34eaa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34eaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34eaac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34EAACu;
    {
        const bool branch_taken_0x34eaac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAACu;
        // 0x34eab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eaac) {
            ctx->pc = 0x34EAC0u;
            goto label_34eac0;
        }
    }
    ctx->pc = 0x34EAB4u;
    // 0x34eab4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34EAB4u;
    {
        const bool branch_taken_0x34eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAB4u;
        // 0x34eab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eab4) {
            ctx->pc = 0x34EAE0u;
            goto label_34eae0;
        }
    }
    ctx->pc = 0x34EABCu;
    // 0x34eabc: 0x0  nop
    ctx->pc = 0x34eabcu;
    // NOP
label_34eac0:
    // 0x34eac0: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34eac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34eac4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34EAC4u;
    {
        const bool branch_taken_0x34eac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34eac4) {
            ctx->pc = 0x34EAD8u;
            goto label_34ead8;
        }
    }
    ctx->pc = 0x34EACCu;
    // 0x34eacc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EACCu;
    {
        const bool branch_taken_0x34eacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EACCu;
        // 0x34ead0: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eacc) {
            ctx->pc = 0x34EAE0u;
            goto label_34eae0;
        }
    }
    ctx->pc = 0x34EAD4u;
    // 0x34ead4: 0x0  nop
    ctx->pc = 0x34ead4u;
    // NOP
label_34ead8:
    // 0x34ead8: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34eadc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34eae0:
    // 0x34eae0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x34eae0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34eae4: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34EAE4u;
    SET_GPR_U32(ctx, 31, 0x34EAECu);
    ctx->pc = 0x34EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EAE4u;
    // 0x34eae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34EAE4u, 0x34EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EAECu;
label_34eaec:
    // 0x34eaec: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x34EAECu;
    {
        const bool branch_taken_0x34eaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34eaec) {
            ctx->pc = 0x34EBA0u;
            goto label_34eba0;
        }
    }
    ctx->pc = 0x34EAF4u;
    // 0x34eaf4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x34eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x34eaf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34eafc: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x34eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x34eb00: 0x2e010005  sltiu       $at, $s0, 0x5
    ctx->pc = 0x34eb00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x34eb04: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x34eb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34eb08: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x34eb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x34eb0c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34eb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34eb10: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x34eb10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x34eb14: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x34eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x34eb18: 0x90660014  lbu         $a2, 0x14($v1)
    ctx->pc = 0x34eb18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x34eb1c: 0x30c40002  andi        $a0, $a2, 0x2
    ctx->pc = 0x34eb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x34eb20: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x34eb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x34eb24: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x34eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34eb28: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x34eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x34eb2c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x34eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34eb30: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x34eb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x34eb34: 0x320c2  srl         $a0, $v1, 3
    ctx->pc = 0x34eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x34eb38: 0x30c30010  andi        $v1, $a2, 0x10
    ctx->pc = 0x34eb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x34eb3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34eb40: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x34eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x34eb44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34eb48: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x34EB48u;
    {
        const bool branch_taken_0x34eb48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB48u;
        // 0x34eb4c: 0xa2230027  sb          $v1, 0x27($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb48) {
            ctx->pc = 0x34EBA0u;
            goto label_34eba0;
        }
    }
    ctx->pc = 0x34EB50u;
    // 0x34eb50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x34eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x34eb54: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x34eb58: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x34eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34eb5c: 0x24637c40  addiu       $v1, $v1, 0x7C40
    ctx->pc = 0x34eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31808));
    // 0x34eb60: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34eb64: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x34eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34eb68: 0x24427c44  addiu       $v0, $v0, 0x7C44
    ctx->pc = 0x34eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31812));
    // 0x34eb6c: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x34eb6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34eb70: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x34eb70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34eb74: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x34eb74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34eb78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x34eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34eb7c: 0xc0d360c  jal         func_34D830
    ctx->pc = 0x34EB7Cu;
    SET_GPR_U32(ctx, 31, 0x34EB84u);
    ctx->pc = 0x34EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EB7Cu;
    // 0x34eb80: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D830u, 0x34EB7Cu, 0x34EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EB84u;
label_34eb84:
    // 0x34eb84: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34EB84u;
    {
        const bool branch_taken_0x34eb84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34eb84) {
            ctx->pc = 0x34EBA0u;
            goto label_34eba0;
        }
    }
    ctx->pc = 0x34EB8Cu;
    // 0x34eb8c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x34eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34eb90: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x34eb90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34eb94: 0xc0d3644  jal         func_34D910
    ctx->pc = 0x34EB94u;
    SET_GPR_U32(ctx, 31, 0x34EB9Cu);
    ctx->pc = 0x34EB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EB94u;
    // 0x34eb98: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D910u, 0x34EB94u, 0x34EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EB9Cu;
label_34eb9c:
    // 0x34eb9c: 0x0  nop
    ctx->pc = 0x34eb9cu;
    // NOP
label_34eba0:
    // 0x34eba0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34eba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34eba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34eba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34eba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ebac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ebacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ebb0: 0x3e00008  jr          $ra
    ctx->pc = 0x34EBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBB0u;
        // 0x34ebb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EBB8u;
}
