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

// Function: sub_0033B300
// Address: 0x33b300 - 0x33b364
void sub_0033B300_0x33b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B300_0x33b300");
#endif

    switch (ctx->pc) {
        case 0x33b354u: goto label_33b354;
        default: break;
    }

    ctx->pc = 0x33b300u;

    // 0x33b300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b304: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x33b304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b30c: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x33b30cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33b310: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x33b310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x33b314: 0x14e30010  bne         $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33B314u;
    {
        const bool branch_taken_0x33b314 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b314) {
            ctx->pc = 0x33B358u;
            goto label_33b358;
        }
    }
    ctx->pc = 0x33B31Cu;
    // 0x33b31c: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x33b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33b320: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x33b320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x33b324: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x33b324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33b328: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x33b328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33b32c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b330: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x33b330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33b334: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x33b334u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x33b338: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x33b338u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x33b33c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x33b340: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33b340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b344: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x33b344u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x33b348: 0x240a005c  addiu       $t2, $zero, 0x5C
    ctx->pc = 0x33b348u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x33b34c: 0xc0c2f6c  jal         func_30BDB0
    ctx->pc = 0x33B34Cu;
    SET_GPR_U32(ctx, 31, 0x33B354u);
    ctx->pc = 0x33B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B34Cu;
    // 0x33b350: 0x344b8080  ori         $t3, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BDB0u, 0x33B34Cu, 0x33B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B354u;
label_33b354:
    // 0x33b354: 0x0  nop
    ctx->pc = 0x33b354u;
    // NOP
label_33b358:
    // 0x33b358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B35Cu;
        // 0x33b360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B364u;
}
