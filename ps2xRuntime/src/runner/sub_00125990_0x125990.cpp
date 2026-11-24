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

// Function: sub_00125990
// Address: 0x125990 - 0x125abc
void sub_00125990_0x125990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125990_0x125990");
#endif

    switch (ctx->pc) {
        case 0x1259f0u: goto label_1259f0;
        case 0x125a18u: goto label_125a18;
        case 0x125a30u: goto label_125a30;
        case 0x125a4cu: goto label_125a4c;
        case 0x125a5cu: goto label_125a5c;
        case 0x125a6cu: goto label_125a6c;
        case 0x125a88u: goto label_125a88;
        default: break;
    }

    ctx->pc = 0x125990u;

    // 0x125990: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x125994: 0x24ee0008  addiu       $t6, $a3, 0x8
    ctx->pc = 0x125994u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x125998: 0x1cf001a  div         $zero, $t6, $t7
    ctx->pc = 0x125998u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12599c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1259a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1259a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1259a4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1259a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1259a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1259a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1259ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1259acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1259b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1259b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1259b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1259b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1259b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1259bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1259c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1259c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1259c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1259c8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1259c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1259ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1259d0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1259d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1259d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259d8: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1259D8u;
    {
        const bool branch_taken_0x1259d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259d8) {
            ctx->pc = 0x1259DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1259D8u;
            // 0x1259dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1259E0u;
            goto label_1259e0;
        }
    }
    ctx->pc = 0x1259E0u;
label_1259e0:
    // 0x1259e0: 0x7012  mflo        $t6
    ctx->pc = 0x1259e0u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x1259e4: 0x18e782a  slt         $t7, $t4, $t6
    ctx->pc = 0x1259e4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1259e8: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1259E8u;
    {
        const bool branch_taken_0x1259e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259E8u;
        // 0x1259ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259e8) {
            ctx->pc = 0x125A10u;
            goto label_125a10;
        }
    }
    ctx->pc = 0x1259F0u;
label_1259f0:
    // 0x1259f0: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x1259f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1259f4: 0x18e782a  slt         $t7, $t4, $t6
    ctx->pc = 0x1259f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1259f8: 0x0  nop
    ctx->pc = 0x1259f8u;
    // NOP
    // 0x1259fc: 0x0  nop
    ctx->pc = 0x1259fcu;
    // NOP
    // 0x125a00: 0x0  nop
    ctx->pc = 0x125a00u;
    // NOP
    // 0x125a04: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125A04u;
    {
        const bool branch_taken_0x125a04 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A04u;
        // 0x125a08: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a04) {
            ctx->pc = 0x1259F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1259f0;
        }
    }
    ctx->pc = 0x125A0Cu;
    // 0x125a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125a10:
    // 0x125a10: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x125A10u;
    SET_GPR_U32(ctx, 31, 0x125A18u);
    ctx->pc = 0x125A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A10u;
    // 0x125a14: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x125A10u, 0x125A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A18u;
label_125a18:
    // 0x125a18: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x125a18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125a1c: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x125a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
    // 0x125a20: 0x2a6e000a  slti        $t6, $s3, 0xA
    ctx->pc = 0x125a20u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x125a24: 0x15c00023  bnez        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x125A24u;
    {
        const bool branch_taken_0x125a24 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x125A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A24u;
        // 0x125a28: 0xac4f0010  sw          $t7, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a24) {
            ctx->pc = 0x125AB4u;
            goto label_125ab4;
        }
    }
    ctx->pc = 0x125A2Cu;
    // 0x125a2c: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x125a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_125a30:
    // 0x125a30: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x125a30u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125a34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a3c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x125a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x125a40: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x125a44: 0xc049622  jal         func_125888
    ctx->pc = 0x125A44u;
    SET_GPR_U32(ctx, 31, 0x125A4Cu);
    ctx->pc = 0x125A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A44u;
    // 0x125a48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x125A44u, 0x125A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A4Cu;
label_125a4c:
    // 0x125a4c: 0x233782a  slt         $t7, $s1, $s3
    ctx->pc = 0x125a4cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x125a50: 0x15e0fff7  bnez        $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x125A50u;
    {
        const bool branch_taken_0x125a50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A50u;
        // 0x125a54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a50) {
            ctx->pc = 0x125A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125a30;
        }
    }
    ctx->pc = 0x125A58u;
    // 0x125a58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_125a5c:
    // 0x125a5c: 0x235782a  slt         $t7, $s1, $s5
    ctx->pc = 0x125a5cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x125a60: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x125A60u;
    {
        const bool branch_taken_0x125a60 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A60u;
        // 0x125a64: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a60) {
            ctx->pc = 0x125A90u;
            goto label_125a90;
        }
    }
    ctx->pc = 0x125A68u;
    // 0x125a68: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x125a68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_125a6c:
    // 0x125a6c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x125a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x125a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a78: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x125a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x125a7c: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x125a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x125a80: 0xc049622  jal         func_125888
    ctx->pc = 0x125A80u;
    SET_GPR_U32(ctx, 31, 0x125A88u);
    ctx->pc = 0x125A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A80u;
    // 0x125a84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x125A80u, 0x125A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A88u;
label_125a88:
    // 0x125a88: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A88u;
            // 0x125a8c: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125a6c;
        }
    }
    ctx->pc = 0x125A90u;
label_125a90:
    // 0x125a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125a98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125a9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125aa0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125aa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125aa4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x125aa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x125aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125aac: 0x3e00008  jr          $ra
    ctx->pc = 0x125AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AACu;
        // 0x125ab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125AB4u;
label_125ab4:
    // 0x125ab4: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x125AB4u;
    {
        const bool branch_taken_0x125ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AB4u;
        // 0x125ab8: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ab4) {
            ctx->pc = 0x125A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125a5c;
        }
    }
    ctx->pc = 0x125ABCu;
}
