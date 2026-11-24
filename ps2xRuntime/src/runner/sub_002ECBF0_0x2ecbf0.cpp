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

// Function: sub_002ECBF0
// Address: 0x2ecbf0 - 0x2ecedc
void sub_002ECBF0_0x2ecbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECBF0_0x2ecbf0");
#endif

    switch (ctx->pc) {
        case 0x2ecc18u: goto label_2ecc18;
        case 0x2eccf8u: goto label_2eccf8;
        case 0x2ecd64u: goto label_2ecd64;
        case 0x2eced0u: goto label_2eced0;
        default: break;
    }

    ctx->pc = 0x2ecbf0u;

    // 0x2ecbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ecbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ecbf4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ecbf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ecbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ecbfc: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2ecbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ecc00: 0x90aa0000  lbu         $t2, 0x0($a1)
    ctx->pc = 0x2ecc00u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecc04: 0x90a308e8  lbu         $v1, 0x8E8($a1)
    ctx->pc = 0x2ecc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x2ecc08: 0x15490005  bne         $t2, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECC08u;
    {
        const bool branch_taken_0x2ecc08 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x2ECC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC08u;
        // 0x2ecc0c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc08) {
            ctx->pc = 0x2ECC20u;
            goto label_2ecc20;
        }
    }
    ctx->pc = 0x2ECC10u;
    // 0x2ecc10: 0xc0bb278  jal         func_2EC9E0
    ctx->pc = 0x2ECC10u;
    SET_GPR_U32(ctx, 31, 0x2ECC18u);
    ctx->pc = 0x2EC9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9E0u, 0x2ECC10u, 0x2ECC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC18u;
label_2ecc18:
    // 0x2ecc18: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x2ECC18u;
    {
        const bool branch_taken_0x2ecc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc18) {
            ctx->pc = 0x2ECED0u;
            goto label_2eced0;
        }
    }
    ctx->pc = 0x2ECC20u;
label_2ecc20:
    // 0x2ecc20: 0x8ce506ac  lw          $a1, 0x6AC($a3)
    ctx->pc = 0x2ecc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1708)));
    // 0x2ecc24: 0x30a50800  andi        $a1, $a1, 0x800
    ctx->pc = 0x2ecc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x2ecc28: 0x14a000a9  bnez        $a1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2ECC28u;
    {
        const bool branch_taken_0x2ecc28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc28) {
            ctx->pc = 0x2ECED0u;
            goto label_2eced0;
        }
    }
    ctx->pc = 0x2ECC30u;
    // 0x2ecc30: 0x10c000a7  beqz        $a2, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2ECC30u;
    {
        const bool branch_taken_0x2ecc30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc30) {
            ctx->pc = 0x2ECED0u;
            goto label_2eced0;
        }
    }
    ctx->pc = 0x2ECC38u;
    // 0x2ecc38: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2ecc38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ecc3c: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x2ecc3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ecc40: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
    ctx->pc = 0x2ECC40u;
    {
        const bool branch_taken_0x2ecc40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC40u;
        // 0x2ecc44: 0x3c060068  lui         $a2, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc40) {
            ctx->pc = 0x2ECDA0u;
            goto label_2ecda0;
        }
    }
    ctx->pc = 0x2ECC48u;
    // 0x2ecc48: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ecc48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ecc4c: 0x24c6c370  addiu       $a2, $a2, -0x3C90
    ctx->pc = 0x2ecc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951792));
    // 0x2ecc50: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ecc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ecc54: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ecc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecc58: 0xa00008  jr          $a1
    ctx->pc = 0x2ECC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ECC60u: goto label_2ecc60;
            case 0x2ECD00u: goto label_2ecd00;
            case 0x2ECD10u: goto label_2ecd10;
            case 0x2ECD20u: goto label_2ecd20;
            case 0x2ECD30u: goto label_2ecd30;
            case 0x2ECD70u: goto label_2ecd70;
            case 0x2ECD78u: goto label_2ecd78;
            case 0x2ECD88u: goto label_2ecd88;
            case 0x2ECD98u: goto label_2ecd98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECC58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ECC60u;
label_2ecc60:
    // 0x2ecc60: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2ecc60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ecc64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ECC64u;
    {
        const bool branch_taken_0x2ecc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC64u;
        // 0x2ecc68: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc64) {
            ctx->pc = 0x2ECC98u;
            goto label_2ecc98;
        }
    }
    ctx->pc = 0x2ECC6Cu;
    // 0x2ecc6c: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2ecc6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ecc70: 0x90e304d2  lbu         $v1, 0x4D2($a3)
    ctx->pc = 0x2ecc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1234)));
    // 0x2ecc74: 0x90e204d1  lbu         $v0, 0x4D1($a3)
    ctx->pc = 0x2ecc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1233)));
    // 0x2ecc78: 0x90e404d3  lbu         $a0, 0x4D3($a3)
    ctx->pc = 0x2ecc78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1235)));
    // 0x2ecc7c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2ecc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2ecc80: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2ecc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ecc84: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ecc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ecc88: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2ecc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ecc8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ecc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ecc90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2ECC90u;
    {
        const bool branch_taken_0x2ecc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC90u;
        // 0x2ecc94: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc90) {
            ctx->pc = 0x2ECCCCu;
            goto label_2ecccc;
        }
    }
    ctx->pc = 0x2ECC98u;
label_2ecc98:
    // 0x2ecc98: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2ecc98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ecc9c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ecc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ecca0: 0x2442c358  addiu       $v0, $v0, -0x3CA8
    ctx->pc = 0x2ecca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951768));
    // 0x2ecca4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2ecca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecca8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ecca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2eccac: 0x2442c368  addiu       $v0, $v0, -0x3C98
    ctx->pc = 0x2eccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951784));
    // 0x2eccb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eccb4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2eccb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eccb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2eccb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eccbc: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x2eccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2eccc0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2eccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2eccc4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2eccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2eccc8: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2eccc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ecccc:
    // 0x2ecccc: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x2eccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x2eccd0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2eccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2eccd4: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x2eccd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2eccd8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2eccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2eccdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eccdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecce0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ecce0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecce4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecce4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecce8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2ecce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2eccec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eccecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eccf0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2ECCF0u;
    SET_GPR_U32(ctx, 31, 0x2ECCF8u);
    ctx->pc = 0x2ECCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCF0u;
    // 0x2eccf4: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2ECCF0u, 0x2ECCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCF8u;
label_2eccf8:
    // 0x2eccf8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2ECCF8u;
    {
        const bool branch_taken_0x2eccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eccf8) {
            ctx->pc = 0x2ECED0u;
            goto label_2eced0;
        }
    }
    ctx->pc = 0x2ECD00u;
label_2ecd00:
    // 0x2ecd00: 0x8d08085c  lw          $t0, 0x85C($t0)
    ctx->pc = 0x2ecd00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2140)));
    // 0x2ecd04: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2ECD04u;
    {
        const bool branch_taken_0x2ecd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD04u;
        // 0x2ecd08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd04) {
            ctx->pc = 0x2ECDA0u;
            goto label_2ecda0;
        }
    }
    ctx->pc = 0x2ECD0Cu;
    // 0x2ecd0c: 0x0  nop
    ctx->pc = 0x2ecd0cu;
    // NOP
label_2ecd10:
    // 0x2ecd10: 0x8d080860  lw          $t0, 0x860($t0)
    ctx->pc = 0x2ecd10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2144)));
    // 0x2ecd14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2ECD14u;
    {
        const bool branch_taken_0x2ecd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD14u;
        // 0x2ecd18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd14) {
            ctx->pc = 0x2ECDA0u;
            goto label_2ecda0;
        }
    }
    ctx->pc = 0x2ECD1Cu;
    // 0x2ecd1c: 0x0  nop
    ctx->pc = 0x2ecd1cu;
    // NOP
label_2ecd20:
    // 0x2ecd20: 0x8d080864  lw          $t0, 0x864($t0)
    ctx->pc = 0x2ecd20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2148)));
    // 0x2ecd24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2ECD24u;
    {
        const bool branch_taken_0x2ecd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD24u;
        // 0x2ecd28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd24) {
            ctx->pc = 0x2ECDA0u;
            goto label_2ecda0;
        }
    }
    ctx->pc = 0x2ECD2Cu;
    // 0x2ecd2c: 0x0  nop
    ctx->pc = 0x2ecd2cu;
    // NOP
label_2ecd30:
    // 0x2ecd30: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2ecd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2ecd34: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2ecd34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ecd38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ecd38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd3c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x2ecd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ecd40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ecd40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecd44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd48: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ecd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ecd4c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ecd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ecd50: 0x25070020  addiu       $a3, $t0, 0x20
    ctx->pc = 0x2ecd50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2ecd54: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2ecd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2ecd58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ecd58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd5c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2ECD5Cu;
    SET_GPR_U32(ctx, 31, 0x2ECD64u);
    ctx->pc = 0x2ECD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD5Cu;
    // 0x2ecd60: 0x3445040f  ori         $a1, $v0, 0x40F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2ECD5Cu, 0x2ECD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD64u;
label_2ecd64:
    // 0x2ecd64: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2ECD64u;
    {
        const bool branch_taken_0x2ecd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd64) {
            ctx->pc = 0x2ECED0u;
            goto label_2eced0;
        }
    }
    ctx->pc = 0x2ECD6Cu;
    // 0x2ecd6c: 0x0  nop
    ctx->pc = 0x2ecd6cu;
    // NOP
label_2ecd70:
    // 0x2ecd70: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2ECD70u;
    {
        const bool branch_taken_0x2ecd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd70) {
            ctx->pc = 0x2ECED0u;
            goto label_2eced0;
        }
    }
    ctx->pc = 0x2ECD78u;
label_2ecd78:
    // 0x2ecd78: 0x8d08085c  lw          $t0, 0x85C($t0)
    ctx->pc = 0x2ecd78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2140)));
    // 0x2ecd7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECD7Cu;
    {
        const bool branch_taken_0x2ecd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD7Cu;
        // 0x2ecd80: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd7c) {
            ctx->pc = 0x2ECDA0u;
            goto label_2ecda0;
        }
    }
    ctx->pc = 0x2ECD84u;
    // 0x2ecd84: 0x0  nop
    ctx->pc = 0x2ecd84u;
    // NOP
label_2ecd88:
    // 0x2ecd88: 0x8d080860  lw          $t0, 0x860($t0)
    ctx->pc = 0x2ecd88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2144)));
    // 0x2ecd8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECD8Cu;
    {
        const bool branch_taken_0x2ecd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD8Cu;
        // 0x2ecd90: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd8c) {
            ctx->pc = 0x2ECDA0u;
            goto label_2ecda0;
        }
    }
    ctx->pc = 0x2ECD94u;
    // 0x2ecd94: 0x0  nop
    ctx->pc = 0x2ecd94u;
    // NOP
label_2ecd98:
    // 0x2ecd98: 0x8d080864  lw          $t0, 0x864($t0)
    ctx->pc = 0x2ecd98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2148)));
    // 0x2ecd9c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2ecd9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ecda0:
    // 0x2ecda0: 0x1160001d  beqz        $t3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2ECDA0u;
    {
        const bool branch_taken_0x2ecda0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDA0u;
        // 0x2ecda4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecda0) {
            ctx->pc = 0x2ECE18u;
            goto label_2ece18;
        }
    }
    ctx->pc = 0x2ECDA8u;
    // 0x2ecda8: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2ECDA8u;
    {
        const bool branch_taken_0x2ecda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ecda8) {
            ctx->pc = 0x2ECDE0u;
            goto label_2ecde0;
        }
    }
    ctx->pc = 0x2ECDB0u;
    // 0x2ecdb0: 0x90890001  lbu         $t1, 0x1($a0)
    ctx->pc = 0x2ecdb0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ecdb4: 0x90e604d3  lbu         $a2, 0x4D3($a3)
    ctx->pc = 0x2ecdb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1235)));
    // 0x2ecdb8: 0x90e504d2  lbu         $a1, 0x4D2($a3)
    ctx->pc = 0x2ecdb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1234)));
    // 0x2ecdbc: 0x90e404d1  lbu         $a0, 0x4D1($a3)
    ctx->pc = 0x2ecdbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1233)));
    // 0x2ecdc0: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2ecdc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2ecdc4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2ecdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ecdc8: 0x1263025  or          $a2, $t1, $a2
    ctx->pc = 0x2ecdc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x2ecdcc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2ecdccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ecdd0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2ecdd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2ecdd4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2ECDD4u;
    {
        const bool branch_taken_0x2ecdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDD4u;
        // 0x2ecdd8: 0x852825  or          $a1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdd4) {
            ctx->pc = 0x2ECE78u;
            goto label_2ece78;
        }
    }
    ctx->pc = 0x2ECDDCu;
    // 0x2ecddc: 0x0  nop
    ctx->pc = 0x2ecddcu;
    // NOP
label_2ecde0:
    // 0x2ecde0: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x2ecde0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ecde4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2ecde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2ecde8: 0x24a5c358  addiu       $a1, $a1, -0x3CA8
    ctx->pc = 0x2ecde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951768));
    // 0x2ecdec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2ecdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ecdf0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2ecdf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecdf4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2ecdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2ecdf8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2ecdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2ecdfc: 0x2484c368  addiu       $a0, $a0, -0x3C98
    ctx->pc = 0x2ecdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951784));
    // 0x2ece00: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ece00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ece04: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2ece04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ece08: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2ece08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ece0c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x2ece0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2ece10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2ECE10u;
    {
        const bool branch_taken_0x2ece10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE10u;
        // 0x2ece14: 0x852825  or          $a1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece10) {
            ctx->pc = 0x2ECE78u;
            goto label_2ece78;
        }
    }
    ctx->pc = 0x2ECE18u;
label_2ece18:
    // 0x2ece18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ece18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ece1c: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2ECE1Cu;
    {
        const bool branch_taken_0x2ece1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ece1c) {
            ctx->pc = 0x2ECE50u;
            goto label_2ece50;
        }
    }
    ctx->pc = 0x2ECE24u;
    // 0x2ece24: 0x90890001  lbu         $t1, 0x1($a0)
    ctx->pc = 0x2ece24u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ece28: 0x910604d3  lbu         $a2, 0x4D3($t0)
    ctx->pc = 0x2ece28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1235)));
    // 0x2ece2c: 0x910504d2  lbu         $a1, 0x4D2($t0)
    ctx->pc = 0x2ece2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1234)));
    // 0x2ece30: 0x910404d1  lbu         $a0, 0x4D1($t0)
    ctx->pc = 0x2ece30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1233)));
    // 0x2ece34: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2ece34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2ece38: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2ece38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ece3c: 0x1263025  or          $a2, $t1, $a2
    ctx->pc = 0x2ece3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x2ece40: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2ece40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ece44: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2ece44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2ece48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2ECE48u;
    {
        const bool branch_taken_0x2ece48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE48u;
        // 0x2ece4c: 0x852825  or          $a1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece48) {
            ctx->pc = 0x2ECE78u;
            goto label_2ece78;
        }
    }
    ctx->pc = 0x2ECE50u;
label_2ece50:
    // 0x2ece50: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2ece50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ece54: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2ece54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2ece58: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2ece58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2ece5c: 0x2484c360  addiu       $a0, $a0, -0x3CA0
    ctx->pc = 0x2ece5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951776));
    // 0x2ece60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ece60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ece64: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2ece64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ece68: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2ece68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2ece6c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2ece6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ece70: 0x34850004  ori         $a1, $a0, 0x4
    ctx->pc = 0x2ece70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x2ece74: 0x0  nop
    ctx->pc = 0x2ece74u;
    // NOP
label_2ece78:
    // 0x2ece78: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ECE78u;
    {
        const bool branch_taken_0x2ece78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece78) {
            ctx->pc = 0x2ECED0u;
            goto label_2eced0;
        }
    }
    ctx->pc = 0x2ECE80u;
    // 0x2ece80: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x2ece80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x2ece84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECE84u;
    {
        const bool branch_taken_0x2ece84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece84) {
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECE8Cu;
    // 0x2ece8c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2ece8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2ece90: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2ece90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ece94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECE94u;
    {
        const bool branch_taken_0x2ece94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE94u;
        // 0x2ece98: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece94) {
            ctx->pc = 0x2ECEA8u;
            goto label_2ecea8;
        }
    }
    ctx->pc = 0x2ECE9Cu;
    // 0x2ece9c: 0x0  nop
    ctx->pc = 0x2ece9cu;
    // NOP
label_2ecea0:
    // 0x2ecea0: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x2ecea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2ecea4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2ecea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2ecea8:
    // 0x2ecea8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2ecea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eceac: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x2eceacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2eceb0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2eceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2eceb4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2eceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2eceb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eceb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ecebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecec0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ecec0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecec4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecec4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecec8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2ECEC8u;
    SET_GPR_U32(ctx, 31, 0x2ECED0u);
    ctx->pc = 0x2ECECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECEC8u;
    // 0x2ececc: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2ECEC8u, 0x2ECED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECED0u;
label_2eced0:
    // 0x2eced0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eced4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECED4u;
        // 0x2eced8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECEDCu;
}
