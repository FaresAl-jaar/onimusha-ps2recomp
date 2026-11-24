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

// Function: sub_00394330
// Address: 0x394330 - 0x39439c
void sub_00394330_0x394330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394330_0x394330");
#endif

    switch (ctx->pc) {
        case 0x394358u: goto label_394358;
        case 0x394388u: goto label_394388;
        default: break;
    }

    ctx->pc = 0x394330u;

    // 0x394330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x394334: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x394334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x394338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39433c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x39433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x394340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x394344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x394344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x394348: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x394348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39434c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39434cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394350: 0xc05e360  jal         func_178D80
    ctx->pc = 0x394350u;
    SET_GPR_U32(ctx, 31, 0x394358u);
    ctx->pc = 0x394354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394350u;
    // 0x394354: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x394350u, 0x394358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394358u;
label_394358:
    // 0x394358: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x394358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39435c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x39435Cu;
    {
        const bool branch_taken_0x39435c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x394360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39435Cu;
        // 0x394360: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39435c) {
            ctx->pc = 0x394388u;
            goto label_394388;
        }
    }
    ctx->pc = 0x394364u;
    // 0x394364: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x394364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x394368: 0x3c020808  lui         $v0, 0x808
    ctx->pc = 0x394368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2056 << 16));
    // 0x39436c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39436cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x394370: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x394370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x394374: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x394374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x394378: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x394378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
    // 0x39437c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x39437cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x394380: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x394380u;
    SET_GPR_U32(ctx, 31, 0x394388u);
    ctx->pc = 0x394384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394380u;
    // 0x394384: 0xacb0000c  sw          $s0, 0xC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x394380u, 0x394388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394388u;
label_394388:
    // 0x394388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39438c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39438cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394394: 0x3e00008  jr          $ra
    ctx->pc = 0x394394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394394u;
        // 0x394398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39439Cu;
}
