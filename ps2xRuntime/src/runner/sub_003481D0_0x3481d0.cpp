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

// Function: sub_003481D0
// Address: 0x3481d0 - 0x348318
void sub_003481D0_0x3481d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003481D0_0x3481d0");
#endif

    switch (ctx->pc) {
        case 0x348238u: goto label_348238;
        case 0x348248u: goto label_348248;
        case 0x348250u: goto label_348250;
        case 0x348274u: goto label_348274;
        case 0x3482c8u: goto label_3482c8;
        case 0x3482d8u: goto label_3482d8;
        case 0x348300u: goto label_348300;
        default: break;
    }

    ctx->pc = 0x3481d0u;

    // 0x3481d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3481d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3481d4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3481d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3481d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3481d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3481dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3481dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3481e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3481e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3481e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3481e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3481e8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3481e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3481ec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3481ECu;
    {
        const bool branch_taken_0x3481ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3481F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481ECu;
        // 0x3481f0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481ec) {
            ctx->pc = 0x348208u;
            goto label_348208;
        }
    }
    ctx->pc = 0x3481F4u;
    // 0x3481f4: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x3481f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3481f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3481f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3481fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3481fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348200: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x348200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x348204: 0x0  nop
    ctx->pc = 0x348204u;
    // NOP
label_348208:
    // 0x348208: 0xde420500  ld          $v0, 0x500($s2)
    ctx->pc = 0x348208u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x34820c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x348210: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x348210u;
    {
        const bool branch_taken_0x348210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348210) {
            ctx->pc = 0x3482F8u;
            goto label_3482f8;
        }
    }
    ctx->pc = 0x348218u;
    // 0x348218: 0x8e4208cc  lw          $v0, 0x8CC($s2)
    ctx->pc = 0x348218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2252)));
    // 0x34821c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x34821Cu;
    {
        const bool branch_taken_0x34821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34821Cu;
        // 0x348220: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34821c) {
            ctx->pc = 0x3482F8u;
            goto label_3482f8;
        }
    }
    ctx->pc = 0x348224u;
    // 0x348224: 0x8c31f680  lw          $s1, -0x980($at)
    ctx->pc = 0x348224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964864)));
    // 0x348228: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x348228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34822c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x34822Cu;
    {
        const bool branch_taken_0x34822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34822Cu;
        // 0x348230: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34822c) {
            ctx->pc = 0x3482F8u;
            goto label_3482f8;
        }
    }
    ctx->pc = 0x348234u;
    // 0x348234: 0x0  nop
    ctx->pc = 0x348234u;
    // NOP
label_348238:
    // 0x348238: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x348238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34823c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x34823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x348240: 0xc0414d0  jal         func_105340
    ctx->pc = 0x348240u;
    SET_GPR_U32(ctx, 31, 0x348248u);
    ctx->pc = 0x348244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348240u;
    // 0x348244: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x348240u, 0x348248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348248u;
label_348248:
    // 0x348248: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x348248u;
    SET_GPR_U32(ctx, 31, 0x348250u);
    ctx->pc = 0x34824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348248u;
    // 0x34824c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x348248u, 0x348250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348250u;
label_348250:
    // 0x348250: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x348250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x348254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x348254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348258: 0x0  nop
    ctx->pc = 0x348258u;
    // NOP
    // 0x34825c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34825cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348260: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x348260u;
    {
        const bool branch_taken_0x348260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348260) {
            ctx->pc = 0x3482E8u;
            goto label_3482e8;
        }
    }
    ctx->pc = 0x348268u;
    // 0x348268: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x348268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34826c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x34826Cu;
    SET_GPR_U32(ctx, 31, 0x348274u);
    ctx->pc = 0x348270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34826Cu;
    // 0x348270: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x34826Cu, 0x348274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348274u;
label_348274:
    // 0x348274: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x348274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x348278: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x348278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x34827c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34827cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x348280: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x348280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x348284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x348284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348288: 0x0  nop
    ctx->pc = 0x348288u;
    // NOP
    // 0x34828c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34828cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x348290: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x348290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x348294: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x348294u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x348298: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x348298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34829c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34829cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3482a0: 0x0  nop
    ctx->pc = 0x3482a0u;
    // NOP
    // 0x3482a4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3482a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3482a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3482a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3482ac: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3482acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3482b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3482b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3482b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3482b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3482b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3482b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3482bc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3482bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3482c0: 0xc096a00  jal         func_25A800
    ctx->pc = 0x3482C0u;
    SET_GPR_U32(ctx, 31, 0x3482C8u);
    ctx->pc = 0x3482C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482C0u;
    // 0x3482c4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A800u, 0x3482C0u, 0x3482C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482C8u;
label_3482c8:
    // 0x3482c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3482C8u;
    {
        const bool branch_taken_0x3482c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3482CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482C8u;
        // 0x3482cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482c8) {
            ctx->pc = 0x3482E8u;
            goto label_3482e8;
        }
    }
    ctx->pc = 0x3482D0u;
    // 0x3482d0: 0xc0b2c48  jal         func_2CB120
    ctx->pc = 0x3482D0u;
    SET_GPR_U32(ctx, 31, 0x3482D8u);
    ctx->pc = 0x3482D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482D0u;
    // 0x3482d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB120u, 0x3482D0u, 0x3482D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482D8u;
label_3482d8:
    // 0x3482d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3482d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3482dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3482DCu;
    {
        const bool branch_taken_0x3482dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3482E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482DCu;
        // 0x3482e0: 0xfe430500  sd          $v1, 0x500($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482dc) {
            ctx->pc = 0x348300u;
            goto label_348300;
        }
    }
    ctx->pc = 0x3482E4u;
    // 0x3482e4: 0x0  nop
    ctx->pc = 0x3482e4u;
    // NOP
label_3482e8:
    // 0x3482e8: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x3482e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3482ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3482ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3482f0: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3482F0u;
    {
        const bool branch_taken_0x3482f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3482f0) {
            ctx->pc = 0x348238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348238;
        }
    }
    ctx->pc = 0x3482F8u;
label_3482f8:
    // 0x3482f8: 0xc0a5c00  jal         func_297000
    ctx->pc = 0x3482F8u;
    SET_GPR_U32(ctx, 31, 0x348300u);
    ctx->pc = 0x3482FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482F8u;
    // 0x3482fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297000u, 0x3482F8u, 0x348300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348300u;
label_348300:
    // 0x348300: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x348300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34830c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34830cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348310: 0x3e00008  jr          $ra
    ctx->pc = 0x348310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348310u;
        // 0x348314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348318u;
}
