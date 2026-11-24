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

// Function: sub_00224F40
// Address: 0x224f40 - 0x224f98
void sub_00224F40_0x224f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224F40_0x224f40");
#endif

    switch (ctx->pc) {
        case 0x224f54u: goto label_224f54;
        case 0x224f68u: goto label_224f68;
        default: break;
    }

    ctx->pc = 0x224f40u;

    // 0x224f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224f48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224f4c: 0xc0893e6  jal         func_224F98
    ctx->pc = 0x224F4Cu;
    SET_GPR_U32(ctx, 31, 0x224F54u);
    ctx->pc = 0x224F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F98u, 0x224F4Cu, 0x224F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F54u;
label_224f54:
    // 0x224f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f58: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x224F58u;
    {
        const bool branch_taken_0x224f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F58u;
        // 0x224f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f58) {
            ctx->pc = 0x224F88u;
            goto label_224f88;
        }
    }
    ctx->pc = 0x224F60u;
    // 0x224f60: 0xc0893fa  jal         func_224FE8
    ctx->pc = 0x224F60u;
    SET_GPR_U32(ctx, 31, 0x224F68u);
    ctx->pc = 0x224FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224FE8u, 0x224F60u, 0x224F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F68u;
label_224f68:
    // 0x224f68: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x224f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x224f6c: 0x2463a248  addiu       $v1, $v1, -0x5DB8
    ctx->pc = 0x224f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943304));
    // 0x224f70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x224f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224f74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224f74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BA248u));
    // 0x224f78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x224f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x224f80: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x224f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4BA248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA248u, _value); } while (0);
    // 0x224f84: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x224f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_224f88:
    // 0x224f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224f8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224f90: 0x3e00008  jr          $ra
    ctx->pc = 0x224F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F90u;
        // 0x224f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224F98u;
}
