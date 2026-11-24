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

// Function: sub_0031F2B0
// Address: 0x31f2b0 - 0x31f558
void sub_0031F2B0_0x31f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F2B0_0x31f2b0");
#endif

    switch (ctx->pc) {
        case 0x31f318u: goto label_31f318;
        case 0x31f340u: goto label_31f340;
        case 0x31f380u: goto label_31f380;
        case 0x31f3e8u: goto label_31f3e8;
        case 0x31f3f8u: goto label_31f3f8;
        case 0x31f404u: goto label_31f404;
        case 0x31f434u: goto label_31f434;
        case 0x31f43cu: goto label_31f43c;
        case 0x31f4c8u: goto label_31f4c8;
        case 0x31f4f0u: goto label_31f4f0;
        case 0x31f4fcu: goto label_31f4fc;
        case 0x31f518u: goto label_31f518;
        default: break;
    }

    ctx->pc = 0x31f2b0u;

    // 0x31f2b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x31f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x31f2b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31f2b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31f2bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31f2c0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x31f2c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31f2c8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x31f2c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31f2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31f2d0: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x31f2d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31f2d8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x31f2d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31f2e0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31f2e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31f2e8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x31f2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31f2f0: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x31f2f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31f2f8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x31f2f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31f2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31f300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31f304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f30c: 0x240705a0  addiu       $a3, $zero, 0x5A0
    ctx->pc = 0x31f30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    // 0x31f310: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x31F310u;
    SET_GPR_U32(ctx, 31, 0x31F318u);
    ctx->pc = 0x31F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F310u;
    // 0x31f314: 0x2508f240  addiu       $t0, $t0, -0xDC0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x31F310u, 0x31F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F318u;
label_31f318:
    // 0x31f318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f31c: 0x12200080  beqz        $s1, . + 4 + (0x80 << 2)
    ctx->pc = 0x31F31Cu;
    {
        const bool branch_taken_0x31f31c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F31Cu;
        // 0x31f320: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f31c) {
            ctx->pc = 0x31F520u;
            goto label_31f520;
        }
    }
    ctx->pc = 0x31F324u;
    // 0x31f324: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x31f324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f32c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x31f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x31f330: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x31f330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31f334: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x31f334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f338: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x31F338u;
    SET_GPR_U32(ctx, 31, 0x31F340u);
    ctx->pc = 0x31F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F338u;
    // 0x31f33c: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x31F338u, 0x31F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F340u;
label_31f340:
    // 0x31f340: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x31f340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x31f344: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31f344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31f348: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x31f348u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f34c: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x31f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
    // 0x31f350: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31f354: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x31f354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x31f358: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x31f358u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f35c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x31f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x31f360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f364: 0xa6260526  sh          $a2, 0x526($s1)
    ctx->pc = 0x31f364u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x31f368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f36c: 0xa6250528  sh          $a1, 0x528($s1)
    ctx->pc = 0x31f36cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x31f370: 0xa623052a  sh          $v1, 0x52A($s1)
    ctx->pc = 0x31f370u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x31f374: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x31f374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f378: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x31F378u;
    SET_GPR_U32(ctx, 31, 0x31F380u);
    ctx->pc = 0x31F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F378u;
    // 0x31f37c: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x31F378u, 0x31F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F380u;
label_31f380:
    // 0x31f380: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x31f380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
    // 0x31f384: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31f384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31f388: 0xae200584  sw          $zero, 0x584($s1)
    ctx->pc = 0x31f388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
    // 0x31f38c: 0x2442ca88  addiu       $v0, $v0, -0x3578
    ctx->pc = 0x31f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953608));
    // 0x31f390: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31f390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31f394: 0xae200588  sw          $zero, 0x588($s1)
    ctx->pc = 0x31f394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 0));
    // 0x31f398: 0xae23058c  sw          $v1, 0x58C($s1)
    ctx->pc = 0x31f398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 3));
    // 0x31f39c: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x31f39cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31f3a0: 0xa23e0590  sb          $fp, 0x590($s1)
    ctx->pc = 0x31f3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1424), (uint8_t)GPR_U32(ctx, 30));
    // 0x31f3a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31f3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31f3a8: 0xa2360591  sb          $s6, 0x591($s1)
    ctx->pc = 0x31f3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1425), (uint8_t)GPR_U32(ctx, 22));
    // 0x31f3ac: 0x78225c70  lq          $v0, 0x5C70($at)
    ctx->pc = 0x31f3acu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C70u));
    // 0x31f3b0: 0x7e220570  sq          $v0, 0x570($s1)
    ctx->pc = 0x31f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1392), GPR_VEC(ctx, 2));
    // 0x31f3b4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x31f3b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31f3b8: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x31f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x31f3bc: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x31f3bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31f3c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31F3C0u;
    {
        const bool branch_taken_0x31f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f3c0) {
            ctx->pc = 0x31F3F0u;
            goto label_31f3f0;
        }
    }
    ctx->pc = 0x31F3C8u;
    // 0x31f3c8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F3C8u;
    {
        const bool branch_taken_0x31f3c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3C8u;
        // 0x31f3cc: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f3c8) {
            ctx->pc = 0x31F3F0u;
            goto label_31f3f0;
        }
    }
    ctx->pc = 0x31F3D0u;
    // 0x31f3d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31f3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f3d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x31f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x31f3dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31f3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3e0: 0xc096f00  jal         func_25BC00
    ctx->pc = 0x31F3E0u;
    SET_GPR_U32(ctx, 31, 0x31F3E8u);
    ctx->pc = 0x31F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F3E0u;
    // 0x31f3e4: 0x26870020  addiu       $a3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC00u, 0x31F3E0u, 0x31F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3E8u;
label_31f3e8:
    // 0x31f3e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31F3E8u;
    {
        const bool branch_taken_0x31f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f3e8) {
            ctx->pc = 0x31F408u;
            goto label_31f408;
        }
    }
    ctx->pc = 0x31F3F0u;
label_31f3f0:
    // 0x31f3f0: 0xc096e5c  jal         func_25B970
    ctx->pc = 0x31F3F0u;
    SET_GPR_U32(ctx, 31, 0x31F3F8u);
    ctx->pc = 0x31F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F3F0u;
    // 0x31f3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B970u, 0x31F3F0u, 0x31F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3F8u;
label_31f3f8:
    // 0x31f3f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x31f3f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x31f3fc: 0xc096e0c  jal         func_25B830
    ctx->pc = 0x31F3FCu;
    SET_GPR_U32(ctx, 31, 0x31F404u);
    ctx->pc = 0x31F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F3FCu;
    // 0x31f400: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B830u, 0x31F3FCu, 0x31F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F404u;
label_31f404:
    // 0x31f404: 0x0  nop
    ctx->pc = 0x31f404u;
    // NOP
label_31f408:
    // 0x31f408: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x31f408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x31f40c: 0x2484ca84  addiu       $a0, $a0, -0x357C
    ctx->pc = 0x31f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953604));
    // 0x31f410: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x31f410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31f414: 0x909021  addu        $s2, $a0, $s0
    ctx->pc = 0x31f414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x31f418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f41c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31F41Cu;
    {
        const bool branch_taken_0x31f41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F41Cu;
        // 0x31f420: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f41c) {
            ctx->pc = 0x31F480u;
            goto label_31f480;
        }
    }
    ctx->pc = 0x31F424u;
    // 0x31f424: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x31F424u;
    {
        const bool branch_taken_0x31f424 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F424u;
        // 0x31f428: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f424) {
            ctx->pc = 0x31F480u;
            goto label_31f480;
        }
    }
    ctx->pc = 0x31F42Cu;
    // 0x31f42c: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x31F42Cu;
    SET_GPR_U32(ctx, 31, 0x31F434u);
    ctx->pc = 0x31F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F42Cu;
    // 0x31f430: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x31F42Cu, 0x31F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F434u;
label_31f434:
    // 0x31f434: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x31F434u;
    SET_GPR_U32(ctx, 31, 0x31F43Cu);
    ctx->pc = 0x31F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F434u;
    // 0x31f438: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x31F434u, 0x31F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F43Cu;
label_31f43c:
    // 0x31f43c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x31f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f440: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31f444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31f444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f448: 0x0  nop
    ctx->pc = 0x31f448u;
    // NOP
    // 0x31f44c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31f44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31f450: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31f450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f454: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31F454u;
    {
        const bool branch_taken_0x31f454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f454) {
            ctx->pc = 0x31F460u;
            goto label_31f460;
        }
    }
    ctx->pc = 0x31F45Cu;
    // 0x31f45c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x31f45cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_31f460:
    // 0x31f460: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31f464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31f464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f468: 0x0  nop
    ctx->pc = 0x31f468u;
    // NOP
    // 0x31f46c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x31f46cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x31f470: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31f470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f474: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31F474u;
    {
        const bool branch_taken_0x31f474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f474) {
            ctx->pc = 0x31F480u;
            goto label_31f480;
        }
    }
    ctx->pc = 0x31F47Cu;
    // 0x31f47c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x31f47cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_31f480:
    // 0x31f480: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x31f480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31f484: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x31f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x31f488: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x31f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x31f48c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x31f48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31f490: 0x7e220560  sq          $v0, 0x560($s1)
    ctx->pc = 0x31f490u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 2));
    // 0x31f494: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x31f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f498: 0xc6220560  lwc1        $f2, 0x560($s1)
    ctx->pc = 0x31f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f49c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x31f49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f4a0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x31f4a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x31f4a4: 0xe6210560  swc1        $f1, 0x560($s1)
    ctx->pc = 0x31f4a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1376), bits); }
    // 0x31f4a8: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x31f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f4ac: 0xe6210564  swc1        $f1, 0x564($s1)
    ctx->pc = 0x31f4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1380), bits); }
    // 0x31f4b0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x31f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f4b4: 0xc6220568  lwc1        $f2, 0x568($s1)
    ctx->pc = 0x31f4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f4b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f4bc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31f4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f4c0: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x31F4C0u;
    SET_GPR_U32(ctx, 31, 0x31F4C8u);
    ctx->pc = 0x31F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4C0u;
    // 0x31f4c4: 0xe6200568  swc1        $f0, 0x568($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1384), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x31F4C0u, 0x31F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4C8u;
label_31f4c8:
    // 0x31f4c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F4C8u;
    {
        const bool branch_taken_0x31f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f4c8) {
            ctx->pc = 0x31F4D8u;
            goto label_31f4d8;
        }
    }
    ctx->pc = 0x31F4D0u;
    // 0x31f4d0: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x31f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f4d4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x31f4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_31f4d8:
    // 0x31f4d8: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x31f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x31f4dc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x31f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f4e0: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x31f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x31f4e4: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x31f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x31f4e8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x31F4E8u;
    SET_GPR_U32(ctx, 31, 0x31F4F0u);
    ctx->pc = 0x31F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4E8u;
    // 0x31f4ec: 0xe6200564  swc1        $f0, 0x564($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1380), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x31F4E8u, 0x31F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4F0u;
label_31f4f0:
    // 0x31f4f0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x31f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x31f4f4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x31F4F4u;
    SET_GPR_U32(ctx, 31, 0x31F4FCu);
    ctx->pc = 0x31F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4F4u;
    // 0x31f4f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x31F4F4u, 0x31F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4FCu;
label_31f4fc:
    // 0x31f4fc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31f500: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x31f500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x31f504: 0x2442ca8c  addiu       $v0, $v0, -0x3574
    ctx->pc = 0x31f504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953612));
    // 0x31f508: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31f50c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x31f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31f510: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x31F510u;
    SET_GPR_U32(ctx, 31, 0x31F518u);
    ctx->pc = 0x31F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F510u;
    // 0x31f514: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x31F510u, 0x31F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F518u;
label_31f518:
    // 0x31f518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31F518u;
    {
        const bool branch_taken_0x31f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F518u;
        // 0x31f51c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f518) {
            ctx->pc = 0x31F528u;
            goto label_31f528;
        }
    }
    ctx->pc = 0x31F520u;
label_31f520:
    // 0x31f520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f524: 0x0  nop
    ctx->pc = 0x31f524u;
    // NOP
label_31f528:
    // 0x31f528: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31f528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f52c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31f52cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f530: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31f530u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f534: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31f534u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31f538: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31f538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31f53c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31f53cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f540: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31f540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31f544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f550: 0x3e00008  jr          $ra
    ctx->pc = 0x31F550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F550u;
        // 0x31f554: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F558u;
}
