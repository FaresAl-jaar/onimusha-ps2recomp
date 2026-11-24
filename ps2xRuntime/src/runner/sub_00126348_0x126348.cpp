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

// Function: sub_00126348
// Address: 0x126348 - 0x1264d4
void sub_00126348_0x126348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126348_0x126348");
#endif

    switch (ctx->pc) {
        case 0x126388u: goto label_126388;
        case 0x126400u: goto label_126400;
        case 0x12649cu: goto label_12649c;
        default: break;
    }

    ctx->pc = 0x126348u;

    // 0x126348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12634c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126350: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126354: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126358: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x126358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12635c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126360: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126364: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x126364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x126368: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x126368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12636c: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x12636cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x126370: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x126374: 0x28f8821  addu        $s1, $s4, $t7
    ctx->pc = 0x126374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    // 0x126378: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x126378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x12637c: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12637cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126380: 0xc0496b0  jal         func_125AC0
    ctx->pc = 0x126380u;
    SET_GPR_U32(ctx, 31, 0x126388u);
    ctx->pc = 0x126384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126380u;
    // 0x126384: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125AC0u, 0x126380u, 0x126388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126388u;
label_126388:
    // 0x126388: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x126388u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12638c: 0x284e000b  slti        $t6, $v0, 0xB
    ctx->pc = 0x12638cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x126390: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x126390u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x126394: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x126394u;
    {
        const bool branch_taken_0x126394 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126394u;
        // 0x126398: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126394) {
            ctx->pc = 0x126424u;
            goto label_126424;
        }
    }
    ctx->pc = 0x12639Cu;
    // 0x12639c: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x12639cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1263a0: 0x3c0e3ff0  lui         $t6, 0x3FF0
    ctx->pc = 0x1263a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16368 << 16));
    // 0x1263a4: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x1263a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1263a8: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x1263a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1263ac: 0x1f37806  srlv        $t7, $s3, $t7
    ctx->pc = 0x1263acu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x1263b0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1263b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1263b4: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x1263b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x1263b8: 0x291682b  sltu        $t5, $s4, $s1
    ctx->pc = 0x1263b8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1263bc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1263bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1263c0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1263c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263c4: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1263C4u;
    {
        const bool branch_taken_0x1263c4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263C4u;
        // 0x1263c8: 0x24f9025  or          $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263c4) {
            ctx->pc = 0x1263D0u;
            goto label_1263d0;
        }
    }
    ctx->pc = 0x1263CCu;
    // 0x1263cc: 0x8e2cfffc  lw          $t4, -0x4($s1)
    ctx->pc = 0x1263ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_1263d0:
    // 0x1263d0: 0x240e000b  addiu       $t6, $zero, 0xB
    ctx->pc = 0x1263d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1263d4: 0x244f0015  addiu       $t7, $v0, 0x15
    ctx->pc = 0x1263d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
    // 0x1263d8: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x1263d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1263dc: 0x1f37804  sllv        $t7, $s3, $t7
    ctx->pc = 0x1263dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x1263e0: 0x1cc7006  srlv        $t6, $t4, $t6
    ctx->pc = 0x1263e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x1263e4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1263e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1263e8: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x1263e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x1263ec: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1263ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1263f0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1263f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1263f4: 0x24d9024  and         $s2, $s2, $t5
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 13));
    // 0x1263f8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1263f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1263fc: 0x24f9025  or          $s2, $s2, $t7
    ctx->pc = 0x1263fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
label_126400:
    // 0x126400: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x126400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12640c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12640cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126414: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x126414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126418: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x126418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12641c: 0x3e00008  jr          $ra
    ctx->pc = 0x12641Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12641Cu;
        // 0x126420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12641Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126424u;
label_126424:
    // 0x126424: 0x291782b  sltu        $t7, $s4, $s1
    ctx->pc = 0x126424u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126428: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126428u;
    {
        const bool branch_taken_0x126428 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126428u;
        // 0x12642c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126428) {
            ctx->pc = 0x126438u;
            goto label_126438;
        }
    }
    ctx->pc = 0x126430u;
    // 0x126430: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x126430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x126434: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x126434u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126438:
    // 0x126438: 0x2442fff5  addiu       $v0, $v0, -0xB
    ctx->pc = 0x126438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967285));
    // 0x12643c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12643Cu;
    {
        const bool branch_taken_0x12643c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12643Cu;
        // 0x126440: 0x27823  negu        $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12643c) {
            ctx->pc = 0x1264A4u;
            goto label_1264a4;
        }
    }
    ctx->pc = 0x126444u;
    // 0x126444: 0x537004  sllv        $t6, $s3, $v0
    ctx->pc = 0x126444u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x126448: 0x1ec7806  srlv        $t7, $t4, $t7
    ctx->pc = 0x126448u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 15) & 0x1F));
    // 0x12644c: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x12644cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x126450: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x126450u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x126454: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x126454u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x126458: 0x3c0f3ff0  lui         $t7, 0x3FF0
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16368 << 16));
    // 0x12645c: 0x291682b  sltu        $t5, $s4, $s1
    ctx->pc = 0x12645cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x126460: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x126460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x126464: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126468: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x126468u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12646c: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x12646Cu;
    {
        const bool branch_taken_0x12646c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x126470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12646Cu;
        // 0x126470: 0x24e9025  or          $s2, $s2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12646c) {
            ctx->pc = 0x126478u;
            goto label_126478;
        }
    }
    ctx->pc = 0x126474u;
    // 0x126474: 0x8e33fffc  lw          $s3, -0x4($s1)
    ctx->pc = 0x126474u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_126478:
    // 0x126478: 0x27823  negu        $t7, $v0
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12647c: 0x4c7004  sllv        $t6, $t4, $v0
    ctx->pc = 0x12647cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x126480: 0x1f37806  srlv        $t7, $s3, $t7
    ctx->pc = 0x126480u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 15) & 0x1F));
    // 0x126484: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x126484u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126488: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x126488u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12648c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x126490: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x126490u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x126494: 0x24d9024  and         $s2, $s2, $t5
    ctx->pc = 0x126494u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 13));
    // 0x126498: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x126498u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
label_12649c:
    // 0x12649c: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x12649Cu;
    {
        const bool branch_taken_0x12649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12649Cu;
        // 0x1264a0: 0x24e9025  or          $s2, $s2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12649c) {
            ctx->pc = 0x126400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126400;
        }
    }
    ctx->pc = 0x1264A4u;
label_1264a4:
    // 0x1264a4: 0x3c0f3ff0  lui         $t7, 0x3FF0
    ctx->pc = 0x1264a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16368 << 16));
    // 0x1264a8: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x1264a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1264ac: 0x26f7825  or          $t7, $s3, $t7
    ctx->pc = 0x1264acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) | GPR_U64(ctx, 15));
    // 0x1264b0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1264b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1264b4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1264b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1264b8: 0xc703c  dsll32      $t6, $t4, 0
    ctx->pc = 0x1264b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1264bc: 0x24f9025  or          $s2, $s2, $t7
    ctx->pc = 0x1264bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
    // 0x1264c0: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x1264c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x1264c4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1264c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1264c8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1264c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1264cc: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1264CCu;
    {
        const bool branch_taken_0x1264cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264CCu;
        // 0x1264d0: 0x24f9024  and         $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264cc) {
            ctx->pc = 0x12649Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12649c;
        }
    }
    ctx->pc = 0x1264D4u;
}
