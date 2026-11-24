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

// Function: sub_0012E3D8
// Address: 0x12e3d8 - 0x12e48c
void sub_0012E3D8_0x12e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E3D8_0x12e3d8");
#endif

    switch (ctx->pc) {
        case 0x12e424u: goto label_12e424;
        default: break;
    }

    ctx->pc = 0x12e3d8u;

    // 0x12e3d8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12e3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e3dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12e3dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3e0: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x12e3e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12e3e4: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x12e3e4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e3e8: 0x15e00024  bnez        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x12E3E8u;
    {
        const bool branch_taken_0x12e3e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3E8u;
        // 0x12e3ec: 0x8c8a0004  lw          $t2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3e8) {
            ctx->pc = 0x12E47Cu;
            goto label_12e47c;
        }
    }
    ctx->pc = 0x12E3F0u;
    // 0x12e3f0: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x12e3f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x12e3f4: 0x51e00022  beql        $t7, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x12E3F4u;
    {
        const bool branch_taken_0x12e3f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e3f4) {
            ctx->pc = 0x12E3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E3F4u;
            // 0x12e3f8: 0x3c0d007f  lui         $t5, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E480u;
            goto label_12e480;
        }
    }
    ctx->pc = 0x12E3FCu;
    // 0x12e3fc: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x12e3fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x12e400: 0x51e00008  beql        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E400u;
    {
        const bool branch_taken_0x12e400 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e400) {
            ctx->pc = 0x12E404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E400u;
            // 0x12e404: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E424u;
            goto label_12e424;
        }
    }
    ctx->pc = 0x12E408u;
    // 0x12e408: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E408u;
    {
        const bool branch_taken_0x12e408 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E408u;
        // 0x12e40c: 0x3c0e007f  lui         $t6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e408) {
            ctx->pc = 0x12E428u;
            goto label_12e428;
        }
    }
    ctx->pc = 0x12E410u;
    // 0x12e410: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x12e410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e414: 0x288fff82  slti        $t7, $a0, -0x7E
    ctx->pc = 0x12e414u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x12e418: 0x51e00015  beql        $t7, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x12E418u;
    {
        const bool branch_taken_0x12e418 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e418) {
            ctx->pc = 0x12E41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E418u;
            // 0x12e41c: 0x248b007f  addiu       $t3, $a0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E470u;
            goto label_12e470;
        }
    }
    ctx->pc = 0x12E420u;
    // 0x12e420: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x12e420u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e424:
    // 0x12e424: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x12e424u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
label_12e428:
    // 0x12e428: 0x3c0fff80  lui         $t7, 0xFF80
    ctx->pc = 0x12e428u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65408 << 16));
    // 0x12e42c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12e42cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12e430: 0x18f6024  and         $t4, $t4, $t7
    ctx->pc = 0x12e430u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x12e434: 0x1ae7024  and         $t6, $t5, $t6
    ctx->pc = 0x12e434u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x12e438: 0x316f00ff  andi        $t7, $t3, 0xFF
    ctx->pc = 0x12e438u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x12e43c: 0x3c0d807f  lui         $t5, 0x807F
    ctx->pc = 0x12e43cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32895 << 16));
    // 0x12e440: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x12e440u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x12e444: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x12e444u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x12e448: 0xf7dc0  sll         $t7, $t7, 23
    ctx->pc = 0x12e448u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 23));
    // 0x12e44c: 0x18d6024  and         $t4, $t4, $t5
    ctx->pc = 0x12e44cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
    // 0x12e450: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12e450u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12e454: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x12e454u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x12e458: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12e458u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12e45c: 0xa6fc0  sll         $t5, $t2, 31
    ctx->pc = 0x12e45cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 31));
    // 0x12e460: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x12e460u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x12e464: 0x18d7825  or          $t7, $t4, $t5
    ctx->pc = 0x12e464u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x12e468: 0x3e00008  jr          $ra
    ctx->pc = 0x12E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E468u;
        // 0x12e46c: 0x448f0000  mtc1        $t7, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E470u;
label_12e470:
    // 0x12e470: 0x296f0100  slti        $t7, $t3, 0x100
    ctx->pc = 0x12e470u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x12e474: 0x15e0ffeb  bnez        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12E474u;
    {
        const bool branch_taken_0x12e474 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E474u;
        // 0x12e478: 0xd69c2  srl         $t5, $t5, 7 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e474) {
            ctx->pc = 0x12E424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e424;
        }
    }
    ctx->pc = 0x12E47Cu;
label_12e47c:
    // 0x12e47c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x12e47cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
label_12e480:
    // 0x12e480: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x12e480u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12e484: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E484u;
    {
        const bool branch_taken_0x12e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E484u;
        // 0x12e488: 0x35adffff  ori         $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e484) {
            ctx->pc = 0x12E424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e424;
        }
    }
    ctx->pc = 0x12E48Cu;
}
