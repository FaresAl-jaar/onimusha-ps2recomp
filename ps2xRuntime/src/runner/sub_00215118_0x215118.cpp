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

// Function: sub_00215118
// Address: 0x215118 - 0x215188
void sub_00215118_0x215118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215118_0x215118");
#endif

    switch (ctx->pc) {
        case 0x215130u: goto label_215130;
        case 0x215140u: goto label_215140;
        default: break;
    }

    ctx->pc = 0x215118u;

    // 0x215118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21511c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x21511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x215120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215124: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215128: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x215128u;
    SET_GPR_U32(ctx, 31, 0x215130u);
    ctx->pc = 0x21512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215128u;
    // 0x21512c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x215128u, 0x215130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215130u;
label_215130:
    // 0x215130: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x215130u;
    {
        const bool branch_taken_0x215130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215130u;
        // 0x215134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215130) {
            ctx->pc = 0x215178u;
            goto label_215178;
        }
    }
    ctx->pc = 0x215138u;
    // 0x215138: 0xc08484a  jal         func_212128
    ctx->pc = 0x215138u;
    SET_GPR_U32(ctx, 31, 0x215140u);
    ctx->pc = 0x212128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212128u, 0x215138u, 0x215140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215140u;
label_215140:
    // 0x215140: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x215140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215144: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x215144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21514c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21514Cu;
    {
        const bool branch_taken_0x21514c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21514Cu;
        // 0x215150: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21514c) {
            ctx->pc = 0x215168u;
            goto label_215168;
        }
    }
    ctx->pc = 0x215154u;
    // 0x215154: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x215154u;
    {
        const bool branch_taken_0x215154 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x215158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215154u;
        // 0x215158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215154) {
            ctx->pc = 0x215168u;
            goto label_215168;
        }
    }
    ctx->pc = 0x21515Cu;
    // 0x21515c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215160: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215160u;
    {
        const bool branch_taken_0x215160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215160u;
        // 0x215164: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215160) {
            ctx->pc = 0x21517Cu;
            goto label_21517c;
        }
    }
    ctx->pc = 0x215168u;
label_215168:
    // 0x215168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21516c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21516cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215170: 0x80852ce  j           func_214B38
    ctx->pc = 0x215170u;
    ctx->pc = 0x215174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215170u;
    // 0x215174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B38u;
    sub_00214B38_0x214b38(rdram, ctx, runtime); return;
    ctx->pc = 0x215178u;
label_215178:
    // 0x215178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21517c:
    // 0x21517c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215180: 0x3e00008  jr          $ra
    ctx->pc = 0x215180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215180u;
        // 0x215184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215188u;
}
