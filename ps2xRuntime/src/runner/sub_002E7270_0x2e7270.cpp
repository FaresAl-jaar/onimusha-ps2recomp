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

// Function: sub_002E7270
// Address: 0x2e7270 - 0x2e72f0
void sub_002E7270_0x2e7270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7270_0x2e7270");
#endif

    switch (ctx->pc) {
        case 0x2e7294u: goto label_2e7294;
        default: break;
    }

    ctx->pc = 0x2e7270u;

    // 0x2e7270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e727c: 0x8c852b60  lw          $a1, 0x2B60($a0)
    ctx->pc = 0x2e727cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11104)));
    // 0x2e7280: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7280u;
    {
        const bool branch_taken_0x2e7280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7280u;
        // 0x2e7284: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7280) {
            ctx->pc = 0x2E72E0u;
            goto label_2e72e0;
        }
    }
    ctx->pc = 0x2E7288u;
    // 0x2e7288: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2e7288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2e728c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E728Cu;
    SET_GPR_U32(ctx, 31, 0x2E7294u);
    ctx->pc = 0x2E7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E728Cu;
    // 0x2e7290: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E728Cu, 0x2E7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7294u;
label_2e7294:
    // 0x2e7294: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x2e7294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x2e7298: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2e7298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2e729c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E729Cu;
    {
        const bool branch_taken_0x2e729c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e729c) {
            ctx->pc = 0x2E72C0u;
            goto label_2e72c0;
        }
    }
    ctx->pc = 0x2E72A4u;
    // 0x2e72a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E72A4u;
    {
        const bool branch_taken_0x2e72a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e72a4) {
            ctx->pc = 0x2E72D8u;
            goto label_2e72d8;
        }
    }
    ctx->pc = 0x2E72ACu;
    // 0x2e72ac: 0x90432b69  lbu         $v1, 0x2B69($v0)
    ctx->pc = 0x2e72acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11113)));
    // 0x2e72b0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e72b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e72b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E72B4u;
    {
        const bool branch_taken_0x2e72b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72B4u;
        // 0x2e72b8: 0xa0432b69  sb          $v1, 0x2B69($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 11113), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72b4) {
            ctx->pc = 0x2E72D8u;
            goto label_2e72d8;
        }
    }
    ctx->pc = 0x2E72BCu;
    // 0x2e72bc: 0x0  nop
    ctx->pc = 0x2e72bcu;
    // NOP
label_2e72c0:
    // 0x2e72c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E72C0u;
    {
        const bool branch_taken_0x2e72c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e72c0) {
            ctx->pc = 0x2E72D8u;
            goto label_2e72d8;
        }
    }
    ctx->pc = 0x2E72C8u;
    // 0x2e72c8: 0x90432b69  lbu         $v1, 0x2B69($v0)
    ctx->pc = 0x2e72c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11113)));
    // 0x2e72cc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e72ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e72d0: 0xa0432b69  sb          $v1, 0x2B69($v0)
    ctx->pc = 0x2e72d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11113), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e72d4: 0x0  nop
    ctx->pc = 0x2e72d4u;
    // NOP
label_2e72d8:
    // 0x2e72d8: 0xae002b60  sw          $zero, 0x2B60($s0)
    ctx->pc = 0x2e72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11104), GPR_U32(ctx, 0));
    // 0x2e72dc: 0x0  nop
    ctx->pc = 0x2e72dcu;
    // NOP
label_2e72e0:
    // 0x2e72e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e72e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e72e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e72e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e72e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E72E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72E8u;
        // 0x2e72ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E72E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E72F0u;
}
