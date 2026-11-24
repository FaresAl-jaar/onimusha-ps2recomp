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

// Function: sub_003EF680
// Address: 0x3ef680 - 0x3ef954
void sub_003EF680_0x3ef680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF680_0x3ef680");
#endif

    switch (ctx->pc) {
        case 0x3ef698u: goto label_3ef698;
        case 0x3ef6c0u: goto label_3ef6c0;
        case 0x3ef6c8u: goto label_3ef6c8;
        case 0x3ef6e8u: goto label_3ef6e8;
        case 0x3ef750u: goto label_3ef750;
        case 0x3ef768u: goto label_3ef768;
        case 0x3ef770u: goto label_3ef770;
        case 0x3ef788u: goto label_3ef788;
        case 0x3ef798u: goto label_3ef798;
        case 0x3ef7a0u: goto label_3ef7a0;
        case 0x3ef7b8u: goto label_3ef7b8;
        case 0x3ef7c0u: goto label_3ef7c0;
        case 0x3ef7d0u: goto label_3ef7d0;
        case 0x3ef7dcu: goto label_3ef7dc;
        case 0x3ef898u: goto label_3ef898;
        case 0x3ef8a0u: goto label_3ef8a0;
        case 0x3ef8b8u: goto label_3ef8b8;
        case 0x3ef8c0u: goto label_3ef8c0;
        case 0x3ef938u: goto label_3ef938;
        default: break;
    }

    ctx->pc = 0x3ef680u;

    // 0x3ef680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ef680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ef684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ef684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ef688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ef68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ef690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef694: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3ef694u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ef698:
    // 0x3ef698: 0x92232be5  lbu         $v1, 0x2BE5($s1)
    ctx->pc = 0x3ef698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3ef69c: 0x2c61000e  sltiu       $at, $v1, 0xE
    ctx->pc = 0x3ef69cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x3ef6a0: 0x102000a5  beqz        $at, . + 4 + (0xA5 << 2)
    ctx->pc = 0x3EF6A0u;
    {
        const bool branch_taken_0x3ef6a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6A0u;
        // 0x3ef6a4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef6a0) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF6A8u;
    // 0x3ef6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ef6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ef6ac: 0x248459f0  addiu       $a0, $a0, 0x59F0
    ctx->pc = 0x3ef6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
    // 0x3ef6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ef6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ef6b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ef6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ef6b8: 0x600008  jr          $v1
    ctx->pc = 0x3EF6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EF6C0u: goto label_3ef6c0;
            case 0x3EF6C8u: goto label_3ef6c8;
            case 0x3EF6E8u: goto label_3ef6e8;
            case 0x3EF750u: goto label_3ef750;
            case 0x3EF768u: goto label_3ef768;
            case 0x3EF770u: goto label_3ef770;
            case 0x3EF788u: goto label_3ef788;
            case 0x3EF798u: goto label_3ef798;
            case 0x3EF7B8u: goto label_3ef7b8;
            case 0x3EF7C0u: goto label_3ef7c0;
            case 0x3EF898u: goto label_3ef898;
            case 0x3EF8A0u: goto label_3ef8a0;
            case 0x3EF8B8u: goto label_3ef8b8;
            case 0x3EF8C0u: goto label_3ef8c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF6B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EF6C0u;
label_3ef6c0:
    // 0x3ef6c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ef6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ef6c4: 0xa2232be5  sb          $v1, 0x2BE5($s1)
    ctx->pc = 0x3ef6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
label_3ef6c8:
    // 0x3ef6c8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3ef6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ef6cc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef6d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ef6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ef6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ef6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ef6d8: 0xa2242be5  sb          $a0, 0x2BE5($s1)
    ctx->pc = 0x3ef6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ef6dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef6e0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x3EF6E0u;
    {
        const bool branch_taken_0x3ef6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6E0u;
        // 0x3ef6e4: 0xa2232b56  sb          $v1, 0x2B56($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11094), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef6e0) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF6E8u;
label_3ef6e8:
    // 0x3ef6e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ef6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ef6ec: 0xa2232be5  sb          $v1, 0x2BE5($s1)
    ctx->pc = 0x3ef6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef6f0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3ef6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3ef6f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ef6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef6f8: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3ef6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3ef6fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ef6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ef700: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3ef700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3ef704: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ef704u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ef708: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ef708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ef70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ef70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ef710: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ef710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ef714: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ef714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ef718: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ef71c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF71Cu;
    {
        const bool branch_taken_0x3ef71c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ef71c) {
            ctx->pc = 0x3EF734u;
            goto label_3ef734;
        }
    }
    ctx->pc = 0x3EF724u;
    // 0x3ef724: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef728: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ef728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ef72c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF72Cu;
    {
        const bool branch_taken_0x3ef72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF72Cu;
        // 0x3ef730: 0xa6242b34  sh          $a0, 0x2B34($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef72c) {
            ctx->pc = 0x3EF750u;
            goto label_3ef750;
        }
    }
    ctx->pc = 0x3EF734u;
label_3ef734:
    // 0x3ef734: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ef734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ef738: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ef738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ef73c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef73cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef740: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ef740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ef744: 0x0  nop
    ctx->pc = 0x3ef744u;
    // NOP
    // 0x3ef748: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ef748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ef74c: 0xa6242b34  sh          $a0, 0x2B34($s1)
    ctx->pc = 0x3ef74cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
label_3ef750:
    // 0x3ef750: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3ef750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3ef754: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef758: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef75c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ef75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ef760: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x3EF760u;
    {
        const bool branch_taken_0x3ef760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF760u;
        // 0x3ef764: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef760) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF768u;
label_3ef768:
    // 0x3ef768: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ef768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ef76c: 0xa2232be5  sb          $v1, 0x2BE5($s1)
    ctx->pc = 0x3ef76cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
label_3ef770:
    // 0x3ef770: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3ef770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3ef774: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef77c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ef77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ef780: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x3EF780u;
    {
        const bool branch_taken_0x3ef780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF780u;
        // 0x3ef784: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef780) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF788u;
label_3ef788:
    // 0x3ef788: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3ef788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ef78c: 0xa2222be5  sb          $v0, 0x2BE5($s1)
    ctx->pc = 0x3ef78cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ef790: 0xa2202b56  sb          $zero, 0x2B56($s1)
    ctx->pc = 0x3ef790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ef794: 0x0  nop
    ctx->pc = 0x3ef794u;
    // NOP
label_3ef798:
    // 0x3ef798: 0xc0fb698  jal         func_3EDA60
    ctx->pc = 0x3EF798u;
    SET_GPR_U32(ctx, 31, 0x3EF7A0u);
    ctx->pc = 0x3EF79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF798u;
    // 0x3ef79c: 0x86242b6c  lh          $a0, 0x2B6C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDA60u, 0x3EF798u, 0x3EF7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7A0u;
label_3ef7a0:
    // 0x3ef7a0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x3ef7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3ef7a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef7a8: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef7ac: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3ef7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ef7b0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3EF7B0u;
    {
        const bool branch_taken_0x3ef7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7B0u;
        // 0x3ef7b4: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef7b0) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF7B8u;
label_3ef7b8:
    // 0x3ef7b8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3ef7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3ef7bc: 0xa2222be5  sb          $v0, 0x2BE5($s1)
    ctx->pc = 0x3ef7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 2));
label_3ef7c0:
    // 0x3ef7c0: 0x8e252b28  lw          $a1, 0x2B28($s1)
    ctx->pc = 0x3ef7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11048)));
    // 0x3ef7c4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3ef7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3ef7c8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3EF7C8u;
    SET_GPR_U32(ctx, 31, 0x3EF7D0u);
    ctx->pc = 0x3EF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7C8u;
    // 0x3ef7cc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3EF7C8u, 0x3EF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7D0u;
label_3ef7d0:
    // 0x3ef7d0: 0x92252b54  lbu         $a1, 0x2B54($s1)
    ctx->pc = 0x3ef7d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11092)));
    // 0x3ef7d4: 0xc0fb64c  jal         func_3ED930
    ctx->pc = 0x3EF7D4u;
    SET_GPR_U32(ctx, 31, 0x3EF7DCu);
    ctx->pc = 0x3EF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7D4u;
    // 0x3ef7d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED930u, 0x3EF7D4u, 0x3EF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7DCu;
label_3ef7dc:
    // 0x3ef7dc: 0xa6222b6c  sh          $v0, 0x2B6C($s1)
    ctx->pc = 0x3ef7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11116), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ef7e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ef7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ef7e4: 0x86242b6c  lh          $a0, 0x2B6C($s1)
    ctx->pc = 0x3ef7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11116)));
    // 0x3ef7e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF7E8u;
    {
        const bool branch_taken_0x3ef7e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7E8u;
        // 0x3ef7ec: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef7e8) {
            ctx->pc = 0x3EF7F8u;
            goto label_3ef7f8;
        }
    }
    ctx->pc = 0x3EF7F0u;
    // 0x3ef7f0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3EF7F0u;
    {
        const bool branch_taken_0x3ef7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7F0u;
        // 0x3ef7f4: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef7f0) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF7F8u;
label_3ef7f8:
    // 0x3ef7f8: 0x82252b54  lb          $a1, 0x2B54($s1)
    ctx->pc = 0x3ef7f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11092)));
    // 0x3ef7fc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3ef7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3ef800: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ef800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ef804: 0x24845960  addiu       $a0, $a0, 0x5960
    ctx->pc = 0x3ef804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22880));
    // 0x3ef808: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ef808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ef80c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3ef80cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef810: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3EF810u;
    {
        const bool branch_taken_0x3ef810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF810u;
        // 0x3ef814: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef810) {
            ctx->pc = 0x3EF888u;
            goto label_3ef888;
        }
    }
    ctx->pc = 0x3EF818u;
    // 0x3ef818: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3EF818u;
    {
        const bool branch_taken_0x3ef818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ef818) {
            ctx->pc = 0x3EF870u;
            goto label_3ef870;
        }
    }
    ctx->pc = 0x3EF820u;
    // 0x3ef820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ef820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ef824: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3EF824u;
    {
        const bool branch_taken_0x3ef824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ef824) {
            ctx->pc = 0x3EF858u;
            goto label_3ef858;
        }
    }
    ctx->pc = 0x3EF82Cu;
    // 0x3ef82c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF82Cu;
    {
        const bool branch_taken_0x3ef82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef82c) {
            ctx->pc = 0x3EF840u;
            goto label_3ef840;
        }
    }
    ctx->pc = 0x3EF834u;
    // 0x3ef834: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3EF834u;
    {
        const bool branch_taken_0x3ef834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef834) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF83Cu;
    // 0x3ef83c: 0x0  nop
    ctx->pc = 0x3ef83cu;
    // NOP
label_3ef840:
    // 0x3ef840: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x3ef840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3ef844: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef848: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef84c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ef84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ef850: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3EF850u;
    {
        const bool branch_taken_0x3ef850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF850u;
        // 0x3ef854: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef850) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF858u;
label_3ef858:
    // 0x3ef858: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x3ef858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3ef85c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef860: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef864: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ef864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ef868: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3EF868u;
    {
        const bool branch_taken_0x3ef868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF868u;
        // 0x3ef86c: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef868) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF870u;
label_3ef870:
    // 0x3ef870: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x3ef870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3ef874: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef878: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef87c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ef87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ef880: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3EF880u;
    {
        const bool branch_taken_0x3ef880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF880u;
        // 0x3ef884: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef880) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF888u;
label_3ef888:
    // 0x3ef888: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ef888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ef88c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3EF88Cu;
    {
        const bool branch_taken_0x3ef88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF88Cu;
        // 0x3ef890: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef88c) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF894u;
    // 0x3ef894: 0x0  nop
    ctx->pc = 0x3ef894u;
    // NOP
label_3ef898:
    // 0x3ef898: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3ef898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ef89c: 0xa2232be5  sb          $v1, 0x2BE5($s1)
    ctx->pc = 0x3ef89cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
label_3ef8a0:
    // 0x3ef8a0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3ef8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3ef8a4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef8a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ef8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef8ac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ef8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ef8b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3EF8B0u;
    {
        const bool branch_taken_0x3ef8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8B0u;
        // 0x3ef8b4: 0xa2232be5  sb          $v1, 0x2BE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef8b0) {
            ctx->pc = 0x3EF938u;
            goto label_3ef938;
        }
    }
    ctx->pc = 0x3EF8B8u;
label_3ef8b8:
    // 0x3ef8b8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ef8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ef8bc: 0xa2232be5  sb          $v1, 0x2BE5($s1)
    ctx->pc = 0x3ef8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 3));
label_3ef8c0:
    // 0x3ef8c0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3ef8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3ef8c4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ef8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef8c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3ef8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ef8cc: 0xa2242be5  sb          $a0, 0x2BE5($s1)
    ctx->pc = 0x3ef8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11237), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ef8d0: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x3ef8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x3ef8d4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ef8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef8d8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ef8d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ef8dc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ef8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ef8e0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ef8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ef8e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ef8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ef8e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ef8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ef8ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ef8ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ef8f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ef8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ef8f4: 0x0  nop
    ctx->pc = 0x3ef8f4u;
    // NOP
    // 0x3ef8f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ef8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ef8fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef8fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ef900: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF900u;
    {
        const bool branch_taken_0x3ef900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF900u;
        // 0x3ef904: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef900) {
            ctx->pc = 0x3EF918u;
            goto label_3ef918;
        }
    }
    ctx->pc = 0x3EF908u;
    // 0x3ef908: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef90c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ef90cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ef910: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF910u;
    {
        const bool branch_taken_0x3ef910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF910u;
        // 0x3ef914: 0xa6242b34  sh          $a0, 0x2B34($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef910) {
            ctx->pc = 0x3EF934u;
            goto label_3ef934;
        }
    }
    ctx->pc = 0x3EF918u;
label_3ef918:
    // 0x3ef918: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ef918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ef91c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ef91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ef920: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef924: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ef924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ef928: 0x0  nop
    ctx->pc = 0x3ef928u;
    // NOP
    // 0x3ef92c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ef92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ef930: 0xa6242b34  sh          $a0, 0x2B34($s1)
    ctx->pc = 0x3ef930u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11060), (uint16_t)GPR_U32(ctx, 4));
label_3ef934:
    // 0x3ef934: 0x0  nop
    ctx->pc = 0x3ef934u;
    // NOP
label_3ef938:
    // 0x3ef938: 0x1600ff57  bnez        $s0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x3EF938u;
    {
        const bool branch_taken_0x3ef938 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef938) {
            ctx->pc = 0x3EF698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ef698;
        }
    }
    ctx->pc = 0x3EF940u;
    // 0x3ef940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ef940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ef944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ef944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef94c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF94Cu;
        // 0x3ef950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF954u;
}
