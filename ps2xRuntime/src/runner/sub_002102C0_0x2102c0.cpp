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

// Function: sub_002102C0
// Address: 0x2102c0 - 0x210378
void sub_002102C0_0x2102c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002102C0_0x2102c0");
#endif

    switch (ctx->pc) {
        case 0x2102c0u: goto label_2102c0;
        case 0x2102c4u: goto label_2102c4;
        case 0x2102c8u: goto label_2102c8;
        case 0x2102ccu: goto label_2102cc;
        case 0x2102d0u: goto label_2102d0;
        case 0x2102d4u: goto label_2102d4;
        case 0x2102d8u: goto label_2102d8;
        case 0x2102dcu: goto label_2102dc;
        case 0x2102e0u: goto label_2102e0;
        case 0x2102e4u: goto label_2102e4;
        case 0x2102e8u: goto label_2102e8;
        case 0x2102ecu: goto label_2102ec;
        case 0x2102f0u: goto label_2102f0;
        case 0x2102f4u: goto label_2102f4;
        case 0x2102f8u: goto label_2102f8;
        case 0x2102fcu: goto label_2102fc;
        case 0x210300u: goto label_210300;
        case 0x210304u: goto label_210304;
        case 0x210308u: goto label_210308;
        case 0x21030cu: goto label_21030c;
        case 0x210310u: goto label_210310;
        case 0x210314u: goto label_210314;
        case 0x210318u: goto label_210318;
        case 0x21031cu: goto label_21031c;
        case 0x210320u: goto label_210320;
        case 0x210324u: goto label_210324;
        case 0x210328u: goto label_210328;
        case 0x21032cu: goto label_21032c;
        case 0x210330u: goto label_210330;
        case 0x210334u: goto label_210334;
        case 0x210338u: goto label_210338;
        case 0x21033cu: goto label_21033c;
        case 0x210340u: goto label_210340;
        case 0x210344u: goto label_210344;
        case 0x210348u: goto label_210348;
        case 0x21034cu: goto label_21034c;
        case 0x210350u: goto label_210350;
        case 0x210354u: goto label_210354;
        case 0x210358u: goto label_210358;
        case 0x21035cu: goto label_21035c;
        case 0x210360u: goto label_210360;
        case 0x210364u: goto label_210364;
        case 0x210368u: goto label_210368;
        case 0x21036cu: goto label_21036c;
        case 0x210370u: goto label_210370;
        case 0x210374u: goto label_210374;
        default: break;
    }

    ctx->pc = 0x2102c0u;

label_2102c0:
    // 0x2102c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2102c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2102c4:
    // 0x2102c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2102c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2102c8:
    // 0x2102c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2102c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2102cc:
    // 0x2102cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2102ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2102d0:
    // 0x2102d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2102d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2102d4:
    // 0x2102d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2102d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2102d8:
    // 0x2102d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2102d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2102dc:
    // 0x2102dc: 0xc084102  jal         func_210408
label_2102e0:
    if (ctx->pc == 0x2102E0u) {
        ctx->pc = 0x2102E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102DCu;
        // 0x2102e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102E4u;
        goto label_2102e4;
    }
    ctx->pc = 0x2102DCu;
    SET_GPR_U32(ctx, 31, 0x2102E4u);
    ctx->pc = 0x2102E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102DCu;
    // 0x2102e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210408u, 0x2102DCu, 0x2102E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102E4u;
label_2102e4:
    // 0x2102e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2102e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2102e8:
    // 0x2102e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2102e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2102ec:
    // 0x2102ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2102f0:
    if (ctx->pc == 0x2102F0u) {
        ctx->pc = 0x2102F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102ECu;
        // 0x2102f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102F4u;
        goto label_2102f4;
    }
    ctx->pc = 0x2102ECu;
    {
        const bool branch_taken_0x2102ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102ECu;
        // 0x2102f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102ec) {
            ctx->pc = 0x210318u;
            goto label_210318;
        }
    }
    ctx->pc = 0x2102F4u;
label_2102f4:
    // 0x2102f4: 0xc0944ce  jal         func_251338
label_2102f8:
    if (ctx->pc == 0x2102F8u) {
        ctx->pc = 0x2102FCu;
        goto label_2102fc;
    }
    ctx->pc = 0x2102F4u;
    SET_GPR_U32(ctx, 31, 0x2102FCu);
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x2102F4u, 0x2102FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102FCu;
label_2102fc:
    // 0x2102fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2102fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210300:
    // 0x210300: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x210300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_210304:
    // 0x210304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210308:
    // 0x210308: 0xc0944ce  jal         func_251338
label_21030c:
    if (ctx->pc == 0x21030Cu) {
        ctx->pc = 0x21030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210308u;
        // 0x21030c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210310u;
        goto label_210310;
    }
    ctx->pc = 0x210308u;
    SET_GPR_U32(ctx, 31, 0x210310u);
    ctx->pc = 0x21030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210308u;
    // 0x21030c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x210308u, 0x210310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210310u;
label_210310:
    // 0x210310: 0x10000013  b           . + 4 + (0x13 << 2)
label_210314:
    if (ctx->pc == 0x210314u) {
        ctx->pc = 0x210314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210310u;
        // 0x210314: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210318u;
        goto label_210318;
    }
    ctx->pc = 0x210310u;
    {
        const bool branch_taken_0x210310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210310u;
        // 0x210314: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210310) {
            ctx->pc = 0x210360u;
            goto label_210360;
        }
    }
    ctx->pc = 0x210318u;
label_210318:
    // 0x210318: 0xc084110  jal         func_210440
label_21031c:
    if (ctx->pc == 0x21031Cu) {
        ctx->pc = 0x21031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210318u;
        // 0x21031c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210320u;
        goto label_210320;
    }
    ctx->pc = 0x210318u;
    SET_GPR_U32(ctx, 31, 0x210320u);
    ctx->pc = 0x21031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210318u;
    // 0x21031c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210440u, 0x210318u, 0x210320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210320u;
label_210320:
    // 0x210320: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_210324:
    if (ctx->pc == 0x210324u) {
        ctx->pc = 0x210324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210320u;
        // 0x210324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210328u;
        goto label_210328;
    }
    ctx->pc = 0x210320u;
    {
        const bool branch_taken_0x210320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210320u;
        // 0x210324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210320) {
            ctx->pc = 0x210358u;
            goto label_210358;
        }
    }
    ctx->pc = 0x210328u;
label_210328:
    // 0x210328: 0xc0941d0  jal         func_250740
label_21032c:
    if (ctx->pc == 0x21032Cu) {
        ctx->pc = 0x210330u;
        goto label_210330;
    }
    ctx->pc = 0x210328u;
    SET_GPR_U32(ctx, 31, 0x210330u);
    ctx->pc = 0x250740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250740u, 0x210328u, 0x210330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210330u;
label_210330:
    // 0x210330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x210330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210334:
    // 0x210334: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x210334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_210338:
    // 0x210338: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x210338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21033c:
    // 0x21033c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_210340:
    // 0x210340: 0x40f809  jalr        $v0
label_210344:
    if (ctx->pc == 0x210344u) {
        ctx->pc = 0x210344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210340u;
        // 0x210344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210348u;
        goto label_210348;
    }
    ctx->pc = 0x210340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210348u);
        ctx->pc = 0x210344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210340u;
        // 0x210344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210340u, 0x210348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210348u;
label_210348:
    // 0x210348: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x210348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21034c:
    // 0x21034c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21034cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_210350:
    // 0x210350: 0x10000003  b           . + 4 + (0x3 << 2)
label_210354:
    if (ctx->pc == 0x210354u) {
        ctx->pc = 0x210354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210350u;
        // 0x210354: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210358u;
        goto label_210358;
    }
    ctx->pc = 0x210350u;
    {
        const bool branch_taken_0x210350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210350u;
        // 0x210354: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210350) {
            ctx->pc = 0x210360u;
            goto label_210360;
        }
    }
    ctx->pc = 0x210358u;
label_210358:
    // 0x210358: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x210358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_21035c:
    // 0x21035c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21035cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_210360:
    // 0x210360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210364:
    // 0x210364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_210368:
    // 0x210368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21036c:
    // 0x21036c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_210370:
    // 0x210370: 0x3e00008  jr          $ra
label_210374:
    if (ctx->pc == 0x210374u) {
        ctx->pc = 0x210374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210370u;
        // 0x210374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210378u;
        goto label_fallthrough_0x210370;
    }
    ctx->pc = 0x210370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210370u;
        // 0x210374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x210370:
    ctx->pc = 0x210378u;
}
