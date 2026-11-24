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

// Function: sub_0035F050
// Address: 0x35f050 - 0x35f240
void sub_0035F050_0x35f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F050_0x35f050");
#endif

    switch (ctx->pc) {
        case 0x35f06cu: goto label_35f06c;
        case 0x35f0b0u: goto label_35f0b0;
        case 0x35f148u: goto label_35f148;
        default: break;
    }

    ctx->pc = 0x35f050u;

    // 0x35f050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35f058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f05c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35F05Cu;
    {
        const bool branch_taken_0x35f05c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F05Cu;
        // 0x35f060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f05c) {
            ctx->pc = 0x35F078u;
            goto label_35f078;
        }
    }
    ctx->pc = 0x35F064u;
    // 0x35f064: 0xc0d8c94  jal         func_363250
    ctx->pc = 0x35F064u;
    SET_GPR_U32(ctx, 31, 0x35F06Cu);
    ctx->pc = 0x363250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363250u, 0x35F064u, 0x35F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F06Cu;
label_35f06c:
    // 0x35f06c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35F06Cu;
    {
        const bool branch_taken_0x35f06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F06Cu;
        // 0x35f070: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f06c) {
            ctx->pc = 0x35F080u;
            goto label_35f080;
        }
    }
    ctx->pc = 0x35F074u;
    // 0x35f074: 0x0  nop
    ctx->pc = 0x35f074u;
    // NOP
label_35f078:
    // 0x35f078: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x35f078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x35f07c: 0x0  nop
    ctx->pc = 0x35f07cu;
    // NOP
label_35f080:
    // 0x35f080: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35f080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35f084: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35F084u;
    {
        const bool branch_taken_0x35f084 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x35f084) {
            ctx->pc = 0x35F098u;
            goto label_35f098;
        }
    }
    ctx->pc = 0x35F08Cu;
    // 0x35f08c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35F08Cu;
    {
        const bool branch_taken_0x35f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F08Cu;
        // 0x35f090: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f08c) {
            ctx->pc = 0x35F0A8u;
            goto label_35f0a8;
        }
    }
    ctx->pc = 0x35F094u;
    // 0x35f094: 0x0  nop
    ctx->pc = 0x35f094u;
    // NOP
label_35f098:
    // 0x35f098: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x35f098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x35f09c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35F09Cu;
    {
        const bool branch_taken_0x35f09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f09c) {
            ctx->pc = 0x35F0A8u;
            goto label_35f0a8;
        }
    }
    ctx->pc = 0x35F0A4u;
    // 0x35f0a4: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x35f0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_35f0a8:
    // 0x35f0a8: 0xc0d83bc  jal         func_360EF0
    ctx->pc = 0x35F0A8u;
    SET_GPR_U32(ctx, 31, 0x35F0B0u);
    ctx->pc = 0x35F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0A8u;
    // 0x35f0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360EF0u, 0x35F0A8u, 0x35F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0B0u;
label_35f0b0:
    // 0x35f0b0: 0xae021fb8  sw          $v0, 0x1FB8($s0)
    ctx->pc = 0x35f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8120), GPR_U32(ctx, 2));
    // 0x35f0b4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x35f0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x35f0b8: 0x94226ac4  lhu         $v0, 0x6AC4($at)
    ctx->pc = 0x35f0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x35f0bc: 0x28420ff0  slti        $v0, $v0, 0xFF0
    ctx->pc = 0x35f0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x35f0c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F0C0u;
    {
        const bool branch_taken_0x35f0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f0c0) {
            ctx->pc = 0x35F0D0u;
            goto label_35f0d0;
        }
    }
    ctx->pc = 0x35F0C8u;
    // 0x35f0c8: 0xae001fb8  sw          $zero, 0x1FB8($s0)
    ctx->pc = 0x35f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8120), GPR_U32(ctx, 0));
    // 0x35f0cc: 0x0  nop
    ctx->pc = 0x35f0ccu;
    // NOP
label_35f0d0:
    // 0x35f0d0: 0xa2001fb7  sb          $zero, 0x1FB7($s0)
    ctx->pc = 0x35f0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8119), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f0d4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x35f0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x35f0d8: 0x24020542  addiu       $v0, $zero, 0x542
    ctx->pc = 0x35f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1346));
    // 0x35f0dc: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x35f0dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x35f0e0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35F0E0u;
    {
        const bool branch_taken_0x35f0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0E0u;
        // 0x35f0e4: 0x240208c7  addiu       $v0, $zero, 0x8C7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0e0) {
            ctx->pc = 0x35F120u;
            goto label_35f120;
        }
    }
    ctx->pc = 0x35F0E8u;
    // 0x35f0e8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35F0E8u;
    {
        const bool branch_taken_0x35f0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f0e8) {
            ctx->pc = 0x35F110u;
            goto label_35f110;
        }
    }
    ctx->pc = 0x35F0F0u;
    // 0x35f0f0: 0x24020c50  addiu       $v0, $zero, 0xC50
    ctx->pc = 0x35f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x35f0f4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35F0F4u;
    {
        const bool branch_taken_0x35f0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0F4u;
        // 0x35f0f8: 0x24020562  addiu       $v0, $zero, 0x562 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0f4) {
            ctx->pc = 0x35F110u;
            goto label_35f110;
        }
    }
    ctx->pc = 0x35F0FCu;
    // 0x35f0fc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35F0FCu;
    {
        const bool branch_taken_0x35f0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f0fc) {
            ctx->pc = 0x35F110u;
            goto label_35f110;
        }
    }
    ctx->pc = 0x35F104u;
    // 0x35f104: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35F104u;
    {
        const bool branch_taken_0x35f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f104) {
            ctx->pc = 0x35F140u;
            goto label_35f140;
        }
    }
    ctx->pc = 0x35F10Cu;
    // 0x35f10c: 0x0  nop
    ctx->pc = 0x35f10cu;
    // NOP
label_35f110:
    // 0x35f110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f114: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35F114u;
    {
        const bool branch_taken_0x35f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F114u;
        // 0x35f118: 0xa2021fb7  sb          $v0, 0x1FB7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f114) {
            ctx->pc = 0x35F140u;
            goto label_35f140;
        }
    }
    ctx->pc = 0x35F11Cu;
    // 0x35f11c: 0x0  nop
    ctx->pc = 0x35f11cu;
    // NOP
label_35f120:
    // 0x35f120: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x35f120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x35f124: 0x90226ac8  lbu         $v0, 0x6AC8($at)
    ctx->pc = 0x35f124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x35f128: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F128u;
    {
        const bool branch_taken_0x35f128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f128) {
            ctx->pc = 0x35F140u;
            goto label_35f140;
        }
    }
    ctx->pc = 0x35F130u;
    // 0x35f130: 0x8e020664  lw          $v0, 0x664($s0)
    ctx->pc = 0x35f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x35f134: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x35f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x35f138: 0xae020664  sw          $v0, 0x664($s0)
    ctx->pc = 0x35f138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 2));
    // 0x35f13c: 0x0  nop
    ctx->pc = 0x35f13cu;
    // NOP
label_35f140:
    // 0x35f140: 0xc0d8414  jal         func_361050
    ctx->pc = 0x35F140u;
    SET_GPR_U32(ctx, 31, 0x35F148u);
    ctx->pc = 0x35F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F140u;
    // 0x35f144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361050u, 0x35F140u, 0x35F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F148u;
label_35f148:
    // 0x35f148: 0xa6021fb4  sh          $v0, 0x1FB4($s0)
    ctx->pc = 0x35f148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8116), (uint16_t)GPR_U32(ctx, 2));
    // 0x35f14c: 0x8e051fb8  lw          $a1, 0x1FB8($s0)
    ctx->pc = 0x35f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8120)));
    // 0x35f150: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x35F150u;
    {
        const bool branch_taken_0x35f150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f150) {
            ctx->pc = 0x35F230u;
            goto label_35f230;
        }
    }
    ctx->pc = 0x35F158u;
    // 0x35f158: 0x86031fb4  lh          $v1, 0x1FB4($s0)
    ctx->pc = 0x35f158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8116)));
    // 0x35f15c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x35f15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x35f160: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x35F160u;
    {
        const bool branch_taken_0x35f160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f160) {
            ctx->pc = 0x35F1D0u;
            goto label_35f1d0;
        }
    }
    ctx->pc = 0x35F168u;
    // 0x35f168: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x35f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f16c: 0x84a40018  lh          $a0, 0x18($a1)
    ctx->pc = 0x35f16cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x35f170: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x35f170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f174: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x35f174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35f178: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x35f178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35f17c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f17cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f180: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35f180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35f184: 0x0  nop
    ctx->pc = 0x35f184u;
    // NOP
    // 0x35f188: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x35f188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35f18c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35f18cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35f190: 0xe6001f98  swc1        $f0, 0x1F98($s0)
    ctx->pc = 0x35f190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8088), bits); }
    // 0x35f194: 0x8e051fb8  lw          $a1, 0x1FB8($s0)
    ctx->pc = 0x35f194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8120)));
    // 0x35f198: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x35f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f19c: 0x84a4001a  lh          $a0, 0x1A($a1)
    ctx->pc = 0x35f19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x35f1a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x35f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f1a4: 0x84a30016  lh          $v1, 0x16($a1)
    ctx->pc = 0x35f1a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x35f1a8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x35f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35f1ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f1acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f1b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35f1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35f1b4: 0x0  nop
    ctx->pc = 0x35f1b4u;
    // NOP
    // 0x35f1b8: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x35f1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35f1bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35f1bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35f1c0: 0x0  nop
    ctx->pc = 0x35f1c0u;
    // NOP
    // 0x35f1c4: 0x0  nop
    ctx->pc = 0x35f1c4u;
    // NOP
    // 0x35f1c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x35F1C8u;
    {
        const bool branch_taken_0x35f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1C8u;
        // 0x35f1cc: 0xe6001f9c  swc1        $f0, 0x1F9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f1c8) {
            ctx->pc = 0x35F230u;
            goto label_35f230;
        }
    }
    ctx->pc = 0x35F1D0u;
label_35f1d0:
    // 0x35f1d0: 0x84a40018  lh          $a0, 0x18($a1)
    ctx->pc = 0x35f1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x35f1d4: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x35f1d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35f1d8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x35f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f1dc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x35f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f1e0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x35f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35f1e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f1e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f1e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35f1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35f1ec: 0x0  nop
    ctx->pc = 0x35f1ecu;
    // NOP
    // 0x35f1f0: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x35f1f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35f1f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35f1f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35f1f8: 0xe6001f98  swc1        $f0, 0x1F98($s0)
    ctx->pc = 0x35f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8088), bits); }
    // 0x35f1fc: 0x8e051fb8  lw          $a1, 0x1FB8($s0)
    ctx->pc = 0x35f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8120)));
    // 0x35f200: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x35f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f204: 0x84a4001a  lh          $a0, 0x1A($a1)
    ctx->pc = 0x35f204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x35f208: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x35f208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f20c: 0x84a30016  lh          $v1, 0x16($a1)
    ctx->pc = 0x35f20cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x35f210: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x35f210u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35f214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f218: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35f218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35f21c: 0x0  nop
    ctx->pc = 0x35f21cu;
    // NOP
    // 0x35f220: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x35f220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35f224: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35f224u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35f228: 0xe6001f9c  swc1        $f0, 0x1F9C($s0)
    ctx->pc = 0x35f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8092), bits); }
    // 0x35f22c: 0x0  nop
    ctx->pc = 0x35f22cu;
    // NOP
label_35f230:
    // 0x35f230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35f230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f238: 0x3e00008  jr          $ra
    ctx->pc = 0x35F238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F238u;
        // 0x35f23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F240u;
}
