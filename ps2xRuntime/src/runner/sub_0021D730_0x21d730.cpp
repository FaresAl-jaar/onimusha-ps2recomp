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

// Function: sub_0021D730
// Address: 0x21d730 - 0x21d7a8
void sub_0021D730_0x21d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D730_0x21d730");
#endif

    switch (ctx->pc) {
        case 0x21d758u: goto label_21d758;
        case 0x21d760u: goto label_21d760;
        case 0x21d76cu: goto label_21d76c;
        case 0x21d77cu: goto label_21d77c;
        default: break;
    }

    ctx->pc = 0x21d730u;

    // 0x21d730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d740: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x21d740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x21d744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d74c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21d750: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x21D750u;
    SET_GPR_U32(ctx, 31, 0x21D758u);
    ctx->pc = 0x21D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D750u;
    // 0x21d754: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x21D750u, 0x21D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D758u;
label_21d758:
    // 0x21d758: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x21d758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d760:
    // 0x21d760: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x21d760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21d764: 0xc0886f2  jal         func_221BC8
    ctx->pc = 0x21D764u;
    SET_GPR_U32(ctx, 31, 0x21D76Cu);
    ctx->pc = 0x21D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D764u;
    // 0x21d768: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BC8u, 0x21D764u, 0x21D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D76Cu;
label_21d76c:
    // 0x21d76c: 0x643fffc  bgezl       $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x21D76Cu;
    {
        const bool branch_taken_0x21d76c = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x21d76c) {
            ctx->pc = 0x21D770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D76Cu;
            // 0x21d770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d760;
        }
    }
    ctx->pc = 0x21D774u;
    // 0x21d774: 0xc0886f2  jal         func_221BC8
    ctx->pc = 0x21D774u;
    SET_GPR_U32(ctx, 31, 0x21D77Cu);
    ctx->pc = 0x21D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D774u;
    // 0x21d778: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BC8u, 0x21D774u, 0x21D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D77Cu;
label_21d77c:
    // 0x21d77c: 0xfe2000c0  sd          $zero, 0xC0($s1)
    ctx->pc = 0x21d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 0));
    // 0x21d780: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x21d780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x21d784: 0xfe2000c8  sd          $zero, 0xC8($s1)
    ctx->pc = 0x21d784u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 0));
    // 0x21d788: 0xfe2000d0  sd          $zero, 0xD0($s1)
    ctx->pc = 0x21d788u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 0));
    // 0x21d78c: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x21d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x21d790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d798: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d79c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21d79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7A0u;
        // 0x21d7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D7A8u;
}
