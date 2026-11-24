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

// Function: sub_002537B0
// Address: 0x2537b0 - 0x253874
void sub_002537B0_0x2537b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002537B0_0x2537b0");
#endif

    switch (ctx->pc) {
        case 0x2537b0u: goto label_2537b0;
        case 0x2537b4u: goto label_2537b4;
        case 0x2537b8u: goto label_2537b8;
        case 0x2537bcu: goto label_2537bc;
        case 0x2537c0u: goto label_2537c0;
        case 0x2537c4u: goto label_2537c4;
        case 0x2537c8u: goto label_2537c8;
        case 0x2537ccu: goto label_2537cc;
        case 0x2537d0u: goto label_2537d0;
        case 0x2537d4u: goto label_2537d4;
        case 0x2537d8u: goto label_2537d8;
        case 0x2537dcu: goto label_2537dc;
        case 0x2537e0u: goto label_2537e0;
        case 0x2537e4u: goto label_2537e4;
        case 0x2537e8u: goto label_2537e8;
        case 0x2537ecu: goto label_2537ec;
        case 0x2537f0u: goto label_2537f0;
        case 0x2537f4u: goto label_2537f4;
        case 0x2537f8u: goto label_2537f8;
        case 0x2537fcu: goto label_2537fc;
        case 0x253800u: goto label_253800;
        case 0x253804u: goto label_253804;
        case 0x253808u: goto label_253808;
        case 0x25380cu: goto label_25380c;
        case 0x253810u: goto label_253810;
        case 0x253814u: goto label_253814;
        case 0x253818u: goto label_253818;
        case 0x25381cu: goto label_25381c;
        case 0x253820u: goto label_253820;
        case 0x253824u: goto label_253824;
        case 0x253828u: goto label_253828;
        case 0x25382cu: goto label_25382c;
        case 0x253830u: goto label_253830;
        case 0x253834u: goto label_253834;
        case 0x253838u: goto label_253838;
        case 0x25383cu: goto label_25383c;
        case 0x253840u: goto label_253840;
        case 0x253844u: goto label_253844;
        case 0x253848u: goto label_253848;
        case 0x25384cu: goto label_25384c;
        case 0x253850u: goto label_253850;
        case 0x253854u: goto label_253854;
        case 0x253858u: goto label_253858;
        case 0x25385cu: goto label_25385c;
        case 0x253860u: goto label_253860;
        case 0x253864u: goto label_253864;
        case 0x253868u: goto label_253868;
        case 0x25386cu: goto label_25386c;
        case 0x253870u: goto label_253870;
        default: break;
    }

    ctx->pc = 0x2537b0u;

label_2537b0:
    // 0x2537b0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2537b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2537b4:
    // 0x2537b4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2537b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2537b8:
    // 0x2537b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2537b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2537bc:
    // 0x2537bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2537bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2537c0:
    // 0x2537c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2537c4:
    // 0x2537c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2537c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2537c8:
    // 0x2537c8: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x2537c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2537cc:
    // 0x2537cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2537ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2537d0:
    // 0x2537d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2537d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2537d4:
    // 0x2537d4: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2537d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
label_2537d8:
    // 0x2537d8: 0x26310738  addiu       $s1, $s1, 0x738
    ctx->pc = 0x2537d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1848));
label_2537dc:
    // 0x2537dc: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2537dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2537e0:
    // 0x2537e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2537e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2537e4:
    // 0x2537e4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x2537e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2537e8:
    // 0x2537e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2537e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2537ec:
    // 0x2537ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2537ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2537f0:
    // 0x2537f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2537f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2537f4:
    // 0x2537f4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2537f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2537f8:
    // 0x2537f8: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x2537f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
label_2537fc:
    // 0x2537fc: 0x261086e0  addiu       $s0, $s0, -0x7920
    ctx->pc = 0x2537fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936288));
label_253800:
    // 0x253800: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x253800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_253804:
    // 0x253804: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x253804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_253808:
    // 0x253808: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x253808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25380c:
    // 0x25380c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_253810:
    if (ctx->pc == 0x253810u) {
        ctx->pc = 0x253810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25380Cu;
        // 0x253810: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253814u;
        goto label_253814;
    }
    ctx->pc = 0x25380Cu;
    {
        const bool branch_taken_0x25380c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25380Cu;
        // 0x253810: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25380c) {
            ctx->pc = 0x253828u;
            goto label_253828;
        }
    }
    ctx->pc = 0x253814u;
label_253814:
    // 0x253814: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x253814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_253818:
    // 0x253818: 0x40f809  jalr        $v0
label_25381c:
    if (ctx->pc == 0x25381Cu) {
        ctx->pc = 0x253820u;
        goto label_253820;
    }
    ctx->pc = 0x253818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253820u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253818u, 0x253820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253820u;
label_253820:
    // 0x253820: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x253820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_253824:
    // 0x253824: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x253824u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_253828:
    // 0x253828: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x253828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_25382c:
    // 0x25382c: 0x643fff6  bgezl       $s2, . + 4 + (-0xA << 2)
label_253830:
    if (ctx->pc == 0x253830u) {
        ctx->pc = 0x253830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25382Cu;
        // 0x253830: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253834u;
        goto label_253834;
    }
    ctx->pc = 0x25382Cu;
    {
        const bool branch_taken_0x25382c = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x25382c) {
            ctx->pc = 0x253830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25382Cu;
            // 0x253830: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253808;
        }
    }
    ctx->pc = 0x253834u;
label_253834:
    // 0x253834: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x253834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_253838:
    // 0x253838: 0x24840718  addiu       $a0, $a0, 0x718
    ctx->pc = 0x253838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1816));
label_25383c:
    // 0x25383c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x25383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_253840:
    // 0x253840: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x253840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_253844:
    // 0x253844: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x253844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_253848:
    // 0x253848: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x253848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25384c:
    // 0x25384c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25384cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253850:
    // 0x253850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_253854:
    // 0x253854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x253854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_253858:
    // 0x253858: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25385c:
    // 0x25385c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25385cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_253860:
    // 0x253860: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x253860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_253864:
    // 0x253864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x253864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_253868:
    // 0x253868: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x253868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_25386c:
    // 0x25386c: 0x3e00008  jr          $ra
label_253870:
    if (ctx->pc == 0x253870u) {
        ctx->pc = 0x253870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25386Cu;
        // 0x253870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253874u;
        goto label_fallthrough_0x25386c;
    }
    ctx->pc = 0x25386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25386Cu;
        // 0x253870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25386c:
    ctx->pc = 0x253874u;
}
