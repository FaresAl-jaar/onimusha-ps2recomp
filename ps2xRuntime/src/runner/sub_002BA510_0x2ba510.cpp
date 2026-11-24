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

// Function: sub_002BA510
// Address: 0x2ba510 - 0x2ba590
void sub_002BA510_0x2ba510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA510_0x2ba510");
#endif

    ctx->pc = 0x2ba510u;

    // 0x2ba510: 0xc48128f0  lwc1        $f1, 0x28F0($a0)
    ctx->pc = 0x2ba510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba514: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2ba514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2ba518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba51c: 0x0  nop
    ctx->pc = 0x2ba51cu;
    // NOP
    // 0x2ba520: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ba520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba524: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA524u;
    {
        const bool branch_taken_0x2ba524 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA524u;
        // 0x2ba528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba524) {
            ctx->pc = 0x2BA538u;
            goto label_2ba538;
        }
    }
    ctx->pc = 0x2BA52Cu;
    // 0x2ba52c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BA52Cu;
    {
        const bool branch_taken_0x2ba52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba52c) {
            ctx->pc = 0x2BA588u;
            goto label_2ba588;
        }
    }
    ctx->pc = 0x2BA534u;
    // 0x2ba534: 0x0  nop
    ctx->pc = 0x2ba534u;
    // NOP
label_2ba538:
    // 0x2ba538: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ba538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ba53c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2ba53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ba540: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BA540u;
    {
        const bool branch_taken_0x2ba540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA540u;
        // 0x2ba544: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba540) {
            ctx->pc = 0x2BA578u;
            goto label_2ba578;
        }
    }
    ctx->pc = 0x2BA548u;
    // 0x2ba548: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BA548u;
    {
        const bool branch_taken_0x2ba548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba548) {
            ctx->pc = 0x2BA578u;
            goto label_2ba578;
        }
    }
    ctx->pc = 0x2BA550u;
    // 0x2ba550: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2ba550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2ba554: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA554u;
    {
        const bool branch_taken_0x2ba554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA554u;
        // 0x2ba558: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba554) {
            ctx->pc = 0x2BA578u;
            goto label_2ba578;
        }
    }
    ctx->pc = 0x2BA55Cu;
    // 0x2ba55c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA55Cu;
    {
        const bool branch_taken_0x2ba55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba55c) {
            ctx->pc = 0x2BA578u;
            goto label_2ba578;
        }
    }
    ctx->pc = 0x2BA564u;
    // 0x2ba564: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2ba564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2ba568: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA568u;
    {
        const bool branch_taken_0x2ba568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba568) {
            ctx->pc = 0x2BA578u;
            goto label_2ba578;
        }
    }
    ctx->pc = 0x2BA570u;
    // 0x2ba570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA570u;
    {
        const bool branch_taken_0x2ba570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba570) {
            ctx->pc = 0x2BA580u;
            goto label_2ba580;
        }
    }
    ctx->pc = 0x2BA578u;
label_2ba578:
    // 0x2ba578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA578u;
    {
        const bool branch_taken_0x2ba578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA578u;
        // 0x2ba57c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba578) {
            ctx->pc = 0x2BA588u;
            goto label_2ba588;
        }
    }
    ctx->pc = 0x2BA580u;
label_2ba580:
    // 0x2ba580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba584: 0x0  nop
    ctx->pc = 0x2ba584u;
    // NOP
label_2ba588:
    // 0x2ba588: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA590u;
}
