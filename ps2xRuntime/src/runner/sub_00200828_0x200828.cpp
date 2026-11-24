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

// Function: sub_00200828
// Address: 0x200828 - 0x2008f4
void sub_00200828_0x200828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200828_0x200828");
#endif

    switch (ctx->pc) {
        case 0x2008a0u: goto label_2008a0;
        case 0x2008a8u: goto label_2008a8;
        case 0x2008ccu: goto label_2008cc;
        default: break;
    }

    ctx->pc = 0x200828u;

    // 0x200828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20082c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200830: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x200830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200834: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x200834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200838: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x200838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20083c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200840: 0x24850250  addiu       $a1, $a0, 0x250
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x200844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20084c: 0x8c820384  lw          $v0, 0x384($a0)
    ctx->pc = 0x20084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x200850: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x200850u;
    {
        const bool branch_taken_0x200850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200850u;
        // 0x200854: 0x8c860194  lw          $a2, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200850) {
            ctx->pc = 0x20088Cu;
            goto label_20088c;
        }
    }
    ctx->pc = 0x200858u;
    // 0x200858: 0x8c830388  lw          $v1, 0x388($a0)
    ctx->pc = 0x200858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x20085c: 0xac800384  sw          $zero, 0x384($a0)
    ctx->pc = 0x20085cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 900), GPR_U32(ctx, 0));
    // 0x200860: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x200864: 0xac830388  sw          $v1, 0x388($a0)
    ctx->pc = 0x200864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 904), GPR_U32(ctx, 3));
    // 0x200868: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x200868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20086c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200870: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x200870u;
    {
        const bool branch_taken_0x200870 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x200874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200870u;
        // 0x200874: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200870) {
            ctx->pc = 0x200880u;
            goto label_200880;
        }
    }
    ctx->pc = 0x200878u;
    // 0x200878: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x200878u;
    {
        const bool branch_taken_0x200878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200878u;
        // 0x20087c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200878) {
            ctx->pc = 0x2008D8u;
            goto label_2008d8;
        }
    }
    ctx->pc = 0x200880u;
label_200880:
    // 0x200880: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x200880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x200884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200888: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x200888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_20088c:
    // 0x20088c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x20088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x200890: 0x2411fffe  addiu       $s1, $zero, -0x2
    ctx->pc = 0x200890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x200894: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x200894u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x200898: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x200898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20089c: 0x0  nop
    ctx->pc = 0x20089cu;
    // NOP
label_2008a0:
    // 0x2008a0: 0xc0801b4  jal         func_2006D0
    ctx->pc = 0x2008A0u;
    SET_GPR_U32(ctx, 31, 0x2008A8u);
    ctx->pc = 0x2008A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008A0u;
    // 0x2008a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006D0u, 0x2008A0u, 0x2008A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008A8u;
label_2008a8:
    // 0x2008a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2008a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2008acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2008b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2008b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2008b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2008B4u;
    {
        const bool branch_taken_0x2008b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008B4u;
        // 0x2008b8: 0x531824  and         $v1, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008b4) {
            ctx->pc = 0x2008D4u;
            goto label_2008d4;
        }
    }
    ctx->pc = 0x2008BCu;
    // 0x2008bc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2008BCu;
    {
        const bool branch_taken_0x2008bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2008bc) {
            ctx->pc = 0x2008C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2008BCu;
            // 0x2008c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2008D4u;
            goto label_2008d4;
        }
    }
    ctx->pc = 0x2008C4u;
    // 0x2008c4: 0xc08023e  jal         func_2008F8
    ctx->pc = 0x2008C4u;
    SET_GPR_U32(ctx, 31, 0x2008CCu);
    ctx->pc = 0x2008F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2008F8u, 0x2008C4u, 0x2008CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008CCu;
label_2008cc:
    // 0x2008cc: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2008CCu;
    {
        const bool branch_taken_0x2008cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2008cc) {
            ctx->pc = 0x2008A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2008a0;
        }
    }
    ctx->pc = 0x2008D4u;
label_2008d4:
    // 0x2008d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2008d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2008d8:
    // 0x2008d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2008d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2008dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2008dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2008e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2008e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2008e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2008e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2008e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2008e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2008ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2008ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2008F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008ECu;
        // 0x2008f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2008F4u;
}
