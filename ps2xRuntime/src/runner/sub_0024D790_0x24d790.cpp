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

// Function: sub_0024D790
// Address: 0x24d790 - 0x24d818
void sub_0024D790_0x24d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D790_0x24d790");
#endif

    ctx->pc = 0x24d790u;

    // 0x24d790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d794: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24d794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d79c: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D79Cu;
    {
        const bool branch_taken_0x24d79c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D79Cu;
        // 0x24d7a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d79c) {
            ctx->pc = 0x24D7B8u;
            goto label_24d7b8;
        }
    }
    ctx->pc = 0x24D7A4u;
    // 0x24d7a4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d7ac: 0x2484e2e0  addiu       $a0, $a0, -0x1D20
    ctx->pc = 0x24d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
    // 0x24d7b0: 0x80933e4  j           func_24CF90
    ctx->pc = 0x24D7B0u;
    ctx->pc = 0x24D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7B0u;
    // 0x24d7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF90u;
    sub_0024CF90_0x24cf90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D7B8u;
label_24d7b8:
    // 0x24d7b8: 0x1c800007  bgtz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24D7B8u;
    {
        const bool branch_taken_0x24d7b8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x24D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7B8u;
        // 0x24d7bc: 0x240302ee  addiu       $v1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7b8) {
            ctx->pc = 0x24D7D8u;
            goto label_24d7d8;
        }
    }
    ctx->pc = 0x24D7C0u;
    // 0x24d7c0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d7c8: 0x2484e308  addiu       $a0, $a0, -0x1CF8
    ctx->pc = 0x24d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959880));
    // 0x24d7cc: 0x80933e4  j           func_24CF90
    ctx->pc = 0x24D7CCu;
    ctx->pc = 0x24D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7CCu;
    // 0x24d7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF90u;
    sub_0024CF90_0x24cf90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D7D4u;
    // 0x24d7d4: 0x0  nop
    ctx->pc = 0x24d7d4u;
    // NOP
label_24d7d8:
    // 0x24d7d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d7dc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x24d7dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24d7e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D7E0u;
    {
        const bool branch_taken_0x24d7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d7e0) {
            ctx->pc = 0x24D7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D7E0u;
            // 0x24d7e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D7E8u;
            goto label_24d7e8;
        }
    }
    ctx->pc = 0x24D7E8u;
label_24d7e8:
    // 0x24d7e8: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x24d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x24d7ec: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x24d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x24d7f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d7f4: 0x1012  mflo        $v0
    ctx->pc = 0x24d7f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24d7f8: 0x28430061  slti        $v1, $v0, 0x61
    ctx->pc = 0x24d7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x24d7fc: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x24d7fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24d800: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x24d800u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x24d804: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x24d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x24d808: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x24d808u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x24d80c: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x24d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x24d810: 0x3e00008  jr          $ra
    ctx->pc = 0x24D810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D810u;
        // 0x24d814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D818u;
}
