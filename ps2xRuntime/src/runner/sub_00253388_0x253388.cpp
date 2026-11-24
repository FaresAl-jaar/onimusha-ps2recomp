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

// Function: sub_00253388
// Address: 0x253388 - 0x253448
void sub_00253388_0x253388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253388_0x253388");
#endif

    switch (ctx->pc) {
        case 0x2533a8u: goto label_2533a8;
        case 0x2533e8u: goto label_2533e8;
        case 0x253438u: goto label_253438;
        default: break;
    }

    ctx->pc = 0x253388u;

    // 0x253388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25338c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x25338cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x253390: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253390u;
    {
        const bool branch_taken_0x253390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253390u;
        // 0x253394: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253390) {
            ctx->pc = 0x2533B0u;
            goto label_2533b0;
        }
    }
    ctx->pc = 0x253398u;
    // 0x253398: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x253398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x25339c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25339Cu;
    {
        const bool branch_taken_0x25339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25339Cu;
        // 0x2533a0: 0x2484ef70  addiu       $a0, $a0, -0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25339c) {
            ctx->pc = 0x253430u;
            goto label_253430;
        }
    }
    ctx->pc = 0x2533A4u;
    // 0x2533a4: 0x0  nop
    ctx->pc = 0x2533a4u;
    // NOP
label_2533a8:
    // 0x2533a8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2533A8u;
    {
        const bool branch_taken_0x2533a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533A8u;
        // 0x2533ac: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533a8) {
            ctx->pc = 0x25341Cu;
            goto label_25341c;
        }
    }
    ctx->pc = 0x2533B0u;
label_2533b0:
    // 0x2533b0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2533b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2533b4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2533b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2533b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2533bc: 0x246aef98  addiu       $t2, $v1, -0x1068
    ctx->pc = 0x2533bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963096));
    // 0x2533c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2533c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2533c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2533c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2533c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2533cc: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2533ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2533d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2533d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2533d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2533d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2533d8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2533D8u;
    {
        const bool branch_taken_0x2533d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533D8u;
        // 0x2533dc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533d8) {
            ctx->pc = 0x25340Cu;
            goto label_25340c;
        }
    }
    ctx->pc = 0x2533E0u;
    // 0x2533e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2533e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2533e4: 0x0  nop
    ctx->pc = 0x2533e4u;
    // NOP
label_2533e8:
    // 0x2533e8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2533e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2533ec: 0x29220006  slti        $v0, $t1, 0x6
    ctx->pc = 0x2533ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2533f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2533F0u;
    {
        const bool branch_taken_0x2533f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533F0u;
        // 0x2533f4: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533f0) {
            ctx->pc = 0x25341Cu;
            goto label_25341c;
        }
    }
    ctx->pc = 0x2533F8u;
    // 0x2533f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2533f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2533fc: 0x0  nop
    ctx->pc = 0x2533fcu;
    // NOP
    // 0x253400: 0x0  nop
    ctx->pc = 0x253400u;
    // NOP
    // 0x253404: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x253404u;
    {
        const bool branch_taken_0x253404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253404) {
            ctx->pc = 0x253408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253404u;
            // 0x253408: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2533E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2533e8;
        }
    }
    ctx->pc = 0x25340Cu;
label_25340c:
    // 0x25340c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x25340cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x253410: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x253410u;
    {
        const bool branch_taken_0x253410 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x253414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253410u;
        // 0x253414: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253410) {
            ctx->pc = 0x2533A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2533a8;
        }
    }
    ctx->pc = 0x253418u;
    // 0x253418: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x253418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
label_25341c:
    // 0x25341c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x25341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x253420: 0x55220006  bnel        $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253420u;
    {
        const bool branch_taken_0x253420 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x253420) {
            ctx->pc = 0x253424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253420u;
            // 0x253424: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25343Cu;
            goto label_25343c;
        }
    }
    ctx->pc = 0x253428u;
    // 0x253428: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x253428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x25342c: 0x2484efa0  addiu       $a0, $a0, -0x1060
    ctx->pc = 0x25342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963104));
label_253430:
    // 0x253430: 0xc094c1e  jal         func_253078
    ctx->pc = 0x253430u;
    SET_GPR_U32(ctx, 31, 0x253438u);
    ctx->pc = 0x253078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253078u, 0x253430u, 0x253438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253438u;
label_253438:
    // 0x253438: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x253438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25343c:
    // 0x25343c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25343cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253440: 0x3e00008  jr          $ra
    ctx->pc = 0x253440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253440u;
        // 0x253444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253448u;
}
