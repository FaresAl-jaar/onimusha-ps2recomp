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

// Function: sub_002387B0
// Address: 0x2387b0 - 0x238830
void sub_002387B0_0x2387b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002387B0_0x2387b0");
#endif

    switch (ctx->pc) {
        case 0x2387b0u: goto label_2387b0;
        case 0x2387b4u: goto label_2387b4;
        case 0x2387b8u: goto label_2387b8;
        case 0x2387bcu: goto label_2387bc;
        case 0x2387c0u: goto label_2387c0;
        case 0x2387c4u: goto label_2387c4;
        case 0x2387c8u: goto label_2387c8;
        case 0x2387ccu: goto label_2387cc;
        case 0x2387d0u: goto label_2387d0;
        case 0x2387d4u: goto label_2387d4;
        case 0x2387d8u: goto label_2387d8;
        case 0x2387dcu: goto label_2387dc;
        case 0x2387e0u: goto label_2387e0;
        case 0x2387e4u: goto label_2387e4;
        case 0x2387e8u: goto label_2387e8;
        case 0x2387ecu: goto label_2387ec;
        case 0x2387f0u: goto label_2387f0;
        case 0x2387f4u: goto label_2387f4;
        case 0x2387f8u: goto label_2387f8;
        case 0x2387fcu: goto label_2387fc;
        case 0x238800u: goto label_238800;
        case 0x238804u: goto label_238804;
        case 0x238808u: goto label_238808;
        case 0x23880cu: goto label_23880c;
        case 0x238810u: goto label_238810;
        case 0x238814u: goto label_238814;
        case 0x238818u: goto label_238818;
        case 0x23881cu: goto label_23881c;
        case 0x238820u: goto label_238820;
        case 0x238824u: goto label_238824;
        case 0x238828u: goto label_238828;
        case 0x23882cu: goto label_23882c;
        default: break;
    }

    ctx->pc = 0x2387b0u;

label_2387b0:
    // 0x2387b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2387b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2387b4:
    // 0x2387b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2387b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2387b8:
    // 0x2387b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2387b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2387bc:
    // 0x2387bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2387bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2387c0:
    // 0x2387c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2387c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2387c4:
    // 0x2387c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2387c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2387c8:
    // 0x2387c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2387c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2387cc:
    // 0x2387cc: 0xc08e2aa  jal         func_238AA8
label_2387d0:
    if (ctx->pc == 0x2387D0u) {
        ctx->pc = 0x2387D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387CCu;
        // 0x2387d0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387D4u;
        goto label_2387d4;
    }
    ctx->pc = 0x2387CCu;
    SET_GPR_U32(ctx, 31, 0x2387D4u);
    ctx->pc = 0x2387D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387CCu;
    // 0x2387d0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x2387CCu, 0x2387D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387D4u;
label_2387d4:
    // 0x2387d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2387d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2387d8:
    // 0x2387d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2387d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2387dc:
    // 0x2387dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2387e0:
    // 0x2387e0: 0x40f809  jalr        $v0
label_2387e4:
    if (ctx->pc == 0x2387E4u) {
        ctx->pc = 0x2387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387E0u;
        // 0x2387e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387E8u;
        goto label_2387e8;
    }
    ctx->pc = 0x2387E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2387E8u);
        ctx->pc = 0x2387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387E0u;
        // 0x2387e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2387E0u, 0x2387E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2387E8u;
label_2387e8:
    // 0x2387e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2387ec:
    // 0x2387ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2387ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2387f0:
    // 0x2387f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2387f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2387f4:
    // 0x2387f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2387f8:
    // 0x2387f8: 0x40f809  jalr        $v0
label_2387fc:
    if (ctx->pc == 0x2387FCu) {
        ctx->pc = 0x2387FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387F8u;
        // 0x2387fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238800u;
        goto label_238800;
    }
    ctx->pc = 0x2387F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238800u);
        ctx->pc = 0x2387FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387F8u;
        // 0x2387fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2387F8u, 0x238800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238800u;
label_238800:
    // 0x238800: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x238800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_238804:
    // 0x238804: 0xc08e2b0  jal         func_238AC0
label_238808:
    if (ctx->pc == 0x238808u) {
        ctx->pc = 0x238808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238804u;
        // 0x238808: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23880Cu;
        goto label_23880c;
    }
    ctx->pc = 0x238804u;
    SET_GPR_U32(ctx, 31, 0x23880Cu);
    ctx->pc = 0x238808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238804u;
    // 0x238808: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x238804u, 0x23880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23880Cu;
label_23880c:
    // 0x23880c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x23880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_238810:
    // 0x238810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238814:
    // 0x238814: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x238814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_238818:
    // 0x238818: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x238818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_23881c:
    // 0x23881c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23881cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238820:
    // 0x238820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238824:
    // 0x238824: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238828:
    // 0x238828: 0x3e00008  jr          $ra
label_23882c:
    if (ctx->pc == 0x23882Cu) {
        ctx->pc = 0x23882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238828u;
        // 0x23882c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238830u;
        goto label_fallthrough_0x238828;
    }
    ctx->pc = 0x238828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238828u;
        // 0x23882c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x238828:
    ctx->pc = 0x238830u;
}
