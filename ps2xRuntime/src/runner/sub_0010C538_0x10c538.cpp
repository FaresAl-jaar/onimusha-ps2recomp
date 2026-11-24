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

// Function: sub_0010C538
// Address: 0x10c538 - 0x10c958
void sub_0010C538_0x10c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C538_0x10c538");
#endif

    switch (ctx->pc) {
        case 0x10c60cu: goto label_10c60c;
        case 0x10c898u: goto label_10c898;
        case 0x10c8a4u: goto label_10c8a4;
        case 0x10c8e8u: goto label_10c8e8;
        case 0x10c8f8u: goto label_10c8f8;
        default: break;
    }

    ctx->pc = 0x10c538u;

    // 0x10c538: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x10c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x10c53c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c540: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x10c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x10c544: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x10c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x10c548: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x10c548u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c54c: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x10c54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x10c550: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10c550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c554: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x10c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x10c558: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10c558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c55c: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x10c55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x10c560: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x10c560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x10c564: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x10c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x10c568: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x10c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x10c56c: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x10c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x10c570: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x10c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x10c574: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x10c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x10c578: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C578u;
    {
        const bool branch_taken_0x10c578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C578u;
        // 0x10c57c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c578) {
            ctx->pc = 0x10C594u;
            goto label_10c594;
        }
    }
    ctx->pc = 0x10C580u;
    // 0x10c580: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x10c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10c584: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x10c584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c588: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x10c588u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c58c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C58Cu;
    {
        const bool branch_taken_0x10c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C58Cu;
        // 0x10c590: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c58c) {
            ctx->pc = 0x10C59Cu;
            goto label_10c59c;
        }
    }
    ctx->pc = 0x10C594u;
label_10c594:
    // 0x10c594: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x10c594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c598: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x10c598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10c59c:
    // 0x10c59c: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x10c59cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x10c5a0: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10c5a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10c5a4: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x10c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x10c5a8: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x10c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x10c5ac: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x10c5acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x10c5b0: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x10c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x10c5b4: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x10C5B4u;
    {
        const bool branch_taken_0x10c5b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5B4u;
        // 0x10c5b8: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5b4) {
            ctx->pc = 0x10C648u;
            goto label_10c648;
        }
    }
    ctx->pc = 0x10C5BCu;
    // 0x10c5bc: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x10c5bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10c5c0: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x10C5C0u;
    {
        const bool branch_taken_0x10c5c0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x10c5c0) {
            ctx->pc = 0x10C5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5C0u;
            // 0x10c5c4: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C658u;
            goto label_10c658;
        }
    }
    ctx->pc = 0x10C5C8u;
    // 0x10c5c8: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x10c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10c5cc: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10C5CCu;
    {
        const bool branch_taken_0x10c5cc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10c5cc) {
            ctx->pc = 0x10C5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5CCu;
            // 0x10c5d0: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C658u;
            goto label_10c658;
        }
    }
    ctx->pc = 0x10C5D4u;
    // 0x10c5d4: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x10c5d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x10c5d8: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x10c5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10c5dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10c5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10c5e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x10c5e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10c5e4: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10c5e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10c5e8: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x10c5e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10c5ec: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10c5ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10c5f0: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x10c5f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x10c5f4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10c5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10c5f8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10c5f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10c5fc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10c5fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10c600: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x10c600u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10c604: 0xc04b098  jal         func_12C260
    ctx->pc = 0x10C604u;
    SET_GPR_U32(ctx, 31, 0x10C60Cu);
    ctx->pc = 0x10C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C604u;
    // 0x10c608: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x10C604u, 0x10C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C60Cu;
label_10c60c:
    // 0x10c60c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x10c60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x10c610: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c610u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c614: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x10c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10c618: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10c61c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c620: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x10c620u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x10c624: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10c624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10c628: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10c628u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10c62c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C62Cu;
    {
        const bool branch_taken_0x10c62c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C62Cu;
        // 0x10c630: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c62c) {
            ctx->pc = 0x10C654u;
            goto label_10c654;
        }
    }
    ctx->pc = 0x10C634u;
    // 0x10c634: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10c638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c63c: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10c63cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10c640: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10C640u;
    {
        const bool branch_taken_0x10c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C640u;
        // 0x10c644: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c640) {
            ctx->pc = 0x10C658u;
            goto label_10c658;
        }
    }
    ctx->pc = 0x10C648u;
label_10c648:
    // 0x10c648: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x10c648u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10c64c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C64Cu;
    {
        const bool branch_taken_0x10c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C64Cu;
        // 0x10c650: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c64c) {
            ctx->pc = 0x10C658u;
            goto label_10c658;
        }
    }
    ctx->pc = 0x10C654u;
label_10c654:
    // 0x10c654: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10c654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_10c658:
    // 0x10c658: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10c65c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c660: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C660u;
    {
        const bool branch_taken_0x10c660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c660) {
            ctx->pc = 0x10C664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C660u;
            // 0x10c664: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C688u;
            goto label_10c688;
        }
    }
    ctx->pc = 0x10C668u;
    // 0x10c668: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10c668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10c66c: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C66Cu;
    {
        const bool branch_taken_0x10c66c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10c66c) {
            ctx->pc = 0x10C670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C66Cu;
            // 0x10c670: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C688u;
            goto label_10c688;
        }
    }
    ctx->pc = 0x10C674u;
    // 0x10c674: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x10c674u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x10c678: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c67c: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10c680: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10c680u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10c684: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x10c684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_10c688:
    // 0x10c688: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10c688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c68c: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x10c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x10c690: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x10c690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x10c694: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x10c694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x10c698: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10c698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10c69c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x10c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x10c6a0: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10c6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10c6a4: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10c6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10c6a8: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x10c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x10c6ac: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10c6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10c6b0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10c6b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10c6b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10c6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10c6b8: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x10c6b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x10c6bc: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x10c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x10c6c0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10c6c4: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x10c6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x10c6c8: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x10c6c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x10c6cc: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x10c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x10c6d0: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x10c6d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x10c6d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10c6d8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x10c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x10c6dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10c6e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10c6e4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x10c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x10c6e8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x10c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x10c6ec: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x10c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x10c6f0: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10C6F0u;
    {
        const bool branch_taken_0x10c6f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6F0u;
        // 0x10c6f4: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6f0) {
            ctx->pc = 0x10C754u;
            goto label_10c754;
        }
    }
    ctx->pc = 0x10C6F8u;
    // 0x10c6f8: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x10c6f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x10c6fc: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10C6FCu;
    {
        const bool branch_taken_0x10c6fc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x10c6fc) {
            ctx->pc = 0x10C700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C6FCu;
            // 0x10c700: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C75Cu;
            goto label_10c75c;
        }
    }
    ctx->pc = 0x10C704u;
    // 0x10c704: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10C704u;
    {
        const bool branch_taken_0x10c704 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x10c704) {
            ctx->pc = 0x10C708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C704u;
            // 0x10c708: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C75Cu;
            goto label_10c75c;
        }
    }
    ctx->pc = 0x10C70Cu;
    // 0x10c70c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10c70cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10c710: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10c714: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x10c714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10c718: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c71c: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x10c71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x10c720: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x10c720u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x10c724: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x10c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x10c728: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c72c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c730: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x10c730u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x10c734: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10c734u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10c738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c73c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C73Cu;
    {
        const bool branch_taken_0x10c73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C73Cu;
        // 0x10c740: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c73c) {
            ctx->pc = 0x10C75Cu;
            goto label_10c75c;
        }
    }
    ctx->pc = 0x10C744u;
    // 0x10c744: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10c748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c74c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C74Cu;
    {
        const bool branch_taken_0x10c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C74Cu;
        // 0x10c750: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c74c) {
            ctx->pc = 0x10C75Cu;
            goto label_10c75c;
        }
    }
    ctx->pc = 0x10C754u;
label_10c754:
    // 0x10c754: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x10c754u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x10c758: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x10c758u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_10c75c:
    // 0x10c75c: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10c760: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c764: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C764u;
    {
        const bool branch_taken_0x10c764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c764) {
            ctx->pc = 0x10C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C764u;
            // 0x10c768: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C78Cu;
            goto label_10c78c;
        }
    }
    ctx->pc = 0x10C76Cu;
    // 0x10c76c: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10c76cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10c770: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C770u;
    {
        const bool branch_taken_0x10c770 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x10c770) {
            ctx->pc = 0x10C774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C770u;
            // 0x10c774: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C78Cu;
            goto label_10c78c;
        }
    }
    ctx->pc = 0x10C778u;
    // 0x10c778: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x10c778u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x10c77c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c780: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10c780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10c784: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10c784u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10c788: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x10c788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_10c78c:
    // 0x10c78c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x10c78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c790: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x10c790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x10c794: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x10c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x10c798: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10c798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10c79c: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x10c79cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x10c7a0: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10c7a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10c7a4: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x10c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x10c7a8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10c7a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10c7ac: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x10c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x10c7b0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10c7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10c7b4: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x10c7b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x10c7b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10c7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10c7bc: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10c7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10c7c0: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10c7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10c7c4: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x10c7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10c7c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10c7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10c7cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10c7d0: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x10c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x10c7d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10c7d8: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x10c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x10c7dc: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x10c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x10c7e0: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x10c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x10c7e4: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x10c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x10c7e8: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x10c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x10c7ec: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x10c7ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10c7f0: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x10c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x10c7f4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x10c7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x10c7f8: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x10c7f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x10c7fc: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x10c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x10c800: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x10c800u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x10c804: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10c804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10c808: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x10c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x10c80c: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x10c80cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x10c810: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x10c810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x10c814: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x10c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x10c818: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x10c818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x10c81c: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x10c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x10c820: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x10c820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x10c824: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x10c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x10c828: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x10c828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x10c82c: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x10c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x10c830: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10C830u;
    {
        const bool branch_taken_0x10c830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C830u;
        // 0x10c834: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c830) {
            ctx->pc = 0x10C85Cu;
            goto label_10c85c;
        }
    }
    ctx->pc = 0x10C838u;
    // 0x10c838: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x10c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x10c83c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x10c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10c840: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10c840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10c844: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10C844u;
    {
        const bool branch_taken_0x10c844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C844u;
        // 0x10c848: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c844) {
            ctx->pc = 0x10C874u;
            goto label_10c874;
        }
    }
    ctx->pc = 0x10C84Cu;
    // 0x10c84c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10c850: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10c850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10c854: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C854u;
    {
        const bool branch_taken_0x10c854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C854u;
        // 0x10c858: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c854) {
            ctx->pc = 0x10C874u;
            goto label_10c874;
        }
    }
    ctx->pc = 0x10C85Cu;
label_10c85c:
    // 0x10c85c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x10c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x10c860: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x10c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10c864: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x10c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x10c868: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10c868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c86c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10c86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10c870: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x10c870u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10c874:
    // 0x10c874: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10C874u;
    {
        const bool branch_taken_0x10c874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c874) {
            ctx->pc = 0x10C878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C874u;
            // 0x10c878: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C8B0u;
            goto label_10c8b0;
        }
    }
    ctx->pc = 0x10C87Cu;
    // 0x10c87c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x10c87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x10c880: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x10c880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10c884: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x10c884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10c888: 0x24c62318  addiu       $a2, $a2, 0x2318
    ctx->pc = 0x10c888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8984));
    // 0x10c88c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c890: 0xc044304  jal         func_110C10
    ctx->pc = 0x10C890u;
    SET_GPR_U32(ctx, 31, 0x10C898u);
    ctx->pc = 0x10C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C890u;
    // 0x10c894: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C10u, 0x10C890u, 0x10C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C898u;
label_10c898:
    // 0x10c898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c89c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10C89Cu;
    SET_GPR_U32(ctx, 31, 0x10C8A4u);
    ctx->pc = 0x10C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C89Cu;
    // 0x10c8a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10C89Cu, 0x10C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8A4u;
label_10c8a4:
    // 0x10c8a4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10C8A4u;
    {
        const bool branch_taken_0x10c8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8A4u;
        // 0x10c8a8: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8a4) {
            ctx->pc = 0x10C92Cu;
            goto label_10c92c;
        }
    }
    ctx->pc = 0x10C8ACu;
    // 0x10c8ac: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x10c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_10c8b0:
    // 0x10c8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c8b4: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10C8B4u;
    {
        const bool branch_taken_0x10c8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8B4u;
        // 0x10c8b8: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8b4) {
            ctx->pc = 0x10C92Cu;
            goto label_10c92c;
        }
    }
    ctx->pc = 0x10C8BCu;
    // 0x10c8bc: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x10c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x10c8c0: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x10C8C0u;
    {
        const bool branch_taken_0x10c8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10c8c0) {
            ctx->pc = 0x10C8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C8C0u;
            // 0x10c8c4: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C930u;
            goto label_10c930;
        }
    }
    ctx->pc = 0x10C8C8u;
    // 0x10c8c8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10c8cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10c8d0: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x10c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x10c8d4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x10c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x10c8d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C8D8u;
    {
        const bool branch_taken_0x10c8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8D8u;
        // 0x10c8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8d8) {
            ctx->pc = 0x10C8F0u;
            goto label_10c8f0;
        }
    }
    ctx->pc = 0x10C8E0u;
    // 0x10c8e0: 0xc04331a  jal         func_10CC68
    ctx->pc = 0x10C8E0u;
    SET_GPR_U32(ctx, 31, 0x10C8E8u);
    ctx->pc = 0x10C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C8E0u;
    // 0x10c8e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC68u, 0x10C8E0u, 0x10C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8E8u;
label_10c8e8:
    // 0x10c8e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C8E8u;
    {
        const bool branch_taken_0x10c8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8E8u;
        // 0x10c8ec: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8e8) {
            ctx->pc = 0x10C8FCu;
            goto label_10c8fc;
        }
    }
    ctx->pc = 0x10C8F0u;
label_10c8f0:
    // 0x10c8f0: 0xc042ffa  jal         func_10BFE8
    ctx->pc = 0x10C8F0u;
    SET_GPR_U32(ctx, 31, 0x10C8F8u);
    ctx->pc = 0x10C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C8F0u;
    // 0x10c8f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFE8u, 0x10C8F0u, 0x10C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8F8u;
label_10c8f8:
    // 0x10c8f8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_10c8fc:
    // 0x10c8fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c900: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10c900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10c904: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x10c904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x10c908: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x10c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x10c90c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C90Cu;
    {
        const bool branch_taken_0x10c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C90Cu;
        // 0x10c910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c90c) {
            ctx->pc = 0x10C924u;
            goto label_10c924;
        }
    }
    ctx->pc = 0x10C914u;
    // 0x10c914: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x10c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x10c918: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x10c918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x10c91c: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x10c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x10c920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c924:
    // 0x10c924: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x10c924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x10c928: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x10c928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_10c92c:
    // 0x10c92c: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x10c92cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_10c930:
    // 0x10c930: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x10c930u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10c934: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x10c934u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10c938: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x10c938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10c93c: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x10c93cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10c940: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x10c940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10c944: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x10c944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10c948: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x10c948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10c94c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x10c94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10c950: 0x3e00008  jr          $ra
    ctx->pc = 0x10C950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C950u;
        // 0x10c954: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C958u;
}
