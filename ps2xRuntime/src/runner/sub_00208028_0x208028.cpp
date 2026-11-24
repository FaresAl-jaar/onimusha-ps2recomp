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

// Function: sub_00208028
// Address: 0x208028 - 0x208074
void sub_00208028_0x208028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208028_0x208028");
#endif

    switch (ctx->pc) {
        case 0x20803cu: goto label_20803c;
        case 0x208054u: goto label_208054;
        case 0x208060u: goto label_208060;
        default: break;
    }

    ctx->pc = 0x208028u;

    // 0x208028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20802c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x208030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x208034: 0xc081d84  jal         func_207610
    ctx->pc = 0x208034u;
    SET_GPR_U32(ctx, 31, 0x20803Cu);
    ctx->pc = 0x208038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208034u;
    // 0x208038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x208034u, 0x20803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20803Cu;
label_20803c:
    // 0x20803c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20803cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x208040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208044: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208044u;
    {
        const bool branch_taken_0x208044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208044u;
        // 0x208048: 0x24847aa8  addiu       $a0, $a0, 0x7AA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208044) {
            ctx->pc = 0x208060u;
            goto label_208060;
        }
    }
    ctx->pc = 0x20804Cu;
    // 0x20804c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20804Cu;
    SET_GPR_U32(ctx, 31, 0x208054u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20804Cu, 0x208054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208054u;
label_208054:
    // 0x208054: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208054u;
    {
        const bool branch_taken_0x208054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208054u;
        // 0x208058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208054) {
            ctx->pc = 0x208064u;
            goto label_208064;
        }
    }
    ctx->pc = 0x20805Cu;
    // 0x20805c: 0x0  nop
    ctx->pc = 0x20805cu;
    // NOP
label_208060:
    // 0x208060: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_208064:
    // 0x208064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208068: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20806c: 0x3e00008  jr          $ra
    ctx->pc = 0x20806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20806Cu;
        // 0x208070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208074u;
}
