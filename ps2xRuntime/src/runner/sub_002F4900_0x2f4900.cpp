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

// Function: sub_002F4900
// Address: 0x2f4900 - 0x2f49fc
void sub_002F4900_0x2f4900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4900_0x2f4900");
#endif

    switch (ctx->pc) {
        case 0x2f4938u: goto label_2f4938;
        case 0x2f4948u: goto label_2f4948;
        case 0x2f4964u: goto label_2f4964;
        case 0x2f4980u: goto label_2f4980;
        default: break;
    }

    ctx->pc = 0x2f4900u;

    // 0x2f4900: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f4900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f4904: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f4908: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f4908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f490c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f4910: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f4910u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4914: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f4918: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f4918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f491c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f4920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4928: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f4928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f492c: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f492cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2f4930: 0x26108f90  addiu       $s0, $s0, -0x7070
    ctx->pc = 0x2f4930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938512));
    // 0x2f4934: 0x0  nop
    ctx->pc = 0x2f4934u;
    // NOP
label_2f4938:
    // 0x2f4938: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x2f4938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2f493c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2f493cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f4940: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F4940u;
    {
        const bool branch_taken_0x2f4940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4940u;
        // 0x2f4944: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4940) {
            ctx->pc = 0x2F49C0u;
            goto label_2f49c0;
        }
    }
    ctx->pc = 0x2F4948u;
label_2f4948:
    // 0x2f4948: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x2f4948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2f494c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2f494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2f4950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f4950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4954: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x2f4954u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f495c: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x2F495Cu;
    SET_GPR_U32(ctx, 31, 0x2F4964u);
    ctx->pc = 0x2F4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F495Cu;
    // 0x2f4960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x2F495Cu, 0x2F4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4964u;
label_2f4964:
    // 0x2f4964: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F4964u;
    {
        const bool branch_taken_0x2f4964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4964u;
        // 0x2f4968: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4964) {
            ctx->pc = 0x2F49A8u;
            goto label_2f49a8;
        }
    }
    ctx->pc = 0x2F496Cu;
    // 0x2f496c: 0x24030515  addiu       $v1, $zero, 0x515
    ctx->pc = 0x2f496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x2f4970: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4970u;
    {
        const bool branch_taken_0x2f4970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4970u;
        // 0x2f4974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4970) {
            ctx->pc = 0x2F49A8u;
            goto label_2f49a8;
        }
    }
    ctx->pc = 0x2F4978u;
    // 0x2f4978: 0xc0bcc90  jal         func_2F3240
    ctx->pc = 0x2F4978u;
    SET_GPR_U32(ctx, 31, 0x2F4980u);
    ctx->pc = 0x2F497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4978u;
    // 0x2f497c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3240u, 0x2F4978u, 0x2F4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4980u;
label_2f4980:
    // 0x2f4980: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x2f4980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f4984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4988: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2f4988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2f498c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f498cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f4990: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x2f4990u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2f4994: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2f4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2f4998: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2f4998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f499c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f499cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f49a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f49a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f49a4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f49a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f49a8:
    // 0x2f49a8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2f49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f49ac: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2f49acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f49b0: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x2f49b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2f49b4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2f49b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f49b8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F49B8u;
    {
        const bool branch_taken_0x2f49b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f49b8) {
            ctx->pc = 0x2F4948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4948;
        }
    }
    ctx->pc = 0x2F49C0u;
label_2f49c0:
    // 0x2f49c0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2f49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f49c4: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2f49c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f49c8: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x2f49c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2f49cc: 0x2a83000e  slti        $v1, $s4, 0xE
    ctx->pc = 0x2f49ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2f49d0: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2F49D0u;
    {
        const bool branch_taken_0x2f49d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F49D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49D0u;
        // 0x2f49d4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49d0) {
            ctx->pc = 0x2F4938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4938;
        }
    }
    ctx->pc = 0x2F49D8u;
    // 0x2f49d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f49d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f49dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f49dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f49e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f49e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f49e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f49e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f49e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f49e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f49ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f49ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f49f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f49f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f49f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F49F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F4u;
        // 0x2f49f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F49F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F49FCu;
}
