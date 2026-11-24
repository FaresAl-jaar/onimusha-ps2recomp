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

// Function: sub_0012E930
// Address: 0x12e930 - 0x12e994
void sub_0012E930_0x12e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E930_0x12e930");
#endif

    switch (ctx->pc) {
        case 0x12e950u: goto label_12e950;
        case 0x12e960u: goto label_12e960;
        case 0x12e97cu: goto label_12e97c;
        case 0x12e984u: goto label_12e984;
        default: break;
    }

    ctx->pc = 0x12e930u;

    // 0x12e930: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12e934: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x12e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x12e938: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x12e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x12e93c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x12e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x12e940: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12e944: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x12e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x12e948: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12E948u;
    SET_GPR_U32(ctx, 31, 0x12E950u);
    ctx->pc = 0x12E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E948u;
    // 0x12e94c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12E948u, 0x12E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E950u;
label_12e950:
    // 0x12e950: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e954: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x12e958: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12E958u;
    SET_GPR_U32(ctx, 31, 0x12E960u);
    ctx->pc = 0x12E95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E958u;
    // 0x12e95c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12E958u, 0x12E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E960u;
label_12e960:
    // 0x12e960: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12e960u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e968: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12e96c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e970: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x12e970u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x12e974: 0xc04b9ac  jal         func_12E6B0
    ctx->pc = 0x12E974u;
    SET_GPR_U32(ctx, 31, 0x12E97Cu);
    ctx->pc = 0x12E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E974u;
    // 0x12e978: 0xafaf0024  sw          $t7, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E6B0u, 0x12E974u, 0x12E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E97Cu;
label_12e97c:
    // 0x12e97c: 0xc04b956  jal         func_12E558
    ctx->pc = 0x12E97Cu;
    SET_GPR_U32(ctx, 31, 0x12E984u);
    ctx->pc = 0x12E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E97Cu;
    // 0x12e980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E558u, 0x12E97Cu, 0x12E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E984u;
label_12e984:
    // 0x12e984: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12e984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e988: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x12e988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12e98c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E98Cu;
        // 0x12e990: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E994u;
}
