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

// Function: sub_002C1490
// Address: 0x2c1490 - 0x2c1570
void sub_002C1490_0x2c1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1490_0x2c1490");
#endif

    switch (ctx->pc) {
        case 0x2c14b8u: goto label_2c14b8;
        case 0x2c152cu: goto label_2c152c;
        default: break;
    }

    ctx->pc = 0x2c1490u;

    // 0x2c1490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c1498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c149c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c14a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c14a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c14a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c14a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c14a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14ac: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x2c14acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c14b0: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C14B0u;
    SET_GPR_U32(ctx, 31, 0x2C14B8u);
    ctx->pc = 0x2C14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C14B0u;
    // 0x2c14b4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C14B0u, 0x2C14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C14B8u;
label_2c14b8:
    // 0x2c14b8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2c14b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c14bc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2c14bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c14c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c14c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c14c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c14c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c14c8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2c14c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2c14cc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C14CCu;
    {
        const bool branch_taken_0x2c14cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c14cc) {
            ctx->pc = 0x2C1550u;
            goto label_2c1550;
        }
    }
    ctx->pc = 0x2C14D4u;
    // 0x2c14d4: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c14d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c14d8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C14D8u;
    {
        const bool branch_taken_0x2c14d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14D8u;
        // 0x2c14dc: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14d8) {
            ctx->pc = 0x2C1538u;
            goto label_2c1538;
        }
    }
    ctx->pc = 0x2C14E0u;
    // 0x2c14e0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C14E0u;
    {
        const bool branch_taken_0x2c14e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14E0u;
        // 0x2c14e4: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14e0) {
            ctx->pc = 0x2C1520u;
            goto label_2c1520;
        }
    }
    ctx->pc = 0x2C14E8u;
    // 0x2c14e8: 0x92440037  lbu         $a0, 0x37($s2)
    ctx->pc = 0x2c14e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c14ec: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c14ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c14f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c14f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c14f8: 0xa244004e  sb          $a0, 0x4E($s2)
    ctx->pc = 0x2c14f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c14fc: 0xa2450037  sb          $a1, 0x37($s2)
    ctx->pc = 0x2c14fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1500: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c1500u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1504: 0xa243005f  sb          $v1, 0x5F($s2)
    ctx->pc = 0x2c1504u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1508: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c1508u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c150c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c150cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c1510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1514: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C1514u;
    {
        const bool branch_taken_0x2c1514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1514u;
        // 0x2c1518: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1514) {
            ctx->pc = 0x2C1548u;
            goto label_2c1548;
        }
    }
    ctx->pc = 0x2C151Cu;
    // 0x2c151c: 0x0  nop
    ctx->pc = 0x2c151cu;
    // NOP
label_2c1520:
    // 0x2c1520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1524: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1524u;
    SET_GPR_U32(ctx, 31, 0x2C152Cu);
    ctx->pc = 0x2C1528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1524u;
    // 0x2c1528: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1524u, 0x2C152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C152Cu;
label_2c152c:
    // 0x2c152c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C152Cu;
    {
        const bool branch_taken_0x2c152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c152c) {
            ctx->pc = 0x2C1540u;
            goto label_2c1540;
        }
    }
    ctx->pc = 0x2C1534u;
    // 0x2c1534: 0x0  nop
    ctx->pc = 0x2c1534u;
    // NOP
label_2c1538:
    // 0x2c1538: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c1538u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c153c: 0x0  nop
    ctx->pc = 0x2c153cu;
    // NOP
label_2c1540:
    // 0x2c1540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1544: 0x0  nop
    ctx->pc = 0x2c1544u;
    // NOP
label_2c1548:
    // 0x2c1548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1548u;
    {
        const bool branch_taken_0x2c1548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1548) {
            ctx->pc = 0x2C1558u;
            goto label_2c1558;
        }
    }
    ctx->pc = 0x2C1550u;
label_2c1550:
    // 0x2c1550: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2c1550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c1554: 0x0  nop
    ctx->pc = 0x2c1554u;
    // NOP
label_2c1558:
    // 0x2c1558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c155c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c155cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1568: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1568u;
        // 0x2c156c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1570u;
}
