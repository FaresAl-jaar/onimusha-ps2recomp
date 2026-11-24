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

// Function: sub_002EC9E0
// Address: 0x2ec9e0 - 0x2ecbec
void sub_002EC9E0_0x2ec9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC9E0_0x2ec9e0");
#endif

    switch (ctx->pc) {
        case 0x2ecab8u: goto label_2ecab8;
        case 0x2ecb6cu: goto label_2ecb6c;
        case 0x2ecbe0u: goto label_2ecbe0;
        default: break;
    }

    ctx->pc = 0x2ec9e0u;

    // 0x2ec9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec9e8: 0x94a314b0  lhu         $v1, 0x14B0($a1)
    ctx->pc = 0x2ec9e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 5296)));
    // 0x2ec9ec: 0x10c0007c  beqz        $a2, . + 4 + (0x7C << 2)
    ctx->pc = 0x2EC9ECu;
    {
        const bool branch_taken_0x2ec9ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9ECu;
        // 0x2ec9f0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9ec) {
            ctx->pc = 0x2ECBE0u;
            goto label_2ecbe0;
        }
    }
    ctx->pc = 0x2EC9F4u;
    // 0x2ec9f4: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2ec9f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec9f8: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x2ec9f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ec9fc: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x2EC9FCu;
    {
        const bool branch_taken_0x2ec9fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9FCu;
        // 0x2eca00: 0x3c070068  lui         $a3, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9fc) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECA04u;
    // 0x2eca04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2eca04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2eca08: 0x24e7c340  addiu       $a3, $a3, -0x3CC0
    ctx->pc = 0x2eca08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951744));
    // 0x2eca0c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2eca0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2eca10: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2eca10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eca14: 0xc00008  jr          $a2
    ctx->pc = 0x2ECA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ECA20u: goto label_2eca20;
            case 0x2ECAC0u: goto label_2ecac0;
            case 0x2ECAE8u: goto label_2ecae8;
            case 0x2ECB10u: goto label_2ecb10;
            case 0x2ECB38u: goto label_2ecb38;
            case 0x2ECB78u: goto label_2ecb78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECA14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ECA1Cu;
    // 0x2eca1c: 0x0  nop
    ctx->pc = 0x2eca1cu;
    // NOP
label_2eca20:
    // 0x2eca20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eca24: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ECA24u;
    {
        const bool branch_taken_0x2eca24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ECA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA24u;
        // 0x2eca28: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca24) {
            ctx->pc = 0x2ECA58u;
            goto label_2eca58;
        }
    }
    ctx->pc = 0x2ECA2Cu;
    // 0x2eca2c: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2eca2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2eca30: 0x910304d2  lbu         $v1, 0x4D2($t0)
    ctx->pc = 0x2eca30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1234)));
    // 0x2eca34: 0x910204d1  lbu         $v0, 0x4D1($t0)
    ctx->pc = 0x2eca34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1233)));
    // 0x2eca38: 0x910404d3  lbu         $a0, 0x4D3($t0)
    ctx->pc = 0x2eca38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1235)));
    // 0x2eca3c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2eca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2eca40: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2eca40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2eca44: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2eca44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2eca48: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2eca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2eca4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2eca4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2eca50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2ECA50u;
    {
        const bool branch_taken_0x2eca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA50u;
        // 0x2eca54: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca50) {
            ctx->pc = 0x2ECA8Cu;
            goto label_2eca8c;
        }
    }
    ctx->pc = 0x2ECA58u;
label_2eca58:
    // 0x2eca58: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2eca58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2eca5c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2eca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2eca60: 0x2442c320  addiu       $v0, $v0, -0x3CE0
    ctx->pc = 0x2eca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951712));
    // 0x2eca64: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2eca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eca68: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2eca68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2eca6c: 0x2442c330  addiu       $v0, $v0, -0x3CD0
    ctx->pc = 0x2eca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951728));
    // 0x2eca70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eca74: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2eca74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eca78: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2eca78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eca7c: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x2eca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2eca80: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2eca80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2eca84: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2eca84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2eca88: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2eca88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2eca8c:
    // 0x2eca8c: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x2eca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x2eca90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2eca90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2eca94: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x2eca94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2eca98: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2eca98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2eca9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eca9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ecaa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaa4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecaa4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaa8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2ecaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2ecaac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ecaacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecab0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2ECAB0u;
    SET_GPR_U32(ctx, 31, 0x2ECAB8u);
    ctx->pc = 0x2ECAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAB0u;
    // 0x2ecab4: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2ECAB0u, 0x2ECAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAB8u;
label_2ecab8:
    // 0x2ecab8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2ECAB8u;
    {
        const bool branch_taken_0x2ecab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecab8) {
            ctx->pc = 0x2ECBE0u;
            goto label_2ecbe0;
        }
    }
    ctx->pc = 0x2ECAC0u;
label_2ecac0:
    // 0x2ecac0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ecac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecac4: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECAC4u;
    {
        const bool branch_taken_0x2ecac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2ECAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAC4u;
        // 0x2ecac8: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecac4) {
            ctx->pc = 0x2ECAE0u;
            goto label_2ecae0;
        }
    }
    ctx->pc = 0x2ECACCu;
    // 0x2ecacc: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x2ecaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ecad0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ecad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ecad4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ecad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecad8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2ECAD8u;
    {
        const bool branch_taken_0x2ecad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAD8u;
        // 0x2ecadc: 0x8ca5085c  lw          $a1, 0x85C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecad8) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECAE0u;
label_2ecae0:
    // 0x2ecae0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2ECAE0u;
    {
        const bool branch_taken_0x2ecae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAE0u;
        // 0x2ecae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecae0) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECAE8u;
label_2ecae8:
    // 0x2ecae8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ecae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecaec: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECAECu;
    {
        const bool branch_taken_0x2ecaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2ECAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAECu;
        // 0x2ecaf0: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecaec) {
            ctx->pc = 0x2ECB08u;
            goto label_2ecb08;
        }
    }
    ctx->pc = 0x2ECAF4u;
    // 0x2ecaf4: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x2ecaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ecaf8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ecaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ecafc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ecafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecb00: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2ECB00u;
    {
        const bool branch_taken_0x2ecb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB00u;
        // 0x2ecb04: 0x8ca50860  lw          $a1, 0x860($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb00) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECB08u;
label_2ecb08:
    // 0x2ecb08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2ECB08u;
    {
        const bool branch_taken_0x2ecb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB08u;
        // 0x2ecb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb08) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECB10u;
label_2ecb10:
    // 0x2ecb10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ecb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecb14: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECB14u;
    {
        const bool branch_taken_0x2ecb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2ECB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB14u;
        // 0x2ecb18: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb14) {
            ctx->pc = 0x2ECB30u;
            goto label_2ecb30;
        }
    }
    ctx->pc = 0x2ECB1Cu;
    // 0x2ecb1c: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ecb20: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ecb24: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ecb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecb28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2ECB28u;
    {
        const bool branch_taken_0x2ecb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB28u;
        // 0x2ecb2c: 0x8ca50864  lw          $a1, 0x864($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb28) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECB30u;
label_2ecb30:
    // 0x2ecb30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECB30u;
    {
        const bool branch_taken_0x2ecb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB30u;
        // 0x2ecb34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb30) {
            ctx->pc = 0x2ECB80u;
            goto label_2ecb80;
        }
    }
    ctx->pc = 0x2ECB38u;
label_2ecb38:
    // 0x2ecb38: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2ecb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2ecb3c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2ecb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ecb40: 0x25070020  addiu       $a3, $t0, 0x20
    ctx->pc = 0x2ecb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2ecb44: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x2ecb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2ecb48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ecb48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ecb4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecb50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb54: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ecb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ecb58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ecb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ecb5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ecb5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb60: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2ecb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2ecb64: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2ECB64u;
    SET_GPR_U32(ctx, 31, 0x2ECB6Cu);
    ctx->pc = 0x2ECB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB64u;
    // 0x2ecb68: 0x3445030f  ori         $a1, $v0, 0x30F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2ECB64u, 0x2ECB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB6Cu;
label_2ecb6c:
    // 0x2ecb6c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2ECB6Cu;
    {
        const bool branch_taken_0x2ecb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb6c) {
            ctx->pc = 0x2ECBE0u;
            goto label_2ecbe0;
        }
    }
    ctx->pc = 0x2ECB74u;
    // 0x2ecb74: 0x0  nop
    ctx->pc = 0x2ecb74u;
    // NOP
label_2ecb78:
    // 0x2ecb78: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2ECB78u;
    {
        const bool branch_taken_0x2ecb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb78) {
            ctx->pc = 0x2ECBE0u;
            goto label_2ecbe0;
        }
    }
    ctx->pc = 0x2ECB80u;
label_2ecb80:
    // 0x2ecb80: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ECB80u;
    {
        const bool branch_taken_0x2ecb80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb80) {
            ctx->pc = 0x2ECBE0u;
            goto label_2ecbe0;
        }
    }
    ctx->pc = 0x2ECB88u;
    // 0x2ecb88: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ecb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ecb8c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2ecb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2ecb90: 0x2442c328  addiu       $v0, $v0, -0x3CD8
    ctx->pc = 0x2ecb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951720));
    // 0x2ecb94: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x2ecb94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ecb98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecb9c: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x2ecb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2ecba0: 0x90a304d3  lbu         $v1, 0x4D3($a1)
    ctx->pc = 0x2ecba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1235)));
    // 0x2ecba4: 0x25070020  addiu       $a3, $t0, 0x20
    ctx->pc = 0x2ecba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2ecba8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2ecba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecbac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ecbacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ecbb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecbb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ecbb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbbc: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x2ecbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2ecbc0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ecbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ecbc4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2ecbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ecbc8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2ecbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2ecbcc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ecbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ecbd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ecbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ecbd4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2ecbd8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2ECBD8u;
    SET_GPR_U32(ctx, 31, 0x2ECBE0u);
    ctx->pc = 0x2ECBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECBD8u;
    // 0x2ecbdc: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2ECBD8u, 0x2ECBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBE0u;
label_2ecbe0:
    // 0x2ecbe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ecbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBE4u;
        // 0x2ecbe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECBECu;
}
