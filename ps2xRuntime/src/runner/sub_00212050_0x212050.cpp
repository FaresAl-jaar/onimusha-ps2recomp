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

// Function: sub_00212050
// Address: 0x212050 - 0x212084
void sub_00212050_0x212050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212050_0x212050");
#endif

    switch (ctx->pc) {
        case 0x212050u: goto label_212050;
        case 0x212054u: goto label_212054;
        case 0x212058u: goto label_212058;
        case 0x21205cu: goto label_21205c;
        case 0x212060u: goto label_212060;
        case 0x212064u: goto label_212064;
        case 0x212068u: goto label_212068;
        case 0x21206cu: goto label_21206c;
        case 0x212070u: goto label_212070;
        case 0x212074u: goto label_212074;
        case 0x212078u: goto label_212078;
        case 0x21207cu: goto label_21207c;
        case 0x212080u: goto label_212080;
        default: break;
    }

    ctx->pc = 0x212050u;

label_212050:
    // 0x212050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_212054:
    // 0x212054: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x212054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_212058:
    // 0x212058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21205c:
    // 0x21205c: 0x40f809  jalr        $v0
label_212060:
    if (ctx->pc == 0x212060u) {
        ctx->pc = 0x212060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21205Cu;
        // 0x212060: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212064u;
        goto label_212064;
    }
    ctx->pc = 0x21205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212064u);
        ctx->pc = 0x212060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21205Cu;
        // 0x212060: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21205Cu, 0x212064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212064u;
label_212064:
    // 0x212064: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x212064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212068:
    // 0x212068: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21206c:
    // 0x21206c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x21206cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_212070:
    // 0x212070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212074:
    // 0x212074: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x212074u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_212078:
    // 0x212078: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x212078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21207c:
    // 0x21207c: 0x3e00008  jr          $ra
label_212080:
    if (ctx->pc == 0x212080u) {
        ctx->pc = 0x212080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21207Cu;
        // 0x212080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212084u;
        goto label_fallthrough_0x21207c;
    }
    ctx->pc = 0x21207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21207Cu;
        // 0x212080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21207c:
    ctx->pc = 0x212084u;
}
