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

// Function: sub_002C52D0
// Address: 0x2c52d0 - 0x2c540c
void sub_002C52D0_0x2c52d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C52D0_0x2c52d0");
#endif

    switch (ctx->pc) {
        case 0x2c53d8u: goto label_2c53d8;
        default: break;
    }

    ctx->pc = 0x2c52d0u;

    // 0x2c52d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c52d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c52d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c52d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c52d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c52dc: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c52dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c52e0: 0x341c3  sra         $t0, $v1, 7
    ctx->pc = 0x2c52e0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 7));
    // 0x2c52e4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2c52e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2c52e8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C52E8u;
    {
        const bool branch_taken_0x2c52e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52E8u;
        // 0x2c52ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52e8) {
            ctx->pc = 0x2C5348u;
            goto label_2c5348;
        }
    }
    ctx->pc = 0x2C52F0u;
    // 0x2c52f0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C52F0u;
    {
        const bool branch_taken_0x2c52f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c52f0) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C52F8u;
    // 0x2c52f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C52F8u;
    {
        const bool branch_taken_0x2c52f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52f8) {
            ctx->pc = 0x2C5308u;
            goto label_2c5308;
        }
    }
    ctx->pc = 0x2C5300u;
    // 0x2c5300: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C5300u;
    {
        const bool branch_taken_0x2c5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5300) {
            ctx->pc = 0x2C5368u;
            goto label_2c5368;
        }
    }
    ctx->pc = 0x2C5308u;
label_2c5308:
    // 0x2c5308: 0x8ca229cc  lw          $v0, 0x29CC($a1)
    ctx->pc = 0x2c5308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10700)));
    // 0x2c530c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C530Cu;
    {
        const bool branch_taken_0x2c530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c530c) {
            ctx->pc = 0x2C531Cu;
            goto label_2c531c;
        }
    }
    ctx->pc = 0x2C5314u;
    // 0x2c5314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5314u;
    {
        const bool branch_taken_0x2c5314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5314u;
        // 0x2c5318: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5314) {
            ctx->pc = 0x2C5320u;
            goto label_2c5320;
        }
    }
    ctx->pc = 0x2C531Cu;
label_2c531c:
    // 0x2c531c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c531cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5320:
    // 0x2c5320: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C5320u;
    {
        const bool branch_taken_0x2c5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5320u;
        // 0x2c5324: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5320) {
            ctx->pc = 0x2C5368u;
            goto label_2c5368;
        }
    }
    ctx->pc = 0x2C5328u;
label_2c5328:
    // 0x2c5328: 0x8ca229cc  lw          $v0, 0x29CC($a1)
    ctx->pc = 0x2c5328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10700)));
    // 0x2c532c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C532Cu;
    {
        const bool branch_taken_0x2c532c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c532c) {
            ctx->pc = 0x2C533Cu;
            goto label_2c533c;
        }
    }
    ctx->pc = 0x2C5334u;
    // 0x2c5334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5334u;
    {
        const bool branch_taken_0x2c5334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5334u;
        // 0x2c5338: 0x90420011  lbu         $v0, 0x11($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5334) {
            ctx->pc = 0x2C5340u;
            goto label_2c5340;
        }
    }
    ctx->pc = 0x2C533Cu;
label_2c533c:
    // 0x2c533c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c533cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5340:
    // 0x2c5340: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5340u;
    {
        const bool branch_taken_0x2c5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5340u;
        // 0x2c5344: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5340) {
            ctx->pc = 0x2C5368u;
            goto label_2c5368;
        }
    }
    ctx->pc = 0x2C5348u;
label_2c5348:
    // 0x2c5348: 0x8ca229cc  lw          $v0, 0x29CC($a1)
    ctx->pc = 0x2c5348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10700)));
    // 0x2c534c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C534Cu;
    {
        const bool branch_taken_0x2c534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c534c) {
            ctx->pc = 0x2C535Cu;
            goto label_2c535c;
        }
    }
    ctx->pc = 0x2C5354u;
    // 0x2c5354: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5354u;
    {
        const bool branch_taken_0x2c5354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5354u;
        // 0x2c5358: 0x90420010  lbu         $v0, 0x10($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5354) {
            ctx->pc = 0x2C5360u;
            goto label_2c5360;
        }
    }
    ctx->pc = 0x2C535Cu;
label_2c535c:
    // 0x2c535c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c535cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5360:
    // 0x2c5360: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2c5360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5364: 0x0  nop
    ctx->pc = 0x2c5364u;
    // NOP
label_2c5368:
    // 0x2c5368: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c5368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c536c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2c536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c5370: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5370u;
    {
        const bool branch_taken_0x2c5370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5370) {
            ctx->pc = 0x2C5380u;
            goto label_2c5380;
        }
    }
    ctx->pc = 0x2C5378u;
    // 0x2c5378: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x2c5378u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x2c537c: 0x0  nop
    ctx->pc = 0x2c537cu;
    // NOP
label_2c5380:
    // 0x2c5380: 0x1100001d  beqz        $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C5380u;
    {
        const bool branch_taken_0x2c5380 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5380) {
            ctx->pc = 0x2C53F8u;
            goto label_2c53f8;
        }
    }
    ctx->pc = 0x2C5388u;
    // 0x2c5388: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c5388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c538c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C538Cu;
    {
        const bool branch_taken_0x2c538c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C538Cu;
        // 0x2c5390: 0x90c60003  lbu         $a2, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c538c) {
            ctx->pc = 0x2C53E0u;
            goto label_2c53e0;
        }
    }
    ctx->pc = 0x2C5394u;
    // 0x2c5394: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5394u;
    {
        const bool branch_taken_0x2c5394 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5394u;
        // 0x2c5398: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5394) {
            ctx->pc = 0x2C53D0u;
            goto label_2c53d0;
        }
    }
    ctx->pc = 0x2C539Cu;
    // 0x2c539c: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c539cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c53a0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c53a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c53a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c53a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c53ac: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c53acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c53b0: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c53b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c53b4: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c53b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c53b8: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c53b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c53bc: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c53bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c53c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c53c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c53c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C53C8u;
    {
        const bool branch_taken_0x2c53c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53C8u;
        // 0x2c53cc: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53c8) {
            ctx->pc = 0x2C53F0u;
            goto label_2c53f0;
        }
    }
    ctx->pc = 0x2C53D0u;
label_2c53d0:
    // 0x2c53d0: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C53D0u;
    SET_GPR_U32(ctx, 31, 0x2C53D8u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C53D0u, 0x2C53D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53D8u;
label_2c53d8:
    // 0x2c53d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C53D8u;
    {
        const bool branch_taken_0x2c53d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c53d8) {
            ctx->pc = 0x2C53E8u;
            goto label_2c53e8;
        }
    }
    ctx->pc = 0x2C53E0u;
label_2c53e0:
    // 0x2c53e0: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c53e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c53e4: 0x0  nop
    ctx->pc = 0x2c53e4u;
    // NOP
label_2c53e8:
    // 0x2c53e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c53e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53ec: 0x0  nop
    ctx->pc = 0x2c53ecu;
    // NOP
label_2c53f0:
    // 0x2c53f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C53F0u;
    {
        const bool branch_taken_0x2c53f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c53f0) {
            ctx->pc = 0x2C5400u;
            goto label_2c5400;
        }
    }
    ctx->pc = 0x2C53F8u;
label_2c53f8:
    // 0x2c53f8: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c53fc: 0x0  nop
    ctx->pc = 0x2c53fcu;
    // NOP
label_2c5400:
    // 0x2c5400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5404: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5404u;
        // 0x2c5408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C540Cu;
}
