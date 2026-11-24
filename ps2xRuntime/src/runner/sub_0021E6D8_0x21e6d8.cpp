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

// Function: sub_0021E6D8
// Address: 0x21e6d8 - 0x21e764
void sub_0021E6D8_0x21e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E6D8_0x21e6d8");
#endif

    switch (ctx->pc) {
        case 0x21e72cu: goto label_21e72c;
        default: break;
    }

    ctx->pc = 0x21e6d8u;

    // 0x21e6d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e6dc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x21e6dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e6e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21e6ec: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x21e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21e6f0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21e6f4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x21e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x21e6f8: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x21e6f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21e6fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e704: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E704u;
    {
        const bool branch_taken_0x21e704 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x21E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E704u;
        // 0x21e708: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e704) {
            ctx->pc = 0x21E754u;
            goto label_21e754;
        }
    }
    ctx->pc = 0x21E70Cu;
    // 0x21e70c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x21e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e710: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x21e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x21e714: 0x24841348  addiu       $a0, $a0, 0x1348
    ctx->pc = 0x21e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x21e718: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e71c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21E71Cu;
    {
        const bool branch_taken_0x21e71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E71Cu;
        // 0x21e720: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e71c) {
            ctx->pc = 0x21E754u;
            goto label_21e754;
        }
    }
    ctx->pc = 0x21E724u;
    // 0x21e724: 0xc0879da  jal         func_21E768
    ctx->pc = 0x21E724u;
    SET_GPR_U32(ctx, 31, 0x21E72Cu);
    ctx->pc = 0x21E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E724u;
    // 0x21e728: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E768u, 0x21E724u, 0x21E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E72Cu;
label_21e72c:
    // 0x21e72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e730: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21e734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21e738: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E738u;
    {
        const bool branch_taken_0x21e738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E738u;
        // 0x21e73c: 0x34a50421  ori         $a1, $a1, 0x421 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1057);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e738) {
            ctx->pc = 0x21E750u;
            goto label_21e750;
        }
    }
    ctx->pc = 0x21E740u;
    // 0x21e740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21e744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e748: 0x80848e0  j           func_212380
    ctx->pc = 0x21E748u;
    ctx->pc = 0x21E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E748u;
    // 0x21e74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E750u;
label_21e750:
    // 0x21e750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e754:
    // 0x21e754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e758: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e75c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E75Cu;
        // 0x21e760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E764u;
}
