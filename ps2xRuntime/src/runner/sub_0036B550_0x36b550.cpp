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

// Function: sub_0036B550
// Address: 0x36b550 - 0x36b620
void sub_0036B550_0x36b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B550_0x36b550");
#endif

    switch (ctx->pc) {
        case 0x36b5e0u: goto label_36b5e0;
        default: break;
    }

    ctx->pc = 0x36b550u;

    // 0x36b550: 0x93828bfc  lbu         $v0, -0x7404($gp)
    ctx->pc = 0x36b550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937596)));
    // 0x36b554: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B554u;
    {
        const bool branch_taken_0x36b554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B554u;
        // 0x36b558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b554) {
            ctx->pc = 0x36B568u;
            goto label_36b568;
        }
    }
    ctx->pc = 0x36B55Cu;
    // 0x36b55c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x36B55Cu;
    {
        const bool branch_taken_0x36b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b55c) {
            ctx->pc = 0x36B618u;
            goto label_36b618;
        }
    }
    ctx->pc = 0x36B564u;
    // 0x36b564: 0x0  nop
    ctx->pc = 0x36b564u;
    // NOP
label_36b568:
    // 0x36b568: 0x97828bf4  lhu         $v0, -0x740C($gp)
    ctx->pc = 0x36b568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x36b56c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x36b56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x36b570: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x36b570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36b574: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B574u;
    {
        const bool branch_taken_0x36b574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B574u;
        // 0x36b578: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b574) {
            ctx->pc = 0x36B588u;
            goto label_36b588;
        }
    }
    ctx->pc = 0x36B57Cu;
    // 0x36b57c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x36B57Cu;
    {
        const bool branch_taken_0x36b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b57c) {
            ctx->pc = 0x36B618u;
            goto label_36b618;
        }
    }
    ctx->pc = 0x36B584u;
    // 0x36b584: 0x0  nop
    ctx->pc = 0x36b584u;
    // NOP
label_36b588:
    // 0x36b588: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x36b588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x36b58c: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x36b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x36b590: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36b590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36b594: 0x2463e6c0  addiu       $v1, $v1, -0x1940
    ctx->pc = 0x36b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960832));
    // 0x36b598: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x36b598u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x36b59c: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x36b59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36b5a0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x36b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x36b5a4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x36b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36b5a8: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x36b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x36b5ac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x36b5acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x36b5b0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x36b5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36b5b4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x36b5b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36b5bc: 0x3483a9e5  ori         $v1, $a0, 0xA9E5
    ctx->pc = 0x36b5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x36b5c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36b5c4: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x36b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x36b5c8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x36b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x36b5cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36b5d0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x36b5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x36b5d4: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x36b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x36b5d8: 0x4012  mflo        $t0
    ctx->pc = 0x36b5d8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x36b5dc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x36b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_36b5e0:
    // 0x36b5e0: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x36b5e0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x36b5e4: 0x0  nop
    ctx->pc = 0x36b5e4u;
    // NOP
    // 0x36b5e8: 0x0  nop
    ctx->pc = 0x36b5e8u;
    // NOP
    // 0x36b5ec: 0x1810  mfhi        $v1
    ctx->pc = 0x36b5ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x36b5f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36B5F0u;
    {
        const bool branch_taken_0x36b5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b5f0) {
            ctx->pc = 0x36B608u;
            goto label_36b608;
        }
    }
    ctx->pc = 0x36B5F8u;
    // 0x36b5f8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x36b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x36b5fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x36b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x36b600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36B600u;
    {
        const bool branch_taken_0x36b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B600u;
        // 0x36b604: 0x84420002  lh          $v0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b600) {
            ctx->pc = 0x36B618u;
            goto label_36b618;
        }
    }
    ctx->pc = 0x36B608u;
label_36b608:
    // 0x36b608: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36b608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36b60c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x36b60cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x36b610: 0x4e1fff3  bgez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x36B610u;
    {
        const bool branch_taken_0x36b610 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x36B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B610u;
        // 0x36b614: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b610) {
            ctx->pc = 0x36B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b5e0;
        }
    }
    ctx->pc = 0x36B618u;
label_36b618:
    // 0x36b618: 0x3e00008  jr          $ra
    ctx->pc = 0x36B618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B620u;
}
