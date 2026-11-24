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

// Function: sub_002C5410
// Address: 0x2c5410 - 0x2c5554
void sub_002C5410_0x2c5410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5410_0x2c5410");
#endif

    switch (ctx->pc) {
        case 0x2c5520u: goto label_2c5520;
        default: break;
    }

    ctx->pc = 0x2c5410u;

    // 0x2c5410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c5414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c5414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c541c: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2c541cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c5420: 0x30683fff  andi        $t0, $v1, 0x3FFF
    ctx->pc = 0x2c5420u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x2c5424: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x2c5424u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x2c5428: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C5428u;
    {
        const bool branch_taken_0x2c5428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5428u;
        // 0x2c542c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5428) {
            ctx->pc = 0x2C54B0u;
            goto label_2c54b0;
        }
    }
    ctx->pc = 0x2C5430u;
    // 0x2c5430: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5434: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C5434u;
    {
        const bool branch_taken_0x2c5434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5434u;
        // 0x2c5438: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5434) {
            ctx->pc = 0x2C5498u;
            goto label_2c5498;
        }
    }
    ctx->pc = 0x2C543Cu;
    // 0x2c543c: 0x1067000e  beq         $v1, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2C543Cu;
    {
        const bool branch_taken_0x2c543c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2c543c) {
            ctx->pc = 0x2C5478u;
            goto label_2c5478;
        }
    }
    ctx->pc = 0x2C5444u;
    // 0x2c5444: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5444u;
    {
        const bool branch_taken_0x2c5444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5444) {
            ctx->pc = 0x2C5458u;
            goto label_2c5458;
        }
    }
    ctx->pc = 0x2C544Cu;
    // 0x2c544c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C544Cu;
    {
        const bool branch_taken_0x2c544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c544c) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C5454u;
    // 0x2c5454: 0x0  nop
    ctx->pc = 0x2c5454u;
    // NOP
label_2c5458:
    // 0x2c5458: 0x94a329de  lhu         $v1, 0x29DE($a1)
    ctx->pc = 0x2c5458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10718)));
    // 0x2c545c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2c545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2c5460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c5460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c5464: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C5464u;
    {
        const bool branch_taken_0x2c5464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5464) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C546Cu;
    // 0x2c546c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C546Cu;
    {
        const bool branch_taken_0x2c546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C546Cu;
        // 0x2c5470: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c546c) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C5474u;
    // 0x2c5474: 0x0  nop
    ctx->pc = 0x2c5474u;
    // NOP
label_2c5478:
    // 0x2c5478: 0x94a329de  lhu         $v1, 0x29DE($a1)
    ctx->pc = 0x2c5478u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10718)));
    // 0x2c547c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2c547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2c5480: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c5480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c5484: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C5484u;
    {
        const bool branch_taken_0x2c5484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5484) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C548Cu;
    // 0x2c548c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C548Cu;
    {
        const bool branch_taken_0x2c548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C548Cu;
        // 0x2c5490: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c548c) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C5494u;
    // 0x2c5494: 0x0  nop
    ctx->pc = 0x2c5494u;
    // NOP
label_2c5498:
    // 0x2c5498: 0x94a229de  lhu         $v0, 0x29DE($a1)
    ctx->pc = 0x2c5498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10718)));
    // 0x2c549c: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x2c549cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2c54a0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C54A0u;
    {
        const bool branch_taken_0x2c54a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c54a0) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C54A8u;
    // 0x2c54a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C54A8u;
    {
        const bool branch_taken_0x2c54a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54A8u;
        // 0x2c54ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54a8) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C54B0u;
label_2c54b0:
    // 0x2c54b0: 0x94a229de  lhu         $v0, 0x29DE($a1)
    ctx->pc = 0x2c54b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10718)));
    // 0x2c54b4: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x2c54b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2c54b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C54B8u;
    {
        const bool branch_taken_0x2c54b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c54b8) {
            ctx->pc = 0x2C54C8u;
            goto label_2c54c8;
        }
    }
    ctx->pc = 0x2C54C0u;
    // 0x2c54c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c54c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c54c4: 0x0  nop
    ctx->pc = 0x2c54c4u;
    // NOP
label_2c54c8:
    // 0x2c54c8: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C54C8u;
    {
        const bool branch_taken_0x2c54c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c54c8) {
            ctx->pc = 0x2C5540u;
            goto label_2c5540;
        }
    }
    ctx->pc = 0x2C54D0u;
    // 0x2c54d0: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c54d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c54d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C54D4u;
    {
        const bool branch_taken_0x2c54d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54D4u;
        // 0x2c54d8: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54d4) {
            ctx->pc = 0x2C5528u;
            goto label_2c5528;
        }
    }
    ctx->pc = 0x2C54DCu;
    // 0x2c54dc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C54DCu;
    {
        const bool branch_taken_0x2c54dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54DCu;
        // 0x2c54e0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54dc) {
            ctx->pc = 0x2C5518u;
            goto label_2c5518;
        }
    }
    ctx->pc = 0x2C54E4u;
    // 0x2c54e4: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c54e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c54e8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c54e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c54ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c54f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c54f4: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c54f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c54f8: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c54f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c54fc: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c54fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5500: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c5500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5504: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c5504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c5508: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c550c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5510: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5510u;
    {
        const bool branch_taken_0x2c5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5510u;
        // 0x2c5514: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5510) {
            ctx->pc = 0x2C5538u;
            goto label_2c5538;
        }
    }
    ctx->pc = 0x2C5518u;
label_2c5518:
    // 0x2c5518: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C5518u;
    SET_GPR_U32(ctx, 31, 0x2C5520u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C5518u, 0x2C5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5520u;
label_2c5520:
    // 0x2c5520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5520u;
    {
        const bool branch_taken_0x2c5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5520) {
            ctx->pc = 0x2C5530u;
            goto label_2c5530;
        }
    }
    ctx->pc = 0x2C5528u;
label_2c5528:
    // 0x2c5528: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c5528u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c552c: 0x0  nop
    ctx->pc = 0x2c552cu;
    // NOP
label_2c5530:
    // 0x2c5530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5534: 0x0  nop
    ctx->pc = 0x2c5534u;
    // NOP
label_2c5538:
    // 0x2c5538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5538u;
    {
        const bool branch_taken_0x2c5538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5538) {
            ctx->pc = 0x2C5548u;
            goto label_2c5548;
        }
    }
    ctx->pc = 0x2C5540u;
label_2c5540:
    // 0x2c5540: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c5544: 0x0  nop
    ctx->pc = 0x2c5544u;
    // NOP
label_2c5548:
    // 0x2c5548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c554c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C554Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C554Cu;
        // 0x2c5550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C554Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5554u;
}
