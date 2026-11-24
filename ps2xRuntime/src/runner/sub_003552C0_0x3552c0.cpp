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

// Function: sub_003552C0
// Address: 0x3552c0 - 0x35540c
void sub_003552C0_0x3552c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003552C0_0x3552c0");
#endif

    switch (ctx->pc) {
        case 0x355320u: goto label_355320;
        case 0x355348u: goto label_355348;
        case 0x355388u: goto label_355388;
        case 0x3553b4u: goto label_3553b4;
        case 0x3553d0u: goto label_3553d0;
        default: break;
    }

    ctx->pc = 0x3552c0u;

    // 0x3552c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3552c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3552c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3552c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3552c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3552c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3552cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3552ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3552d0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3552d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3552d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3552d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3552d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3552dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3552e0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3552e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3552e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3552e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3552e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3552ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3552f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3552f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552f4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3552f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3552f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3552fc: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x3552fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x355300: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x355300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x355304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x355308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35530c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35530cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355310: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x355310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x355314: 0x25085250  addiu       $t0, $t0, 0x5250
    ctx->pc = 0x355314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21072));
    // 0x355318: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x355318u;
    SET_GPR_U32(ctx, 31, 0x355320u);
    ctx->pc = 0x35531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355318u;
    // 0x35531c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x355318u, 0x355320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355320u;
label_355320:
    // 0x355320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355324: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x355324u;
    {
        const bool branch_taken_0x355324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355324u;
        // 0x355328: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355324) {
            ctx->pc = 0x3553D8u;
            goto label_3553d8;
        }
    }
    ctx->pc = 0x35532Cu;
    // 0x35532c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x35532cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355330: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x355330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355334: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x355334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35533c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355340: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x355340u;
    SET_GPR_U32(ctx, 31, 0x355348u);
    ctx->pc = 0x355344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355340u;
    // 0x355344: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x355340u, 0x355348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355348u;
label_355348:
    // 0x355348: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x355348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35534c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x35534cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x355350: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x355350u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x355354: 0x2442f918  addiu       $v0, $v0, -0x6E8
    ctx->pc = 0x355354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965528));
    // 0x355358: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x355358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35535c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x35535cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x355360: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x355360u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355364: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x355364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x355368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35536c: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x35536cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x355370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355374: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x355374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x355378: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x355378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x35537c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x35537cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x355380: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x355380u;
    SET_GPR_U32(ctx, 31, 0x355388u);
    ctx->pc = 0x355384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355380u;
    // 0x355384: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x355380u, 0x355388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355388u;
label_355388:
    // 0x355388: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x355388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x35538c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x355390: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x355390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x355394: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x355394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x355398: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x355398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x35539c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35539cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3553a0: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x3553a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x3553a4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3553a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3553a8: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x3553a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x3553ac: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3553ACu;
    SET_GPR_U32(ctx, 31, 0x3553B4u);
    ctx->pc = 0x3553B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3553ACu;
    // 0x3553b0: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3553ACu, 0x3553B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3553B4u;
label_3553b4:
    // 0x3553b4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3553b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3553b8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3553b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3553bc: 0x2442f91c  addiu       $v0, $v0, -0x6E4
    ctx->pc = 0x3553bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965532));
    // 0x3553c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3553c4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3553c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3553c8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3553C8u;
    SET_GPR_U32(ctx, 31, 0x3553D0u);
    ctx->pc = 0x3553CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3553C8u;
    // 0x3553cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3553C8u, 0x3553D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3553D0u;
label_3553d0:
    // 0x3553d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3553D0u;
    {
        const bool branch_taken_0x3553d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3553D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553D0u;
        // 0x3553d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3553d0) {
            ctx->pc = 0x3553E0u;
            goto label_3553e0;
        }
    }
    ctx->pc = 0x3553D8u;
label_3553d8:
    // 0x3553d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3553d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3553dc: 0x0  nop
    ctx->pc = 0x3553dcu;
    // NOP
label_3553e0:
    // 0x3553e0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3553e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3553e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3553e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3553e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3553e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3553ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3553ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3553f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3553f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3553f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3553f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3553f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3553f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3553fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3553fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355404: 0x3e00008  jr          $ra
    ctx->pc = 0x355404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355404u;
        // 0x355408: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35540Cu;
}
