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

// Function: sub_001A37E0
// Address: 0x1a37e0 - 0x1a3f70
void sub_001A37E0_0x1a37e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A37E0_0x1a37e0");
#endif

    switch (ctx->pc) {
        case 0x1a3820u: goto label_1a3820;
        case 0x1a3844u: goto label_1a3844;
        case 0x1a3894u: goto label_1a3894;
        case 0x1a3910u: goto label_1a3910;
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f48u: goto label_1a3f48;
        default: break;
    }

    ctx->pc = 0x1a37e0u;

    // 0x1a37e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a37e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a37e4: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x1a37e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x1a37e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a37e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a37ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a37ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a37f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a37f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a37f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a37f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a37f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a37fc: 0x35531000  ori         $s3, $t2, 0x1000
    ctx->pc = 0x1a37fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4096);
    // 0x1a3800: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a3800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a3804: 0x35522000  ori         $s2, $t2, 0x2000
    ctx->pc = 0x1a3804u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8192);
    // 0x1a3808: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a380c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a380cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a3810: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a3810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3814: 0x8c9102a0  lw          $s1, 0x2A0($a0)
    ctx->pc = 0x1a3814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 672)));
    // 0x1a3818: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A3818u;
    {
        const bool branch_taken_0x1a3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3818u;
        // 0x1a381c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3818) {
            ctx->pc = 0x1A3850u;
            goto label_1a3850;
        }
    }
    ctx->pc = 0x1A3820u;
label_1a3820:
    // 0x1a3820: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a3820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3824: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1a3824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a3828: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1a3828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1a382c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a382cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a3830: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1a3834: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x1a3834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x1a3838: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x1a3838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a383c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1A383Cu;
    SET_GPR_U32(ctx, 31, 0x1A3844u);
    ctx->pc = 0x1A3840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A383Cu;
    // 0x1a3840: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1A383Cu, 0x1A3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3844u;
label_1a3844:
    // 0x1a3844: 0x104001c0  beqz        $v0, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x1A3844u;
    {
        const bool branch_taken_0x1a3844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3844) {
            ctx->pc = 0x1A3F48u;
            goto label_1a3f48;
        }
    }
    ctx->pc = 0x1A384Cu;
    // 0x1a384c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a384cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a3850:
    // 0x1a3850: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1a3850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a3854: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A3854u;
    {
        const bool branch_taken_0x1a3854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3854u;
        // 0x1a3858: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3854) {
            ctx->pc = 0x1A3820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3820;
        }
    }
    ctx->pc = 0x1A385Cu;
    // 0x1a385c: 0xc4206ce4  lwc1        $f0, 0x6CE4($at)
    ctx->pc = 0x1a385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3860: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a3864: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a3864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a3868: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1a3868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a386c: 0x114840  sll         $t1, $s1, 1
    ctx->pc = 0x1a386cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a3870: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1a3870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1a3874: 0xc69402c0  lwc1        $f20, 0x2C0($s4)
    ctx->pc = 0x1a3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3878: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x1a3878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1a387c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1a387cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1a3880: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1a3880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a3884: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a3884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a3888: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1a3888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1a388c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1A388Cu;
    SET_GPR_U32(ctx, 31, 0x1A3894u);
    ctx->pc = 0x1A3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A388Cu;
    // 0x1a3890: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1A388Cu, 0x1A3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3894u;
label_1a3894:
    // 0x1a3894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3898: 0x120001ab  beqz        $s0, . + 4 + (0x1AB << 2)
    ctx->pc = 0x1A3898u;
    {
        const bool branch_taken_0x1a3898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3898) {
            ctx->pc = 0x1A3F48u;
            goto label_1a3f48;
        }
    }
    ctx->pc = 0x1A38A0u;
    // 0x1a38a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a38a4: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1a38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a38a8: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x1a38a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1a38ac: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1a38acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1a38b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a38b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a38b4: 0x260a0018  addiu       $t2, $s0, 0x18
    ctx->pc = 0x1a38b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a38b8: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x1a38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x1a38bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a38bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38c0: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x1a38c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a38c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a38c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1a38c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a38cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a38ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a38d0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1a38d4: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1a38d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a38d8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1a38dc: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x1a38dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a38e0: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x1a38e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a38e4: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x1a38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x1a38e8: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x1a38e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x1a38ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a38ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a38f0: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1a38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1a38f4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x1a38f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1a38f8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1a38f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a38fc: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x1a38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x1a3900: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x1a3900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1a3904: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1a3904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a3908: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x1A3908u;
    {
        const bool branch_taken_0x1a3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3908u;
        // 0x1a390c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3908) {
            ctx->pc = 0x1A3E78u;
            goto label_1a3e78;
        }
    }
    ctx->pc = 0x1A3910u;
label_1a3910:
    // 0x1a3910: 0x15000071  bnez        $t0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1A3910u;
    {
        const bool branch_taken_0x1a3910 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3910u;
        // 0x1a3914: 0x82900  sll         $a1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3910) {
            ctx->pc = 0x1A3AD8u;
            goto label_1a3ad8;
        }
    }
    ctx->pc = 0x1A3918u;
    // 0x1a3918: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1a3918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a391c: 0xb33821  addu        $a3, $a1, $s3
    ctx->pc = 0x1a391cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1a3920: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1a3920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1a3924: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x1a3924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a3928: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x1a3928u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a392c: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1a392cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3930: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1a3930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1a3934: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1a3934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a3938: 0xed3823  subu        $a3, $a3, $t5
    ctx->pc = 0x1a3938u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1a393c: 0x44875000  mtc1        $a3, $f10
    ctx->pc = 0x1a393cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1a3940: 0x0  nop
    ctx->pc = 0x1a3940u;
    // NOP
    // 0x1a3944: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x1a3944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x1a3948: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1a3948u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a394c: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1a394cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3950: 0x935821  addu        $t3, $a0, $s3
    ctx->pc = 0x1a3950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1a3954: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x1a3954u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1a3958: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a3958u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a395c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a3960: 0x460a5342  mul.s       $f13, $f10, $f10
    ctx->pc = 0x1a3960u;
    ctx->f[13] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1a3964: 0xaf2823  subu        $a1, $a1, $t7
    ctx->pc = 0x1a3964u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1a3968: 0x85900  sll         $t3, $t0, 4
    ctx->pc = 0x1a3968u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a396c: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x1a396cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3970: 0x26b6021  addu        $t4, $s3, $t3
    ctx->pc = 0x1a3970u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1a3974: 0x85900  sll         $t3, $t0, 4
    ctx->pc = 0x1a3974u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3978: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x1a3978u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1a397c: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1a397cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x1a3980: 0x1736821  addu        $t5, $t3, $s3
    ctx->pc = 0x1a3980u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x1a3984: 0x85900  sll         $t3, $t0, 4
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3988: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1a3988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a398c: 0x1736021  addu        $t4, $t3, $s3
    ctx->pc = 0x1a398cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x1a3990: 0x46094b02  mul.s       $f12, $f9, $f9
    ctx->pc = 0x1a3990u;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x1a3994: 0x2675821  addu        $t3, $s3, $a3
    ctx->pc = 0x1a3994u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1a3998: 0xb33821  addu        $a3, $a1, $s3
    ctx->pc = 0x1a3998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1a399c: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1a399cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a39a0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1a39a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1a39a4: 0x460c6b00  add.s       $f12, $f13, $f12
    ctx->pc = 0x1a39a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x1a39a8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1a39a8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a39ac: 0x460c4303  div.s       $f12, $f8, $f12
    ctx->pc = 0x1a39acu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[8], ctx->f[12]); }
    // 0x1a39b0: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1a39b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1a39b4: 0xc48b0000  lwc1        $f11, 0x0($a0)
    ctx->pc = 0x1a39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1a39b8: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x1a39b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x1a39bc: 0x460c5b02  mul.s       $f12, $f11, $f12
    ctx->pc = 0x1a39bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x1a39c0: 0x460c3ac2  mul.s       $f11, $f7, $f12
    ctx->pc = 0x1a39c0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x1a39c4: 0x460b32c2  mul.s       $f11, $f6, $f11
    ctx->pc = 0x1a39c4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x1a39c8: 0x460b5282  mul.s       $f10, $f10, $f11
    ctx->pc = 0x1a39c8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x1a39cc: 0x460c32c2  mul.s       $f11, $f6, $f12
    ctx->pc = 0x1a39ccu;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x1a39d0: 0x460b4a42  mul.s       $f9, $f9, $f11
    ctx->pc = 0x1a39d0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x1a39d4: 0x46004ac6  mov.s       $f11, $f9
    ctx->pc = 0x1a39d4u;
    ctx->f[11] = FPU_MOV_S(ctx->f[9]);
    // 0x1a39d8: 0x46005ae4  .word       0x46005AE4                   # cvt.w.s     $f11, $f11 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a39d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[11]); std::memcpy(&ctx->f[11], &tmp, sizeof(tmp)); }
    // 0x1a39dc: 0x440f5800  mfc1        $t7, $f11
    ctx->pc = 0x1a39dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1a39e0: 0x46005306  mov.s       $f12, $f10
    ctx->pc = 0x1a39e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[10]);
    // 0x1a39e4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1a39e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1a39e8: 0x31ceffff  andi        $t6, $t6, 0xFFFF
    ctx->pc = 0x1a39e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x1a39ec: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x1a39ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1a39f0: 0x46006324  .word       0x46006324                   # cvt.w.s     $f12, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a39f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[12], &tmp, sizeof(tmp)); }
    // 0x1a39f4: 0x8dad0004  lw          $t5, 0x4($t5)
    ctx->pc = 0x1a39f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1a39f8: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x1a39f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x1a39fc: 0x46004a64  .word       0x46004A64                   # cvt.w.s     $f9, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a39fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[9], &tmp, sizeof(tmp)); }
    // 0x1a3a00: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x1a3a00u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1a3a04: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x1a3a04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1a3a08: 0xa54d0002  sh          $t5, 0x2($t2)
    ctx->pc = 0x1a3a08u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x1a3a0c: 0x8d8c0008  lw          $t4, 0x8($t4)
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1a3a10: 0x440d4800  mfc1        $t5, $f9
    ctx->pc = 0x1a3a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1a3a14: 0x460052a4  .word       0x460052A4                   # cvt.w.s     $f10, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3a14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[10], &tmp, sizeof(tmp)); }
    // 0x1a3a18: 0xad4c0004  sw          $t4, 0x4($t2)
    ctx->pc = 0x1a3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 12));
    // 0x1a3a1c: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a3a20: 0x440c5000  mfc1        $t4, $f10
    ctx->pc = 0x1a3a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x1a3a24: 0x16d5823  subu        $t3, $t3, $t5
    ctx->pc = 0x1a3a24u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1a3a28: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x1a3a28u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1a3a2c: 0xa54b0018  sh          $t3, 0x18($t2)
    ctx->pc = 0x1a3a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 11));
    // 0x1a3a30: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x1a3a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a3a34: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x1a3a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1a3a38: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1a3a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a3a3c: 0xa547001a  sh          $a3, 0x1A($t2)
    ctx->pc = 0x1a3a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 26), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a3a40: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1a3a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a3a44: 0xad45001c  sw          $a1, 0x1C($t2)
    ctx->pc = 0x1a3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 5));
    // 0x1a3a48: 0x93858790  lbu         $a1, -0x7870($gp)
    ctx->pc = 0x1a3a48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936464)));
    // 0x1a3a4c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a3a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a3a50: 0x10a60011  beq         $a1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A3A50u;
    {
        const bool branch_taken_0x1a3a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a3a50) {
            ctx->pc = 0x1A3A98u;
            goto label_1a3a98;
        }
    }
    ctx->pc = 0x1A3A58u;
    // 0x1a3a58: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3A58u;
    {
        const bool branch_taken_0x1a3a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a58) {
            ctx->pc = 0x1A3A68u;
            goto label_1a3a68;
        }
    }
    ctx->pc = 0x1A3A60u;
    // 0x1a3a60: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1A3A60u;
    {
        const bool branch_taken_0x1a3a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a60) {
            ctx->pc = 0x1A3E68u;
            goto label_1a3e68;
        }
    }
    ctx->pc = 0x1A3A68u;
label_1a3a68:
    // 0x1a3a68: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3a6c: 0x46092a42  mul.s       $f9, $f5, $f9
    ctx->pc = 0x1a3a6cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x1a3a70: 0xe5490010  swc1        $f9, 0x10($t2)
    ctx->pc = 0x1a3a70u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1a3a74: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x1a3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x1a3a78: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3a7c: 0xe549000c  swc1        $f9, 0xC($t2)
    ctx->pc = 0x1a3a7cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x1a3a80: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3a84: 0xe5490028  swc1        $f9, 0x28($t2)
    ctx->pc = 0x1a3a84u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
    // 0x1a3a88: 0xad40002c  sw          $zero, 0x2C($t2)
    ctx->pc = 0x1a3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 0));
    // 0x1a3a8c: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3a90: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x1A3A90u;
    {
        const bool branch_taken_0x1a3a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A90u;
        // 0x1a3a94: 0xe5490024  swc1        $f9, 0x24($t2) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a90) {
            ctx->pc = 0x1A3E68u;
            goto label_1a3e68;
        }
    }
    ctx->pc = 0x1A3A98u;
label_1a3a98:
    // 0x1a3a98: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3a9c: 0x46092242  mul.s       $f9, $f4, $f9
    ctx->pc = 0x1a3a9cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x1a3aa0: 0xe5490010  swc1        $f9, 0x10($t2)
    ctx->pc = 0x1a3aa0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1a3aa4: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3aa8: 0x46091a42  mul.s       $f9, $f3, $f9
    ctx->pc = 0x1a3aa8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x1a3aac: 0xe5490014  swc1        $f9, 0x14($t2)
    ctx->pc = 0x1a3aacu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x1a3ab0: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3ab4: 0xe549000c  swc1        $f9, 0xC($t2)
    ctx->pc = 0x1a3ab4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x1a3ab8: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3abc: 0x46092242  mul.s       $f9, $f4, $f9
    ctx->pc = 0x1a3abcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x1a3ac0: 0xe5490028  swc1        $f9, 0x28($t2)
    ctx->pc = 0x1a3ac0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
    // 0x1a3ac4: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3ac8: 0xe549002c  swc1        $f9, 0x2C($t2)
    ctx->pc = 0x1a3ac8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 44), bits); }
    // 0x1a3acc: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3ad0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x1A3AD0u;
    {
        const bool branch_taken_0x1a3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AD0u;
        // 0x1a3ad4: 0xe5490024  swc1        $f9, 0x24($t2) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ad0) {
            ctx->pc = 0x1A3E68u;
            goto label_1a3e68;
        }
    }
    ctx->pc = 0x1A3AD8u;
label_1a3ad8:
    // 0x1a3ad8: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1a3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3adc: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x1a3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1a3ae0: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1a3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3ae4: 0x8ca5fff0  lw          $a1, -0x10($a1)
    ctx->pc = 0x1a3ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1a3ae8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1a3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1a3aec: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x1a3aecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3af0: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3af4: 0xad2823  subu        $a1, $a1, $t5
    ctx->pc = 0x1a3af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1a3af8: 0x933821  addu        $a3, $a0, $s3
    ctx->pc = 0x1a3af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1a3afc: 0x8cecfff4  lw          $t4, -0xC($a3)
    ctx->pc = 0x1a3afcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967284)));
    // 0x1a3b00: 0x44855000  mtc1        $a1, $f10
    ctx->pc = 0x1a3b00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1a3b04: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1a3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3b08: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1a3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1a3b0c: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1a3b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3b10: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x1a3b10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a3b14: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x1a3b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x1a3b18: 0xb36821  addu        $t5, $a1, $s3
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1a3b1c: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3b20: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3b24: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1a3b28: 0x8cee0000  lw          $t6, 0x0($a3)
    ctx->pc = 0x1a3b28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a3b2c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a3b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3b30: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a3b34: 0x460a5342  mul.s       $f13, $f10, $f10
    ctx->pc = 0x1a3b34u;
    ctx->f[13] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1a3b38: 0x18b3823  subu        $a3, $t4, $t3
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1a3b3c: 0xb36021  addu        $t4, $a1, $s3
    ctx->pc = 0x1a3b3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1a3b40: 0x44874800  mtc1        $a3, $f9
    ctx->pc = 0x1a3b40u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3b44: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3b48: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1a3b48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1a3b4c: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1a3b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x1a3b50: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3b54: 0xb33821  addu        $a3, $a1, $s3
    ctx->pc = 0x1a3b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1a3b58: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1a3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a3b5c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1a3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1a3b60: 0x46094b02  mul.s       $f12, $f9, $f9
    ctx->pc = 0x1a3b60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x1a3b64: 0x460c6b00  add.s       $f12, $f13, $f12
    ctx->pc = 0x1a3b64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x1a3b68: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1a3b68u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a3b6c: 0x460c4303  div.s       $f12, $f8, $f12
    ctx->pc = 0x1a3b6cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[8], ctx->f[12]); }
    // 0x1a3b70: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1a3b70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1a3b74: 0xc48b0000  lwc1        $f11, 0x0($a0)
    ctx->pc = 0x1a3b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1a3b78: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x1a3b78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x1a3b7c: 0x460c5b02  mul.s       $f12, $f11, $f12
    ctx->pc = 0x1a3b7cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x1a3b80: 0x460c3ac2  mul.s       $f11, $f7, $f12
    ctx->pc = 0x1a3b80u;
    ctx->f[11] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x1a3b84: 0x460b32c2  mul.s       $f11, $f6, $f11
    ctx->pc = 0x1a3b84u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x1a3b88: 0x460b5282  mul.s       $f10, $f10, $f11
    ctx->pc = 0x1a3b88u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x1a3b8c: 0x460c32c2  mul.s       $f11, $f6, $f12
    ctx->pc = 0x1a3b8cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x1a3b90: 0x460b4a42  mul.s       $f9, $f9, $f11
    ctx->pc = 0x1a3b90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x1a3b94: 0x46004ac6  mov.s       $f11, $f9
    ctx->pc = 0x1a3b94u;
    ctx->f[11] = FPU_MOV_S(ctx->f[9]);
    // 0x1a3b98: 0x46005ae4  .word       0x46005AE4                   # cvt.w.s     $f11, $f11 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3b98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[11]); std::memcpy(&ctx->f[11], &tmp, sizeof(tmp)); }
    // 0x1a3b9c: 0x46005306  mov.s       $f12, $f10
    ctx->pc = 0x1a3b9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[10]);
    // 0x1a3ba0: 0x440f5800  mfc1        $t7, $f11
    ctx->pc = 0x1a3ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1a3ba4: 0x46006324  .word       0x46006324                   # cvt.w.s     $f12, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3ba4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[12], &tmp, sizeof(tmp)); }
    // 0x1a3ba8: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1a3ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1a3bac: 0x31ceffff  andi        $t6, $t6, 0xFFFF
    ctx->pc = 0x1a3bacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x1a3bb0: 0xa54e0018  sh          $t6, 0x18($t2)
    ctx->pc = 0x1a3bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 14));
    // 0x1a3bb4: 0x8dad0004  lw          $t5, 0x4($t5)
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1a3bb8: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x1a3bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x1a3bbc: 0x46004a64  .word       0x46004A64                   # cvt.w.s     $f9, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3bbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[9], &tmp, sizeof(tmp)); }
    // 0x1a3bc0: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x1a3bc0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1a3bc4: 0x31adffff  andi        $t5, $t5, 0xFFFF
    ctx->pc = 0x1a3bc4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1a3bc8: 0xa54d001a  sh          $t5, 0x1A($t2)
    ctx->pc = 0x1a3bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 26), (uint16_t)GPR_U32(ctx, 13));
    // 0x1a3bcc: 0x8d8c0008  lw          $t4, 0x8($t4)
    ctx->pc = 0x1a3bccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1a3bd0: 0x440d4800  mfc1        $t5, $f9
    ctx->pc = 0x1a3bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1a3bd4: 0x460052a4  .word       0x460052A4                   # cvt.w.s     $f10, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3bd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[10], &tmp, sizeof(tmp)); }
    // 0x1a3bd8: 0xad4c001c  sw          $t4, 0x1C($t2)
    ctx->pc = 0x1a3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 12));
    // 0x1a3bdc: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x1a3bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a3be0: 0x440c5000  mfc1        $t4, $f10
    ctx->pc = 0x1a3be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x1a3be4: 0x16d5823  subu        $t3, $t3, $t5
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1a3be8: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x1a3be8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1a3bec: 0xa54b0000  sh          $t3, 0x0($t2)
    ctx->pc = 0x1a3becu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x1a3bf0: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x1a3bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a3bf4: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x1a3bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1a3bf8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1a3bf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a3bfc: 0xa5470002  sh          $a3, 0x2($t2)
    ctx->pc = 0x1a3bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a3c00: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1a3c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a3c04: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x1a3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x1a3c08: 0x93858790  lbu         $a1, -0x7870($gp)
    ctx->pc = 0x1a3c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936464)));
    // 0x1a3c0c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a3c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a3c10: 0x10a6004d  beq         $a1, $a2, . + 4 + (0x4D << 2)
    ctx->pc = 0x1A3C10u;
    {
        const bool branch_taken_0x1a3c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a3c10) {
            ctx->pc = 0x1A3D48u;
            goto label_1a3d48;
        }
    }
    ctx->pc = 0x1A3C18u;
    // 0x1a3c18: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3C18u;
    {
        const bool branch_taken_0x1a3c18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c18) {
            ctx->pc = 0x1A3C28u;
            goto label_1a3c28;
        }
    }
    ctx->pc = 0x1A3C20u;
    // 0x1a3c20: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1A3C20u;
    {
        const bool branch_taken_0x1a3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c20) {
            ctx->pc = 0x1A3E68u;
            goto label_1a3e68;
        }
    }
    ctx->pc = 0x1A3C28u;
label_1a3c28:
    // 0x1a3c28: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3c2c: 0x46092a42  mul.s       $f9, $f5, $f9
    ctx->pc = 0x1a3c2cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x1a3c30: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3C30u;
    {
        const bool branch_taken_0x1a3c30 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1A3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C30u;
        // 0x1a3c34: 0xe5490010  swc1        $f9, 0x10($t2) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c30) {
            ctx->pc = 0x1A3C44u;
            goto label_1a3c44;
        }
    }
    ctx->pc = 0x1A3C38u;
    // 0x1a3c38: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x1a3c38u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3C3Cu;
    {
        const bool branch_taken_0x1a3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0x46804aa0  cvt.s.w     $f10, $f9 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c3c) {
            ctx->pc = 0x1A3C60u;
            goto label_1a3c60;
        }
    }
    ctx->pc = 0x1A3C44u;
label_1a3c44:
    // 0x1a3c44: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x1a3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x1a3c48: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x1a3c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1a3c4c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a3c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a3c50: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x1a3c50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3c54: 0x0  nop
    ctx->pc = 0x1a3c54u;
    // NOP
    // 0x1a3c58: 0x46804aa0  cvt.s.w     $f10, $f9
    ctx->pc = 0x1a3c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x1a3c5c: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x1a3c5cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_1a3c60:
    // 0x1a3c60: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3C60u;
    {
        const bool branch_taken_0x1a3c60 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1A3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C60u;
        // 0x1a3c64: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c60) {
            ctx->pc = 0x1A3C70u;
            goto label_1a3c70;
        }
    }
    ctx->pc = 0x1A3C68u;
    // 0x1a3c68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3C68u;
    {
        const bool branch_taken_0x1a3c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C68u;
        // 0x1a3c6c: 0x46801260  cvt.s.w     $f9, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c68) {
            ctx->pc = 0x1A3C84u;
            goto label_1a3c84;
        }
    }
    ctx->pc = 0x1A3C70u;
label_1a3c70:
    // 0x1a3c70: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a3c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a3c74: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x1a3c74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3c78: 0x0  nop
    ctx->pc = 0x1a3c78u;
    // NOP
    // 0x1a3c7c: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1a3c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x1a3c80: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x1a3c80u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
label_1a3c84:
    // 0x1a3c84: 0x0  nop
    ctx->pc = 0x1a3c84u;
    // NOP
    // 0x1a3c88: 0x0  nop
    ctx->pc = 0x1a3c88u;
    // NOP
    // 0x1a3c8c: 0x46095283  div.s       $f10, $f10, $f9
    ctx->pc = 0x1a3c8cu;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[10], ctx->f[9]); }
    // 0x1a3c90: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3c94: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a3c98: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x1a3c98u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x1a3c9c: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x1a3c9cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1a3ca0: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3ca4: 0x460a0280  add.s       $f10, $f0, $f10
    ctx->pc = 0x1a3ca4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1a3ca8: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x1a3ca8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x1a3cac: 0xe5490014  swc1        $f9, 0x14($t2)
    ctx->pc = 0x1a3cacu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x1a3cb0: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3cb4: 0xe549000c  swc1        $f9, 0xC($t2)
    ctx->pc = 0x1a3cb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x1a3cb8: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3cbc: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3CBCu;
    {
        const bool branch_taken_0x1a3cbc = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1A3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CBCu;
        // 0x1a3cc0: 0xe5490028  swc1        $f9, 0x28($t2) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cbc) {
            ctx->pc = 0x1A3CD0u;
            goto label_1a3cd0;
        }
    }
    ctx->pc = 0x1A3CC4u;
    // 0x1a3cc4: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x1a3cc4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3cc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3CC8u;
    {
        const bool branch_taken_0x1a3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0x46804aa0  cvt.s.w     $f10, $f9 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cc8) {
            ctx->pc = 0x1A3CECu;
            goto label_1a3cec;
        }
    }
    ctx->pc = 0x1A3CD0u;
label_1a3cd0:
    // 0x1a3cd0: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x1a3cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x1a3cd4: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x1a3cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1a3cd8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a3cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a3cdc: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x1a3cdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3ce0: 0x0  nop
    ctx->pc = 0x1a3ce0u;
    // NOP
    // 0x1a3ce4: 0x46804aa0  cvt.s.w     $f10, $f9
    ctx->pc = 0x1a3ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x1a3ce8: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x1a3ce8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_1a3cec:
    // 0x1a3cec: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3CECu;
    {
        const bool branch_taken_0x1a3cec = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1A3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CECu;
        // 0x1a3cf0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cec) {
            ctx->pc = 0x1A3CFCu;
            goto label_1a3cfc;
        }
    }
    ctx->pc = 0x1A3CF4u;
    // 0x1a3cf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3CF4u;
    {
        const bool branch_taken_0x1a3cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF4u;
        // 0x1a3cf8: 0x46801260  cvt.s.w     $f9, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cf4) {
            ctx->pc = 0x1A3D10u;
            goto label_1a3d10;
        }
    }
    ctx->pc = 0x1A3CFCu;
label_1a3cfc:
    // 0x1a3cfc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a3cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a3d00: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x1a3d00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3d04: 0x0  nop
    ctx->pc = 0x1a3d04u;
    // NOP
    // 0x1a3d08: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1a3d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x1a3d0c: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x1a3d0cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
label_1a3d10:
    // 0x1a3d10: 0x0  nop
    ctx->pc = 0x1a3d10u;
    // NOP
    // 0x1a3d14: 0x0  nop
    ctx->pc = 0x1a3d14u;
    // NOP
    // 0x1a3d18: 0x46095283  div.s       $f10, $f10, $f9
    ctx->pc = 0x1a3d18u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[10], ctx->f[9]); }
    // 0x1a3d1c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3d20: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a3d24: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x1a3d24u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x1a3d28: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x1a3d28u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1a3d2c: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3d30: 0x460a0280  add.s       $f10, $f0, $f10
    ctx->pc = 0x1a3d30u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1a3d34: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x1a3d34u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x1a3d38: 0xe549002c  swc1        $f9, 0x2C($t2)
    ctx->pc = 0x1a3d38u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 44), bits); }
    // 0x1a3d3c: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3d40: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1A3D40u;
    {
        const bool branch_taken_0x1a3d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D40u;
        // 0x1a3d44: 0xe5490024  swc1        $f9, 0x24($t2) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d40) {
            ctx->pc = 0x1A3E68u;
            goto label_1a3e68;
        }
    }
    ctx->pc = 0x1A3D48u;
label_1a3d48:
    // 0x1a3d48: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3D48u;
    {
        const bool branch_taken_0x1a3d48 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1A3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D48u;
        // 0x1a3d4c: 0x82842  srl         $a1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d48) {
            ctx->pc = 0x1A3D5Cu;
            goto label_1a3d5c;
        }
    }
    ctx->pc = 0x1A3D50u;
    // 0x1a3d50: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x1a3d50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3d54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3D54u;
    {
        const bool branch_taken_0x1a3d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D54u;
        // 0x1a3d58: 0x46804aa0  cvt.s.w     $f10, $f9 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d54) {
            ctx->pc = 0x1A3D74u;
            goto label_1a3d74;
        }
    }
    ctx->pc = 0x1A3D5Cu;
label_1a3d5c:
    // 0x1a3d5c: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x1a3d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1a3d60: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a3d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a3d64: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x1a3d64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3d68: 0x0  nop
    ctx->pc = 0x1a3d68u;
    // NOP
    // 0x1a3d6c: 0x46804aa0  cvt.s.w     $f10, $f9
    ctx->pc = 0x1a3d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x1a3d70: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x1a3d70u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_1a3d74:
    // 0x1a3d74: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3D74u;
    {
        const bool branch_taken_0x1a3d74 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D74u;
        // 0x1a3d78: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d74) {
            ctx->pc = 0x1A3D84u;
            goto label_1a3d84;
        }
    }
    ctx->pc = 0x1A3D7Cu;
    // 0x1a3d7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3D7Cu;
    {
        const bool branch_taken_0x1a3d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D7Cu;
        // 0x1a3d80: 0x46801260  cvt.s.w     $f9, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d7c) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D84u;
label_1a3d84:
    // 0x1a3d84: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a3d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a3d88: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x1a3d88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3d8c: 0x0  nop
    ctx->pc = 0x1a3d8cu;
    // NOP
    // 0x1a3d90: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1a3d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x1a3d94: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x1a3d94u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
label_1a3d98:
    // 0x1a3d98: 0x0  nop
    ctx->pc = 0x1a3d98u;
    // NOP
    // 0x1a3d9c: 0x0  nop
    ctx->pc = 0x1a3d9cu;
    // NOP
    // 0x1a3da0: 0x46095283  div.s       $f10, $f10, $f9
    ctx->pc = 0x1a3da0u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[10], ctx->f[9]); }
    // 0x1a3da4: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3da8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a3dac: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x1a3dacu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x1a3db0: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x1a3db0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1a3db4: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3db8: 0x460a0280  add.s       $f10, $f0, $f10
    ctx->pc = 0x1a3db8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1a3dbc: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x1a3dbcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x1a3dc0: 0xe5490010  swc1        $f9, 0x10($t2)
    ctx->pc = 0x1a3dc0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1a3dc4: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3dc8: 0x46091a42  mul.s       $f9, $f3, $f9
    ctx->pc = 0x1a3dc8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x1a3dcc: 0xe5490014  swc1        $f9, 0x14($t2)
    ctx->pc = 0x1a3dccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x1a3dd0: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3dd4: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3DD4u;
    {
        const bool branch_taken_0x1a3dd4 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1A3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DD4u;
        // 0x1a3dd8: 0xe549000c  swc1        $f9, 0xC($t2) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3dd4) {
            ctx->pc = 0x1A3DE8u;
            goto label_1a3de8;
        }
    }
    ctx->pc = 0x1A3DDCu;
    // 0x1a3ddc: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x1a3ddcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3de0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3DE0u;
    {
        const bool branch_taken_0x1a3de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DE0u;
        // 0x1a3de4: 0x46804aa0  cvt.s.w     $f10, $f9 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3de0) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DE8u;
label_1a3de8:
    // 0x1a3de8: 0x82842  srl         $a1, $t0, 1
    ctx->pc = 0x1a3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x1a3dec: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x1a3decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1a3df0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a3df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a3df4: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x1a3df4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3df8: 0x0  nop
    ctx->pc = 0x1a3df8u;
    // NOP
    // 0x1a3dfc: 0x46804aa0  cvt.s.w     $f10, $f9
    ctx->pc = 0x1a3dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x1a3e00: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x1a3e00u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_1a3e04:
    // 0x1a3e04: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3E04u;
    {
        const bool branch_taken_0x1a3e04 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1A3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E04u;
        // 0x1a3e08: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e04) {
            ctx->pc = 0x1A3E14u;
            goto label_1a3e14;
        }
    }
    ctx->pc = 0x1A3E0Cu;
    // 0x1a3e0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3E0Cu;
    {
        const bool branch_taken_0x1a3e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E0Cu;
        // 0x1a3e10: 0x46801260  cvt.s.w     $f9, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e0c) {
            ctx->pc = 0x1A3E28u;
            goto label_1a3e28;
        }
    }
    ctx->pc = 0x1A3E14u;
label_1a3e14:
    // 0x1a3e14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a3e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a3e18: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x1a3e18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1a3e1c: 0x0  nop
    ctx->pc = 0x1a3e1cu;
    // NOP
    // 0x1a3e20: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1a3e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x1a3e24: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x1a3e24u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
label_1a3e28:
    // 0x1a3e28: 0x0  nop
    ctx->pc = 0x1a3e28u;
    // NOP
    // 0x1a3e2c: 0x0  nop
    ctx->pc = 0x1a3e2cu;
    // NOP
    // 0x1a3e30: 0x46095283  div.s       $f10, $f10, $f9
    ctx->pc = 0x1a3e30u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[10], ctx->f[9]); }
    // 0x1a3e34: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a3e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3e38: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a3e3c: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x1a3e3cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x1a3e40: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x1a3e40u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1a3e44: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3e48: 0x460a0280  add.s       $f10, $f0, $f10
    ctx->pc = 0x1a3e48u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1a3e4c: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x1a3e4cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x1a3e50: 0xe5490028  swc1        $f9, 0x28($t2)
    ctx->pc = 0x1a3e50u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 40), bits); }
    // 0x1a3e54: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3e58: 0xe549002c  swc1        $f9, 0x2C($t2)
    ctx->pc = 0x1a3e58u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 44), bits); }
    // 0x1a3e5c: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x1a3e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a3e60: 0xe5490024  swc1        $f9, 0x24($t2)
    ctx->pc = 0x1a3e60u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 36), bits); }
    // 0x1a3e64: 0x0  nop
    ctx->pc = 0x1a3e64u;
    // NOP
label_1a3e68:
    // 0x1a3e68: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1a3e68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1a3e6c: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x1a3e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x1a3e70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a3e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a3e74: 0x0  nop
    ctx->pc = 0x1a3e74u;
    // NOP
label_1a3e78:
    // 0x1a3e78: 0x111202b  sltu        $a0, $t0, $s1
    ctx->pc = 0x1a3e78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a3e7c: 0x1480fea4  bnez        $a0, . + 4 + (-0x15C << 2)
    ctx->pc = 0x1A3E7Cu;
    {
        const bool branch_taken_0x1a3e7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e7c) {
            ctx->pc = 0x1A3910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3910;
        }
    }
    ctx->pc = 0x1A3E84u;
    // 0x1a3e84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3e88: 0x92500  sll         $a0, $t1, 20
    ctx->pc = 0x1a3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
    // 0x1a3e8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a3e90: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1a3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1a3e94: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x1a3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x1a3e98: 0x34430054  ori         $v1, $v0, 0x54
    ctx->pc = 0x1a3e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x1a3e9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a3e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a3ea0: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x1a3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x1a3ea4: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a3ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a3ea8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1a3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1a3eac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a3eb0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a3eb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a3eb8: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1a3eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a3ebc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1a3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1a3ec0: 0x344600c0  ori         $a2, $v0, 0xC0
    ctx->pc = 0x1a3ec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1a3ec4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1a3ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a3ec8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a3ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a3ecc: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x1a3eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3ed0: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x1a3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1a3ed4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a3ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a3ed8: 0x93828788  lbu         $v0, -0x7878($gp)
    ctx->pc = 0x1a3ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1a3edc: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1a3edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3ee0: 0x9382878c  lbu         $v0, -0x7874($gp)
    ctx->pc = 0x1a3ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936460)));
    // 0x1a3ee4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x1a3ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3ee8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1a3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a3eec: 0x28983  sra         $s1, $v0, 6
    ctx->pc = 0x1a3eecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1a3ef0: 0xc068dd8  jal         func_1A3760
    ctx->pc = 0x1A3EF0u;
    SET_GPR_U32(ctx, 31, 0x1A3EF8u);
    ctx->pc = 0x1A3EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EF0u;
    // 0x1a3ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3760u, 0x1A3EF0u, 0x1A3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EF8u;
label_1a3ef8:
    // 0x1a3ef8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a3efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f00: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1a3f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1a3f04: 0xc068dd8  jal         func_1A3760
    ctx->pc = 0x1A3F04u;
    SET_GPR_U32(ctx, 31, 0x1A3F0Cu);
    ctx->pc = 0x1A3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F04u;
    // 0x1a3f08: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3760u, 0x1A3F04u, 0x1A3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F0Cu;
label_1a3f0c:
    // 0x1a3f0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1a3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1a3f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f14: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1a3f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1a3f18: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1A3F18u;
    SET_GPR_U32(ctx, 31, 0x1A3F20u);
    ctx->pc = 0x1A3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F18u;
    // 0x1a3f1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1A3F18u, 0x1A3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F20u;
label_1a3f20:
    // 0x1a3f20: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1a3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1a3f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f28: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1a3f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1a3f2c: 0xc068dd8  jal         func_1A3760
    ctx->pc = 0x1A3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F34u);
    ctx->pc = 0x1A3F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F2Cu;
    // 0x1a3f30: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3760u, 0x1A3F2Cu, 0x1A3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F34u;
label_1a3f34:
    // 0x1a3f34: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a3f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f3c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1a3f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1a3f40: 0xc068dd8  jal         func_1A3760
    ctx->pc = 0x1A3F40u;
    SET_GPR_U32(ctx, 31, 0x1A3F48u);
    ctx->pc = 0x1A3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F40u;
    // 0x1a3f44: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3760u, 0x1A3F40u, 0x1A3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F48u;
label_1a3f48:
    // 0x1a3f48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a3f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3f4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a3f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3f50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a3f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3f54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a3f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3f58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3f5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a3f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3f60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a3f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F68u;
        // 0x1a3f6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3F70u;
}
