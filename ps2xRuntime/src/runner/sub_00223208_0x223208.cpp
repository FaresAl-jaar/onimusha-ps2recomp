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

// Function: sub_00223208
// Address: 0x223208 - 0x223284
void sub_00223208_0x223208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223208_0x223208");
#endif

    switch (ctx->pc) {
        case 0x223228u: goto label_223228;
        case 0x223238u: goto label_223238;
        case 0x223248u: goto label_223248;
        default: break;
    }

    ctx->pc = 0x223208u;

    // 0x223208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22320c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22321c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223220: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x223220u;
    SET_GPR_U32(ctx, 31, 0x223228u);
    ctx->pc = 0x223224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223220u;
    // 0x223224: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x223220u, 0x223228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223228u;
label_223228:
    // 0x223228: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x223228u;
    {
        const bool branch_taken_0x223228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x22322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223228u;
        // 0x22322c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223228) {
            ctx->pc = 0x223270u;
            goto label_223270;
        }
    }
    ctx->pc = 0x223230u;
    // 0x223230: 0xc084074  jal         func_2101D0
    ctx->pc = 0x223230u;
    SET_GPR_U32(ctx, 31, 0x223238u);
    ctx->pc = 0x223234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223230u;
    // 0x223234: 0x8e052160  lw          $a1, 0x2160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x223230u, 0x223238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223238u;
label_223238:
    // 0x223238: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x223238u;
    {
        const bool branch_taken_0x223238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x22323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223238u;
        // 0x22323c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223238) {
            ctx->pc = 0x223270u;
            goto label_223270;
        }
    }
    ctx->pc = 0x223240u;
    // 0x223240: 0xc088ca2  jal         func_223288
    ctx->pc = 0x223240u;
    SET_GPR_U32(ctx, 31, 0x223248u);
    ctx->pc = 0x223288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223288u, 0x223240u, 0x223248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223248u;
label_223248:
    // 0x223248: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223248u;
    {
        const bool branch_taken_0x223248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223248u;
        // 0x22324c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223248) {
            ctx->pc = 0x223270u;
            goto label_223270;
        }
    }
    ctx->pc = 0x223250u;
    // 0x223250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223258: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22325c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22325cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x223260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223264: 0x80888ea  j           func_2223A8
    ctx->pc = 0x223264u;
    ctx->pc = 0x223268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223264u;
    // 0x223268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223A8u;
    sub_002223A8_0x2223a8(rdram, ctx, runtime); return;
    ctx->pc = 0x22326Cu;
    // 0x22326c: 0x0  nop
    ctx->pc = 0x22326cu;
    // NOP
label_223270:
    // 0x223270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22327c: 0x3e00008  jr          $ra
    ctx->pc = 0x22327Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22327Cu;
        // 0x223280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22327Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223284u;
}
