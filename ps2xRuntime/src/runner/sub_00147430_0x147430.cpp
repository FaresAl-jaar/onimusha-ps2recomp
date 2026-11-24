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

// Function: sub_00147430
// Address: 0x147430 - 0x147494
void sub_00147430_0x147430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147430_0x147430");
#endif

    switch (ctx->pc) {
        case 0x147470u: goto label_147470;
        case 0x147484u: goto label_147484;
        default: break;
    }

    ctx->pc = 0x147430u;

    // 0x147430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147434: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x147438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14743c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14743cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x147440: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x147440u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x147444: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x147444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x147448: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x147448u;
    {
        const bool branch_taken_0x147448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147448) {
            ctx->pc = 0x147488u;
            goto label_147488;
        }
    }
    ctx->pc = 0x147450u;
    // 0x147450: 0xa7a0001e  sh          $zero, 0x1E($sp)
    ctx->pc = 0x147450u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x147454: 0xa7a0001c  sh          $zero, 0x1C($sp)
    ctx->pc = 0x147454u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x147458: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14745c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x147460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147460u;
    {
        const bool branch_taken_0x147460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147460u;
        // 0x147464: 0x27a5001e  addiu       $a1, $sp, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147460) {
            ctx->pc = 0x147470u;
            goto label_147470;
        }
    }
    ctx->pc = 0x147468u;
    // 0x147468: 0xc052298  jal         func_148A60
    ctx->pc = 0x147468u;
    SET_GPR_U32(ctx, 31, 0x147470u);
    ctx->pc = 0x14746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147468u;
    // 0x14746c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148A60u, 0x147468u, 0x147470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147470u;
label_147470:
    // 0x147470: 0x87a5001e  lh          $a1, 0x1E($sp)
    ctx->pc = 0x147470u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x147474: 0x87a6001c  lh          $a2, 0x1C($sp)
    ctx->pc = 0x147474u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x147478: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x147478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14747c: 0xc05e46c  jal         func_1791B0
    ctx->pc = 0x14747Cu;
    SET_GPR_U32(ctx, 31, 0x147484u);
    ctx->pc = 0x147480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14747Cu;
    // 0x147480: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791B0u, 0x14747Cu, 0x147484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147484u;
label_147484:
    // 0x147484: 0x0  nop
    ctx->pc = 0x147484u;
    // NOP
label_147488:
    // 0x147488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14748c: 0x3e00008  jr          $ra
    ctx->pc = 0x14748Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14748Cu;
        // 0x147490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14748Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147494u;
}
