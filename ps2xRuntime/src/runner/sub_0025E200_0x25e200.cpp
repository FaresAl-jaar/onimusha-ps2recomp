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

// Function: sub_0025E200
// Address: 0x25e200 - 0x25e3f8
void sub_0025E200_0x25e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E200_0x25e200");
#endif

    switch (ctx->pc) {
        case 0x25e25cu: goto label_25e25c;
        case 0x25e3acu: goto label_25e3ac;
        default: break;
    }

    ctx->pc = 0x25e200u;

    // 0x25e200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25e204: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25e208: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x25e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x25e20c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25e20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25e210: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25e210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e214: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25e214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25e218: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25e218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e21c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25e220: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25e220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25e224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25e228: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x25e228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x25e22c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x25e22cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25e230: 0x2484e080  addiu       $a0, $a0, -0x1F80
    ctx->pc = 0x25e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    // 0x25e234: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25e234u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25e238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e23c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25e23cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25e240: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x25e240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25e244: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25e244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25e248: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x25e248u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x25e24c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x25e24cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x25e250: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x25e250u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x25e254: 0xc0c0c80  jal         func_303200
    ctx->pc = 0x25E254u;
    SET_GPR_U32(ctx, 31, 0x25E25Cu);
    ctx->pc = 0x25E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E254u;
    // 0x25e258: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x303200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303200u, 0x25E254u, 0x25E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E25Cu;
label_25e25c:
    // 0x25e25c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25e25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e260: 0x111402  srl         $v0, $s1, 16
    ctx->pc = 0x25e260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x25e264: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e268: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25E268u;
    {
        const bool branch_taken_0x25e268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E268u;
        // 0x25e26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e268) {
            ctx->pc = 0x25E2A0u;
            goto label_25e2a0;
        }
    }
    ctx->pc = 0x25E270u;
    // 0x25e270: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25e270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25e274: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x25e274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e278: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x25e278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x25e27c: 0x3c02008e  lui         $v0, 0x8E
    ctx->pc = 0x25e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)142 << 16));
    // 0x25e280: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x25e280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e284: 0x2442e0e2  addiu       $v0, $v0, -0x1F1E
    ctx->pc = 0x25e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959330));
    // 0x25e288: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25e288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e28c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e290: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25e290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e294: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E294u;
    {
        const bool branch_taken_0x25e294 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e294) {
            ctx->pc = 0x25E2A0u;
            goto label_25e2a0;
        }
    }
    ctx->pc = 0x25E29Cu;
    // 0x25e29c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x25e29cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_25e2a0:
    // 0x25e2a0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x25e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25e2a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25E2A4u;
    {
        const bool branch_taken_0x25e2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2A4u;
        // 0x25e2a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2a4) {
            ctx->pc = 0x25E2C8u;
            goto label_25e2c8;
        }
    }
    ctx->pc = 0x25E2ACu;
    // 0x25e2ac: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25e2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25e2b0: 0x3c02008e  lui         $v0, 0x8E
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)142 << 16));
    // 0x25e2b4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x25e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x25e2b8: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x25e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
    // 0x25e2bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x25e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e2c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e2c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x25e2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25e2c8:
    // 0x25e2c8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25E2C8u;
    {
        const bool branch_taken_0x25e2c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2c8) {
            ctx->pc = 0x25E3C0u;
            goto label_25e3c0;
        }
    }
    ctx->pc = 0x25E2D0u;
    // 0x25e2d0: 0x7a850000  lq          $a1, 0x0($s4)
    ctx->pc = 0x25e2d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25e2d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x25e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25e2d8: 0x2402ff07  addiu       $v0, $zero, -0xF9
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967047));
    // 0x25e2dc: 0x640300f8  daddiu      $v1, $zero, 0xF8
    ctx->pc = 0x25e2dcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)248);
    // 0x25e2e0: 0x4617b032  c.eq.s      $f22, $f23
    ctx->pc = 0x25e2e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e2e4: 0x7e050020  sq          $a1, 0x20($s0)
    ctx->pc = 0x25e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 5));
    // 0x25e2e8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x25e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x25e2ec: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x25e2ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25e2f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x25e2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25e2f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25e2f8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x25e2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25e2fc: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x25e2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x25e300: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x25e300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e304: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x25e304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e308: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x25e308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x25e30c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x25e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25e310: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x25e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x25e314: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25e318: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x25e318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x25e31c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25e320: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x25e320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x25e324: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x25e324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x25e328: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25e328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x25e32c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25e330: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x25e330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x25e334: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x25e334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x25e338: 0xe6160018  swc1        $f22, 0x18($s0)
    ctx->pc = 0x25e338u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x25e33c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25E33Cu;
    {
        const bool branch_taken_0x25e33c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E33Cu;
        // 0x25e340: 0xe6170014  swc1        $f23, 0x14($s0) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e33c) {
            ctx->pc = 0x25E358u;
            goto label_25e358;
        }
    }
    ctx->pc = 0x25E344u;
    // 0x25e344: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x25e344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x25e348: 0x3442ff58  ori         $v0, $v0, 0xFF58
    ctx->pc = 0x25e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65368);
    // 0x25e34c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25E34Cu;
    {
        const bool branch_taken_0x25e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E34Cu;
        // 0x25e350: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e34c) {
            ctx->pc = 0x25E390u;
            goto label_25e390;
        }
    }
    ctx->pc = 0x25E354u;
    // 0x25e354: 0x0  nop
    ctx->pc = 0x25e354u;
    // NOP
label_25e358:
    // 0x25e358: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x25e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e35c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x25e35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25e360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e364: 0x0  nop
    ctx->pc = 0x25e364u;
    // NOP
    // 0x25e368: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x25e368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x25e36c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25e36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e370: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25E370u;
    {
        const bool branch_taken_0x25e370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e370) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E378u;
    // 0x25e378: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25e378u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_25e37c:
    // 0x25e37c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25e380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e384: 0x0  nop
    ctx->pc = 0x25e384u;
    // NOP
    // 0x25e388: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25e388u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x25e38c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x25e38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_25e390:
    // 0x25e390: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x25e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x25e394: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x25e394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x25e398: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25e398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25e39c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x25e39cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x25e3a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x25e3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x25e3a4: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x25E3A4u;
    SET_GPR_U32(ctx, 31, 0x25E3ACu);
    ctx->pc = 0x25E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3A4u;
    // 0x25e3a8: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x25E3A4u, 0x25E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3ACu;
label_25e3ac:
    // 0x25e3ac: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x25e3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x25e3b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25e3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25E3B4u;
    {
        const bool branch_taken_0x25e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0xe614001c  swc1        $f20, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3b4) {
            ctx->pc = 0x25E3C8u;
            goto label_25e3c8;
        }
    }
    ctx->pc = 0x25E3BCu;
    // 0x25e3bc: 0x0  nop
    ctx->pc = 0x25e3bcu;
    // NOP
label_25e3c0:
    // 0x25e3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3c4: 0x0  nop
    ctx->pc = 0x25e3c4u;
    // NOP
label_25e3c8:
    // 0x25e3c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25e3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e3cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x25e3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e3d0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x25e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25e3d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25e3d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e3d8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25e3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25e3dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25e3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e3e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25e3e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25e3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e3e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25e3ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25E3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3F0u;
        // 0x25e3f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E3F8u;
}
