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

// Function: sub_0024BC00
// Address: 0x24bc00 - 0x24bc48
void sub_0024BC00_0x24bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BC00_0x24bc00");
#endif

    switch (ctx->pc) {
        case 0x24bc1cu: goto label_24bc1c;
        case 0x24bc28u: goto label_24bc28;
        case 0x24bc30u: goto label_24bc30;
        default: break;
    }

    ctx->pc = 0x24bc00u;

    // 0x24bc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24bc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bc08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bc10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24bc14: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24BC14u;
    SET_GPR_U32(ctx, 31, 0x24BC1Cu);
    ctx->pc = 0x24BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC14u;
    // 0x24bc18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24BC14u, 0x24BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC1Cu;
label_24bc1c:
    // 0x24bc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc20: 0xc092f12  jal         func_24BC48
    ctx->pc = 0x24BC20u;
    SET_GPR_U32(ctx, 31, 0x24BC28u);
    ctx->pc = 0x24BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC20u;
    // 0x24bc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BC48u, 0x24BC20u, 0x24BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC28u;
label_24bc28:
    // 0x24bc28: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x24BC28u;
    SET_GPR_U32(ctx, 31, 0x24BC30u);
    ctx->pc = 0x24BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC28u;
    // 0x24bc2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x24BC28u, 0x24BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC30u;
label_24bc30:
    // 0x24bc30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24bc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bc34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24bc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24bc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bc3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bc40: 0x3e00008  jr          $ra
    ctx->pc = 0x24BC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC40u;
        // 0x24bc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BC48u;
}
