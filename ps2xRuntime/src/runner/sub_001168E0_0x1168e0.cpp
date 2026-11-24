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

// Function: sub_001168E0
// Address: 0x1168e0 - 0x11696c
void sub_001168E0_0x1168e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001168E0_0x1168e0");
#endif

    switch (ctx->pc) {
        case 0x11691cu: goto label_11691c;
        case 0x116934u: goto label_116934;
        case 0x116948u: goto label_116948;
        default: break;
    }

    ctx->pc = 0x1168e0u;

    // 0x1168e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1168e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1168e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1168e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1168e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1168ec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1168ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1168f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1168f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1168f4: 0x24532a8c  addiu       $s3, $v0, 0x2A8C
    ctx->pc = 0x1168f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10892));
    // 0x1168f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1168f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1168fc: 0x24710868  addiu       $s1, $v1, 0x868
    ctx->pc = 0x1168fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2152));
    // 0x116900: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x116900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x116904: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x116904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11690c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x116910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116914: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x116914u;
    SET_GPR_U32(ctx, 31, 0x11691Cu);
    ctx->pc = 0x116918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116914u;
    // 0x116918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x116914u, 0x11691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11691Cu;
label_11691c:
    // 0x11691c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11691Cu;
    {
        const bool branch_taken_0x11691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11691Cu;
        // 0x116920: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11691c) {
            ctx->pc = 0x11694Cu;
            goto label_11694c;
        }
    }
    ctx->pc = 0x116924u;
    // 0x116924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116928: 0x8e052b64  lw          $a1, 0x2B64($s0)
    ctx->pc = 0x116928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11108)));
    // 0x11692c: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x11692Cu;
    SET_GPR_U32(ctx, 31, 0x116934u);
    ctx->pc = 0x116930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11692Cu;
    // 0x116930: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x11692Cu, 0x116934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116934u;
label_116934:
    // 0x116934: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116934u;
    {
        const bool branch_taken_0x116934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116934u;
        // 0x116938: 0x8e052b64  lw          $a1, 0x2B64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116934) {
            ctx->pc = 0x11694Cu;
            goto label_11694c;
        }
    }
    ctx->pc = 0x11693Cu;
    // 0x11693c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116940: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x116940u;
    SET_GPR_U32(ctx, 31, 0x116948u);
    ctx->pc = 0x116944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116940u;
    // 0x116944: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x116940u, 0x116948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116948u;
label_116948:
    // 0x116948: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x116948u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11694c:
    // 0x11694c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11694cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x116950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116954: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x116954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116958: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11695c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11695cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116964: 0x3e00008  jr          $ra
    ctx->pc = 0x116964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116964u;
        // 0x116968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11696Cu;
}
