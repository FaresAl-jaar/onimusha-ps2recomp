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

// Function: sub_002241F8
// Address: 0x2241f8 - 0x224244
void sub_002241F8_0x2241f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002241F8_0x2241f8");
#endif

    switch (ctx->pc) {
        case 0x22421cu: goto label_22421c;
        default: break;
    }

    ctx->pc = 0x2241f8u;

    // 0x2241f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2241f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2241fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2241fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224204: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x224204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22420c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22420cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x224210: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x224210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x224214: 0xc088e5e  jal         func_223978
    ctx->pc = 0x224214u;
    SET_GPR_U32(ctx, 31, 0x22421Cu);
    ctx->pc = 0x224218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224214u;
    // 0x224218: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x224214u, 0x22421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22421Cu;
label_22421c:
    // 0x22421c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22421Cu;
    {
        const bool branch_taken_0x22421c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22421c) {
            ctx->pc = 0x224220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22421Cu;
            // 0x224220: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224234u;
            goto label_224234;
        }
    }
    ctx->pc = 0x224224u;
    // 0x224224: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x224224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x224228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22422c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x22422cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x224230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224234:
    // 0x224234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22423c: 0x3e00008  jr          $ra
    ctx->pc = 0x22423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22423Cu;
        // 0x224240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224244u;
}
