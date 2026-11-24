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

// Function: sub_00252BE8
// Address: 0x252be8 - 0x252c60
void sub_00252BE8_0x252be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252BE8_0x252be8");
#endif

    switch (ctx->pc) {
        case 0x252c1cu: goto label_252c1c;
        case 0x252c3cu: goto label_252c3c;
        default: break;
    }

    ctx->pc = 0x252be8u;

    // 0x252be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252bec: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x252becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x252bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252bf4: 0x2463fb9c  addiu       $v1, $v1, -0x464
    ctx->pc = 0x252bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966172));
    // 0x252bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x252bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x252bfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DFB9Cu));
    // 0x252c00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x252c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x252c04: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x252C04u;
    {
        const bool branch_taken_0x252c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C04u;
        // 0x252c08: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c04) {
            ctx->pc = 0x252C50u;
            goto label_252c50;
        }
    }
    ctx->pc = 0x252C0Cu;
    // 0x252c0c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x252c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x252c10: 0x2610fe30  addiu       $s0, $s0, -0x1D0
    ctx->pc = 0x252c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966832));
    // 0x252c14: 0xc091e0e  jal         func_247838
    ctx->pc = 0x252C14u;
    SET_GPR_U32(ctx, 31, 0x252C1Cu);
    ctx->pc = 0x252C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C14u;
    // 0x252c18: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247838u, 0x252C14u, 0x252C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C1Cu;
label_252c1c:
    // 0x252c1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x252c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x252c20: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x252c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x252c24: 0x2450fba4  addiu       $s0, $v0, -0x45C
    ctx->pc = 0x252c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966180));
    // 0x252c28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x252c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4DFBA4u));
    // 0x252c2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x252C2Cu;
    {
        const bool branch_taken_0x252c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C2Cu;
        // 0x252c30: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c2c) {
            ctx->pc = 0x252C40u;
            goto label_252c40;
        }
    }
    ctx->pc = 0x252C34u;
    // 0x252c34: 0xc045920  jal         func_116480
    ctx->pc = 0x252C34u;
    SET_GPR_U32(ctx, 31, 0x252C3Cu);
    ctx->pc = 0x116480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116480u, 0x252C34u, 0x252C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C3Cu;
label_252c3c:
    // 0x252c3c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x252c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_252c40:
    // 0x252c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x252c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252c48: 0x8091ec8  j           func_247B20
    ctx->pc = 0x252C48u;
    ctx->pc = 0x252C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C48u;
    // 0x252c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B20u;
    sub_00247B20_0x247b20(rdram, ctx, runtime); return;
    ctx->pc = 0x252C50u;
label_252c50:
    // 0x252c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x252c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252c58: 0x3e00008  jr          $ra
    ctx->pc = 0x252C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C58u;
        // 0x252c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C60u;
}
