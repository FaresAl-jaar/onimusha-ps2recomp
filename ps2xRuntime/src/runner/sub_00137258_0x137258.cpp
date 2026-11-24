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

// Function: sub_00137258
// Address: 0x137258 - 0x1372b8
void sub_00137258_0x137258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137258_0x137258");
#endif

    switch (ctx->pc) {
        case 0x13729cu: goto label_13729c;
        default: break;
    }

    ctx->pc = 0x137258u;

    // 0x137258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13725c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13725cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x137260: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137264: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x137264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x137268: 0x24504340  addiu       $s0, $v0, 0x4340
    ctx->pc = 0x137268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17216));
    // 0x13726c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x137270: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137274: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x137278: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x137278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x13727c: 0x34a51305  ori         $a1, $a1, 0x1305
    ctx->pc = 0x13727cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4869);
    // 0x137280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137284: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x137284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137288: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x137288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x13728c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x13728cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137290: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x137290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137294: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137294u;
    SET_GPR_U32(ctx, 31, 0x13729Cu);
    ctx->pc = 0x137298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137294u;
    // 0x137298: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137294u, 0x13729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13729Cu;
label_13729c:
    // 0x13729c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13729Cu;
    {
        const bool branch_taken_0x13729c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x13729c) {
            ctx->pc = 0x1372A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13729Cu;
            // 0x1372a0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1372A8u;
            goto label_1372a8;
        }
    }
    ctx->pc = 0x1372A4u;
    // 0x1372a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1372a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1372a8:
    // 0x1372a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1372a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1372ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1372acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1372b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1372B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1372B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372B0u;
        // 0x1372b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1372B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1372B8u;
}
