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

// Function: sub_00167820
// Address: 0x167820 - 0x167908
void sub_00167820_0x167820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167820_0x167820");
#endif

    switch (ctx->pc) {
        case 0x167858u: goto label_167858;
        default: break;
    }

    ctx->pc = 0x167820u;

    // 0x167820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x167824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x167828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16782c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167830: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x167830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167838: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x167838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16783c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167840: 0x68880  sll         $s1, $a2, 2
    ctx->pc = 0x167840u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x167844: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x167844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x167848: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x167848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x16784c: 0xac5000e0  sw          $s0, 0xE0($v0)
    ctx->pc = 0x16784cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 16));
    // 0x167850: 0xc059e44  jal         func_167910
    ctx->pc = 0x167850u;
    SET_GPR_U32(ctx, 31, 0x167858u);
    ctx->pc = 0x167854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167850u;
    // 0x167854: 0xac5200f8  sw          $s2, 0xF8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167910u, 0x167850u, 0x167858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167858u;
label_167858:
    // 0x167858: 0x12113c  dsll32      $v0, $s2, 4
    ctx->pc = 0x167858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 4));
    // 0x16785c: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x16785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x167860: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x167860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x167864: 0xacb000f0  sw          $s0, 0xF0($a1)
    ctx->pc = 0x167864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 16));
    // 0x167868: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x167868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16786c: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x16786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x167870: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x167870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x167874: 0xaca30108  sw          $v1, 0x108($a1)
    ctx->pc = 0x167874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 3));
    // 0x167878: 0xaca20100  sw          $v0, 0x100($a1)
    ctx->pc = 0x167878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 2));
    // 0x16787c: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x16787cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x167880: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x167884: 0x34430003  ori         $v1, $v0, 0x3
    ctx->pc = 0x167884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x167888: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16788c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x16788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x167890: 0x34430003  ori         $v1, $v0, 0x3
    ctx->pc = 0x167890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x167894: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x167894u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x167898: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x167898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
    // 0x16789c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1678a0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1678a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1678a4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1678a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1678a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1678a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1678ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1678acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1678b0: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1678b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1678b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1678b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1678b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1678b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1678bc: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x1678bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1678c0: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x1678c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x1678c4: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1678c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x1678c8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1678c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1678cc: 0x344203f8  ori         $v0, $v0, 0x3F8
    ctx->pc = 0x1678ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1016);
    // 0x1678d0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1678d4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1678d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1678d8: 0xaca600e8  sw          $a2, 0xE8($a1)
    ctx->pc = 0x1678d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 6));
    // 0x1678dc: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1678dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1678e0: 0xfe0300a0  sd          $v1, 0xA0($s0)
    ctx->pc = 0x1678e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 3));
    // 0x1678e4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1678e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1678e8: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1678e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1678ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1678ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1678f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1678f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1678f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1678f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1678f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1678f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1678fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1678fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167900: 0x3e00008  jr          $ra
    ctx->pc = 0x167900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167900u;
        // 0x167904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167908u;
}
