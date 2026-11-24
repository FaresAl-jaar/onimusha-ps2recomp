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

// Function: sub_00322690
// Address: 0x322690 - 0x3227f4
void sub_00322690_0x322690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322690_0x322690");
#endif

    switch (ctx->pc) {
        case 0x3226dcu: goto label_3226dc;
        case 0x3226e4u: goto label_3226e4;
        case 0x322748u: goto label_322748;
        case 0x3227d0u: goto label_3227d0;
        default: break;
    }

    ctx->pc = 0x322690u;

    // 0x322690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x322690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x322694: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x322694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x322698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x322698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32269c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x32269cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3226a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3226a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3226a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3226a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3226a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3226a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3226ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3226acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3226b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3226b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3226b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3226b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3226b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3226b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3226bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3226bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3226c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3226c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3226c4: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x3226c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x3226c8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x3226c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3226cc: 0x618821  addu        $s1, $v1, $at
    ctx->pc = 0x3226ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x3226d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3226d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226d4: 0xc0cfae0  jal         func_33EB80
    ctx->pc = 0x3226D4u;
    SET_GPR_U32(ctx, 31, 0x3226DCu);
    ctx->pc = 0x3226D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226D4u;
    // 0x3226d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB80u, 0x3226D4u, 0x3226DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226DCu;
label_3226dc:
    // 0x3226dc: 0xc0c8344  jal         func_320D10
    ctx->pc = 0x3226DCu;
    SET_GPR_U32(ctx, 31, 0x3226E4u);
    ctx->pc = 0x3226E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226DCu;
    // 0x3226e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D10u, 0x3226DCu, 0x3226E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226E4u;
label_3226e4:
    // 0x3226e4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3226e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3226e8: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x3226e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3226ec: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3226ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3226f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3226f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3226f4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3226f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3226f8: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3226f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3226fc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3226fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x322700: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x322700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x322704: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x322704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x322708: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x322708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x32270c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x32270cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x322710: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x322710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x322714: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x322714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x322718: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x322718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x32271c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x32271cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x322720: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x322720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x322724: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x322724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x322728: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x322728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x32272c: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x32272cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x322730: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x322730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x322734: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x322734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x322738: 0x8642000c  lh          $v0, 0xC($s2)
    ctx->pc = 0x322738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x32273c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x32273cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x322740: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x322740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x322744: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x322744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_322748:
    // 0x322748: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x322748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32274c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x32274cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x322750: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x322750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x322754: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x322754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x322758: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x322758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x32275c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x32275cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x322760: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x322760u;
    {
        const bool branch_taken_0x322760 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x322764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322760u;
        // 0x322764: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322760) {
            ctx->pc = 0x322748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322748;
        }
    }
    ctx->pc = 0x322768u;
    // 0x322768: 0xc6430050  lwc1        $f3, 0x50($s2)
    ctx->pc = 0x322768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32276c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32276cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322770: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x322770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x322774: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x322774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322778: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x322778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32277c: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x32277cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x322780: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x322780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x322784: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x322784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x322788: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x322788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x32278c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x322790: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x322790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x322794: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x322794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x322798: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x322798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x32279c: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x32279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3227a0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x3227a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x3227a4: 0xc643006c  lwc1        $f3, 0x6C($s2)
    ctx->pc = 0x3227a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3227a8: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x3227a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3227ac: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x3227acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3227b0: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x3227b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3227b4: 0xe603006c  swc1        $f3, 0x6C($s0)
    ctx->pc = 0x3227b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x3227b8: 0xe6020070  swc1        $f2, 0x70($s0)
    ctx->pc = 0x3227b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x3227bc: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x3227bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x3227c0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x3227c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x3227c4: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x3227c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x3227c8: 0xc0c8058  jal         func_320160
    ctx->pc = 0x3227C8u;
    SET_GPR_U32(ctx, 31, 0x3227D0u);
    ctx->pc = 0x3227CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227C8u;
    // 0x3227cc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320160u, 0x3227C8u, 0x3227D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227D0u;
label_3227d0:
    // 0x3227d0: 0xae30004c  sw          $s0, 0x4C($s1)
    ctx->pc = 0x3227d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
    // 0x3227d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3227d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3227d8: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x3227d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x3227dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3227dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3227e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3227e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3227e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3227e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3227e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3227e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3227ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3227ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3227F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227ECu;
        // 0x3227f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3227ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3227F4u;
}
