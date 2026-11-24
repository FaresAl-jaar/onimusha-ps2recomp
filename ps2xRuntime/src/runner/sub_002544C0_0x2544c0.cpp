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

// Function: sub_002544C0
// Address: 0x2544c0 - 0x254534
void sub_002544C0_0x2544c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002544C0_0x2544c0");
#endif

    switch (ctx->pc) {
        case 0x2544ecu: goto label_2544ec;
        case 0x254524u: goto label_254524;
        default: break;
    }

    ctx->pc = 0x2544c0u;

    // 0x2544c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2544c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2544c4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2544C4u;
    {
        const bool branch_taken_0x2544c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544C4u;
        // 0x2544c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544c4) {
            ctx->pc = 0x2544F8u;
            goto label_2544f8;
        }
    }
    ctx->pc = 0x2544CCu;
    // 0x2544cc: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x2544ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2544d0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2544d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2544d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2544d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2544d8: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x2544d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x2544dc: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2544DCu;
    {
        const bool branch_taken_0x2544dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2544E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544DCu;
        // 0x2544e0: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544dc) {
            ctx->pc = 0x254528u;
            goto label_254528;
        }
    }
    ctx->pc = 0x2544E4u;
    // 0x2544e4: 0xc0979b0  jal         func_25E6C0
    ctx->pc = 0x2544E4u;
    SET_GPR_U32(ctx, 31, 0x2544ECu);
    ctx->pc = 0x25E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E6C0u, 0x2544E4u, 0x2544ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2544ECu;
label_2544ec:
    // 0x2544ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2544ECu;
    {
        const bool branch_taken_0x2544ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2544ec) {
            ctx->pc = 0x254528u;
            goto label_254528;
        }
    }
    ctx->pc = 0x2544F4u;
    // 0x2544f4: 0x0  nop
    ctx->pc = 0x2544f4u;
    // NOP
label_2544f8:
    // 0x2544f8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x2544f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2544fc: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2544fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x254500: 0xe01827  not         $v1, $a3
    ctx->pc = 0x254500u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x254504: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x254504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x254508: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x254508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25450c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x25450cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x254510: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254510u;
    {
        const bool branch_taken_0x254510 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x254514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254510u;
        // 0x254514: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254510) {
            ctx->pc = 0x254528u;
            goto label_254528;
        }
    }
    ctx->pc = 0x254518u;
    // 0x254518: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x254518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x25451c: 0xc0ca690  jal         func_329A40
    ctx->pc = 0x25451Cu;
    SET_GPR_U32(ctx, 31, 0x254524u);
    ctx->pc = 0x254520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25451Cu;
    // 0x254520: 0x24840e70  addiu       $a0, $a0, 0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329A40u, 0x25451Cu, 0x254524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254524u;
label_254524:
    // 0x254524: 0x0  nop
    ctx->pc = 0x254524u;
    // NOP
label_254528:
    // 0x254528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25452c: 0x3e00008  jr          $ra
    ctx->pc = 0x25452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25452Cu;
        // 0x254530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254534u;
}
