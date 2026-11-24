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

// Function: sub_003D7820
// Address: 0x3d7820 - 0x3d7abc
void sub_003D7820_0x3d7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7820_0x3d7820");
#endif

    switch (ctx->pc) {
        case 0x3d7838u: goto label_3d7838;
        case 0x3d7860u: goto label_3d7860;
        case 0x3d7868u: goto label_3d7868;
        case 0x3d7870u: goto label_3d7870;
        case 0x3d7888u: goto label_3d7888;
        case 0x3d7890u: goto label_3d7890;
        case 0x3d78f8u: goto label_3d78f8;
        case 0x3d7910u: goto label_3d7910;
        case 0x3d7978u: goto label_3d7978;
        case 0x3d7980u: goto label_3d7980;
        case 0x3d79a8u: goto label_3d79a8;
        case 0x3d79b0u: goto label_3d79b0;
        case 0x3d79c8u: goto label_3d79c8;
        case 0x3d79d0u: goto label_3d79d0;
        case 0x3d7a20u: goto label_3d7a20;
        case 0x3d7a28u: goto label_3d7a28;
        case 0x3d7a40u: goto label_3d7a40;
        case 0x3d7a48u: goto label_3d7a48;
        case 0x3d7a60u: goto label_3d7a60;
        case 0x3d7a68u: goto label_3d7a68;
        case 0x3d7a80u: goto label_3d7a80;
        case 0x3d7a88u: goto label_3d7a88;
        case 0x3d7aa0u: goto label_3d7aa0;
        default: break;
    }

    ctx->pc = 0x3d7820u;

    // 0x3d7820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d7824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d7828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d782c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7834: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3d7834u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3d7838:
    // 0x3d7838: 0x92232baf  lbu         $v1, 0x2BAF($s1)
    ctx->pc = 0x3d7838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11183)));
    // 0x3d783c: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x3d783cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x3d7840: 0x10200097  beqz        $at, . + 4 + (0x97 << 2)
    ctx->pc = 0x3D7840u;
    {
        const bool branch_taken_0x3d7840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7840u;
        // 0x3d7844: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7840) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7848u;
    // 0x3d7848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d7848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d784c: 0x248446a0  addiu       $a0, $a0, 0x46A0
    ctx->pc = 0x3d784cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    // 0x3d7850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d7850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d7854: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d7854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d7858: 0x600008  jr          $v1
    ctx->pc = 0x3D7858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D7860u: goto label_3d7860;
            case 0x3D7868u: goto label_3d7868;
            case 0x3D7890u: goto label_3d7890;
            case 0x3D78F8u: goto label_3d78f8;
            case 0x3D7910u: goto label_3d7910;
            case 0x3D7978u: goto label_3d7978;
            case 0x3D79A8u: goto label_3d79a8;
            case 0x3D79B0u: goto label_3d79b0;
            case 0x3D79C8u: goto label_3d79c8;
            case 0x3D79D0u: goto label_3d79d0;
            case 0x3D7A20u: goto label_3d7a20;
            case 0x3D7A28u: goto label_3d7a28;
            case 0x3D7A40u: goto label_3d7a40;
            case 0x3D7A48u: goto label_3d7a48;
            case 0x3D7A60u: goto label_3d7a60;
            case 0x3D7A68u: goto label_3d7a68;
            case 0x3D7A80u: goto label_3d7a80;
            case 0x3D7A88u: goto label_3d7a88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7858u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D7860u;
label_3d7860:
    // 0x3d7860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d7860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7864: 0xa2222baf  sb          $v0, 0x2BAF($s1)
    ctx->pc = 0x3d7864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 2));
label_3d7868:
    // 0x3d7868: 0xc0f5830  jal         func_3D60C0
    ctx->pc = 0x3D7868u;
    SET_GPR_U32(ctx, 31, 0x3D7870u);
    ctx->pc = 0x3D786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7868u;
    // 0x3d786c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D60C0u, 0x3D7868u, 0x3D7870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7870u;
label_3d7870:
    // 0x3d7870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7870u;
    {
        const bool branch_taken_0x3d7870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7870u;
        // 0x3d7874: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7870) {
            ctx->pc = 0x3D7880u;
            goto label_3d7880;
        }
    }
    ctx->pc = 0x3D7878u;
    // 0x3d7878: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x3D7878u;
    {
        const bool branch_taken_0x3d7878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7878u;
        // 0x3d787c: 0xa2232baf  sb          $v1, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7878) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7880u;
label_3d7880:
    // 0x3d7880: 0xc0f5854  jal         func_3D6150
    ctx->pc = 0x3D7880u;
    SET_GPR_U32(ctx, 31, 0x3D7888u);
    ctx->pc = 0x3D7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7880u;
    // 0x3d7884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6150u, 0x3D7880u, 0x3D7888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7888u;
label_3d7888:
    // 0x3d7888: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3D7888u;
    {
        const bool branch_taken_0x3d7888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7888u;
        // 0x3d788c: 0xa2222baf  sb          $v0, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7888) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7890u;
label_3d7890:
    // 0x3d7890: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d7890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d7894: 0xa2232baf  sb          $v1, 0x2BAF($s1)
    ctx->pc = 0x3d7894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7898: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3d7898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3d789c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d78a0: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3d78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3d78a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3d78a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d78a8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3d78a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3d78ac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d78acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d78b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d78b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d78b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d78b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d78b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d78bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d78bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d78c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d78c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d78c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D78C4u;
    {
        const bool branch_taken_0x3d78c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d78c4) {
            ctx->pc = 0x3D78DCu;
            goto label_3d78dc;
        }
    }
    ctx->pc = 0x3D78CCu;
    // 0x3d78cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d78ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d78d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d78d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d78d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D78D4u;
    {
        const bool branch_taken_0x3d78d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78D4u;
        // 0x3d78d8: 0xa6242b26  sh          $a0, 0x2B26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11046), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d78d4) {
            ctx->pc = 0x3D78F8u;
            goto label_3d78f8;
        }
    }
    ctx->pc = 0x3D78DCu;
label_3d78dc:
    // 0x3d78dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d78dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d78e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d78e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d78e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d78e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d78e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d78ec: 0x0  nop
    ctx->pc = 0x3d78ecu;
    // NOP
    // 0x3d78f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d78f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d78f4: 0xa6242b26  sh          $a0, 0x2B26($s1)
    ctx->pc = 0x3d78f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11046), (uint16_t)GPR_U32(ctx, 4));
label_3d78f8:
    // 0x3d78f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3d78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d78fc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d78fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7900: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7904: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3D7904u;
    {
        const bool branch_taken_0x3d7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7904u;
        // 0x3d7908: 0xa2202baf  sb          $zero, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7904) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D790Cu;
    // 0x3d790c: 0x0  nop
    ctx->pc = 0x3d790cu;
    // NOP
label_3d7910:
    // 0x3d7910: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3d7910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d7914: 0xa2222baf  sb          $v0, 0x2BAF($s1)
    ctx->pc = 0x3d7914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d7918: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3d7918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3d791c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d7920: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d7920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3d7924: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d7924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d7928: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3d7928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3d792c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d792cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d7930: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d7930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d7934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d7934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d7938: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d7938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d793c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d793cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d7940: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d7940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d7944: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D7944u;
    {
        const bool branch_taken_0x3d7944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d7944) {
            ctx->pc = 0x3D795Cu;
            goto label_3d795c;
        }
    }
    ctx->pc = 0x3D794Cu;
    // 0x3d794c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d794cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d7950: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d7950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d7954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D7954u;
    {
        const bool branch_taken_0x3d7954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7954u;
        // 0x3d7958: 0xa6232b26  sh          $v1, 0x2B26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11046), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7954) {
            ctx->pc = 0x3D7978u;
            goto label_3d7978;
        }
    }
    ctx->pc = 0x3D795Cu;
label_3d795c:
    // 0x3d795c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d795cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d7960: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d7960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d7964: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d7964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d7968: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d7968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d796c: 0x0  nop
    ctx->pc = 0x3d796cu;
    // NOP
    // 0x3d7970: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d7970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d7974: 0xa6232b26  sh          $v1, 0x2B26($s1)
    ctx->pc = 0x3d7974u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11046), (uint16_t)GPR_U32(ctx, 3));
label_3d7978:
    // 0x3d7978: 0xc0f5830  jal         func_3D60C0
    ctx->pc = 0x3D7978u;
    SET_GPR_U32(ctx, 31, 0x3D7980u);
    ctx->pc = 0x3D797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7978u;
    // 0x3d797c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D60C0u, 0x3D7978u, 0x3D7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7980u;
label_3d7980:
    // 0x3d7980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7980u;
    {
        const bool branch_taken_0x3d7980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7980) {
            ctx->pc = 0x3D7990u;
            goto label_3d7990;
        }
    }
    ctx->pc = 0x3D7988u;
    // 0x3d7988: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3D7988u;
    {
        const bool branch_taken_0x3d7988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7988u;
        // 0x3d798c: 0xa2202baf  sb          $zero, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7988) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7990u;
label_3d7990:
    // 0x3d7990: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3d7990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d7994: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d7994u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7998: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d799c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3D799Cu;
    {
        const bool branch_taken_0x3d799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D799Cu;
        // 0x3d79a0: 0xa2202baf  sb          $zero, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d799c) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D79A4u;
    // 0x3d79a4: 0x0  nop
    ctx->pc = 0x3d79a4u;
    // NOP
label_3d79a8:
    // 0x3d79a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3d79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d79ac: 0xa2232baf  sb          $v1, 0x2BAF($s1)
    ctx->pc = 0x3d79acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
label_3d79b0:
    // 0x3d79b0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x3d79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3d79b4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d79b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d79b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d79b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d79bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d79c0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3D79C0u;
    {
        const bool branch_taken_0x3d79c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79C0u;
        // 0x3d79c4: 0xa2232baf  sb          $v1, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d79c0) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D79C8u;
label_3d79c8:
    // 0x3d79c8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3d79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3d79cc: 0xa2232baf  sb          $v1, 0x2BAF($s1)
    ctx->pc = 0x3d79ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
label_3d79d0:
    // 0x3d79d0: 0x86242b96  lh          $a0, 0x2B96($s1)
    ctx->pc = 0x3d79d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11158)));
    // 0x3d79d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d79d8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3D79D8u;
    {
        const bool branch_taken_0x3d79d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79D8u;
        // 0x3d79dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d79d8) {
            ctx->pc = 0x3D7A10u;
            goto label_3d7a10;
        }
    }
    ctx->pc = 0x3D79E0u;
    // 0x3d79e0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D79E0u;
    {
        const bool branch_taken_0x3d79e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d79e0) {
            ctx->pc = 0x3D7A00u;
            goto label_3d7a00;
        }
    }
    ctx->pc = 0x3D79E8u;
    // 0x3d79e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d79ec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D79ECu;
    {
        const bool branch_taken_0x3d79ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d79ec) {
            ctx->pc = 0x3D7A00u;
            goto label_3d7a00;
        }
    }
    ctx->pc = 0x3D79F4u;
    // 0x3d79f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3D79F4u;
    {
        const bool branch_taken_0x3d79f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d79f4) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D79FCu;
    // 0x3d79fc: 0x0  nop
    ctx->pc = 0x3d79fcu;
    // NOP
label_3d7a00:
    // 0x3d7a00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3d7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3d7a04: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3D7A04u;
    {
        const bool branch_taken_0x3d7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A04u;
        // 0x3d7a08: 0xa2232baf  sb          $v1, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a04) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7A0Cu;
    // 0x3d7a0c: 0x0  nop
    ctx->pc = 0x3d7a0cu;
    // NOP
label_3d7a10:
    // 0x3d7a10: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3d7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3d7a14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D7A14u;
    {
        const bool branch_taken_0x3d7a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A14u;
        // 0x3d7a18: 0xa2232baf  sb          $v1, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a14) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7A1Cu;
    // 0x3d7a1c: 0x0  nop
    ctx->pc = 0x3d7a1cu;
    // NOP
label_3d7a20:
    // 0x3d7a20: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3d7a24: 0xa2232baf  sb          $v1, 0x2BAF($s1)
    ctx->pc = 0x3d7a24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
label_3d7a28:
    // 0x3d7a28: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3d7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3d7a2c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d7a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7a30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7a34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d7a38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3D7A38u;
    {
        const bool branch_taken_0x3d7a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A38u;
        // 0x3d7a3c: 0xa2232baf  sb          $v1, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a38) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7A40u;
label_3d7a40:
    // 0x3d7a40: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3d7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3d7a44: 0xa2232baf  sb          $v1, 0x2BAF($s1)
    ctx->pc = 0x3d7a44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
label_3d7a48:
    // 0x3d7a48: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x3d7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3d7a4c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d7a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7a50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7a54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3d7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3d7a58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3D7A58u;
    {
        const bool branch_taken_0x3d7a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A58u;
        // 0x3d7a5c: 0xa2232baf  sb          $v1, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a58) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7A60u;
label_3d7a60:
    // 0x3d7a60: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3d7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3d7a64: 0xa2232baf  sb          $v1, 0x2BAF($s1)
    ctx->pc = 0x3d7a64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
label_3d7a68:
    // 0x3d7a68: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x3d7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3d7a6c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d7a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7a70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7a74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d7a78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D7A78u;
    {
        const bool branch_taken_0x3d7a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A78u;
        // 0x3d7a7c: 0xa2232baf  sb          $v1, 0x2BAF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a78) {
            ctx->pc = 0x3D7AA0u;
            goto label_3d7aa0;
        }
    }
    ctx->pc = 0x3D7A80u;
label_3d7a80:
    // 0x3d7a80: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3d7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d7a84: 0xa2232baf  sb          $v1, 0x2BAF($s1)
    ctx->pc = 0x3d7a84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 3));
label_3d7a88:
    // 0x3d7a88: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x3d7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3d7a8c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3d7a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d7a90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d7a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7a94: 0xa2202bae  sb          $zero, 0x2BAE($s1)
    ctx->pc = 0x3d7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7a98: 0xa2202baf  sb          $zero, 0x2BAF($s1)
    ctx->pc = 0x3d7a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11183), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7a9c: 0x0  nop
    ctx->pc = 0x3d7a9cu;
    // NOP
label_3d7aa0:
    // 0x3d7aa0: 0x1600ff65  bnez        $s0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x3D7AA0u;
    {
        const bool branch_taken_0x3d7aa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7aa0) {
            ctx->pc = 0x3D7838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7838;
        }
    }
    ctx->pc = 0x3D7AA8u;
    // 0x3d7aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d7aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d7aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AB4u;
        // 0x3d7ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7ABCu;
}
