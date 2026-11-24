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

// Function: sub_00204500
// Address: 0x204500 - 0x2046e0
void sub_00204500_0x204500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204500_0x204500");
#endif

    switch (ctx->pc) {
        case 0x204548u: goto label_204548;
        case 0x204574u: goto label_204574;
        case 0x2045a4u: goto label_2045a4;
        case 0x2045b8u: goto label_2045b8;
        case 0x2045c8u: goto label_2045c8;
        case 0x2045dcu: goto label_2045dc;
        case 0x204650u: goto label_204650;
        case 0x204660u: goto label_204660;
        case 0x204674u: goto label_204674;
        default: break;
    }

    ctx->pc = 0x204500u;

    // 0x204500: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x204500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x204504: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x204504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x204508: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20450c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x20450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x204510: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x204510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204514: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x204514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x204518: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x204518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x20451c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20451cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204520: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x204520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x204524: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x204524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x204528: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x204528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x20452c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x20452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x204530: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x204530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x204534: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x204534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x204538: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x204538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x20453c: 0x8e90003c  lw          $s0, 0x3C($s4)
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x204540: 0xc0811ea  jal         func_2047A8
    ctx->pc = 0x204540u;
    SET_GPR_U32(ctx, 31, 0x204548u);
    ctx->pc = 0x204544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204540u;
    // 0x204544: 0x8e570020  lw          $s7, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2047A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2047A8u, 0x204540u, 0x204548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204548u;
label_204548:
    // 0x204548: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x204548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x20454c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x204550: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x204550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x204554: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x204554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x204558: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x204558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x20455c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x20455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x204560: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x204564: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x204564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x204568: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x20456c: 0xc0811fa  jal         func_2047E8
    ctx->pc = 0x20456Cu;
    SET_GPR_U32(ctx, 31, 0x204574u);
    ctx->pc = 0x204570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20456Cu;
    // 0x204570: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2047E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2047E8u, 0x20456Cu, 0x204574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204574u;
label_204574:
    // 0x204574: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204578: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x204578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20457c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20457cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204580: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x204580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x204584: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x204584u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x204588: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x204588u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x20458c: 0x8e560030  lw          $s6, 0x30($s2)
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x204590: 0x8e5e002c  lw          $fp, 0x2C($s2)
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x204594: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x204594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x204598: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x204598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x20459c: 0xc08852e  jal         func_2214B8
    ctx->pc = 0x20459Cu;
    SET_GPR_U32(ctx, 31, 0x2045A4u);
    ctx->pc = 0x2045A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20459Cu;
    // 0x2045a0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2214B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2214B8u, 0x20459Cu, 0x2045A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045A4u;
label_2045a4:
    // 0x2045a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2045A4u;
    {
        const bool branch_taken_0x2045a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045A4u;
        // 0x2045a8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045a4) {
            ctx->pc = 0x2045BCu;
            goto label_2045bc;
        }
    }
    ctx->pc = 0x2045ACu;
    // 0x2045ac: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2045acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2045b0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2045B0u;
    SET_GPR_U32(ctx, 31, 0x2045B8u);
    ctx->pc = 0x2045B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045B0u;
    // 0x2045b4: 0x24846bc0  addiu       $a0, $a0, 0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2045B0u, 0x2045B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045B8u;
label_2045b8:
    // 0x2045b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2045bc:
    // 0x2045bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2045bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045c0: 0xc0811de  jal         func_204778
    ctx->pc = 0x2045C0u;
    SET_GPR_U32(ctx, 31, 0x2045C8u);
    ctx->pc = 0x2045C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045C0u;
    // 0x2045c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204778u, 0x2045C0u, 0x2045C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045C8u;
label_2045c8:
    // 0x2045c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2045c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2045ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2045d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2045d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045d4: 0xc0811de  jal         func_204778
    ctx->pc = 0x2045D4u;
    SET_GPR_U32(ctx, 31, 0x2045DCu);
    ctx->pc = 0x2045D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045D4u;
    // 0x2045d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204778u, 0x2045D4u, 0x2045DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045DCu;
label_2045dc:
    // 0x2045dc: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x2045dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x2045e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2045e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2045e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2045ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2045ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045f0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2045f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2045f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2045f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2045f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2045fc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2045fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204600: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x204600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x204604: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x204604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x204608: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x204608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x20460c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204610: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x204610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x204614: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204618: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x204618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x20461c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204620: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x204620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x204624: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x204624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x204628: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x204628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
    // 0x20462c: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x20462cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x204630: 0xae3e0030  sw          $fp, 0x30($s1)
    ctx->pc = 0x204630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
    // 0x204634: 0xae360038  sw          $s6, 0x38($s1)
    ctx->pc = 0x204634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 22));
    // 0x204638: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x204638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x20463c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x20463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x204640: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x204640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x204644: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x204644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204648: 0xc0811b8  jal         func_2046E0
    ctx->pc = 0x204648u;
    SET_GPR_U32(ctx, 31, 0x204650u);
    ctx->pc = 0x20464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204648u;
    // 0x20464c: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2046E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2046E0u, 0x204648u, 0x204650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204650u;
label_204650:
    // 0x204650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x204650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204658: 0xc081254  jal         func_204950
    ctx->pc = 0x204658u;
    SET_GPR_U32(ctx, 31, 0x204660u);
    ctx->pc = 0x20465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204658u;
    // 0x20465c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204950u, 0x204658u, 0x204660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204660u;
label_204660:
    // 0x204660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x204660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204664: 0x8e260088  lw          $a2, 0x88($s1)
    ctx->pc = 0x204664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x204668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20466c: 0xc081214  jal         func_204850
    ctx->pc = 0x20466Cu;
    SET_GPR_U32(ctx, 31, 0x204674u);
    ctx->pc = 0x204670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20466Cu;
    // 0x204670: 0x8e27008c  lw          $a3, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204850u, 0x20466Cu, 0x204674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204674u;
label_204674:
    // 0x204674: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x204674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x204678: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x204678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20467c: 0xde420048  ld          $v0, 0x48($s2)
    ctx->pc = 0x20467cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x204680: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x204680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x204684: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x204684u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x204688: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x204688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20468c: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x20468cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x204690: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x204690u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x204694: 0xfe230058  sd          $v1, 0x58($s1)
    ctx->pc = 0x204694u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 3));
    // 0x204698: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x204698u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20469c: 0xde420058  ld          $v0, 0x58($s2)
    ctx->pc = 0x20469cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2046a0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2046a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2046a4: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x2046a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
    // 0x2046a8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2046a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2046ac: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x2046acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2046b0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2046b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2046b4: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x2046b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
    // 0x2046b8: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x2046b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2046bc: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x2046bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x2046c0: 0xde430070  ld          $v1, 0x70($s2)
    ctx->pc = 0x2046c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2046c4: 0xfe230078  sd          $v1, 0x78($s1)
    ctx->pc = 0x2046c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 3));
    // 0x2046c8: 0xde420078  ld          $v0, 0x78($s2)
    ctx->pc = 0x2046c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2046cc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2046ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2046d0: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x2046d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x2046d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2046d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2046D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D8u;
        // 0x2046dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2046D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2046E0u;
}
