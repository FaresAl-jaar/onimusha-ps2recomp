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

// Function: sub_003DD6B0
// Address: 0x3dd6b0 - 0x3dd718
void sub_003DD6B0_0x3dd6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD6B0_0x3dd6b0");
#endif

    switch (ctx->pc) {
        case 0x3dd6c8u: goto label_3dd6c8;
        default: break;
    }

    ctx->pc = 0x3dd6b0u;

    // 0x3dd6b0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3dd6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd6b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3dd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3dd6b8: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x3dd6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3dd6bc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x3dd6bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd6c0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DD6C0u;
    {
        const bool branch_taken_0x3dd6c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6C0u;
        // 0x3dd6c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd6c0) {
            ctx->pc = 0x3DD710u;
            goto label_3dd710;
        }
    }
    ctx->pc = 0x3DD6C8u;
label_3dd6c8:
    // 0x3dd6c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dd6cc: 0x90850018  lbu         $a1, 0x18($a0)
    ctx->pc = 0x3dd6ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3dd6d0: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x3dd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3dd6d4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3dd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3dd6d8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3dd6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3dd6dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3dd6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3dd6e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3dd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dd6e4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3dd6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd6e8: 0xe4e00044  swc1        $f0, 0x44($a3)
    ctx->pc = 0x3dd6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
    // 0x3dd6ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd6f0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3dd6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd6f4: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x3dd6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd6f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dd6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3dd6fc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3dd6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3dd700: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x3dd700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3dd704: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x3dd704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd708: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3DD708u;
    {
        const bool branch_taken_0x3dd708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD708u;
        // 0x3dd70c: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd708) {
            ctx->pc = 0x3DD6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd6c8;
        }
    }
    ctx->pc = 0x3DD710u;
label_3dd710:
    // 0x3dd710: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD718u;
}
