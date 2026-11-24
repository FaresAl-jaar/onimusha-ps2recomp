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

// Function: sub_001715C0
// Address: 0x1715c0 - 0x172020
void sub_001715C0_0x1715c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001715C0_0x1715c0");
#endif

    switch (ctx->pc) {
        case 0x171638u: goto label_171638;
        case 0x1716a0u: goto label_1716a0;
        case 0x1716c8u: goto label_1716c8;
        case 0x171724u: goto label_171724;
        case 0x17196cu: goto label_17196c;
        case 0x171b50u: goto label_171b50;
        case 0x171cb0u: goto label_171cb0;
        case 0x171cf0u: goto label_171cf0;
        case 0x171d80u: goto label_171d80;
        case 0x171fb0u: goto label_171fb0;
        default: break;
    }

    ctx->pc = 0x1715c0u;

    // 0x1715c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1715c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1715c4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1715c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1715c8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1715c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1715cc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1715ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1715d0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1715d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1715d4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1715d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1715d8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1715d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1715dc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1715dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1715e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1715e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1715e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1715e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1715e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1715e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1715ec: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x1715ecu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1715f0: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x1715f0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1715f4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1715f4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1715f8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1715f8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1715fc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1715fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x171600: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x171600u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x171604: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x171604u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x171608: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x171608u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17160c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17160cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x171610: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x171610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x171614: 0x8c960034  lw          $s6, 0x34($a0)
    ctx->pc = 0x171614u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x171618: 0x92d3000a  lbu         $s3, 0xA($s6)
    ctx->pc = 0x171618u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x17161c: 0x1260026a  beqz        $s3, . + 4 + (0x26A << 2)
    ctx->pc = 0x17161Cu;
    {
        const bool branch_taken_0x17161c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x171620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17161Cu;
        // 0x171620: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17161c) {
            ctx->pc = 0x171FC8u;
            goto label_171fc8;
        }
    }
    ctx->pc = 0x171624u;
    // 0x171624: 0x86a3002c  lh          $v1, 0x2C($s5)
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x171628: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x171628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17162c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17162Cu;
    {
        const bool branch_taken_0x17162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17162Cu;
        // 0x171630: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17162c) {
            ctx->pc = 0x171688u;
            goto label_171688;
        }
    }
    ctx->pc = 0x171634u;
    // 0x171634: 0x0  nop
    ctx->pc = 0x171634u;
    // NOP
label_171638:
    // 0x171638: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x171638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17163c: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x17163cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x171640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171644: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x171644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171648: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x171648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17164c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17164cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171650: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x171650u;
    {
        const bool branch_taken_0x171650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171650) {
            ctx->pc = 0x1716D8u;
            goto label_1716d8;
        }
    }
    ctx->pc = 0x171658u;
    // 0x171658: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x171658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17165c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x17165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171660: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x171660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171664: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x171664u;
    {
        const bool branch_taken_0x171664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171664) {
            ctx->pc = 0x1716D8u;
            goto label_1716d8;
        }
    }
    ctx->pc = 0x17166Cu;
    // 0x17166c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x17166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171670: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x171670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171674: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x171674u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171678: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x171678u;
    {
        const bool branch_taken_0x171678 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171678) {
            ctx->pc = 0x1716D8u;
            goto label_1716d8;
        }
    }
    ctx->pc = 0x171680u;
    // 0x171680: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x171680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x171684: 0x0  nop
    ctx->pc = 0x171684u;
    // NOP
label_171688:
    // 0x171688: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x171688u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17168c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x17168Cu;
    {
        const bool branch_taken_0x17168c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17168c) {
            ctx->pc = 0x171638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171638;
        }
    }
    ctx->pc = 0x171694u;
    // 0x171694: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x171694u;
    {
        const bool branch_taken_0x171694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171694) {
            ctx->pc = 0x1716D8u;
            goto label_1716d8;
        }
    }
    ctx->pc = 0x17169Cu;
    // 0x17169c: 0x0  nop
    ctx->pc = 0x17169cu;
    // NOP
label_1716a0:
    // 0x1716a0: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1716a4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1716a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1716a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1716ac: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x1716acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1716b0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1716b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1716b4: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x1716b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1716b8: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x1716b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x1716bc: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x1716c0: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1716C0u;
    SET_GPR_U32(ctx, 31, 0x1716C8u);
    ctx->pc = 0x1716C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716C0u;
    // 0x1716c4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1716C0u, 0x1716C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716C8u;
label_1716c8:
    // 0x1716c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1716C8u;
    {
        const bool branch_taken_0x1716c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1716c8) {
            ctx->pc = 0x1716E8u;
            goto label_1716e8;
        }
    }
    ctx->pc = 0x1716D0u;
    // 0x1716d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1716d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1716d4: 0x0  nop
    ctx->pc = 0x1716d4u;
    // NOP
label_1716d8:
    // 0x1716d8: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x1716d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1716dc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1716DCu;
    {
        const bool branch_taken_0x1716dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1716dc) {
            ctx->pc = 0x1716A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1716a0;
        }
    }
    ctx->pc = 0x1716E4u;
    // 0x1716e4: 0x0  nop
    ctx->pc = 0x1716e4u;
    // NOP
label_1716e8:
    // 0x1716e8: 0x2663fffe  addiu       $v1, $s3, -0x2
    ctx->pc = 0x1716e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x1716ec: 0x74082b  sltu        $at, $v1, $s4
    ctx->pc = 0x1716ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1716f0: 0x14200235  bnez        $at, . + 4 + (0x235 << 2)
    ctx->pc = 0x1716F0u;
    {
        const bool branch_taken_0x1716f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1716f0) {
            ctx->pc = 0x171FC8u;
            goto label_171fc8;
        }
    }
    ctx->pc = 0x1716F8u;
    // 0x1716f8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1716f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1716fc: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1716fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x171700: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x171700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x171704: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x171704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171708: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x171708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17170c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17170cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x171710: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x171710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x171714: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x171714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x171718: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x171718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x17171c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x17171Cu;
    SET_GPR_U32(ctx, 31, 0x171724u);
    ctx->pc = 0x171720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17171Cu;
    // 0x171720: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x17171Cu, 0x171724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171724u;
label_171724:
    // 0x171724: 0x10400228  beqz        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x171724u;
    {
        const bool branch_taken_0x171724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171724u;
        // 0x171728: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171724) {
            ctx->pc = 0x171FC8u;
            goto label_171fc8;
        }
    }
    ctx->pc = 0x17172Cu;
    // 0x17172c: 0x8c3e0108  lw          $fp, 0x108($at)
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 30, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 264))); // MMIO: 0x70000108
    // 0x171730: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171734: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x171738: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x171738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x17173c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17173Cu;
    {
        const bool branch_taken_0x17173c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17173c) {
            ctx->pc = 0x171750u;
            goto label_171750;
        }
    }
    ctx->pc = 0x171744u;
    // 0x171744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171744u;
    {
        const bool branch_taken_0x171744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171744) {
            ctx->pc = 0x171758u;
            goto label_171758;
        }
    }
    ctx->pc = 0x17174Cu;
    // 0x17174c: 0x0  nop
    ctx->pc = 0x17174cu;
    // NOP
label_171750:
    // 0x171750: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x171750u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171754: 0x0  nop
    ctx->pc = 0x171754u;
    // NOP
label_171758:
    // 0x171758: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x171758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x17175c: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x17175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x171760: 0x96a30028  lhu         $v1, 0x28($s5)
    ctx->pc = 0x171760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x171764: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x171764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x171768: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x171768u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17176c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17176cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171770: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x171770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x171774: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x171774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17177c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17177cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171780: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x171780u;
    {
        const bool branch_taken_0x171780 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x171784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171780u;
        // 0x171784: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171780) {
            ctx->pc = 0x171794u;
            goto label_171794;
        }
    }
    ctx->pc = 0x171788u;
    // 0x171788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17178c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17178Cu;
    {
        const bool branch_taken_0x17178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17178Cu;
        // 0x171790: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17178c) {
            ctx->pc = 0x1717B0u;
            goto label_1717b0;
        }
    }
    ctx->pc = 0x171794u;
label_171794:
    // 0x171794: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x171794u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x171798: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x171798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x17179c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x17179cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1717a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1717a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1717a4: 0x0  nop
    ctx->pc = 0x1717a4u;
    // NOP
    // 0x1717a8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1717a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1717ac: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1717acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1717b0:
    // 0x1717b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1717b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1717b4: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x1717b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1717b8: 0xc4220340  lwc1        $f2, 0x340($at)
    ctx->pc = 0x1717b8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1717bc: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x1717bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x1717c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1717c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1717c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1717c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1717c8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1717c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1717cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1717ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1717d0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x1717d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1717d4: 0x90c6000b  lbu         $a2, 0xB($a2)
    ctx->pc = 0x1717d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x1717d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1717d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1717dc: 0xc4210354  lwc1        $f1, 0x354($at)
    ctx->pc = 0x1717dcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000354u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1717e0: 0x46001742  mul.s       $f29, $f2, $f0
    ctx->pc = 0x1717e0u;
    ctx->f[29] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1717e4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1717e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1717e8: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x1717e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1717ec: 0x46000f02  mul.s       $f28, $f1, $f0
    ctx->pc = 0x1717ecu;
    ctx->f[28] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1717f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1717f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1717f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1717f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1717f8: 0x0  nop
    ctx->pc = 0x1717f8u;
    // NOP
    // 0x1717fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1717fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171800: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x171800u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x171804: 0x0  nop
    ctx->pc = 0x171804u;
    // NOP
    // 0x171808: 0x0  nop
    ctx->pc = 0x171808u;
    // NOP
    // 0x17180c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17180Cu;
    {
        const bool branch_taken_0x17180c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x17180c) {
            ctx->pc = 0x171820u;
            goto label_171820;
        }
    }
    ctx->pc = 0x171814u;
    // 0x171814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x171814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171818u;
    {
        const bool branch_taken_0x171818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171818u;
        // 0x17181c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171818) {
            ctx->pc = 0x17183Cu;
            goto label_17183c;
        }
    }
    ctx->pc = 0x171820u;
label_171820:
    // 0x171820: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x171820u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x171824: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x171824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x171828: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x171828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x17182c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17182cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171830: 0x0  nop
    ctx->pc = 0x171830u;
    // NOP
    // 0x171834: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171838: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x171838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17183c:
    // 0x17183c: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x17183cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x171840: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x171840u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171844: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x171844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171848: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17184c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17184cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171850: 0x0  nop
    ctx->pc = 0x171850u;
    // NOP
    // 0x171854: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171858: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x171858u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17185c: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17185Cu;
    {
        const bool branch_taken_0x17185c = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x171860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17185Cu;
        // 0x171860: 0x4618b841  sub.s       $f1, $f23, $f24 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17185c) {
            ctx->pc = 0x171870u;
            goto label_171870;
        }
    }
    ctx->pc = 0x171864u;
    // 0x171864: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x171864u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171868u;
    {
        const bool branch_taken_0x171868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171868u;
        // 0x17186c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171868) {
            ctx->pc = 0x17188Cu;
            goto label_17188c;
        }
    }
    ctx->pc = 0x171870u;
label_171870:
    // 0x171870: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x171870u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x171874: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x171874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x171878: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x171878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x17187c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17187cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171880: 0x0  nop
    ctx->pc = 0x171880u;
    // NOP
    // 0x171884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171888: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x171888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17188c:
    // 0x17188c: 0x0  nop
    ctx->pc = 0x17188cu;
    // NOP
    // 0x171890: 0x0  nop
    ctx->pc = 0x171890u;
    // NOP
    // 0x171894: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x171894u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x171898: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x17189c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1718a0: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x1718a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1718a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1718a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1718a8: 0x90c6000c  lbu         $a2, 0xC($a2)
    ctx->pc = 0x1718a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1718ac: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1718acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1718b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1718b4: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x1718b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1718b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1718b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1718bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1718bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1718c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1718c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1718c4: 0x0  nop
    ctx->pc = 0x1718c4u;
    // NOP
    // 0x1718c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1718c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1718cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1718ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1718d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1718d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1718d4: 0x0  nop
    ctx->pc = 0x1718d4u;
    // NOP
    // 0x1718d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1718d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1718dc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1718DCu;
    {
        const bool branch_taken_0x1718dc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1718E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718DCu;
        // 0x1718e0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718dc) {
            ctx->pc = 0x1718F0u;
            goto label_1718f0;
        }
    }
    ctx->pc = 0x1718E4u;
    // 0x1718e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1718e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1718e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1718E8u;
    {
        const bool branch_taken_0x1718e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718E8u;
        // 0x1718ec: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718e8) {
            ctx->pc = 0x17190Cu;
            goto label_17190c;
        }
    }
    ctx->pc = 0x1718F0u;
label_1718f0:
    // 0x1718f0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1718f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1718f4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1718f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1718f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1718f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1718fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1718fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171900: 0x0  nop
    ctx->pc = 0x171900u;
    // NOP
    // 0x171904: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171908: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x171908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17190c:
    // 0x17190c: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x17190cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x171910: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x171910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x171914: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x171914u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x171918: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x171918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x17191c: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x17191cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x171920: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x171920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x171924: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x171924u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171928: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x17192c: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x17192cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x171930: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x171930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x171934: 0x8ea90020  lw          $t1, 0x20($s5)
    ctx->pc = 0x171934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x171938: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x171938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x17193c: 0x92d70001  lbu         $s7, 0x1($s6)
    ctx->pc = 0x17193cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x171940: 0x1078824  and         $s1, $t0, $a3
    ctx->pc = 0x171940u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x171944: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x171944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x171948: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x17194c: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x17194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x171950: 0x9923c  dsll32      $s2, $t1, 8
    ctx->pc = 0x171950u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) << (32 + 8));
    // 0x171954: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x171954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x171958: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x171958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x17195c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17195cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x171960: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x171964: 0xc041442  jal         func_105108
    ctx->pc = 0x171964u;
    SET_GPR_U32(ctx, 31, 0x17196Cu);
    ctx->pc = 0x171968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171964u;
    // 0x171968: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x171964u, 0x17196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17196Cu;
label_17196c:
    // 0x17196c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17196cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171970: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x171974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171978: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17197c: 0x8c240100  lw          $a0, 0x100($at)
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x171980: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171984: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x171984u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x171988: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x171988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x17198c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17198cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171990: 0x0  nop
    ctx->pc = 0x171990u;
    // NOP
    // 0x171994: 0x46800ea0  cvt.s.w     $f26, $f1
    ctx->pc = 0x171994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x171998: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17199c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x17199cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x1719a0: 0x461ad01a  mula.s      $f26, $f26
    ctx->pc = 0x1719a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[26], ctx->f[26]));
    // 0x1719a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1719a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1719a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1719ac: 0x0  nop
    ctx->pc = 0x1719acu;
    // NOP
    // 0x1719b0: 0x46800e60  cvt.s.w     $f25, $f1
    ctx->pc = 0x1719b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1719b4: 0x4619c85c  madd.s      $f1, $f25, $f25
    ctx->pc = 0x1719b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1719b8: 0x460106c4  c1          0x106C4
    ctx->pc = 0x1719b8u;
    ctx->f[27] = FPU_SQRT_S(ctx->f[1]);
    // 0x1719bc: 0x0  nop
    ctx->pc = 0x1719bcu;
    // NOP
    // 0x1719c0: 0x0  nop
    ctx->pc = 0x1719c0u;
    // NOP
    // 0x1719c4: 0x461b0032  c.eq.s      $f0, $f27
    ctx->pc = 0x1719c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1719c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1719C8u;
    {
        const bool branch_taken_0x1719c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1719CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719C8u;
        // 0x1719cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719c8) {
            ctx->pc = 0x1719D8u;
            goto label_1719d8;
        }
    }
    ctx->pc = 0x1719D0u;
    // 0x1719d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1719D0u;
    {
        const bool branch_taken_0x1719d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1719D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719D0u;
        // 0x1719d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719d0) {
            ctx->pc = 0x171A10u;
            goto label_171a10;
        }
    }
    ctx->pc = 0x1719D8u;
label_1719d8:
    // 0x1719d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1719d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1719dc: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x1719dcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1719e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1719e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1719e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1719e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1719e8: 0x4619e842  mul.s       $f1, $f29, $f25
    ctx->pc = 0x1719e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[25]);
    // 0x1719ec: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x1719ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x1719f0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1719f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1719f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1719f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1719f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1719f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1719fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1719fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x171a00: 0x461ae042  mul.s       $f1, $f28, $f26
    ctx->pc = 0x171a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x171a04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x171a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171a08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171a0c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x171a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_171a10:
    // 0x171a10: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x171A10u;
    {
        const bool branch_taken_0x171a10 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x171A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A10u;
        // 0x171a14: 0x142842  srl         $a1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a10) {
            ctx->pc = 0x171A24u;
            goto label_171a24;
        }
    }
    ctx->pc = 0x171A18u;
    // 0x171a18: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x171a18u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171a1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x171A1Cu;
    {
        const bool branch_taken_0x171a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A1Cu;
        // 0x171a20: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a1c) {
            ctx->pc = 0x171A3Cu;
            goto label_171a3c;
        }
    }
    ctx->pc = 0x171A24u;
label_171a24:
    // 0x171a24: 0x32840001  andi        $a0, $s4, 0x1
    ctx->pc = 0x171a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x171a28: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x171a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x171a2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x171a2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171a30: 0x0  nop
    ctx->pc = 0x171a30u;
    // NOP
    // 0x171a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171a38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x171a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_171a3c:
    // 0x171a3c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x171a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x171a40: 0x2742823  subu        $a1, $s3, $s4
    ctx->pc = 0x171a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x171a44: 0x72f44018  mult1       $t0, $s7, $s4
    ctx->pc = 0x171a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x171a48: 0x123a3c  dsll32      $a3, $s2, 8
    ctx->pc = 0x171a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 8));
    // 0x171a4c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x171a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x171a50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x171a50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x171a54: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x171a58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171a5c: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x171a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x171a60: 0x854818  mult        $t1, $a0, $a1
    ctx->pc = 0x171a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x171a64: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x171a64u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x171a68: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x171a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x171a6c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x171a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x171a70: 0x113001b  divu        $zero, $t0, $s3
    ctx->pc = 0x171a70u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x171a74: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x171a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x171a78: 0x0  nop
    ctx->pc = 0x171a78u;
    // NOP
    // 0x171a7c: 0x4012  mflo        $t0
    ctx->pc = 0x171a7cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x171a80: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x171a80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x171a84: 0xe89025  or          $s2, $a3, $t0
    ctx->pc = 0x171a84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x171a88: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x171a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x171a8c: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x171a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x171a90: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x171a90u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x171a94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171a98: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x171a98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x171a9c: 0x8c270104  lw          $a3, 0x104($at)
    ctx->pc = 0x171a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x171aa0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x171aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x171aa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171aa8: 0xa6070002  sh          $a3, 0x2($s0)
    ctx->pc = 0x171aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x171aac: 0x8c270108  lw          $a3, 0x108($at)
    ctx->pc = 0x171aacu;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x171ab0: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x171ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x171ab4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171ab8: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x171ab8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171abc: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x171abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x171ac0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171ac4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x171ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x171ac8: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x171ac8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171acc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x171accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x171ad0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171ad4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x171ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x171ad8: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x171ad8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171adc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x171adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x171ae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171ae4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x171ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x171ae8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x171ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x171aec: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x171aecu;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x171af0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x171af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x171af4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171af8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x171af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x171afc: 0x8c230104  lw          $v1, 0x104($at)
    ctx->pc = 0x171afcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x171b00: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171b04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171b08: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x171b08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x171b0c: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x171b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x171b10: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x171b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x171b14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171b18: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x171b18u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171b1c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x171b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x171b20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171b24: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x171b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x171b28: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x171b28u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171b2c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x171b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x171b30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171b34: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x171b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x171b38: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x171b38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171b3c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x171b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x171b40: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x171b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x171b44: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x171b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x171b48: 0xc041442  jal         func_105108
    ctx->pc = 0x171B48u;
    SET_GPR_U32(ctx, 31, 0x171B50u);
    ctx->pc = 0x171B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B48u;
    // 0x171b4c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x171B48u, 0x171B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B50u;
label_171b50:
    // 0x171b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171b54: 0x0  nop
    ctx->pc = 0x171b54u;
    // NOP
    // 0x171b58: 0x461b0032  c.eq.s      $f0, $f27
    ctx->pc = 0x171b58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171b5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171B5Cu;
    {
        const bool branch_taken_0x171b5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B5Cu;
        // 0x171b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b5c) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x171B64u;
    // 0x171b64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x171B64u;
    {
        const bool branch_taken_0x171b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B64u;
        // 0x171b68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b64) {
            ctx->pc = 0x171BA8u;
            goto label_171ba8;
        }
    }
    ctx->pc = 0x171B6Cu;
    // 0x171b6c: 0x0  nop
    ctx->pc = 0x171b6cu;
    // NOP
label_171b70:
    // 0x171b70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171b74: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x171b74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171b78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171b80: 0x4619e842  mul.s       $f1, $f29, $f25
    ctx->pc = 0x171b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[25]);
    // 0x171b84: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x171b84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x171b88: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x171b88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x171b8c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x171b8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171b90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x171b94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x171b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x171b98: 0x461ae042  mul.s       $f1, $f28, $f26
    ctx->pc = 0x171b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x171b9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x171b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171ba0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171ba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171ba4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x171ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_171ba8:
    // 0x171ba8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x171ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x171bac: 0x2742823  subu        $a1, $s3, $s4
    ctx->pc = 0x171bacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x171bb0: 0x72f43018  mult1       $a2, $s7, $s4
    ctx->pc = 0x171bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x171bb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171bb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x171bb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x171bbc: 0x4616c600  add.s       $f24, $f24, $f22
    ctx->pc = 0x171bbcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x171bc0: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x171bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x171bc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x171bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x171bc8: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x171bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x171bcc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x171bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x171bd0: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x171bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x171bd4: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x171bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x171bd8: 0x93001b  divu        $zero, $a0, $s3
    ctx->pc = 0x171bd8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x171bdc: 0x0  nop
    ctx->pc = 0x171bdcu;
    // NOP
    // 0x171be0: 0x0  nop
    ctx->pc = 0x171be0u;
    // NOP
    // 0x171be4: 0x2012  mflo        $a0
    ctx->pc = 0x171be4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x171be8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x171be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x171bec: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x171becu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x171bf0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x171bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x171bf4: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x171bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x171bf8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x171bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171bfc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c00: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x171c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x171c04: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x171c04u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x171c08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x171c0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c10: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x171c10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x171c14: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x171c14u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x171c18: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x171c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x171c1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c20: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171c20u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171c24: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x171c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x171c28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c2c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x171c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x171c30: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171c30u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171c34: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x171c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x171c38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c3c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x171c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x171c40: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171c40u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171c44: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x171c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x171c48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c4c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x171c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x171c50: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x171c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x171c54: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x171c54u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x171c58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171c5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c60: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x171c60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x171c64: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x171c64u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x171c68: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x171c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171c6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c70: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x171c70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x171c74: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x171c74u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x171c78: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x171c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x171c7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c80: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171c80u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171c84: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x171c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x171c88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c8c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x171c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x171c90: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171c90u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171c94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x171c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x171c98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171c9c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x171c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x171ca0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171ca0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171ca4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x171ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x171ca8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x171CA8u;
    {
        const bool branch_taken_0x171ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CA8u;
        // 0x171cac: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ca8) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171CB0u;
label_171cb0:
    // 0x171cb0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x171cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x171cb4: 0x34450100  ori         $a1, $v0, 0x100
    ctx->pc = 0x171cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x171cb8: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x171cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x171cbc: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x171cbcu;
    SET_GPR_VEC(ctx, 9, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x171cc0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x171cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x171cc4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x171cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x171cc8: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x171cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x171ccc: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x171cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x171cd0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x171cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x171cd4: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x171cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x171cd8: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x171cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x171cdc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x171cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x171ce0: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x171ce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x171ce4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x171ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x171ce8: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x171CE8u;
    SET_GPR_U32(ctx, 31, 0x171CF0u);
    ctx->pc = 0x171CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CE8u;
    // 0x171cec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x171CE8u, 0x171CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CF0u;
label_171cf0:
    // 0x171cf0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x171CF0u;
    {
        const bool branch_taken_0x171cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CF0u;
        // 0x171cf4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cf0) {
            ctx->pc = 0x171F28u;
            goto label_171f28;
        }
    }
    ctx->pc = 0x171CF8u;
    // 0x171cf8: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x171cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 280))); // MMIO: 0x70000118
    // 0x171cfc: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x171cfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171d00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x171D00u;
    {
        const bool branch_taken_0x171d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d00) {
            ctx->pc = 0x171D10u;
            goto label_171d10;
        }
    }
    ctx->pc = 0x171D08u;
    // 0x171d08: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x171d08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d0c: 0x0  nop
    ctx->pc = 0x171d0cu;
    // NOP
label_171d10:
    // 0x171d10: 0x16930007  bne         $s4, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x171D10u;
    {
        const bool branch_taken_0x171d10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x171D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D10u;
        // 0x171d14: 0x121a3c  dsll32      $v1, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d10) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D18u;
    // 0x171d18: 0x171600  sll         $v0, $s7, 24
    ctx->pc = 0x171d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
    // 0x171d1c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x171d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x171d20: 0x4600be06  mov.s       $f24, $f23
    ctx->pc = 0x171d20u;
    ctx->f[24] = FPU_MOV_S(ctx->f[23]);
    // 0x171d24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x171D24u;
    {
        const bool branch_taken_0x171d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D24u;
        // 0x171d28: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d24) {
            ctx->pc = 0x171D68u;
            goto label_171d68;
        }
    }
    ctx->pc = 0x171D2Cu;
    // 0x171d2c: 0x0  nop
    ctx->pc = 0x171d2cu;
    // NOP
label_171d30:
    // 0x171d30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x171d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x171d34: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x171d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x171d38: 0x4616c600  add.s       $f24, $f24, $f22
    ctx->pc = 0x171d38u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x171d3c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x171d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x171d40: 0x72f41818  mult1       $v1, $s7, $s4
    ctx->pc = 0x171d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x171d44: 0x12123c  dsll32      $v0, $s2, 8
    ctx->pc = 0x171d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 8));
    // 0x171d48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171d4c: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x171d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x171d50: 0x73001b  divu        $zero, $v1, $s3
    ctx->pc = 0x171d50u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x171d54: 0x0  nop
    ctx->pc = 0x171d54u;
    // NOP
    // 0x171d58: 0x0  nop
    ctx->pc = 0x171d58u;
    // NOP
    // 0x171d5c: 0x1812  mflo        $v1
    ctx->pc = 0x171d5cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x171d60: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x171d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x171d64: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x171d64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_171d68:
    // 0x171d68: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x171d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x171d6c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x171d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x171d70: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x171d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x171d74: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x171d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x171d78: 0xc041442  jal         func_105108
    ctx->pc = 0x171D78u;
    SET_GPR_U32(ctx, 31, 0x171D80u);
    ctx->pc = 0x171D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D78u;
    // 0x171d7c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x171D78u, 0x171D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D80u;
label_171d80:
    // 0x171d80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171d84: 0x8c260110  lw          $a2, 0x110($at)
    ctx->pc = 0x171d84u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x171d88: 0x4600d024  .word       0x4600D024                   # cvt.w.s     $f0, $f26 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[26]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171d8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171d90: 0x8c250100  lw          $a1, 0x100($at)
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x171d94: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171d98: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171d9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171da0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x171da4: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x171da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x171da8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x171da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171dac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171db0: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x171db0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x171db4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x171db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171db8: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x171dbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171dc0: 0x0  nop
    ctx->pc = 0x171dc0u;
    // NOP
    // 0x171dc4: 0x46800ea0  cvt.s.w     $f26, $f1
    ctx->pc = 0x171dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x171dc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x171dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x171dcc: 0x461ad01a  mula.s      $f26, $f26
    ctx->pc = 0x171dccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[26], ctx->f[26]));
    // 0x171dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171dd4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x171dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x171dd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171de0: 0x0  nop
    ctx->pc = 0x171de0u;
    // NOP
    // 0x171de4: 0x46800e60  cvt.s.w     $f25, $f1
    ctx->pc = 0x171de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x171de8: 0x4619c85c  madd.s      $f1, $f25, $f25
    ctx->pc = 0x171de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x171dec: 0x460106c4  c1          0x106C4
    ctx->pc = 0x171decu;
    ctx->f[27] = FPU_SQRT_S(ctx->f[1]);
    // 0x171df0: 0x0  nop
    ctx->pc = 0x171df0u;
    // NOP
    // 0x171df4: 0x0  nop
    ctx->pc = 0x171df4u;
    // NOP
    // 0x171df8: 0x461b0032  c.eq.s      $f0, $f27
    ctx->pc = 0x171df8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171dfc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171DFCu;
    {
        const bool branch_taken_0x171dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DFCu;
        // 0x171e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dfc) {
            ctx->pc = 0x171E10u;
            goto label_171e10;
        }
    }
    ctx->pc = 0x171E04u;
    // 0x171e04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x171E04u;
    {
        const bool branch_taken_0x171e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E04u;
        // 0x171e08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e04) {
            ctx->pc = 0x171E48u;
            goto label_171e48;
        }
    }
    ctx->pc = 0x171E0Cu;
    // 0x171e0c: 0x0  nop
    ctx->pc = 0x171e0cu;
    // NOP
label_171e10:
    // 0x171e10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171e14: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x171e14u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171e18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171e20: 0x4619e842  mul.s       $f1, $f29, $f25
    ctx->pc = 0x171e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[25]);
    // 0x171e24: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x171e24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x171e28: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x171e28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x171e2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x171e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171e30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x171e34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x171e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x171e38: 0x461ae042  mul.s       $f1, $f28, $f26
    ctx->pc = 0x171e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x171e3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x171e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171e40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171e44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x171e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_171e48:
    // 0x171e48: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x171e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x171e4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171e50: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x171e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x171e54: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x171e54u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x171e58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x171e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x171e5c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x171e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x171e60: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x171e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x171e64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171e68: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x171e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x171e6c: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x171e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x171e70: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x171e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x171e74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x171e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x171e78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171e7c: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x171e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x171e80: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x171e84: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x171e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x171e88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171e8c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171e8cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171e90: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x171e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x171e94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171e98: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x171e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x171e9c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171e9cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171ea0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x171ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x171ea4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171ea8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x171ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x171eac: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171eacu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171eb0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x171eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x171eb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171eb8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x171eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x171ebc: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x171ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x171ec0: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x171ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x171ec4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171ec8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171ecc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x171eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x171ed0: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x171ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x171ed4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x171ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171ed8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171edc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x171edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x171ee0: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x171ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x171ee4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x171ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x171ee8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171eec: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171eecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171ef0: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x171ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x171ef4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171ef8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x171ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x171efc: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171efcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f00: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x171f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x171f04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x171f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x171f08: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x171f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x171f0c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x171f0cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f10: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x171f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x171f14: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x171f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_171f18:
    // 0x171f18: 0x274082b  sltu        $at, $s3, $s4
    ctx->pc = 0x171f18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x171f1c: 0x1020ff64  beqz        $at, . + 4 + (-0x9C << 2)
    ctx->pc = 0x171F1Cu;
    {
        const bool branch_taken_0x171f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f1c) {
            ctx->pc = 0x171CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171F24u;
    // 0x171f24: 0x0  nop
    ctx->pc = 0x171f24u;
    // NOP
label_171f28:
    // 0x171f28: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x171f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x171f2c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x171f30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x171f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x171f34: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x171f38: 0x1e3183  sra         $a2, $fp, 6
    ctx->pc = 0x171f38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 30), 6));
    // 0x171f3c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x171f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x171f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x171f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f44: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x171f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x171f48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x171f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x171f4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x171f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x171f50: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x171f54: 0x3442005c  ori         $v0, $v0, 0x5C
    ctx->pc = 0x171f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)92);
    // 0x171f58: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x171f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x171f5c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x171f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x171f60: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x171f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x171f64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x171f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171f6c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x171f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x171f70: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x171f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171f74: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x171f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x171f78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x171f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x171f7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x171f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x171f80: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x171f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x171f84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171f88: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x171f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x171f8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x171f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171f90: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x171f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x171f94: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x171f94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x171f98: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x171f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x171f9c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x171f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x171fa0: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x171fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x171fa4: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x171fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x171fa8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x171FA8u;
    SET_GPR_U32(ctx, 31, 0x171FB0u);
    ctx->pc = 0x171FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FA8u;
    // 0x171fac: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x171FA8u, 0x171FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FB0u;
label_171fb0:
    // 0x171fb0: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x171fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x171fb4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x171fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x171fb8: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x171fb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x171fbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x171fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x171fc0: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x171fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x171fc4: 0x0  nop
    ctx->pc = 0x171fc4u;
    // NOP
label_171fc8:
    // 0x171fc8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x171fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x171fcc: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x171fccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171fd0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x171fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x171fd4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x171fd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x171fd8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x171fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x171fdc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x171fdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x171fe0: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x171fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x171fe4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x171fe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x171fe8: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x171fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x171fec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x171fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x171ff0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x171ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x171ff4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x171ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171ff8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x171ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x171ffc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x171ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172000: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x172000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x172004: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x172004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172008: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x172008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17200c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172010: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x172010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x172014: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x172014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x172018: 0x3e00008  jr          $ra
    ctx->pc = 0x172018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172018u;
        // 0x17201c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172020u;
}
