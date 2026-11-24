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

// Function: sub_00234E38
// Address: 0x234e38 - 0x234ee4
void sub_00234E38_0x234e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234E38_0x234e38");
#endif

    switch (ctx->pc) {
        case 0x234e60u: goto label_234e60;
        case 0x234e68u: goto label_234e68;
        case 0x234e70u: goto label_234e70;
        case 0x234e78u: goto label_234e78;
        case 0x234e80u: goto label_234e80;
        case 0x234e88u: goto label_234e88;
        case 0x234e90u: goto label_234e90;
        case 0x234ea8u: goto label_234ea8;
        case 0x234eb4u: goto label_234eb4;
        case 0x234ec0u: goto label_234ec0;
        default: break;
    }

    ctx->pc = 0x234e38u;

    // 0x234e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234e3c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x234e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234e44: 0x2463fc14  addiu       $v1, $v1, -0x3EC
    ctx->pc = 0x234e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966292));
    // 0x234e48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x234e48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFC14u));
    // 0x234e4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234e50: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x234E50u;
    {
        const bool branch_taken_0x234e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E50u;
        // 0x234e54: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e50) {
            ctx->pc = 0x234ED8u;
            goto label_234ed8;
        }
    }
    ctx->pc = 0x234E58u;
    // 0x234e58: 0xc08d06c  jal         func_2341B0
    ctx->pc = 0x234E58u;
    SET_GPR_U32(ctx, 31, 0x234E60u);
    ctx->pc = 0x2341B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2341B0u, 0x234E58u, 0x234E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E60u;
label_234e60:
    // 0x234e60: 0xc08d0a6  jal         func_234298
    ctx->pc = 0x234E60u;
    SET_GPR_U32(ctx, 31, 0x234E68u);
    ctx->pc = 0x234298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234298u, 0x234E60u, 0x234E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E68u;
label_234e68:
    // 0x234e68: 0xc08d0da  jal         func_234368
    ctx->pc = 0x234E68u;
    SET_GPR_U32(ctx, 31, 0x234E70u);
    ctx->pc = 0x234368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234368u, 0x234E68u, 0x234E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E70u;
label_234e70:
    // 0x234e70: 0xc08d142  jal         func_234508
    ctx->pc = 0x234E70u;
    SET_GPR_U32(ctx, 31, 0x234E78u);
    ctx->pc = 0x234508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234508u, 0x234E70u, 0x234E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E78u;
label_234e78:
    // 0x234e78: 0xc08d10e  jal         func_234438
    ctx->pc = 0x234E78u;
    SET_GPR_U32(ctx, 31, 0x234E80u);
    ctx->pc = 0x234438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234438u, 0x234E78u, 0x234E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E80u;
label_234e80:
    // 0x234e80: 0xc08d18e  jal         func_234638
    ctx->pc = 0x234E80u;
    SET_GPR_U32(ctx, 31, 0x234E88u);
    ctx->pc = 0x234638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234638u, 0x234E80u, 0x234E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E88u;
label_234e88:
    // 0x234e88: 0xc08d1c2  jal         func_234708
    ctx->pc = 0x234E88u;
    SET_GPR_U32(ctx, 31, 0x234E90u);
    ctx->pc = 0x234708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234708u, 0x234E88u, 0x234E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E90u;
label_234e90:
    // 0x234e90: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234e94: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x234e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234e98: 0x2442fcb8  addiu       $v0, $v0, -0x348
    ctx->pc = 0x234e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966456));
    // 0x234e9c: 0x8c657548  lw          $a1, 0x7548($v1)
    ctx->pc = 0x234e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4C7548u));
    // 0x234ea0: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x234EA0u;
    SET_GPR_U32(ctx, 31, 0x234EA8u);
    ctx->pc = 0x234EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EA0u;
    // 0x234ea4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x234EA0u, 0x234EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EA8u;
label_234ea8:
    // 0x234ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x234ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234eac: 0xc094de0  jal         func_253780
    ctx->pc = 0x234EACu;
    SET_GPR_U32(ctx, 31, 0x234EB4u);
    ctx->pc = 0x234EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EACu;
    // 0x234eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x234EACu, 0x234EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EB4u;
label_234eb4:
    // 0x234eb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x234eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234eb8: 0xc094de6  jal         func_253798
    ctx->pc = 0x234EB8u;
    SET_GPR_U32(ctx, 31, 0x234EC0u);
    ctx->pc = 0x234EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EB8u;
    // 0x234ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253798u, 0x234EB8u, 0x234EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EC0u;
label_234ec0:
    // 0x234ec0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234ec8: 0xac40fc18  sw          $zero, -0x3E8($v0)
    ctx->pc = 0x234ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC18u, _value); } while (0);
    // 0x234ecc: 0x8094eb8  j           func_253AE0
    ctx->pc = 0x234ECCu;
    ctx->pc = 0x234ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ECCu;
    // 0x234ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253AE0u;
    sub_00253AE0_0x253ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x234ED4u;
    // 0x234ed4: 0x0  nop
    ctx->pc = 0x234ed4u;
    // NOP
label_234ed8:
    // 0x234ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234edc: 0x3e00008  jr          $ra
    ctx->pc = 0x234EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EDCu;
        // 0x234ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234EE4u;
}
