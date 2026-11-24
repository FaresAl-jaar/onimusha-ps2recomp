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

// Function: sub_00238D00
// Address: 0x238d00 - 0x238d64
void sub_00238D00_0x238d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238D00_0x238d00");
#endif

    switch (ctx->pc) {
        case 0x238d28u: goto label_238d28;
        case 0x238d50u: goto label_238d50;
        default: break;
    }

    ctx->pc = 0x238d00u;

    // 0x238d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d0c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x238D0Cu;
    {
        const bool branch_taken_0x238d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D0Cu;
        // 0x238d10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d0c) {
            ctx->pc = 0x238D40u;
            goto label_238d40;
        }
    }
    ctx->pc = 0x238D14u;
    // 0x238d14: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x238d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x238d18: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x238d1c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x238d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x238d20: 0xc09255e  jal         func_249578
    ctx->pc = 0x238D20u;
    SET_GPR_U32(ctx, 31, 0x238D28u);
    ctx->pc = 0x238D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D20u;
    // 0x238d24: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249578u, 0x238D20u, 0x238D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D28u;
label_238d28:
    // 0x238d28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x238d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238d2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238d34: 0x8092566  j           func_249598
    ctx->pc = 0x238D34u;
    ctx->pc = 0x238D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D34u;
    // 0x238d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249598u;
    sub_00249598_0x249598(rdram, ctx, runtime); return;
    ctx->pc = 0x238D3Cu;
    // 0x238d3c: 0x0  nop
    ctx->pc = 0x238d3cu;
    // NOP
label_238d40:
    // 0x238d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d48: 0xc09255e  jal         func_249578
    ctx->pc = 0x238D48u;
    SET_GPR_U32(ctx, 31, 0x238D50u);
    ctx->pc = 0x238D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D48u;
    // 0x238d4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249578u, 0x238D48u, 0x238D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D50u;
label_238d50:
    // 0x238d50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x238d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238d5c: 0x8092566  j           func_249598
    ctx->pc = 0x238D5Cu;
    ctx->pc = 0x238D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D5Cu;
    // 0x238d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249598u;
    sub_00249598_0x249598(rdram, ctx, runtime); return;
    ctx->pc = 0x238D64u;
}
