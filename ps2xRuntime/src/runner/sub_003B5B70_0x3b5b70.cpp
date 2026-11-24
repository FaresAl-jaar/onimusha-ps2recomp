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

// Function: sub_003B5B70
// Address: 0x3b5b70 - 0x3b5ce0
void sub_003B5B70_0x3b5b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5B70_0x3b5b70");
#endif

    switch (ctx->pc) {
        case 0x3b5ba8u: goto label_3b5ba8;
        case 0x3b5bc8u: goto label_3b5bc8;
        case 0x3b5be0u: goto label_3b5be0;
        case 0x3b5c34u: goto label_3b5c34;
        case 0x3b5c74u: goto label_3b5c74;
        case 0x3b5cb8u: goto label_3b5cb8;
        default: break;
    }

    ctx->pc = 0x3b5b70u;

    // 0x3b5b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b5b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b5b74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b5b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b5b78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3b5b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3b5b7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b5b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b5b80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b5b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b5b84: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3b5b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b5b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b5b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b5b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b5b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b5b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b5b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b5b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b9c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5ba0: 0xc095018  jal         func_254060
    ctx->pc = 0x3B5BA0u;
    SET_GPR_U32(ctx, 31, 0x3B5BA8u);
    ctx->pc = 0x3B5BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BA0u;
    // 0x3b5ba4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x3B5BA0u, 0x3B5BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BA8u;
label_3b5ba8:
    // 0x3b5ba8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5BA8u;
    {
        const bool branch_taken_0x3b5ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BA8u;
        // 0x3b5bac: 0x2454019f  addiu       $s4, $v0, 0x19F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 415));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ba8) {
            ctx->pc = 0x3B5BB8u;
            goto label_3b5bb8;
        }
    }
    ctx->pc = 0x3B5BB0u;
    // 0x3b5bb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5BB0u;
    {
        const bool branch_taken_0x3b5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BB0u;
        // 0x3b5bb4: 0x27938408  addiu       $s3, $gp, -0x7BF8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5bb0) {
            ctx->pc = 0x3B5BBCu;
            goto label_3b5bbc;
        }
    }
    ctx->pc = 0x3B5BB8u;
label_3b5bb8:
    // 0x3b5bb8: 0x27938400  addiu       $s3, $gp, -0x7C00
    ctx->pc = 0x3b5bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935552));
label_3b5bbc:
    // 0x3b5bbc: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3b5bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x3b5bc0: 0xc0c7f60  jal         func_31FD80
    ctx->pc = 0x3B5BC0u;
    SET_GPR_U32(ctx, 31, 0x3B5BC8u);
    ctx->pc = 0x3B5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BC0u;
    // 0x3b5bc4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FD80u, 0x3B5BC0u, 0x3B5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BC8u;
label_3b5bc8:
    // 0x3b5bc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5BC8u;
    {
        const bool branch_taken_0x3b5bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BC8u;
        // 0x3b5bcc: 0x27928410  addiu       $s2, $gp, -0x7BF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5bc8) {
            ctx->pc = 0x3B5BD4u;
            goto label_3b5bd4;
        }
    }
    ctx->pc = 0x3B5BD0u;
    // 0x3b5bd0: 0x27928418  addiu       $s2, $gp, -0x7BE8
    ctx->pc = 0x3b5bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935576));
label_3b5bd4:
    // 0x3b5bd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b5bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bd8: 0x27908c90  addiu       $s0, $gp, -0x7370
    ctx->pc = 0x3b5bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x3b5bdc: 0x0  nop
    ctx->pc = 0x3b5bdcu;
    // NOP
label_3b5be0:
    // 0x3b5be0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b5be4: 0x12220024  beq         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B5BE4u;
    {
        const bool branch_taken_0x3b5be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b5be4) {
            ctx->pc = 0x3B5C78u;
            goto label_3b5c78;
        }
    }
    ctx->pc = 0x3B5BECu;
    // 0x3b5bec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3b5becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b5bf0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3B5BF0u;
    {
        const bool branch_taken_0x3b5bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5bf0) {
            ctx->pc = 0x3B5C78u;
            goto label_3b5c78;
        }
    }
    ctx->pc = 0x3B5BF8u;
    // 0x3b5bf8: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x3b5bf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b5bfc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3b5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3b5c00: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x3b5c00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3b5c04: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x3b5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x3b5c08: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x3b5c08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b5c0c: 0x24636940  addiu       $v1, $v1, 0x6940
    ctx->pc = 0x3b5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26944));
    // 0x3b5c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c14: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3b5c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c18: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3b5c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c1c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3b5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b5c20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b5c24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b5c28: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x3b5c28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b5c2c: 0xc09c618  jal         func_271860
    ctx->pc = 0x3B5C2Cu;
    SET_GPR_U32(ctx, 31, 0x3B5C34u);
    ctx->pc = 0x3B5C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C2Cu;
    // 0x3b5c30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271860u, 0x3B5C2Cu, 0x3B5C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C34u;
label_3b5c34:
    // 0x3b5c34: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x3b5c34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b5c38: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3b5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3b5c3c: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x3b5c3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3b5c40: 0x3c0a004e  lui         $t2, 0x4E
    ctx->pc = 0x3b5c40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)78 << 16));
    // 0x3b5c44: 0x86c30008  lh          $v1, 0x8($s6)
    ctx->pc = 0x3b5c44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3b5c48: 0x254a6940  addiu       $t2, $t2, 0x6940
    ctx->pc = 0x3b5c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26944));
    // 0x3b5c4c: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x3b5c4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b5c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c54: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3b5c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c58: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3b5c58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c5c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3b5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3b5c60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3b5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b5c64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b5c68: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x3b5c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3b5c6c: 0xc09c618  jal         func_271860
    ctx->pc = 0x3B5C6Cu;
    SET_GPR_U32(ctx, 31, 0x3B5C74u);
    ctx->pc = 0x3B5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C6Cu;
    // 0x3b5c70: 0x1422021  addu        $a0, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271860u, 0x3B5C6Cu, 0x3B5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C74u;
label_3b5c74:
    // 0x3b5c74: 0x0  nop
    ctx->pc = 0x3b5c74u;
    // NOP
label_3b5c78:
    // 0x3b5c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b5c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b5c7c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x3b5c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3b5c80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b5c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b5c84: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x3b5c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x3b5c88: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3B5C88u;
    {
        const bool branch_taken_0x3b5c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C88u;
        // 0x3b5c8c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c88) {
            ctx->pc = 0x3B5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5be0;
        }
    }
    ctx->pc = 0x3B5C90u;
    // 0x3b5c90: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3b5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3b5c94: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3b5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3b5c98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b5c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c9c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3b5c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ca0: 0x24847028  addiu       $a0, $a0, 0x7028
    ctx->pc = 0x3b5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28712));
    // 0x3b5ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ca8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x3b5ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3b5cac: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3b5cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b5cb0: 0xc09c844  jal         func_272110
    ctx->pc = 0x3B5CB0u;
    SET_GPR_U32(ctx, 31, 0x3B5CB8u);
    ctx->pc = 0x3B5CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5CB0u;
    // 0x3b5cb4: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x3B5CB0u, 0x3B5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5CB8u;
label_3b5cb8:
    // 0x3b5cb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b5cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b5cbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b5cbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b5cc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b5cc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5cc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b5cc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5cc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b5cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5ccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b5cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b5cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b5cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CD8u;
        // 0x3b5cdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5CE0u;
}
