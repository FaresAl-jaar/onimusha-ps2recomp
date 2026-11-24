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

// Function: sub_0017B940
// Address: 0x17b940 - 0x17b9d0
void sub_0017B940_0x17b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B940_0x17b940");
#endif

    switch (ctx->pc) {
        case 0x17b978u: goto label_17b978;
        default: break;
    }

    ctx->pc = 0x17b940u;

    // 0x17b940: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17b940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17b944: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x17b944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b948: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17B948u;
    {
        const bool branch_taken_0x17b948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B948u;
        // 0x17b94c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b948) {
            ctx->pc = 0x17B9B8u;
            goto label_17b9b8;
        }
    }
    ctx->pc = 0x17B950u;
    // 0x17b950: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x17B950u;
    {
        const bool branch_taken_0x17b950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b950) {
            ctx->pc = 0x17B9A8u;
            goto label_17b9a8;
        }
    }
    ctx->pc = 0x17B958u;
    // 0x17b958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b95c: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17B95Cu;
    {
        const bool branch_taken_0x17b95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b95c) {
            ctx->pc = 0x17B988u;
            goto label_17b988;
        }
    }
    ctx->pc = 0x17B964u;
    // 0x17b964: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B964u;
    {
        const bool branch_taken_0x17b964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b964) {
            ctx->pc = 0x17B978u;
            goto label_17b978;
        }
    }
    ctx->pc = 0x17B96Cu;
    // 0x17b96c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17B96Cu;
    {
        const bool branch_taken_0x17b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b96c) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B974u;
    // 0x17b974: 0x0  nop
    ctx->pc = 0x17b974u;
    // NOP
label_17b978:
    // 0x17b978: 0x8c832cb8  lw          $v1, 0x2CB8($a0)
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11448)));
    // 0x17b97c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x17b97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17b980: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17B980u;
    {
        const bool branch_taken_0x17b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B980u;
        // 0x17b984: 0xac832cb8  sw          $v1, 0x2CB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b980) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B988u;
label_17b988:
    // 0x17b988: 0x8c852cb8  lw          $a1, 0x2CB8($a0)
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11448)));
    // 0x17b98c: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x17b98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x17b990: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x17B990u;
    {
        const bool branch_taken_0x17b990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B990u;
        // 0x17b994: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b990) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B998u;
    // 0x17b998: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17b998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17b99c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17B99Cu;
    {
        const bool branch_taken_0x17b99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B99Cu;
        // 0x17b9a0: 0xac832cb8  sw          $v1, 0x2CB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b99c) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B9A4u;
    // 0x17b9a4: 0x0  nop
    ctx->pc = 0x17b9a4u;
    // NOP
label_17b9a8:
    // 0x17b9a8: 0x8c832cb8  lw          $v1, 0x2CB8($a0)
    ctx->pc = 0x17b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11448)));
    // 0x17b9ac: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x17b9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x17b9b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17B9B0u;
    {
        const bool branch_taken_0x17b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9B0u;
        // 0x17b9b4: 0xac832cb8  sw          $v1, 0x2CB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9b0) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B9B8u;
label_17b9b8:
    // 0x17b9b8: 0x8c852cb8  lw          $a1, 0x2CB8($a0)
    ctx->pc = 0x17b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11448)));
    // 0x17b9bc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x17b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17b9c0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17b9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17b9c4: 0xac832cb8  sw          $v1, 0x2CB8($a0)
    ctx->pc = 0x17b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11448), GPR_U32(ctx, 3));
label_17b9c8:
    // 0x17b9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9D0u;
}
