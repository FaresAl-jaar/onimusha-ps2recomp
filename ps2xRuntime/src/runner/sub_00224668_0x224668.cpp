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

// Function: sub_00224668
// Address: 0x224668 - 0x2246e8
void sub_00224668_0x224668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224668_0x224668");
#endif

    switch (ctx->pc) {
        case 0x224690u: goto label_224690;
        case 0x2246a4u: goto label_2246a4;
        default: break;
    }

    ctx->pc = 0x224668u;

    // 0x224668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22466c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224670: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224678: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224678u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22467c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22467cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224684: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224688: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224688u;
    SET_GPR_U32(ctx, 31, 0x224690u);
    ctx->pc = 0x22468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224688u;
    // 0x22468c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224688u, 0x224690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224690u;
label_224690:
    // 0x224690: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224694: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x224694u;
    {
        const bool branch_taken_0x224694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224694u;
        // 0x224698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224694) {
            ctx->pc = 0x2246D0u;
            goto label_2246d0;
        }
    }
    ctx->pc = 0x22469Cu;
    // 0x22469c: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x22469Cu;
    SET_GPR_U32(ctx, 31, 0x2246A4u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x22469Cu, 0x2246A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246A4u;
label_2246a4:
    // 0x2246a4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x2246a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2246a8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2246A8u;
    {
        const bool branch_taken_0x2246a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2246ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246A8u;
        // 0x2246ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246a8) {
            ctx->pc = 0x2246B8u;
            goto label_2246b8;
        }
    }
    ctx->pc = 0x2246B0u;
    // 0x2246b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2246B0u;
    {
        const bool branch_taken_0x2246b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246B0u;
        // 0x2246b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246b0) {
            ctx->pc = 0x2246D0u;
            goto label_2246d0;
        }
    }
    ctx->pc = 0x2246B8u;
label_2246b8:
    // 0x2246b8: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x2246b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x2246bc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2246BCu;
    {
        const bool branch_taken_0x2246bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2246C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246BCu;
        // 0x2246c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246bc) {
            ctx->pc = 0x2246D0u;
            goto label_2246d0;
        }
    }
    ctx->pc = 0x2246C4u;
    // 0x2246c4: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x2246c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2246c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2246c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2246cc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2246ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2246d0:
    // 0x2246d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2246d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2246d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2246d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2246d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2246d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2246dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2246dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2246e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2246E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2246E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246E0u;
        // 0x2246e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2246E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2246E8u;
}
