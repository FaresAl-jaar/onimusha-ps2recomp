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

// Function: sub_0023C400
// Address: 0x23c400 - 0x23c4b8
void sub_0023C400_0x23c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C400_0x23c400");
#endif

    switch (ctx->pc) {
        case 0x23c430u: goto label_23c430;
        case 0x23c450u: goto label_23c450;
        case 0x23c458u: goto label_23c458;
        case 0x23c46cu: goto label_23c46c;
        case 0x23c484u: goto label_23c484;
        case 0x23c490u: goto label_23c490;
        default: break;
    }

    ctx->pc = 0x23c400u;

    // 0x23c400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c404: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23c404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23c408: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23c408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x23c40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23c410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23c414: 0xac44ef78  sw          $a0, -0x1088($v0)
    ctx->pc = 0x23c414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4BEF78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BEF78u, _value); } while (0);
    // 0x23c418: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c41c: 0x2471ef88  addiu       $s1, $v1, -0x1078
    ctx->pc = 0x23c41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963080));
    // 0x23c420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c424: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x23c424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23c428: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23c42c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23c42cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c430:
    // 0x23c430: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23c434: 0x54530017  bnel        $v0, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x23C434u;
    {
        const bool branch_taken_0x23c434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x23c434) {
            ctx->pc = 0x23C438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C434u;
            // 0x23c438: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C494u;
            goto label_23c494;
        }
    }
    ctx->pc = 0x23C43Cu;
    // 0x23c43c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x23c43cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x23c440: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23C440u;
    {
        const bool branch_taken_0x23c440 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C440u;
        // 0x23c444: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c440) {
            ctx->pc = 0x23C47Cu;
            goto label_23c47c;
        }
    }
    ctx->pc = 0x23C448u;
    // 0x23c448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c44c: 0x0  nop
    ctx->pc = 0x23c44cu;
    // NOP
label_23c450:
    // 0x23c450: 0xc08ea1a  jal         func_23A868
    ctx->pc = 0x23C450u;
    SET_GPR_U32(ctx, 31, 0x23C458u);
    ctx->pc = 0x23C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C450u;
    // 0x23c454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A868u, 0x23C450u, 0x23C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C458u;
label_23c458:
    // 0x23c458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c45c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c460: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23c460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23c464: 0xc08e9c2  jal         func_23A708
    ctx->pc = 0x23C464u;
    SET_GPR_U32(ctx, 31, 0x23C46Cu);
    ctx->pc = 0x23C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C464u;
    // 0x23c468: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A708u, 0x23C464u, 0x23C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C46Cu;
label_23c46c:
    // 0x23c46c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x23c46cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x23c470: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23c470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23c474: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23C474u;
    {
        const bool branch_taken_0x23c474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C474u;
        // 0x23c478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c474) {
            ctx->pc = 0x23C450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c450;
        }
    }
    ctx->pc = 0x23C47Cu;
label_23c47c:
    // 0x23c47c: 0xc08ea6a  jal         func_23A9A8
    ctx->pc = 0x23C47Cu;
    SET_GPR_U32(ctx, 31, 0x23C484u);
    ctx->pc = 0x23C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C47Cu;
    // 0x23c480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A9A8u, 0x23C47Cu, 0x23C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C484u;
label_23c484:
    // 0x23c484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c488: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x23C488u;
    SET_GPR_U32(ctx, 31, 0x23C490u);
    ctx->pc = 0x23C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C488u;
    // 0x23c48c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x23C488u, 0x23C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C490u;
label_23c490:
    // 0x23c490: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23c490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23c494:
    // 0x23c494: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x23C494u;
    {
        const bool branch_taken_0x23c494 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x23C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C494u;
        // 0x23c498: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c494) {
            ctx->pc = 0x23C430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c430;
        }
    }
    ctx->pc = 0x23C49Cu;
    // 0x23c49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c4a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c4a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c4a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c4a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23c4a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c4ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23C4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B0u;
        // 0x23c4b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C4B8u;
}
