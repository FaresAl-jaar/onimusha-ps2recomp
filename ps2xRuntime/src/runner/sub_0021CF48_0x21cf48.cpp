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

// Function: sub_0021CF48
// Address: 0x21cf48 - 0x21cfb4
void sub_0021CF48_0x21cf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CF48_0x21cf48");
#endif

    switch (ctx->pc) {
        case 0x21cf7cu: goto label_21cf7c;
        case 0x21cf9cu: goto label_21cf9c;
        default: break;
    }

    ctx->pc = 0x21cf48u;

    // 0x21cf48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21cf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21cf4c: 0x24830a0c  addiu       $v1, $a0, 0xA0C
    ctx->pc = 0x21cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
    // 0x21cf50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21cf54: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x21cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x21cf58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21cf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21cf5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21cf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21cf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21cf64: 0x8c700050  lw          $s0, 0x50($v1)
    ctx->pc = 0x21cf64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21cf68: 0x1205000d  beq         $s0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x21CF68u;
    {
        const bool branch_taken_0x21cf68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x21CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF68u;
        // 0x21cf6c: 0x8c710054  lw          $s1, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf68) {
            ctx->pc = 0x21CFA0u;
            goto label_21cfa0;
        }
    }
    ctx->pc = 0x21CF70u;
    // 0x21cf70: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x21cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21cf74: 0xc088228  jal         func_2208A0
    ctx->pc = 0x21CF74u;
    SET_GPR_U32(ctx, 31, 0x21CF7Cu);
    ctx->pc = 0x21CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF74u;
    // 0x21cf78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208A0u, 0x21CF74u, 0x21CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF7Cu;
label_21cf7c:
    // 0x21cf7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21cf7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21cf84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21cf88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf8c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CF8Cu;
    {
        const bool branch_taken_0x21cf8c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x21CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF8Cu;
        // 0x21cf90: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf8c) {
            ctx->pc = 0x21CFA0u;
            goto label_21cfa0;
        }
    }
    ctx->pc = 0x21CF94u;
    // 0x21cf94: 0xc07d36e  jal         func_1F4DB8
    ctx->pc = 0x21CF94u;
    SET_GPR_U32(ctx, 31, 0x21CF9Cu);
    ctx->pc = 0x21CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF94u;
    // 0x21cf98: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DB8u, 0x21CF94u, 0x21CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF9Cu;
label_21cf9c:
    // 0x21cf9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21cf9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21cfa0:
    // 0x21cfa0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21cfa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cfa4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21cfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cfa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21cfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cfac: 0x3e00008  jr          $ra
    ctx->pc = 0x21CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFACu;
        // 0x21cfb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CFB4u;
}
