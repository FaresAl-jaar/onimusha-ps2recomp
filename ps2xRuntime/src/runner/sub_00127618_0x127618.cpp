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

// Function: sub_00127618
// Address: 0x127618 - 0x12767c
void sub_00127618_0x127618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127618_0x127618");
#endif

    switch (ctx->pc) {
        case 0x127640u: goto label_127640;
        case 0x127658u: goto label_127658;
        default: break;
    }

    ctx->pc = 0x127618u;

    // 0x127618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12761c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x12761cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127624: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x127624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127628: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x127628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12762c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x12762cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127634: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x127634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x127638: 0xc0491ee  jal         func_1247B8
    ctx->pc = 0x127638u;
    SET_GPR_U32(ctx, 31, 0x127640u);
    ctx->pc = 0x12763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127638u;
    // 0x12763c: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1247B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247B8u, 0x127638u, 0x127640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127640u;
label_127640:
    // 0x127640: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x127640u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127644: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127648: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x127648u;
    {
        const bool branch_taken_0x127648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x12764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127648u;
        // 0x12764c: 0xe703f  dsra32      $t6, $t6, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127648) {
            ctx->pc = 0x12766Cu;
            goto label_12766c;
        }
    }
    ctx->pc = 0x127650u;
    // 0x127650: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x127650u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127654: 0x31efefff  andi        $t7, $t7, 0xEFFF
    ctx->pc = 0x127654u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61439);
label_127658:
    // 0x127658: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x127658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12765c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12765cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127664: 0x3e00008  jr          $ra
    ctx->pc = 0x127664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127664u;
        // 0x127668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12766Cu;
label_12766c:
    // 0x12766c: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12766cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127670: 0xae0e0050  sw          $t6, 0x50($s0)
    ctx->pc = 0x127670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 14));
    // 0x127674: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x127674u;
    {
        const bool branch_taken_0x127674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127674u;
        // 0x127678: 0x35ef1000  ori         $t7, $t7, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127674) {
            ctx->pc = 0x127658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127658;
        }
    }
    ctx->pc = 0x12767Cu;
}
