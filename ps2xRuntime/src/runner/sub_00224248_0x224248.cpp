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

// Function: sub_00224248
// Address: 0x224248 - 0x224294
void sub_00224248_0x224248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224248_0x224248");
#endif

    switch (ctx->pc) {
        case 0x22426cu: goto label_22426c;
        default: break;
    }

    ctx->pc = 0x224248u;

    // 0x224248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22424c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224254: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x224254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22425c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22425cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x224260: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x224260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x224264: 0xc088e5e  jal         func_223978
    ctx->pc = 0x224264u;
    SET_GPR_U32(ctx, 31, 0x22426Cu);
    ctx->pc = 0x224268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224264u;
    // 0x224268: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x224264u, 0x22426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22426Cu;
label_22426c:
    // 0x22426c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22426Cu;
    {
        const bool branch_taken_0x22426c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22426c) {
            ctx->pc = 0x224270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22426Cu;
            // 0x224270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224284u;
            goto label_224284;
        }
    }
    ctx->pc = 0x224274u;
    // 0x224274: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x224274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x224278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22427c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x22427cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x224280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224284:
    // 0x224284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22428c: 0x3e00008  jr          $ra
    ctx->pc = 0x22428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22428Cu;
        // 0x224290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224294u;
}
