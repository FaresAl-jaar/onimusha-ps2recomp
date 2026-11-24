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

// Function: sub_002E3870
// Address: 0x2e3870 - 0x2e3a38
void sub_002E3870_0x2e3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3870_0x2e3870");
#endif

    switch (ctx->pc) {
        case 0x2e38d0u: goto label_2e38d0;
        case 0x2e38f4u: goto label_2e38f4;
        case 0x2e3934u: goto label_2e3934;
        case 0x2e398cu: goto label_2e398c;
        case 0x2e39a8u: goto label_2e39a8;
        case 0x2e39c8u: goto label_2e39c8;
        case 0x2e39e8u: goto label_2e39e8;
        default: break;
    }

    ctx->pc = 0x2e3870u;

    // 0x2e3870: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e3874: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e3874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e3878: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e387c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e3880: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e3880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e3884: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e3884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e3888: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e3888u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e388c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e3890: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e3890u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3894: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3898: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e3898u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e389c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e38a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e38a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e38a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e38a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e38a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e38ac: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x2e38acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e38b0: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e38b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e38b4: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E38B4u;
    {
        const bool branch_taken_0x2e38b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38B4u;
        // 0x2e38b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38b4) {
            ctx->pc = 0x2E3A08u;
            goto label_2e3a08;
        }
    }
    ctx->pc = 0x2E38BCu;
    // 0x2e38bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e38bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e38c0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e38c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e38c4: 0x27b700b4  addiu       $s7, $sp, 0xB4
    ctx->pc = 0x2e38c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2e38c8: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x2e38c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2e38cc: 0x0  nop
    ctx->pc = 0x2e38ccu;
    // NOP
label_2e38d0:
    // 0x2e38d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2e38d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e38d4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2e38d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2e38d8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E38D8u;
    {
        const bool branch_taken_0x2e38d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38D8u;
        // 0x2e38dc: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38d8) {
            ctx->pc = 0x2E38E4u;
            goto label_2e38e4;
        }
    }
    ctx->pc = 0x2E38E0u;
    // 0x2e38e0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2e38e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e38e4:
    // 0x2e38e4: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2E38E4u;
    {
        const bool branch_taken_0x2e38e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38E4u;
        // 0x2e38e8: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38e4) {
            ctx->pc = 0x2E39E8u;
            goto label_2e39e8;
        }
    }
    ctx->pc = 0x2E38ECu;
    // 0x2e38ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E38ECu;
    {
        const bool branch_taken_0x2e38ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E38ECu;
        // 0x2e38f0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38ec) {
            ctx->pc = 0x2E3910u;
            goto label_2e3910;
        }
    }
    ctx->pc = 0x2E38F4u;
label_2e38f4:
    // 0x2e38f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e38f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e38f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e38fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e3900: 0x0  nop
    ctx->pc = 0x2e3900u;
    // NOP
    // 0x2e3904: 0x0  nop
    ctx->pc = 0x2e3904u;
    // NOP
    // 0x2e3908: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3908u;
    {
        const bool branch_taken_0x2e3908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3908) {
            ctx->pc = 0x2E38F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e38f4;
        }
    }
    ctx->pc = 0x2E3910u;
label_2e3910:
    // 0x2e3910: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2e3910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3914: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2e3914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e3918: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e3918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e391c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e391cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e3920: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2e3920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3924: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2e3924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2e3928: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2e3928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e392c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E392Cu;
    {
        const bool branch_taken_0x2e392c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E392Cu;
        // 0x2e3930: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e392c) {
            ctx->pc = 0x2E3950u;
            goto label_2e3950;
        }
    }
    ctx->pc = 0x2E3934u;
label_2e3934:
    // 0x2e3934: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e3934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e3938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e393c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e3940: 0x0  nop
    ctx->pc = 0x2e3940u;
    // NOP
    // 0x2e3944: 0x0  nop
    ctx->pc = 0x2e3944u;
    // NOP
    // 0x2e3948: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3948u;
    {
        const bool branch_taken_0x2e3948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3948) {
            ctx->pc = 0x2E3934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3934;
        }
    }
    ctx->pc = 0x2E3950u;
label_2e3950:
    // 0x2e3950: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2e3950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3954: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x2e3954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2e3958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e395c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2e395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e3960: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e3960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e3964: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2e3964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3968: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e3968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e396c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2e396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3970: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x2e3970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2e3974: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e3974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e3978: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2e3978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e397c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2e397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2e3980: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e3980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e3984: 0xc041442  jal         func_105108
    ctx->pc = 0x2E3984u;
    SET_GPR_U32(ctx, 31, 0x2E398Cu);
    ctx->pc = 0x2E3988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3984u;
    // 0x2e3988: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E3984u, 0x2E398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E398Cu;
label_2e398c:
    // 0x2e398c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2e398cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e3990: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e3990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3994: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2e3994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2e3998: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e3998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e399c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e399cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e39a0: 0xc041442  jal         func_105108
    ctx->pc = 0x2E39A0u;
    SET_GPR_U32(ctx, 31, 0x2E39A8u);
    ctx->pc = 0x2E39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39A0u;
    // 0x2e39a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E39A0u, 0x2E39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39A8u;
label_2e39a8:
    // 0x2e39a8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2e39a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e39ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e39acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39b0: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2e39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2e39b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e39b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e39bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e39c0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E39C0u;
    SET_GPR_U32(ctx, 31, 0x2E39C8u);
    ctx->pc = 0x2E39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39C0u;
    // 0x2e39c4: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E39C0u, 0x2E39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39C8u;
label_2e39c8:
    // 0x2e39c8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e39c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e39cc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e39ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e39d0: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2e39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2e39d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e39d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39d8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e39dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e39e0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E39E0u;
    SET_GPR_U32(ctx, 31, 0x2E39E8u);
    ctx->pc = 0x2E39E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E39E0u;
    // 0x2e39e4: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E39E0u, 0x2E39E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39E8u;
label_2e39e8:
    // 0x2e39e8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2e39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2e39ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e39ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e39f0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2e39f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e39f4: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x2e39f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e39f8: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2e39f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e39fc: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2E39FCu;
    {
        const bool branch_taken_0x2e39fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39FCu;
        // 0x2e3a00: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39fc) {
            ctx->pc = 0x2E38D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e38d0;
        }
    }
    ctx->pc = 0x2E3A04u;
    // 0x2e3a04: 0x0  nop
    ctx->pc = 0x2e3a04u;
    // NOP
label_2e3a08:
    // 0x2e3a08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e3a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e3a0c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e3a0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3a10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e3a10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3a14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e3a14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3a18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e3a18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3a1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e3a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3a20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3a24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3a30: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A30u;
        // 0x2e3a34: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3A38u;
}
