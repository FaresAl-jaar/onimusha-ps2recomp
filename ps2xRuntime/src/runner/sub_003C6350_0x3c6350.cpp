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

// Function: sub_003C6350
// Address: 0x3c6350 - 0x3c6490
void sub_003C6350_0x3c6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6350_0x3c6350");
#endif

    switch (ctx->pc) {
        case 0x3c6388u: goto label_3c6388;
        case 0x3c63a0u: goto label_3c63a0;
        case 0x3c63b8u: goto label_3c63b8;
        case 0x3c6444u: goto label_3c6444;
        case 0x3c647cu: goto label_3c647c;
        default: break;
    }

    ctx->pc = 0x3c6350u;

    // 0x3c6350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c6354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c6354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c6358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c6358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c635c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c6360: 0x90850509  lbu         $a1, 0x509($a0)
    ctx->pc = 0x3c6360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1289)));
    // 0x3c6364: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C6364u;
    {
        const bool branch_taken_0x3c6364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6364u;
        // 0x3c6368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6364) {
            ctx->pc = 0x3C6398u;
            goto label_3c6398;
        }
    }
    ctx->pc = 0x3C636Cu;
    // 0x3c636c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C636Cu;
    {
        const bool branch_taken_0x3c636c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c636c) {
            ctx->pc = 0x3C6380u;
            goto label_3c6380;
        }
    }
    ctx->pc = 0x3C6374u;
    // 0x3c6374: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3C6374u;
    {
        const bool branch_taken_0x3c6374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6374) {
            ctx->pc = 0x3C6480u;
            goto label_3c6480;
        }
    }
    ctx->pc = 0x3C637Cu;
    // 0x3c637c: 0x0  nop
    ctx->pc = 0x3c637cu;
    // NOP
label_3c6380:
    // 0x3c6380: 0xc0f1adc  jal         func_3C6B70
    ctx->pc = 0x3C6380u;
    SET_GPR_U32(ctx, 31, 0x3C6388u);
    ctx->pc = 0x3C6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6B70u, 0x3C6380u, 0x3C6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6388u;
label_3c6388:
    // 0x3c6388: 0x92020509  lbu         $v0, 0x509($s0)
    ctx->pc = 0x3c6388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1289)));
    // 0x3c638c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c6390: 0xa2020509  sb          $v0, 0x509($s0)
    ctx->pc = 0x3c6390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c6394: 0x0  nop
    ctx->pc = 0x3c6394u;
    // NOP
label_3c6398:
    // 0x3c6398: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x3C6398u;
    SET_GPR_U32(ctx, 31, 0x3C63A0u);
    ctx->pc = 0x3C639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6398u;
    // 0x3c639c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3C6398u, 0x3C63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63A0u;
label_3c63a0:
    // 0x3c63a0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3C63A0u;
    {
        const bool branch_taken_0x3c63a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c63a0) {
            ctx->pc = 0x3C6468u;
            goto label_3c6468;
        }
    }
    ctx->pc = 0x3C63A8u;
    // 0x3c63a8: 0x8e050500  lw          $a1, 0x500($s0)
    ctx->pc = 0x3c63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3c63ac: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c63acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c63b0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C63B0u;
    SET_GPR_U32(ctx, 31, 0x3C63B8u);
    ctx->pc = 0x3C63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63B0u;
    // 0x3c63b4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C63B0u, 0x3C63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63B8u;
label_3c63b8:
    // 0x3c63b8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3C63B8u;
    {
        const bool branch_taken_0x3c63b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c63b8) {
            ctx->pc = 0x3C6448u;
            goto label_3c6448;
        }
    }
    ctx->pc = 0x3C63C0u;
    // 0x3c63c0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3c63c4: 0x26050510  addiu       $a1, $s0, 0x510
    ctx->pc = 0x3c63c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1296));
    // 0x3c63c8: 0x92040504  lbu         $a0, 0x504($s0)
    ctx->pc = 0x3c63c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1284)));
    // 0x3c63cc: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3c63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3c63d0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3c63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3c63d4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x3c63d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c63d8: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x3c63d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3c63dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3c63e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c63e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c63e4: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3c63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c63e8: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x3c63e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x3c63ec: 0x78e60010  lq          $a2, 0x10($a3)
    ctx->pc = 0x3c63ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3c63f0: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x3c63f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x3c63f4: 0x78e60020  lq          $a2, 0x20($a3)
    ctx->pc = 0x3c63f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3c63f8: 0x7ca60020  sq          $a2, 0x20($a1)
    ctx->pc = 0x3c63f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 6));
    // 0x3c63fc: 0x78e60030  lq          $a2, 0x30($a3)
    ctx->pc = 0x3c63fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3c6400: 0x7ca60030  sq          $a2, 0x30($a1)
    ctx->pc = 0x3c6400u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 6));
    // 0x3c6404: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c6404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3c6408: 0x92050504  lbu         $a1, 0x504($s0)
    ctx->pc = 0x3c6408u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1284)));
    // 0x3c640c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3c640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3c6410: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3c6410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3c6414: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x3c6414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3c6418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c6418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3c641c: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x3c641cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3c6420: 0x7e030550  sq          $v1, 0x550($s0)
    ctx->pc = 0x3c6420u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 3));
    // 0x3c6424: 0xe600055c  swc1        $f0, 0x55C($s0)
    ctx->pc = 0x3c6424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1372), bits); }
    // 0x3c6428: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x3c6428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3c642c: 0x92030504  lbu         $v1, 0x504($s0)
    ctx->pc = 0x3c642cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1284)));
    // 0x3c6430: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c6430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c6434: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3c6434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3c6438: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c6438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c643c: 0xc0968b8  jal         func_25A2E0
    ctx->pc = 0x3C643Cu;
    SET_GPR_U32(ctx, 31, 0x3C6444u);
    ctx->pc = 0x3C6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C643Cu;
    // 0x3c6440: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2E0u, 0x3C643Cu, 0x3C6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6444u;
label_3c6444:
    // 0x3c6444: 0x0  nop
    ctx->pc = 0x3c6444u;
    // NOP
label_3c6448:
    // 0x3c6448: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c644c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6450: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3c6450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3c6454: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3c6454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3c6458: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x3c6458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3c645c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3c645cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c6460: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C6460u;
    {
        const bool branch_taken_0x3c6460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6460u;
        // 0x3c6464: 0x7c850000  sq          $a1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6460) {
            ctx->pc = 0x3C6480u;
            goto label_3c6480;
        }
    }
    ctx->pc = 0x3C6468u;
label_3c6468:
    // 0x3c6468: 0xa2000506  sb          $zero, 0x506($s0)
    ctx->pc = 0x3c6468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1286), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c646c: 0xa2000507  sb          $zero, 0x507($s0)
    ctx->pc = 0x3c646cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1287), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c6470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6474: 0xc0f1a38  jal         func_3C68E0
    ctx->pc = 0x3C6474u;
    SET_GPR_U32(ctx, 31, 0x3C647Cu);
    ctx->pc = 0x3C6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6474u;
    // 0x3c6478: 0xa2000509  sb          $zero, 0x509($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1289), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E0u, 0x3C6474u, 0x3C647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C647Cu;
label_3c647c:
    // 0x3c647c: 0x0  nop
    ctx->pc = 0x3c647cu;
    // NOP
label_3c6480:
    // 0x3c6480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c6480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6488: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6488u;
        // 0x3c648c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6490u;
}
