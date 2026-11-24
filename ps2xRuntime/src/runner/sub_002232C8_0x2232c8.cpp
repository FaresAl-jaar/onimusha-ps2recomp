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

// Function: sub_002232C8
// Address: 0x2232c8 - 0x223340
void sub_002232C8_0x2232c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002232C8_0x2232c8");
#endif

    switch (ctx->pc) {
        case 0x2232f8u: goto label_2232f8;
        case 0x223300u: goto label_223300;
        case 0x22331cu: goto label_22331c;
        default: break;
    }

    ctx->pc = 0x2232c8u;

    // 0x2232c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2232c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2232cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2232ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2232d0: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x2232d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2232d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2232d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2232d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2232d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2232dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2232e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2232e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2232e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2232e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2232e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2232ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2232f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2232f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2232f4: 0x0  nop
    ctx->pc = 0x2232f4u;
    // NOP
label_2232f8:
    // 0x2232f8: 0xc088cd0  jal         func_223340
    ctx->pc = 0x2232F8u;
    SET_GPR_U32(ctx, 31, 0x223300u);
    ctx->pc = 0x2232FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232F8u;
    // 0x2232fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223340u, 0x2232F8u, 0x223300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223300u;
label_223300:
    // 0x223300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223304: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x223304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223308: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22330c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22330cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223310: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x223310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x223314: 0xc083d0e  jal         func_20F438
    ctx->pc = 0x223314u;
    SET_GPR_U32(ctx, 31, 0x22331Cu);
    ctx->pc = 0x223318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223314u;
    // 0x223318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F438u, 0x223314u, 0x22331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22331Cu;
label_22331c:
    // 0x22331c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x22331cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x223320: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x223320u;
    {
        const bool branch_taken_0x223320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223320u;
        // 0x223324: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223320) {
            ctx->pc = 0x2232F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2232f8;
        }
    }
    ctx->pc = 0x223328u;
    // 0x223328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22332c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22332cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x223334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223338: 0x3e00008  jr          $ra
    ctx->pc = 0x223338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223338u;
        // 0x22333c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223340u;
}
