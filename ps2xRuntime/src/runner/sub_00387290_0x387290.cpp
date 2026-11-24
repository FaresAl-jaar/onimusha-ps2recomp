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

// Function: sub_00387290
// Address: 0x387290 - 0x3873b8
void sub_00387290_0x387290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387290_0x387290");
#endif

    switch (ctx->pc) {
        case 0x3872d0u: goto label_3872d0;
        case 0x387394u: goto label_387394;
        default: break;
    }

    ctx->pc = 0x387290u;

    // 0x387290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x387294: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x387294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x387298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x387298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x38729c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x38729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3872a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3872a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3872a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3872a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3872a8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3872a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3872acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3872b0: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x3872b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3872b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3872b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3872b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3872bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3872c0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3872c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872c4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3872c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872c8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3872C8u;
    SET_GPR_U32(ctx, 31, 0x3872D0u);
    ctx->pc = 0x3872CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3872C8u;
    // 0x3872cc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3872C8u, 0x3872D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3872D0u;
label_3872d0:
    // 0x3872d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3872d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3872d4: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3872D4u;
    {
        const bool branch_taken_0x3872d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3872d4) {
            ctx->pc = 0x387398u;
            goto label_387398;
        }
    }
    ctx->pc = 0x3872DCu;
    // 0x3872dc: 0x26820f20  addiu       $v0, $s4, 0xF20
    ctx->pc = 0x3872dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3872));
    // 0x3872e0: 0x134a3c  dsll32      $t1, $s3, 8
    ctx->pc = 0x3872e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) << (32 + 8));
    // 0x3872e4: 0x234c0  sll         $a2, $v0, 19
    ctx->pc = 0x3872e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3872e8: 0x94a3e  dsrl32      $t1, $t1, 8
    ctx->pc = 0x3872e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 8));
    // 0x3872ec: 0x26420700  addiu       $v0, $s2, 0x700
    ctx->pc = 0x3872ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    // 0x3872f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3872f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3872f4: 0x26220700  addiu       $v0, $s1, 0x700
    ctx->pc = 0x3872f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x3872f8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3872f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3872fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3872fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x387300: 0xe62025  or          $a0, $a3, $a2
    ctx->pc = 0x387300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x387304: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x387304u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x387308: 0x26020f20  addiu       $v0, $s0, 0xF20
    ctx->pc = 0x387308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3872));
    // 0x38730c: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x38730cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x387310: 0x254c0  sll         $t2, $v0, 19
    ctx->pc = 0x387310u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x387314: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x387314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x387318: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x387318u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x38731c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x38731cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x387320: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x387320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x387324: 0x3443004c  ori         $v1, $v0, 0x4C
    ctx->pc = 0x387324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x387328: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x387328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x38732c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x38732cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x387330: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x387330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x387334: 0x10a1825  or          $v1, $t0, $t2
    ctx->pc = 0x387334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x387338: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x387338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x38733c: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x38733cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x387340: 0xaca90014  sw          $t1, 0x14($a1)
    ctx->pc = 0x387340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 9));
    // 0x387344: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x387344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x387348: 0xaca9002c  sw          $t1, 0x2C($a1)
    ctx->pc = 0x387348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 9));
    // 0x38734c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x38734cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x387350: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x387350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x387354: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x387354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x387358: 0xaca8001c  sw          $t0, 0x1C($a1)
    ctx->pc = 0x387358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 8));
    // 0x38735c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x38735cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x387360: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x387360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x387364: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x387364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x387368: 0xaca80024  sw          $t0, 0x24($a1)
    ctx->pc = 0x387368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
    // 0x38736c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x38736cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x387370: 0xaca70030  sw          $a3, 0x30($a1)
    ctx->pc = 0x387370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 7));
    // 0x387374: 0xaca80034  sw          $t0, 0x34($a1)
    ctx->pc = 0x387374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 8));
    // 0x387378: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x387378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x38737c: 0xaca8003c  sw          $t0, 0x3C($a1)
    ctx->pc = 0x38737cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 8));
    // 0x387380: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x387380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x387384: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x387384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x387388: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x387388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x38738c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x38738Cu;
    SET_GPR_U32(ctx, 31, 0x387394u);
    ctx->pc = 0x387390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38738Cu;
    // 0x387390: 0xa0a0000f  sb          $zero, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x38738Cu, 0x387394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387394u;
label_387394:
    // 0x387394: 0x0  nop
    ctx->pc = 0x387394u;
    // NOP
label_387398:
    // 0x387398: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x387398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38739c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38739cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3873a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3873a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3873a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3873a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3873a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3873a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3873ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3873acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3873b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3873B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3873B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873B0u;
        // 0x3873b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3873B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3873B8u;
}
