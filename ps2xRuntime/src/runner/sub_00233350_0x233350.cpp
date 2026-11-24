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

// Function: sub_00233350
// Address: 0x233350 - 0x2333d4
void sub_00233350_0x233350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233350_0x233350");
#endif

    switch (ctx->pc) {
        case 0x23337cu: goto label_23337c;
        case 0x233394u: goto label_233394;
        case 0x2333acu: goto label_2333ac;
        default: break;
    }

    ctx->pc = 0x233350u;

    // 0x233350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233354: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23335c: 0x2452fc50  addiu       $s2, $v0, -0x3B0
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966352));
    // 0x233360: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x233360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFC50u));
    // 0x233364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23336c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23336Cu;
    {
        const bool branch_taken_0x23336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23336Cu;
        // 0x233370: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23336c) {
            ctx->pc = 0x2333B4u;
            goto label_2333b4;
        }
    }
    ctx->pc = 0x233374u;
    // 0x233374: 0xc0437b4  jal         func_10DED0
    ctx->pc = 0x233374u;
    SET_GPR_U32(ctx, 31, 0x23337Cu);
    ctx->pc = 0x233378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233374u;
    // 0x233378: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DED0u, 0x233374u, 0x23337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23337Cu;
label_23337c:
    // 0x23337c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23337cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233380: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233384: 0x8c45fc20  lw          $a1, -0x3E0($v0)
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BFC20u));
    // 0x233388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23338c: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x23338Cu;
    SET_GPR_U32(ctx, 31, 0x233394u);
    ctx->pc = 0x233390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23338Cu;
    // 0x233390: 0x2610fca8  addiu       $s0, $s0, -0x358 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x23338Cu, 0x233394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233394u;
label_233394:
    // 0x233394: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233398: 0xac627540  sw          $v0, 0x7540($v1)
    ctx->pc = 0x233398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4C7540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C7540u, _value); } while (0);
    // 0x23339c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2333a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2333a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2333a4: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x2333A4u;
    SET_GPR_U32(ctx, 31, 0x2333ACu);
    ctx->pc = 0x2333A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333A4u;
    // 0x2333a8: 0xacb17544  sw          $s1, 0x7544($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 30020), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x2333A4u, 0x2333ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333ACu;
label_2333ac:
    // 0x2333ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2333acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2333b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2333b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2333b4:
    // 0x2333b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2333b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2333b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2333bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2333bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2333c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2333c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2333c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2333c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2333c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2333c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2333cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2333CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2333D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333CCu;
        // 0x2333d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2333CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2333D4u;
}
