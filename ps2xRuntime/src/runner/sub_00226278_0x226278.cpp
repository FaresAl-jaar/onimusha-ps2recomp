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

// Function: sub_00226278
// Address: 0x226278 - 0x2262c8
void sub_00226278_0x226278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226278_0x226278");
#endif

    switch (ctx->pc) {
        case 0x22629cu: goto label_22629c;
        case 0x2262a4u: goto label_2262a4;
        default: break;
    }

    ctx->pc = 0x226278u;

    // 0x226278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22627c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22627cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226284: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x226284u;
    {
        const bool branch_taken_0x226284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226284u;
        // 0x226288: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226284) {
            ctx->pc = 0x2262B8u;
            goto label_2262b8;
        }
    }
    ctx->pc = 0x22628Cu;
    // 0x22628c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x22628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x226290: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x226290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x226294: 0xc089a50  jal         func_226940
    ctx->pc = 0x226294u;
    SET_GPR_U32(ctx, 31, 0x22629Cu);
    ctx->pc = 0x226298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226294u;
    // 0x226298: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226940u, 0x226294u, 0x22629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22629Cu;
label_22629c:
    // 0x22629c: 0xc08940a  jal         func_225028
    ctx->pc = 0x22629Cu;
    SET_GPR_U32(ctx, 31, 0x2262A4u);
    ctx->pc = 0x2262A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22629Cu;
    // 0x2262a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225028u, 0x22629Cu, 0x2262A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262A4u;
label_2262a4:
    // 0x2262a4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2262a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2262a8: 0x2463a378  addiu       $v1, $v1, -0x5C88
    ctx->pc = 0x2262a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943608));
    // 0x2262ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA378u));
    // 0x2262b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2262b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2262b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2262b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BA378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA378u, _value); } while (0);
label_2262b8:
    // 0x2262b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2262b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2262bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2262bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2262c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2262C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2262C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262C0u;
        // 0x2262c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2262C8u;
}
