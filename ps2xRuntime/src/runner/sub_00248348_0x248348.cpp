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

// Function: sub_00248348
// Address: 0x248348 - 0x2483dc
void sub_00248348_0x248348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248348_0x248348");
#endif

    switch (ctx->pc) {
        case 0x248364u: goto label_248364;
        default: break;
    }

    ctx->pc = 0x248348u;

    // 0x248348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24834c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24834cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248350: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x248350u;
    {
        const bool branch_taken_0x248350 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x248354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248350u;
        // 0x248354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248350) {
            ctx->pc = 0x248370u;
            goto label_248370;
        }
    }
    ctx->pc = 0x248358u;
    // 0x248358: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x248358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24835c: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x24835Cu;
    SET_GPR_U32(ctx, 31, 0x248364u);
    ctx->pc = 0x248360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24835Cu;
    // 0x248360: 0x24a5cfd8  addiu       $a1, $a1, -0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x24835Cu, 0x248364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248364u;
label_248364:
    // 0x248364: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x248364u;
    {
        const bool branch_taken_0x248364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248364u;
        // 0x248368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248364) {
            ctx->pc = 0x2483D0u;
            goto label_2483d0;
        }
    }
    ctx->pc = 0x24836Cu;
    // 0x24836c: 0x0  nop
    ctx->pc = 0x24836cu;
    // NOP
label_248370:
    // 0x248370: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x248370u;
    {
        const bool branch_taken_0x248370 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x248374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248370u;
        // 0x248374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248370) {
            ctx->pc = 0x248380u;
            goto label_248380;
        }
    }
    ctx->pc = 0x248378u;
    // 0x248378: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x248378u;
    {
        const bool branch_taken_0x248378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248378u;
        // 0x24837c: 0xace5000c  sw          $a1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248378) {
            ctx->pc = 0x2483B0u;
            goto label_2483b0;
        }
    }
    ctx->pc = 0x248380u;
label_248380:
    // 0x248380: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248380u;
    {
        const bool branch_taken_0x248380 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x248384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248380u;
        // 0x248384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248380) {
            ctx->pc = 0x248398u;
            goto label_248398;
        }
    }
    ctx->pc = 0x248388u;
    // 0x248388: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x248388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x24838c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x24838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x248390: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x248390u;
    {
        const bool branch_taken_0x248390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248390u;
        // 0x248394: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248390) {
            ctx->pc = 0x2483B4u;
            goto label_2483b4;
        }
    }
    ctx->pc = 0x248398u;
label_248398:
    // 0x248398: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248398u;
    {
        const bool branch_taken_0x248398 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x24839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248398u;
        // 0x24839c: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248398) {
            ctx->pc = 0x2483B4u;
            goto label_2483b4;
        }
    }
    ctx->pc = 0x2483A0u;
    // 0x2483a0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2483a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2483a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2483a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2483a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2483A8u;
    {
        const bool branch_taken_0x2483a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483A8u;
        // 0x2483ac: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483a8) {
            ctx->pc = 0x2483B4u;
            goto label_2483b4;
        }
    }
    ctx->pc = 0x2483B0u;
label_2483b0:
    // 0x2483b0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2483b4:
    // 0x2483b4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2483b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2483b8: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2483b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2483bc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x2483bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2483c0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2483c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2483c4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x2483c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2483c8: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2483c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2483cc: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x2483ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_2483d0:
    // 0x2483d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2483d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2483d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2483D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2483D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483D4u;
        // 0x2483d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2483D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2483DCu;
}
