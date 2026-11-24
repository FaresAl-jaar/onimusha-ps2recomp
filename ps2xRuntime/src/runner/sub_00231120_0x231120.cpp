#include <cstdio>
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

// Function: sub_00231120
// Address: 0x231120 - 0x231234
void sub_00231120_0x231120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231120_0x231120");
#endif
    { static uint32_t n=0; ++n; if (n<=40) fprintf(stderr,"[probe adxf_read] call %u a0=0x%x a1=0x%x a2=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,5),GPR_U32(ctx,6),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x23115cu: goto label_23115c;
        case 0x231184u: goto label_231184;
        case 0x2311ccu: goto label_2311cc;
        case 0x231214u: goto label_231214;
        default: break;
    }

    ctx->pc = 0x231120u;

    // 0x231120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23112c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231130: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x231130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x231134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x231138: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x231138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23113c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231140: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x231140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231148: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x231148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23114c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x231150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x231150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x231154: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x231154u;
    SET_GPR_U32(ctx, 31, 0x23115Cu);
    ctx->pc = 0x231158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231154u;
    // 0x231158: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x231154u, 0x23115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23115Cu;
label_23115c:
    // 0x23115c: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23115Cu;
    {
        const bool branch_taken_0x23115c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23115c) {
            ctx->pc = 0x231160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23115Cu;
            // 0x231160: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231170u;
            goto label_231170;
        }
    }
    ctx->pc = 0x231164u;
    // 0x231164: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x231164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x231168: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x231168u;
    {
        const bool branch_taken_0x231168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231168u;
        // 0x23116c: 0x2484a828  addiu       $a0, $a0, -0x57D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231168) {
            ctx->pc = 0x2311C4u;
            goto label_2311c4;
        }
    }
    ctx->pc = 0x231170u;
label_231170:
    // 0x231170: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x231170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231174: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x231174u;
    {
        const bool branch_taken_0x231174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x231174) {
            ctx->pc = 0x231184u;
            goto label_231184;
        }
    }
    ctx->pc = 0x23117Cu;
    // 0x23117c: 0xc08c362  jal         func_230D88
    ctx->pc = 0x23117Cu;
    SET_GPR_U32(ctx, 31, 0x231184u);
    ctx->pc = 0x231180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23117Cu;
    // 0x231180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D88u, 0x23117Cu, 0x231184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231184u;
label_231184:
    // 0x231184: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231184u;
    {
        const bool branch_taken_0x231184 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x231188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231184u;
        // 0x231188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231184) {
            ctx->pc = 0x231198u;
            goto label_231198;
        }
    }
    ctx->pc = 0x23118Cu;
    // 0x23118c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23118Cu;
    {
        const bool branch_taken_0x23118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23118Cu;
        // 0x231190: 0xae120014  sw          $s2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23118c) {
            ctx->pc = 0x2311D8u;
            goto label_2311d8;
        }
    }
    ctx->pc = 0x231194u;
    // 0x231194: 0x0  nop
    ctx->pc = 0x231194u;
    // NOP
label_231198:
    // 0x231198: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231198u;
    {
        const bool branch_taken_0x231198 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x231198) {
            ctx->pc = 0x2311A8u;
            goto label_2311a8;
        }
    }
    ctx->pc = 0x2311A0u;
    // 0x2311a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2311A0u;
    {
        const bool branch_taken_0x2311a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311A0u;
        // 0x2311a4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311a0) {
            ctx->pc = 0x2311B4u;
            goto label_2311b4;
        }
    }
    ctx->pc = 0x2311A8u;
label_2311a8:
    // 0x2311a8: 0x16330005  bne         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2311A8u;
    {
        const bool branch_taken_0x2311a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2311ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311A8u;
        // 0x2311ac: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311a8) {
            ctx->pc = 0x2311C0u;
            goto label_2311c0;
        }
    }
    ctx->pc = 0x2311B0u;
    // 0x2311b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2311b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2311b4:
    // 0x2311b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2311b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2311b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2311B8u;
    {
        const bool branch_taken_0x2311b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311B8u;
        // 0x2311bc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311b8) {
            ctx->pc = 0x2311D8u;
            goto label_2311d8;
        }
    }
    ctx->pc = 0x2311C0u;
label_2311c0:
    // 0x2311c0: 0x2484a850  addiu       $a0, $a0, -0x57B0
    ctx->pc = 0x2311c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944848));
label_2311c4:
    // 0x2311c4: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x2311C4u;
    SET_GPR_U32(ctx, 31, 0x2311CCu);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x2311C4u, 0x2311CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311CCu;
label_2311cc:
    // 0x2311cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2311CCu;
    {
        const bool branch_taken_0x2311cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311CCu;
        // 0x2311d0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311cc) {
            ctx->pc = 0x231218u;
            goto label_231218;
        }
    }
    ctx->pc = 0x2311D4u;
    // 0x2311d4: 0x0  nop
    ctx->pc = 0x2311d4u;
    // NOP
label_2311d8:
    // 0x2311d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2311dc: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2311DCu;
    {
        const bool branch_taken_0x2311dc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2311dc) {
            ctx->pc = 0x2311E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2311DCu;
            // 0x2311e0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2311F0u;
            goto label_2311f0;
        }
    }
    ctx->pc = 0x2311E4u;
    // 0x2311e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2311E4u;
    {
        const bool branch_taken_0x2311e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311E4u;
        // 0x2311e8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311e4) {
            ctx->pc = 0x2311FCu;
            goto label_2311fc;
        }
    }
    ctx->pc = 0x2311ECu;
    // 0x2311ec: 0x0  nop
    ctx->pc = 0x2311ecu;
    // NOP
label_2311f0:
    // 0x2311f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2311f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2311f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2311F4u;
    {
        const bool branch_taken_0x2311f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2311f4) {
            ctx->pc = 0x2311F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2311F4u;
            // 0x2311f8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2311FCu;
            goto label_2311fc;
        }
    }
    ctx->pc = 0x2311FCu;
label_2311fc:
    // 0x2311fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2311fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231200: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x231200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231204: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x231204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23120c: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x23120Cu;
    SET_GPR_U32(ctx, 31, 0x231214u);
    ctx->pc = 0x231210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23120Cu;
    // 0x231210: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x23120Cu, 0x231214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231214u;
label_231214:
    // 0x231214: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_231218:
    // 0x231218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23121c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23121cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x231220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231224: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x231224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x231228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23122c: 0x3e00008  jr          $ra
    ctx->pc = 0x23122Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23122Cu;
        // 0x231230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23122Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231234u;
}
