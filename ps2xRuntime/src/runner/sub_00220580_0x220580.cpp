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

// Function: sub_00220580
// Address: 0x220580 - 0x220600
void sub_00220580_0x220580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220580_0x220580");
#endif

    switch (ctx->pc) {
        case 0x22059cu: goto label_22059c;
        case 0x2205b0u: goto label_2205b0;
        case 0x2205d0u: goto label_2205d0;
        default: break;
    }

    ctx->pc = 0x220580u;

    // 0x220580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220584: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x220584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x220588: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x220588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22058c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x220590: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x220590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x220594: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x220594u;
    SET_GPR_U32(ctx, 31, 0x22059Cu);
    ctx->pc = 0x220598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220594u;
    // 0x220598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x220594u, 0x22059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22059Cu;
label_22059c:
    // 0x22059c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2205A0u;
    {
        const bool branch_taken_0x2205a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2205A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205A0u;
        // 0x2205a4: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205a0) {
            ctx->pc = 0x2205ECu;
            goto label_2205ec;
        }
    }
    ctx->pc = 0x2205A8u;
    // 0x2205a8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2205A8u;
    SET_GPR_U32(ctx, 31, 0x2205B0u);
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2205A8u, 0x2205B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205B0u;
label_2205b0:
    // 0x2205b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2205b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2205b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205b8: 0x24850d30  addiu       $a1, $a0, 0xD30
    ctx->pc = 0x2205b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x2205bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2205bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205c0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2205C0u;
    {
        const bool branch_taken_0x2205c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2205C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205C0u;
        // 0x2205c4: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205c0) {
            ctx->pc = 0x2205ECu;
            goto label_2205ec;
        }
    }
    ctx->pc = 0x2205C8u;
    // 0x2205c8: 0xc08812a  jal         func_2204A8
    ctx->pc = 0x2205C8u;
    SET_GPR_U32(ctx, 31, 0x2205D0u);
    ctx->pc = 0x2204A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2204A8u, 0x2205C8u, 0x2205D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205D0u;
label_2205d0:
    // 0x2205d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2205d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2205d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2205D8u;
    {
        const bool branch_taken_0x2205d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2205d8) {
            ctx->pc = 0x2205DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2205D8u;
            // 0x2205dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2205E0u;
            goto label_2205e0;
        }
    }
    ctx->pc = 0x2205E0u;
label_2205e0:
    // 0x2205e0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2205e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2205e4: 0x1012  mflo        $v0
    ctx->pc = 0x2205e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2205e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2205e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2205ec:
    // 0x2205ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2205ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2205f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2205f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2205f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2205f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2205f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2205F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2205FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205F8u;
        // 0x2205fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2205F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220600u;
}
