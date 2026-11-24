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

// Function: sub_00220760
// Address: 0x220760 - 0x22080c
void sub_00220760_0x220760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220760_0x220760");
#endif

    switch (ctx->pc) {
        case 0x220794u: goto label_220794;
        case 0x2207dcu: goto label_2207dc;
        default: break;
    }

    ctx->pc = 0x220760u;

    // 0x220760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220764: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x220764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22076c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22076cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220774: 0x24510e48  addiu       $s1, $v0, 0xE48
    ctx->pc = 0x220774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3656));
    // 0x220778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22077c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22077cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220780: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x220780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x220784: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x220784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x220788: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x220788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x22078c: 0xc088222  jal         func_220888
    ctx->pc = 0x22078Cu;
    SET_GPR_U32(ctx, 31, 0x220794u);
    ctx->pc = 0x220790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22078Cu;
    // 0x220790: 0x24530d30  addiu       $s3, $v0, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220888u, 0x22078Cu, 0x220794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220794u;
label_220794:
    // 0x220794: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22079c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22079Cu;
    {
        const bool branch_taken_0x22079c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22079Cu;
        // 0x2207a0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22079c) {
            ctx->pc = 0x2207ECu;
            goto label_2207ec;
        }
    }
    ctx->pc = 0x2207A4u;
    // 0x2207a4: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x2207a8: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2207A8u;
    {
        const bool branch_taken_0x2207a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2207a8) {
            ctx->pc = 0x2207ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2207A8u;
            // 0x2207ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2207C8u;
            goto label_2207c8;
        }
    }
    ctx->pc = 0x2207B0u;
    // 0x2207b0: 0x8e630144  lw          $v1, 0x144($s3)
    ctx->pc = 0x2207b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x2207b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2207b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2207b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2207b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2207bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2207BCu;
    {
        const bool branch_taken_0x2207bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2207C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207BCu;
        // 0x2207c0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207bc) {
            ctx->pc = 0x2207E8u;
            goto label_2207e8;
        }
    }
    ctx->pc = 0x2207C4u;
    // 0x2207c4: 0x0  nop
    ctx->pc = 0x2207c4u;
    // NOP
label_2207c8:
    // 0x2207c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2207C8u;
    {
        const bool branch_taken_0x2207c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2207c8) {
            ctx->pc = 0x2207CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2207C8u;
            // 0x2207cc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2207ECu;
            goto label_2207ec;
        }
    }
    ctx->pc = 0x2207D0u;
    // 0x2207d0: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x2207d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2207d4: 0xc080568  jal         func_2015A0
    ctx->pc = 0x2207D4u;
    SET_GPR_U32(ctx, 31, 0x2207DCu);
    ctx->pc = 0x2207D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2207D4u;
    // 0x2207d8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x2207D4u, 0x2207DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2207DCu;
label_2207dc:
    // 0x2207dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2207dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2207e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2207e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2207e4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2207e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2207e8:
    // 0x2207e8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2207e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2207ec:
    // 0x2207ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2207ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2207f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2207f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2207f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2207f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2207f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2207f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2207fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2207fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220800: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x220800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x220804: 0x3e00008  jr          $ra
    ctx->pc = 0x220804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220804u;
        // 0x220808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22080Cu;
}
