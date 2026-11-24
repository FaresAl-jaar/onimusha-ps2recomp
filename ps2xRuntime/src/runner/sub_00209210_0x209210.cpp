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

// Function: sub_00209210
// Address: 0x209210 - 0x20926c
void sub_00209210_0x209210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209210_0x209210");
#endif

    switch (ctx->pc) {
        case 0x209224u: goto label_209224;
        case 0x20923cu: goto label_20923c;
        case 0x209258u: goto label_209258;
        default: break;
    }

    ctx->pc = 0x209210u;

    // 0x209210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20921c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20921Cu;
    SET_GPR_U32(ctx, 31, 0x209224u);
    ctx->pc = 0x209220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20921Cu;
    // 0x209220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20921Cu, 0x209224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209224u;
label_209224:
    // 0x209224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209228: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209228u;
    {
        const bool branch_taken_0x209228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209228u;
        // 0x20922c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209228) {
            ctx->pc = 0x209250u;
            goto label_209250;
        }
    }
    ctx->pc = 0x209230u;
    // 0x209230: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x209230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x209234: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209234u;
    SET_GPR_U32(ctx, 31, 0x20923Cu);
    ctx->pc = 0x209238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209234u;
    // 0x209238: 0x24847f10  addiu       $a0, $a0, 0x7F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209234u, 0x20923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20923Cu;
label_20923c:
    // 0x20923c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20923cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209248: 0x3e00008  jr          $ra
    ctx->pc = 0x209248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209248u;
        // 0x20924c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209250u;
label_209250:
    // 0x209250: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209250u;
    SET_GPR_U32(ctx, 31, 0x209258u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209250u, 0x209258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209258u;
label_209258:
    // 0x209258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20925c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209260: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209264: 0x808993a  j           func_2264E8
    ctx->pc = 0x209264u;
    ctx->pc = 0x209268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209264u;
    // 0x209268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264E8u;
    sub_002264E8_0x2264e8(rdram, ctx, runtime); return;
    ctx->pc = 0x20926Cu;
}
