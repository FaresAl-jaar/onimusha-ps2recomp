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

// Function: sub_0020D390
// Address: 0x20d390 - 0x20d418
void sub_0020D390_0x20d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D390_0x20d390");
#endif

    switch (ctx->pc) {
        case 0x20d3c8u: goto label_20d3c8;
        case 0x20d3ecu: goto label_20d3ec;
        default: break;
    }

    ctx->pc = 0x20d390u;

    // 0x20d390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d394: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d39c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d3a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20d3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d3a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20d3a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d3b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20d3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3b4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d3b8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x20d3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d3bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20d3c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D3C0u;
    {
        const bool branch_taken_0x20d3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3C0u;
        // 0x20d3c4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3c0) {
            ctx->pc = 0x20D3CCu;
            goto label_20d3cc;
        }
    }
    ctx->pc = 0x20D3C8u;
label_20d3c8:
    // 0x20d3c8: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x20d3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_20d3cc:
    // 0x20d3cc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x20d3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20d3d0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D3D0u;
    {
        const bool branch_taken_0x20d3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d3d0) {
            ctx->pc = 0x20D3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D3D0u;
            // 0x20d3d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D3F8u;
            goto label_20d3f8;
        }
    }
    ctx->pc = 0x20D3D8u;
    // 0x20d3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3dc: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x20d3e0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x20d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20d3e4: 0xc08f070  jal         func_23C1C0
    ctx->pc = 0x20D3E4u;
    SET_GPR_U32(ctx, 31, 0x20D3ECu);
    ctx->pc = 0x20D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3E4u;
    // 0x20d3e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C1C0u, 0x20D3E4u, 0x20D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3ECu;
label_20d3ec:
    // 0x20d3ec: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20D3ECu;
    {
        const bool branch_taken_0x20d3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3ECu;
        // 0x20d3f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3ec) {
            ctx->pc = 0x20D3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d3c8;
        }
    }
    ctx->pc = 0x20D3F4u;
    // 0x20d3f4: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x20d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_20d3f8:
    // 0x20d3f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20d3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d3fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20d3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d400: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20d400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d404: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20d404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d408: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20d408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d40c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d410: 0x3e00008  jr          $ra
    ctx->pc = 0x20D410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D410u;
        // 0x20d414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D418u;
}
