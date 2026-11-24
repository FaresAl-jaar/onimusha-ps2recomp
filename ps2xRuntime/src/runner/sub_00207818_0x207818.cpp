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

// Function: sub_00207818
// Address: 0x207818 - 0x207974
void sub_00207818_0x207818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207818_0x207818");
#endif

    switch (ctx->pc) {
        case 0x207838u: goto label_207838;
        case 0x207938u: goto label_207938;
        default: break;
    }

    ctx->pc = 0x207818u;

    // 0x207818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20781c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207820: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20782c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207830: 0xc081d84  jal         func_207610
    ctx->pc = 0x207830u;
    SET_GPR_U32(ctx, 31, 0x207838u);
    ctx->pc = 0x207834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207830u;
    // 0x207834: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207830u, 0x207838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207838u;
label_207838:
    // 0x207838: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x207838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20783c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207840: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207840u;
    {
        const bool branch_taken_0x207840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x207844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207840u;
        // 0x207844: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207840) {
            ctx->pc = 0x207868u;
            goto label_207868;
        }
    }
    ctx->pc = 0x207848u;
    // 0x207848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20784c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20784cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207850: 0x24847800  addiu       $a0, $a0, 0x7800
    ctx->pc = 0x207850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30720));
    // 0x207854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207858: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20785c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20785Cu;
    ctx->pc = 0x207860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20785Cu;
    // 0x207860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x207864u;
    // 0x207864: 0x0  nop
    ctx->pc = 0x207864u;
    // NOP
label_207868:
    // 0x207868: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x207868u;
    {
        const bool branch_taken_0x207868 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207868u;
        // 0x20786c: 0x8e50003c  lw          $s0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207868) {
            ctx->pc = 0x207898u;
            goto label_207898;
        }
    }
    ctx->pc = 0x207870u;
    // 0x207870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20787c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x20787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x207880: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207888: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20788c: 0x8087e0e  j           func_21F838
    ctx->pc = 0x20788Cu;
    ctx->pc = 0x207890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20788Cu;
    // 0x207890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207894u;
    // 0x207894: 0x0  nop
    ctx->pc = 0x207894u;
    // NOP
label_207898:
    // 0x207898: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x207898u;
    {
        const bool branch_taken_0x207898 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x20789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207898u;
        // 0x20789c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207898) {
            ctx->pc = 0x2078C8u;
            goto label_2078c8;
        }
    }
    ctx->pc = 0x2078A0u;
    // 0x2078a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2078a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2078a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2078a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2078a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2078ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2078b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2078b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2078b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2078b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2078b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2078b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2078bc: 0x8087e0e  j           func_21F838
    ctx->pc = 0x2078BCu;
    ctx->pc = 0x2078C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2078BCu;
    // 0x2078c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x2078C4u;
    // 0x2078c4: 0x0  nop
    ctx->pc = 0x2078c4u;
    // NOP
label_2078c8:
    // 0x2078c8: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2078C8u;
    {
        const bool branch_taken_0x2078c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2078CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078C8u;
        // 0x2078cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078c8) {
            ctx->pc = 0x207920u;
            goto label_207920;
        }
    }
    ctx->pc = 0x2078D0u;
    // 0x2078d0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2078d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2078d4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2078D4u;
    {
        const bool branch_taken_0x2078d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2078D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078D4u;
        // 0x2078d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078d4) {
            ctx->pc = 0x207900u;
            goto label_207900;
        }
    }
    ctx->pc = 0x2078DCu;
    // 0x2078dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2078dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2078e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2078e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2078e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2078e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2078e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2078e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2078ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2078ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2078f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2078f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2078f4: 0x8087e0e  j           func_21F838
    ctx->pc = 0x2078F4u;
    ctx->pc = 0x2078F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2078F4u;
    // 0x2078f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x2078FCu;
    // 0x2078fc: 0x0  nop
    ctx->pc = 0x2078fcu;
    // NOP
label_207900:
    // 0x207900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207908: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x207908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20790c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20790cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207910: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207914: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207918: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207918u;
    ctx->pc = 0x20791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207918u;
    // 0x20791c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207920u;
label_207920:
    // 0x207920: 0x5622000f  bnel        $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x207920u;
    {
        const bool branch_taken_0x207920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x207920) {
            ctx->pc = 0x207924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207920u;
            // 0x207924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207960u;
            goto label_207960;
        }
    }
    ctx->pc = 0x207928u;
    // 0x207928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20792c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x20792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x207930: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x207930u;
    SET_GPR_U32(ctx, 31, 0x207938u);
    ctx->pc = 0x207934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207930u;
    // 0x207934: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x207930u, 0x207938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207938u;
label_207938:
    // 0x207938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20793c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20793cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207940: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x207940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x207944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207948: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20794c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20794cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207950: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207954: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207954u;
    ctx->pc = 0x207958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207954u;
    // 0x207958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x20795Cu;
    // 0x20795c: 0x0  nop
    ctx->pc = 0x20795cu;
    // NOP
label_207960:
    // 0x207960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20796c: 0x3e00008  jr          $ra
    ctx->pc = 0x20796Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20796Cu;
        // 0x207970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20796Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207974u;
}
