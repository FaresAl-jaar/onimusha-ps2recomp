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

// Function: sub_0021F048
// Address: 0x21f048 - 0x21f0b4
void sub_0021F048_0x21f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F048_0x21f048");
#endif

    switch (ctx->pc) {
        case 0x21f068u: goto label_21f068;
        case 0x21f09cu: goto label_21f09c;
        default: break;
    }

    ctx->pc = 0x21f048u;

    // 0x21f048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f050: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f05c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f060: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F060u;
    SET_GPR_U32(ctx, 31, 0x21F068u);
    ctx->pc = 0x21F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F060u;
    // 0x21f064: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F060u, 0x21F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F068u;
label_21f068:
    // 0x21f068: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f06c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F06Cu;
    {
        const bool branch_taken_0x21f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F06Cu;
        // 0x21f070: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f06c) {
            ctx->pc = 0x21F090u;
            goto label_21f090;
        }
    }
    ctx->pc = 0x21F074u;
    // 0x21f074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f078: 0x34a50155  ori         $a1, $a1, 0x155
    ctx->pc = 0x21f078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)341);
    // 0x21f07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f084: 0x80848e0  j           func_212380
    ctx->pc = 0x21F084u;
    ctx->pc = 0x21F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F084u;
    // 0x21f088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21F08Cu;
    // 0x21f08c: 0x0  nop
    ctx->pc = 0x21f08cu;
    // NOP
label_21f090:
    // 0x21f090: 0x8e2436b0  lw          $a0, 0x36B0($s1)
    ctx->pc = 0x21f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14000)));
    // 0x21f094: 0xc087c2e  jal         func_21F0B8
    ctx->pc = 0x21F094u;
    SET_GPR_U32(ctx, 31, 0x21F09Cu);
    ctx->pc = 0x21F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F094u;
    // 0x21f098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F0B8u, 0x21F094u, 0x21F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F09Cu;
label_21f09c:
    // 0x21f09c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f0a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21F0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0ACu;
        // 0x21f0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F0B4u;
}
