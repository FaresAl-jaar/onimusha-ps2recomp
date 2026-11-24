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

// Function: sub_002132B8
// Address: 0x2132b8 - 0x213428
void sub_002132B8_0x2132b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002132B8_0x2132b8");
#endif

    switch (ctx->pc) {
        case 0x213300u: goto label_213300;
        case 0x21333cu: goto label_21333c;
        case 0x213350u: goto label_213350;
        default: break;
    }

    ctx->pc = 0x2132b8u;

    // 0x2132b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2132b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2132bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2132bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2132c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2132c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2132c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2132c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2132c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2132cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2132ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2132d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2132d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132d4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2132d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2132d8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2132d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132dc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2132dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2132e0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2132e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2132e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2132e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2132e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2132ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2132ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2132f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2132f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2132f4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2132f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2132f8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2132F8u;
    SET_GPR_U32(ctx, 31, 0x213300u);
    ctx->pc = 0x2132FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132F8u;
    // 0x2132fc: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2132F8u, 0x213300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213300u;
label_213300:
    // 0x213300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213300u;
    {
        const bool branch_taken_0x213300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213300u;
        // 0x213304: 0x26b61f74  addiu       $s6, $s5, 0x1F74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213300) {
            ctx->pc = 0x213310u;
            goto label_213310;
        }
    }
    ctx->pc = 0x213308u;
    // 0x213308: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x213308u;
    {
        const bool branch_taken_0x213308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213308u;
        // 0x21330c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213308) {
            ctx->pc = 0x2133F8u;
            goto label_2133f8;
        }
    }
    ctx->pc = 0x213310u;
label_213310:
    // 0x213310: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x213310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213314: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x213318: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x213318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21331c: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x21331Cu;
    {
        const bool branch_taken_0x21331c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x21331c) {
            ctx->pc = 0x213320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21331Cu;
            // 0x213320: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213324u;
            goto label_213324;
        }
    }
    ctx->pc = 0x213324u;
label_213324:
    // 0x213324: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x213324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x213328: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x213328u;
    {
        const bool branch_taken_0x213328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x213328) {
            ctx->pc = 0x21332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213328u;
            // 0x21332c: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213330u;
            goto label_213330;
        }
    }
    ctx->pc = 0x213330u;
label_213330:
    // 0x213330: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x213330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213334: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x213334u;
    SET_GPR_U32(ctx, 31, 0x21333Cu);
    ctx->pc = 0x213338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213334u;
    // 0x213338: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x213334u, 0x21333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21333Cu;
label_21333c:
    // 0x21333c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21333cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213340: 0x1292000e  beq         $s4, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x213340u;
    {
        const bool branch_taken_0x213340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x213344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213340u;
        // 0x213344: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213340) {
            ctx->pc = 0x21337Cu;
            goto label_21337c;
        }
    }
    ctx->pc = 0x213348u;
    // 0x213348: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x213348u;
    SET_GPR_U32(ctx, 31, 0x213350u);
    ctx->pc = 0x21334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213348u;
    // 0x21334c: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x213348u, 0x213350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213350u;
label_213350:
    // 0x213350: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x213350u;
    {
        const bool branch_taken_0x213350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213350) {
            ctx->pc = 0x213354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213350u;
            // 0x213354: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213370u;
            goto label_213370;
        }
    }
    ctx->pc = 0x213358u;
    // 0x213358: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x213358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21335c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21335cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213360: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x213360u;
    {
        const bool branch_taken_0x213360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213360) {
            ctx->pc = 0x213364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213360u;
            // 0x213364: 0xae140038  sw          $s4, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21337Cu;
            goto label_21337c;
        }
    }
    ctx->pc = 0x213368u;
    // 0x213368: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x213368u;
    {
        const bool branch_taken_0x213368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213368u;
        // 0x21336c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213368) {
            ctx->pc = 0x213380u;
            goto label_213380;
        }
    }
    ctx->pc = 0x213370u;
label_213370:
    // 0x213370: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213370u;
    {
        const bool branch_taken_0x213370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x213370) {
            ctx->pc = 0x213374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213370u;
            // 0x213374: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213380u;
            goto label_213380;
        }
    }
    ctx->pc = 0x213378u;
    // 0x213378: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x213378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
label_21337c:
    // 0x21337c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x21337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_213380:
    // 0x213380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213384: 0x1471001c  bne         $v1, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x213384u;
    {
        const bool branch_taken_0x213384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x213388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213384u;
        // 0x213388: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213384) {
            ctx->pc = 0x2133F8u;
            goto label_2133f8;
        }
    }
    ctx->pc = 0x21338Cu;
    // 0x21338c: 0x662000a  bltzl       $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x21338Cu;
    {
        const bool branch_taken_0x21338c = (GPR_S64(ctx, 19) < 0);
        if (branch_taken_0x21338c) {
            ctx->pc = 0x213390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21338Cu;
            // 0x213390: 0x8ec50018  lw          $a1, 0x18($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2133B8u;
            goto label_2133b8;
        }
    }
    ctx->pc = 0x213394u;
    // 0x213394: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x213394u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x213398: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x213398u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21339c: 0x262202a  slt         $a0, $s3, $v0
    ctx->pc = 0x21339cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2133a0: 0x263282a  slt         $a1, $s3, $v1
    ctx->pc = 0x2133a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2133a4: 0x264100b  movn        $v0, $s3, $a0
    ctx->pc = 0x2133a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x2133a8: 0x265180b  movn        $v1, $s3, $a1
    ctx->pc = 0x2133a8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x2133ac: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x2133acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2133b0: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x2133b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x2133b4: 0x8ec50018  lw          $a1, 0x18($s6)
    ctx->pc = 0x2133b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_2133b8:
    // 0x2133b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2133b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2133bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2133c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2133c4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2133c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133c8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2133c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2133cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2133ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2133d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2133d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2133d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2133d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2133d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2133dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2133dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2133e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2133e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2133e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2133e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2133e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2133e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2133ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2133ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2133f0: 0x8084e48  j           func_213920
    ctx->pc = 0x2133F0u;
    ctx->pc = 0x2133F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133F0u;
    // 0x2133f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213920u;
    sub_00213920_0x213920(rdram, ctx, runtime); return;
    ctx->pc = 0x2133F8u;
label_2133f8:
    // 0x2133f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2133f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2133fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2133fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213404: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213408: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21340c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21340cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213410: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x213410u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213414: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x213414u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213418: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x213418u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21341c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x213420: 0x3e00008  jr          $ra
    ctx->pc = 0x213420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213420u;
        // 0x213424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213428u;
}
