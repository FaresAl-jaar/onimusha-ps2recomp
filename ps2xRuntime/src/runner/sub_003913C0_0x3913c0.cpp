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

// Function: sub_003913C0
// Address: 0x3913c0 - 0x39152c
void sub_003913C0_0x3913c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003913C0_0x3913c0");
#endif

    switch (ctx->pc) {
        case 0x391450u: goto label_391450;
        case 0x3914bcu: goto label_3914bc;
        case 0x3914ccu: goto label_3914cc;
        case 0x3914e4u: goto label_3914e4;
        case 0x3914f0u: goto label_3914f0;
        case 0x391508u: goto label_391508;
        case 0x391518u: goto label_391518;
        default: break;
    }

    ctx->pc = 0x3913c0u;

    // 0x3913c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3913c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3913c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3913c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3913c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3913c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3913cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3913ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3913d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3913d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3913d4: 0x90830118  lbu         $v1, 0x118($a0)
    ctx->pc = 0x3913d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3913d8: 0x1067003f  beq         $v1, $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x3913D8u;
    {
        const bool branch_taken_0x3913d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x3913DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913D8u;
        // 0x3913dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3913d8) {
            ctx->pc = 0x3914D8u;
            goto label_3914d8;
        }
    }
    ctx->pc = 0x3913E0u;
    // 0x3913e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3913E0u;
    {
        const bool branch_taken_0x3913e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3913e0) {
            ctx->pc = 0x3913F0u;
            goto label_3913f0;
        }
    }
    ctx->pc = 0x3913E8u;
    // 0x3913e8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3913E8u;
    {
        const bool branch_taken_0x3913e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3913e8) {
            ctx->pc = 0x391518u;
            goto label_391518;
        }
    }
    ctx->pc = 0x3913F0u;
label_3913f0:
    // 0x3913f0: 0x96242acc  lhu         $a0, 0x2ACC($s1)
    ctx->pc = 0x3913f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10956)));
    // 0x3913f4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x3913f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x3913f8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3913f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3913fc: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x3913fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x391400: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x391400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x391404: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x391404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x391408: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x391408u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x39140c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39140cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x391410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x391410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x391414: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x391414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x391418: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x391418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x39141c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39141Cu;
    {
        const bool branch_taken_0x39141c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39141Cu;
        // 0x391420: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39141c) {
            ctx->pc = 0x391428u;
            goto label_391428;
        }
    }
    ctx->pc = 0x391424u;
    // 0x391424: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x391424u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_391428:
    // 0x391428: 0x96242ad4  lhu         $a0, 0x2AD4($s1)
    ctx->pc = 0x391428u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10964)));
    // 0x39142c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x39142cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x391430: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x391430u;
    {
        const bool branch_taken_0x391430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x391430) {
            ctx->pc = 0x3914D0u;
            goto label_3914d0;
        }
    }
    ctx->pc = 0x391438u;
    // 0x391438: 0x92220118  lbu         $v0, 0x118($s1)
    ctx->pc = 0x391438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x39143c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x391440: 0xa2220118  sb          $v0, 0x118($s1)
    ctx->pc = 0x391440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 280), (uint8_t)GPR_U32(ctx, 2));
    // 0x391444: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x391444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x391448: 0xc0d1668  jal         func_3459A0
    ctx->pc = 0x391448u;
    SET_GPR_U32(ctx, 31, 0x391450u);
    ctx->pc = 0x39144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391448u;
    // 0x39144c: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459A0u, 0x391448u, 0x391450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391450u;
label_391450:
    // 0x391450: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x391450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x391454: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x391454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x391458: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x391458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39145c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x391460: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x391460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x391464: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x391464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x391468: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x391468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39146c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39146cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391474: 0x0  nop
    ctx->pc = 0x391474u;
    // NOP
    // 0x391478: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x391478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39147c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39147cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x391480: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x391480u;
    {
        const bool branch_taken_0x391480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x391480) {
            ctx->pc = 0x391498u;
            goto label_391498;
        }
    }
    ctx->pc = 0x391488u;
    // 0x391488: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x391488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39148c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x39148cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x391490: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x391490u;
    {
        const bool branch_taken_0x391490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391490u;
        // 0x391494: 0x8e220144  lw          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391490) {
            ctx->pc = 0x3914B4u;
            goto label_3914b4;
        }
    }
    ctx->pc = 0x391498u;
label_391498:
    // 0x391498: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x391498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39149c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39149cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3914a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3914a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3914a4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3914a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3914a8: 0x0  nop
    ctx->pc = 0x3914a8u;
    // NOP
    // 0x3914ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3914acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3914b0: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x3914b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_3914b4:
    // 0x3914b4: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x3914B4u;
    SET_GPR_U32(ctx, 31, 0x3914BCu);
    ctx->pc = 0x3914B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3914B4u;
    // 0x3914b8: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x3914B4u, 0x3914BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3914BCu;
label_3914bc:
    // 0x3914bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3914bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3914c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3914c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3914c4: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3914C4u;
    SET_GPR_U32(ctx, 31, 0x3914CCu);
    ctx->pc = 0x3914C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3914C4u;
    // 0x3914c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x3914C4u, 0x3914CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3914CCu;
label_3914cc:
    // 0x3914cc: 0x0  nop
    ctx->pc = 0x3914ccu;
    // NOP
label_3914d0:
    // 0x3914d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3914D0u;
    {
        const bool branch_taken_0x3914d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3914D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914D0u;
        // 0x3914d4: 0xa6302ad4  sh          $s0, 0x2AD4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10964), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914d0) {
            ctx->pc = 0x391518u;
            goto label_391518;
        }
    }
    ctx->pc = 0x3914D8u;
label_3914d8:
    // 0x3914d8: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x3914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x3914dc: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3914DCu;
    SET_GPR_U32(ctx, 31, 0x3914E4u);
    ctx->pc = 0x3914E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3914DCu;
    // 0x3914e0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3914DCu, 0x3914E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3914E4u;
label_3914e4:
    // 0x3914e4: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x3914e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x3914e8: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3914E8u;
    SET_GPR_U32(ctx, 31, 0x3914F0u);
    ctx->pc = 0x3914ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3914E8u;
    // 0x3914ec: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3914E8u, 0x3914F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3914F0u;
label_3914f0:
    // 0x3914f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3914F0u;
    {
        const bool branch_taken_0x3914f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3914f0) {
            ctx->pc = 0x391518u;
            goto label_391518;
        }
    }
    ctx->pc = 0x3914F8u;
    // 0x3914f8: 0xa2200118  sb          $zero, 0x118($s1)
    ctx->pc = 0x3914f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x3914fc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3914fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x391500: 0xc0d166c  jal         func_3459B0
    ctx->pc = 0x391500u;
    SET_GPR_U32(ctx, 31, 0x391508u);
    ctx->pc = 0x391504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391500u;
    // 0x391504: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459B0u, 0x391500u, 0x391508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391508u;
label_391508:
    // 0x391508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x391508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39150c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x39150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391510: 0xc0d0590  jal         func_341640
    ctx->pc = 0x391510u;
    SET_GPR_U32(ctx, 31, 0x391518u);
    ctx->pc = 0x391514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391510u;
    // 0x391514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x391510u, 0x391518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391518u;
label_391518:
    // 0x391518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x391518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39151c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39151cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391524: 0x3e00008  jr          $ra
    ctx->pc = 0x391524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391524u;
        // 0x391528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39152Cu;
}
