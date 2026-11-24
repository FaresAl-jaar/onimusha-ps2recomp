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

// Function: sub_00336740
// Address: 0x336740 - 0x336868
void sub_00336740_0x336740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336740_0x336740");
#endif

    switch (ctx->pc) {
        case 0x33678cu: goto label_33678c;
        case 0x3367a0u: goto label_3367a0;
        default: break;
    }

    ctx->pc = 0x336740u;

    // 0x336740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x336740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x336744: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x336744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x336748: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x336748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33674c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x33674cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x336750: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x336750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x336754: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x336754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x336758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x336758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33675c: 0x244215bd  addiu       $v0, $v0, 0x15BD
    ctx->pc = 0x33675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5565));
    // 0x336760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336764: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x336764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x336768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33676c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33676cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336774: 0x8023172e  lb          $v1, 0x172E($at)
    ctx->pc = 0x336774u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x92172Eu));
    // 0x336778: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x336778u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33677c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x336780: 0x90540000  lbu         $s4, 0x0($v0)
    ctx->pc = 0x336780u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336784: 0xc0f35c8  jal         func_3CD720
    ctx->pc = 0x336784u;
    SET_GPR_U32(ctx, 31, 0x33678Cu);
    ctx->pc = 0x336788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336784u;
    // 0x336788: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD720u, 0x336784u, 0x33678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33678Cu;
label_33678c:
    // 0x33678c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x33678cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336790: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x336790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336794: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x336794u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336798: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x336798u;
    SET_GPR_U32(ctx, 31, 0x3367A0u);
    ctx->pc = 0x33679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336798u;
    // 0x33679c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x336798u, 0x3367A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367A0u;
label_3367a0:
    // 0x3367a0: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x3367a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3367a4: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x3367a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x3367a8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x3367a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x3367ac: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3367acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3367b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3367b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3367b4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3367B4u;
    {
        const bool branch_taken_0x3367b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3367b4) {
            ctx->pc = 0x3367E0u;
            goto label_3367e0;
        }
    }
    ctx->pc = 0x3367BCu;
    // 0x3367bc: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x3367bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3367c0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3367c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3367c4: 0x64040003  daddiu      $a0, $zero, 0x3
    ctx->pc = 0x3367c4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3367c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3367c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3367cc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3367ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3367d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3367d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3367d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3367D4u;
    {
        const bool branch_taken_0x3367d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367D4u;
        // 0x3367d8: 0xa2430008  sb          $v1, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367d4) {
            ctx->pc = 0x336848u;
            goto label_336848;
        }
    }
    ctx->pc = 0x3367DCu;
    // 0x3367dc: 0x0  nop
    ctx->pc = 0x3367dcu;
    // NOP
label_3367e0:
    // 0x3367e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3367e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3367e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3367e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3367e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3367E8u;
    {
        const bool branch_taken_0x3367e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3367e8) {
            ctx->pc = 0x336810u;
            goto label_336810;
        }
    }
    ctx->pc = 0x3367F0u;
    // 0x3367f0: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x3367f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3367f4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3367f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3367f8: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x3367f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3367fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3367fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336800: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336804: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336808: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x336808u;
    {
        const bool branch_taken_0x336808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336808u;
        // 0x33680c: 0xa2430008  sb          $v1, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336808) {
            ctx->pc = 0x336848u;
            goto label_336848;
        }
    }
    ctx->pc = 0x336810u;
label_336810:
    // 0x336810: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x336810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x336814: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x336814u;
    {
        const bool branch_taken_0x336814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x336814) {
            ctx->pc = 0x336840u;
            goto label_336840;
        }
    }
    ctx->pc = 0x33681Cu;
    // 0x33681c: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x33681cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x336820: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336824: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x336824u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x336828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33682c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x33682cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336830: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336834u;
    {
        const bool branch_taken_0x336834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336834u;
        // 0x336838: 0xa2430008  sb          $v1, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336834) {
            ctx->pc = 0x336848u;
            goto label_336848;
        }
    }
    ctx->pc = 0x33683Cu;
    // 0x33683c: 0x0  nop
    ctx->pc = 0x33683cu;
    // NOP
label_336840:
    // 0x336840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336844: 0x0  nop
    ctx->pc = 0x336844u;
    // NOP
label_336848:
    // 0x336848: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x336848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33684c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33684cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33685c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33685cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336860: 0x3e00008  jr          $ra
    ctx->pc = 0x336860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336860u;
        // 0x336864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336868u;
}
