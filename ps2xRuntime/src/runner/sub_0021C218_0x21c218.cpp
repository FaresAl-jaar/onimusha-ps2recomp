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

// Function: sub_0021C218
// Address: 0x21c218 - 0x21c290
void sub_0021C218_0x21c218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C218_0x21c218");
#endif

    switch (ctx->pc) {
        case 0x21c240u: goto label_21c240;
        case 0x21c24cu: goto label_21c24c;
        case 0x21c25cu: goto label_21c25c;
        default: break;
    }

    ctx->pc = 0x21c218u;

    // 0x21c218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c21c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21c220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c224: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c22c: 0x2451a1cc  addiu       $s1, $v0, -0x5E34
    ctx->pc = 0x21c22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x21c230: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c234: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21c234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c238: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x21c238u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4BA1CCu));
    // 0x21c23c: 0x0  nop
    ctx->pc = 0x21c23cu;
    // NOP
label_21c240:
    // 0x21c240: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21c240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21c244: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21C244u;
    SET_GPR_U32(ctx, 31, 0x21C24Cu);
    ctx->pc = 0x21C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C244u;
    // 0x21c248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21C244u, 0x21C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C24Cu;
label_21c24c:
    // 0x21c24c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C24Cu;
    {
        const bool branch_taken_0x21c24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C24Cu;
        // 0x21c250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c24c) {
            ctx->pc = 0x21C264u;
            goto label_21c264;
        }
    }
    ctx->pc = 0x21C254u;
    // 0x21c254: 0xc08707c  jal         func_21C1F0
    ctx->pc = 0x21C254u;
    SET_GPR_U32(ctx, 31, 0x21C25Cu);
    ctx->pc = 0x21C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C1F0u, 0x21C254u, 0x21C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C25Cu;
label_21c25c:
    // 0x21c25c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C25Cu;
    {
        const bool branch_taken_0x21c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C25Cu;
        // 0x21c260: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c25c) {
            ctx->pc = 0x21C27Cu;
            goto label_21c27c;
        }
    }
    ctx->pc = 0x21C264u;
label_21c264:
    // 0x21c264: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21c264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21c268: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x21c268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21c26c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x21C26Cu;
    {
        const bool branch_taken_0x21c26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c26c) {
            ctx->pc = 0x21C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C26Cu;
            // 0x21c270: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c240;
        }
    }
    ctx->pc = 0x21C274u;
    // 0x21c274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c27c:
    // 0x21c27c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c284: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c288: 0x3e00008  jr          $ra
    ctx->pc = 0x21C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C288u;
        // 0x21c28c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C290u;
}
