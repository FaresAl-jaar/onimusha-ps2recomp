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

// Function: sub_00272290
// Address: 0x272290 - 0x272314
void sub_00272290_0x272290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272290_0x272290");
#endif

    switch (ctx->pc) {
        case 0x2722d0u: goto label_2722d0;
        case 0x2722e0u: goto label_2722e0;
        case 0x2722f0u: goto label_2722f0;
        default: break;
    }

    ctx->pc = 0x272290u;

    // 0x272290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27229c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2722a0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2722a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2722a4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2722A4u;
    {
        const bool branch_taken_0x2722a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2722A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722A4u;
        // 0x2722a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722a4) {
            ctx->pc = 0x2722E8u;
            goto label_2722e8;
        }
    }
    ctx->pc = 0x2722ACu;
    // 0x2722ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2722acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2722b0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2722B0u;
    {
        const bool branch_taken_0x2722b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2722b0) {
            ctx->pc = 0x2722D8u;
            goto label_2722d8;
        }
    }
    ctx->pc = 0x2722B8u;
    // 0x2722b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2722B8u;
    {
        const bool branch_taken_0x2722b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722b8) {
            ctx->pc = 0x2722C8u;
            goto label_2722c8;
        }
    }
    ctx->pc = 0x2722C0u;
    // 0x2722c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2722C0u;
    {
        const bool branch_taken_0x2722c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722c0) {
            ctx->pc = 0x2722F0u;
            goto label_2722f0;
        }
    }
    ctx->pc = 0x2722C8u;
label_2722c8:
    // 0x2722c8: 0xc09c8cc  jal         func_272330
    ctx->pc = 0x2722C8u;
    SET_GPR_U32(ctx, 31, 0x2722D0u);
    ctx->pc = 0x272330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272330u, 0x2722C8u, 0x2722D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722D0u;
label_2722d0:
    // 0x2722d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2722D0u;
    {
        const bool branch_taken_0x2722d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722d0) {
            ctx->pc = 0x2722F0u;
            goto label_2722f0;
        }
    }
    ctx->pc = 0x2722D8u;
label_2722d8:
    // 0x2722d8: 0xc09c91c  jal         func_272470
    ctx->pc = 0x2722D8u;
    SET_GPR_U32(ctx, 31, 0x2722E0u);
    ctx->pc = 0x272470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272470u, 0x2722D8u, 0x2722E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722E0u;
label_2722e0:
    // 0x2722e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2722E0u;
    {
        const bool branch_taken_0x2722e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722e0) {
            ctx->pc = 0x2722F0u;
            goto label_2722f0;
        }
    }
    ctx->pc = 0x2722E8u;
label_2722e8:
    // 0x2722e8: 0xc09c964  jal         func_272590
    ctx->pc = 0x2722E8u;
    SET_GPR_U32(ctx, 31, 0x2722F0u);
    ctx->pc = 0x272590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272590u, 0x2722E8u, 0x2722F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722F0u;
label_2722f0:
    // 0x2722f0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2722f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2722f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2722f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2722f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2722F8u;
    {
        const bool branch_taken_0x2722f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2722FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722F8u;
        // 0x2722fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722f8) {
            ctx->pc = 0x272304u;
            goto label_272304;
        }
    }
    ctx->pc = 0x272300u;
    // 0x272300: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x272300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_272304:
    // 0x272304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27230c: 0x3e00008  jr          $ra
    ctx->pc = 0x27230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27230Cu;
        // 0x272310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272314u;
}
