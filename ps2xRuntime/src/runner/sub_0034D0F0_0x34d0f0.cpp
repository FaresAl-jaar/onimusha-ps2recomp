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

// Function: sub_0034D0F0
// Address: 0x34d0f0 - 0x34d1a8
void sub_0034D0F0_0x34d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D0F0_0x34d0f0");
#endif

    ctx->pc = 0x34d0f0u;

    // 0x34d0f0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d0f4: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34d0f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34d0f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D0F8u;
    {
        const bool branch_taken_0x34d0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d0f8) {
            ctx->pc = 0x34D108u;
            goto label_34d108;
        }
    }
    ctx->pc = 0x34D100u;
    // 0x34d100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34D100u;
    {
        const bool branch_taken_0x34d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D100u;
        // 0x34d104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d100) {
            ctx->pc = 0x34D128u;
            goto label_34d128;
        }
    }
    ctx->pc = 0x34D108u;
label_34d108:
    // 0x34d108: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34d108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34d10c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D10Cu;
    {
        const bool branch_taken_0x34d10c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d10c) {
            ctx->pc = 0x34D120u;
            goto label_34d120;
        }
    }
    ctx->pc = 0x34D114u;
    // 0x34d114: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D114u;
    {
        const bool branch_taken_0x34d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D114u;
        // 0x34d118: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d114) {
            ctx->pc = 0x34D128u;
            goto label_34d128;
        }
    }
    ctx->pc = 0x34D11Cu;
    // 0x34d11c: 0x0  nop
    ctx->pc = 0x34d11cu;
    // NOP
label_34d120:
    // 0x34d120: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34d124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34d128:
    // 0x34d128: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34d128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d12c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x34d12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34d130: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D130u;
    {
        const bool branch_taken_0x34d130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D130u;
        // 0x34d134: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d130) {
            ctx->pc = 0x34D140u;
            goto label_34d140;
        }
    }
    ctx->pc = 0x34D138u;
    // 0x34d138: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34D138u;
    {
        const bool branch_taken_0x34d138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D138u;
        // 0x34d13c: 0x2c620009  sltiu       $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d138) {
            ctx->pc = 0x34D164u;
            goto label_34d164;
        }
    }
    ctx->pc = 0x34D140u;
label_34d140:
    // 0x34d140: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x34d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34d144: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34d144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34d148: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x34d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34d14c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34d150: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34d154: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34d154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d15c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x34d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x34d160: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x34d160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_34d164:
    // 0x34d164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D164u;
    {
        const bool branch_taken_0x34d164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D164u;
        // 0x34d168: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d164) {
            ctx->pc = 0x34D178u;
            goto label_34d178;
        }
    }
    ctx->pc = 0x34D16Cu;
    // 0x34d16c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34D16Cu;
    {
        const bool branch_taken_0x34d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d16c) {
            ctx->pc = 0x34D1A0u;
            goto label_34d1a0;
        }
    }
    ctx->pc = 0x34D174u;
    // 0x34d174: 0x0  nop
    ctx->pc = 0x34d174u;
    // NOP
label_34d178:
    // 0x34d178: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x34d178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x34d17c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D17Cu;
    {
        const bool branch_taken_0x34d17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D17Cu;
        // 0x34d180: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d17c) {
            ctx->pc = 0x34D190u;
            goto label_34d190;
        }
    }
    ctx->pc = 0x34D184u;
    // 0x34d184: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D184u;
    {
        const bool branch_taken_0x34d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d184) {
            ctx->pc = 0x34D1A0u;
            goto label_34d1a0;
        }
    }
    ctx->pc = 0x34D18Cu;
    // 0x34d18c: 0x0  nop
    ctx->pc = 0x34d18cu;
    // NOP
label_34d190:
    // 0x34d190: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x34d190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d194: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x34d198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d19c: 0x0  nop
    ctx->pc = 0x34d19cu;
    // NOP
label_34d1a0:
    // 0x34d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D1A8u;
}
