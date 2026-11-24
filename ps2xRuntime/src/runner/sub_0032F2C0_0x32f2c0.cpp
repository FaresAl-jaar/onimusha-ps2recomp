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

// Function: sub_0032F2C0
// Address: 0x32f2c0 - 0x32f414
void sub_0032F2C0_0x32f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F2C0_0x32f2c0");
#endif

    switch (ctx->pc) {
        case 0x32f320u: goto label_32f320;
        case 0x32f348u: goto label_32f348;
        case 0x32f388u: goto label_32f388;
        case 0x32f3ccu: goto label_32f3cc;
        default: break;
    }

    ctx->pc = 0x32f2c0u;

    // 0x32f2c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32f2c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x32f2c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32f2cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32f2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32f2d0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x32f2d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32f2d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x32f2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32f2e0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x32f2e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32f2e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32f2e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32f2f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x32f2f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2f4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x32f2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32f2fc: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x32f2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x32f300: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x32f300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32f304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f30c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32f30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f310: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x32f310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x32f314: 0x2508f250  addiu       $t0, $t0, -0xDB0
    ctx->pc = 0x32f314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963792));
    // 0x32f318: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x32F318u;
    SET_GPR_U32(ctx, 31, 0x32F320u);
    ctx->pc = 0x32F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F318u;
    // 0x32f31c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x32F318u, 0x32F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F320u;
label_32f320:
    // 0x32f320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32f320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f324: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x32F324u;
    {
        const bool branch_taken_0x32f324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F324u;
        // 0x32f328: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f324) {
            ctx->pc = 0x32F3E0u;
            goto label_32f3e0;
        }
    }
    ctx->pc = 0x32F32Cu;
    // 0x32f32c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x32f32cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f330: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x32f330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f334: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x32f334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f33c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x32f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32f340: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x32F340u;
    SET_GPR_U32(ctx, 31, 0x32F348u);
    ctx->pc = 0x32F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F340u;
    // 0x32f344: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x32F340u, 0x32F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F348u;
label_32f348:
    // 0x32f348: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x32f348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x32f34c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32f350: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32f354: 0x2442cd80  addiu       $v0, $v0, -0x3280
    ctx->pc = 0x32f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954368));
    // 0x32f358: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x32f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x32f35c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x32f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32f360: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x32f360u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f364: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x32f364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x32f368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f36c: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x32f36cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x32f370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f374: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x32f374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x32f378: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x32f378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x32f37c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x32f37cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f380: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x32F380u;
    SET_GPR_U32(ctx, 31, 0x32F388u);
    ctx->pc = 0x32F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F380u;
    // 0x32f384: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x32F380u, 0x32F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F388u;
label_32f388:
    // 0x32f388: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x32f388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x32f38c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32f390: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x32f390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x32f394: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x32f394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x32f398: 0xa2170568  sb          $s7, 0x568($s0)
    ctx->pc = 0x32f398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 23));
    // 0x32f39c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32f3a0: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x32f3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x32f3a4: 0x2442cd84  addiu       $v0, $v0, -0x327C
    ctx->pc = 0x32f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954372));
    // 0x32f3a8: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x32f3a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32f3ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f3b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x32f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x32f3b4: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x32f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x32f3b8: 0x78235c70  lq          $v1, 0x5C70($at)
    ctx->pc = 0x32f3b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C70u));
    // 0x32f3bc: 0x7e030550  sq          $v1, 0x550($s0)
    ctx->pc = 0x32f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 3));
    // 0x32f3c0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x32f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32f3c4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x32F3C4u;
    SET_GPR_U32(ctx, 31, 0x32F3CCu);
    ctx->pc = 0x32F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F3C4u;
    // 0x32f3c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x32F3C4u, 0x32F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F3CCu;
label_32f3cc:
    // 0x32f3cc: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x32f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x32f3d0: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x32f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x32f3d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F3D4u;
    {
        const bool branch_taken_0x32f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3D4u;
        // 0x32f3d8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3d4) {
            ctx->pc = 0x32F3E8u;
            goto label_32f3e8;
        }
    }
    ctx->pc = 0x32F3DCu;
    // 0x32f3dc: 0x0  nop
    ctx->pc = 0x32f3dcu;
    // NOP
label_32f3e0:
    // 0x32f3e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f3e4: 0x0  nop
    ctx->pc = 0x32f3e4u;
    // NOP
label_32f3e8:
    // 0x32f3e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x32f3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32f3ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32f3ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32f3f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32f3f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32f3f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32f3f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32f3f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32f3f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32f3fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32f3fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32f400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32f404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32f408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f40c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F40Cu;
        // 0x32f410: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F414u;
}
