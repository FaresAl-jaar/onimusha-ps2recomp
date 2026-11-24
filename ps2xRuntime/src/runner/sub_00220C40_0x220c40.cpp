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

// Function: sub_00220C40
// Address: 0x220c40 - 0x220c98
void sub_00220C40_0x220c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220C40_0x220c40");
#endif

    switch (ctx->pc) {
        case 0x220c5cu: goto label_220c5c;
        default: break;
    }

    ctx->pc = 0x220c40u;

    // 0x220c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220c50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x220c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x220c54: 0xc084968  jal         func_2125A0
    ctx->pc = 0x220C54u;
    SET_GPR_U32(ctx, 31, 0x220C5Cu);
    ctx->pc = 0x220C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C54u;
    // 0x220c58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x220C54u, 0x220C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C5Cu;
label_220c5c:
    // 0x220c5c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x220c60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220C60u;
    {
        const bool branch_taken_0x220c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C60u;
        // 0x220c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c60) {
            ctx->pc = 0x220C80u;
            goto label_220c80;
        }
    }
    ctx->pc = 0x220C68u;
    // 0x220c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220c6c: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x220c6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
    // 0x220c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220c78: 0x80848e0  j           func_212380
    ctx->pc = 0x220C78u;
    ctx->pc = 0x220C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C78u;
    // 0x220c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x220C80u;
label_220c80:
    // 0x220c80: 0xae110d48  sw          $s1, 0xD48($s0)
    ctx->pc = 0x220c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3400), GPR_U32(ctx, 17));
    // 0x220c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220c90: 0x3e00008  jr          $ra
    ctx->pc = 0x220C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C90u;
        // 0x220c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220C98u;
}
