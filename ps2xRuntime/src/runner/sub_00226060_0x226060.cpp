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

// Function: sub_00226060
// Address: 0x226060 - 0x226174
void sub_00226060_0x226060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226060_0x226060");
#endif

    switch (ctx->pc) {
        case 0x226090u: goto label_226090;
        case 0x2260acu: goto label_2260ac;
        case 0x2260d0u: goto label_2260d0;
        case 0x2260e0u: goto label_2260e0;
        case 0x2260e8u: goto label_2260e8;
        case 0x226104u: goto label_226104;
        case 0x22612cu: goto label_22612c;
        case 0x226134u: goto label_226134;
        default: break;
    }

    ctx->pc = 0x226060u;

    // 0x226060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226068: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x226068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22606c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226070: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x226070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x226078: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x226078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22607c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22607cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226080: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x226080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x226084: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x226084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x226088: 0xc08985e  jal         func_226178
    ctx->pc = 0x226088u;
    SET_GPR_U32(ctx, 31, 0x226090u);
    ctx->pc = 0x22608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226088u;
    // 0x22608c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226178u, 0x226088u, 0x226090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226090u;
label_226090:
    // 0x226090: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x226090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x226094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22609c: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x22609Cu;
    {
        const bool branch_taken_0x22609c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22609Cu;
        // 0x2260a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22609c) {
            ctx->pc = 0x226154u;
            goto label_226154;
        }
    }
    ctx->pc = 0x2260A4u;
    // 0x2260a4: 0xc08989a  jal         func_226268
    ctx->pc = 0x2260A4u;
    SET_GPR_U32(ctx, 31, 0x2260ACu);
    ctx->pc = 0x226268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226268u, 0x2260A4u, 0x2260ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260ACu;
label_2260ac:
    // 0x2260ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2260acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2260b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2260b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2260b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260b8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2260B8u;
    {
        const bool branch_taken_0x2260b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2260BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260B8u;
        // 0x2260bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260b8) {
            ctx->pc = 0x2260D8u;
            goto label_2260d8;
        }
    }
    ctx->pc = 0x2260C0u;
    // 0x2260c0: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2260c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2260c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260c8: 0xc0898b2  jal         func_2262C8
    ctx->pc = 0x2260C8u;
    SET_GPR_U32(ctx, 31, 0x2260D0u);
    ctx->pc = 0x2260CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260C8u;
    // 0x2260cc: 0x24c69330  addiu       $a2, $a2, -0x6CD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C8u, 0x2260C8u, 0x2260D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260D0u;
label_2260d0:
    // 0x2260d0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2260D0u;
    {
        const bool branch_taken_0x2260d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260D0u;
        // 0x2260d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260d0) {
            ctx->pc = 0x226154u;
            goto label_226154;
        }
    }
    ctx->pc = 0x2260D8u;
label_2260d8:
    // 0x2260d8: 0xc089872  jal         func_2261C8
    ctx->pc = 0x2260D8u;
    SET_GPR_U32(ctx, 31, 0x2260E0u);
    ctx->pc = 0x2260DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260D8u;
    // 0x2260dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2261C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2261C8u, 0x2260D8u, 0x2260E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E0u;
label_2260e0:
    // 0x2260e0: 0xc089a20  jal         func_226880
    ctx->pc = 0x2260E0u;
    SET_GPR_U32(ctx, 31, 0x2260E8u);
    ctx->pc = 0x226880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226880u, 0x2260E0u, 0x2260E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E8u;
label_2260e8:
    // 0x2260e8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2260ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2260ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260f0: 0x24c69360  addiu       $a2, $a2, -0x6CA0
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939488));
    // 0x2260f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2260F4u;
    {
        const bool branch_taken_0x2260f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260F4u;
        // 0x2260f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260f4) {
            ctx->pc = 0x226124u;
            goto label_226124;
        }
    }
    ctx->pc = 0x2260FCu;
    // 0x2260fc: 0xc0893d0  jal         func_224F40
    ctx->pc = 0x2260FCu;
    SET_GPR_U32(ctx, 31, 0x226104u);
    ctx->pc = 0x226100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260FCu;
    // 0x226100: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F40u, 0x2260FCu, 0x226104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226104u;
label_226104:
    // 0x226104: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x226104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x226108: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x226108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22610c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x226110: 0x2448a378  addiu       $t0, $v0, -0x5C88
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943608));
    // 0x226114: 0x24c69380  addiu       $a2, $a2, -0x6C80
    ctx->pc = 0x226114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939520));
    // 0x226118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22611c: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x22611Cu;
    {
        const bool branch_taken_0x22611c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x226120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22611Cu;
        // 0x226120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22611c) {
            ctx->pc = 0x226140u;
            goto label_226140;
        }
    }
    ctx->pc = 0x226124u;
label_226124:
    // 0x226124: 0xc0898b2  jal         func_2262C8
    ctx->pc = 0x226124u;
    SET_GPR_U32(ctx, 31, 0x22612Cu);
    ctx->pc = 0x2262C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C8u, 0x226124u, 0x22612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22612Cu;
label_22612c:
    // 0x22612c: 0xc08989e  jal         func_226278
    ctx->pc = 0x22612Cu;
    SET_GPR_U32(ctx, 31, 0x226134u);
    ctx->pc = 0x226130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22612Cu;
    // 0x226130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226278u, 0x22612Cu, 0x226134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226134u;
label_226134:
    // 0x226134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x226134u;
    {
        const bool branch_taken_0x226134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226134u;
        // 0x226138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226134) {
            ctx->pc = 0x226154u;
            goto label_226154;
        }
    }
    ctx->pc = 0x22613Cu;
    // 0x22613c: 0x0  nop
    ctx->pc = 0x22613cu;
    // NOP
label_226140:
    // 0x226140: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x226140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x226144: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x226144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226148: 0xae470030  sw          $a3, 0x30($s2)
    ctx->pc = 0x226148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 7));
    // 0x22614c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x226150: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x226150u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_226154:
    // 0x226154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22615c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22615cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226160: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226164: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x226164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226168: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x226168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22616c: 0x3e00008  jr          $ra
    ctx->pc = 0x22616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22616Cu;
        // 0x226170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22616Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226174u;
}
