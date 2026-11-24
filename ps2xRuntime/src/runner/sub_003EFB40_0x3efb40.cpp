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

// Function: sub_003EFB40
// Address: 0x3efb40 - 0x3efcb0
void sub_003EFB40_0x3efb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFB40_0x3efb40");
#endif

    switch (ctx->pc) {
        case 0x3efb54u: goto label_3efb54;
        case 0x3efc48u: goto label_3efc48;
        case 0x3efc7cu: goto label_3efc7c;
        case 0x3efc98u: goto label_3efc98;
        case 0x3efca0u: goto label_3efca0;
        default: break;
    }

    ctx->pc = 0x3efb40u;

    // 0x3efb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3efb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3efb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3efb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3efb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3efb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3efb4c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3EFB4Cu;
    SET_GPR_U32(ctx, 31, 0x3EFB54u);
    ctx->pc = 0x3EFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFB4Cu;
    // 0x3efb50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3EFB4Cu, 0x3EFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFB54u;
label_3efb54:
    // 0x3efb54: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3efb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3efb58: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x3efb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x3efb5c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3efb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3efb60: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x3efb60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3efb64: 0x24c6f380  addiu       $a2, $a2, -0xC80
    ctx->pc = 0x3efb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964096));
    // 0x3efb68: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x3efb68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x3efb6c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3efb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3efb70: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x3efb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
    // 0x3efb74: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3efb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3efb78: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3efb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3efb7c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3efb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3efb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3efb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3efb84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3efb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3efb88: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3efb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3efb8c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3efb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3efb90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3efb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3efb94: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3efb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3efb98: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x3efb98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x3efb9c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3efb9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3efba0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3efba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3efba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3efba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3efba8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3efba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3efbac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3efbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3efbb0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3efbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x3efbb4: 0xae0400e8  sw          $a0, 0xE8($s0)
    ctx->pc = 0x3efbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
    // 0x3efbb8: 0xae0406c0  sw          $a0, 0x6C0($s0)
    ctx->pc = 0x3efbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 4));
    // 0x3efbbc: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3efbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3efbc0: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3efbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3efbc4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3efbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3efbc8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3efbc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3efbcc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3efbccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3efbd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3efbd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3efbd4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EFBD4u;
    {
        const bool branch_taken_0x3efbd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3efbd4) {
            ctx->pc = 0x3EFBECu;
            goto label_3efbec;
        }
    }
    ctx->pc = 0x3EFBDCu;
    // 0x3efbdc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3efbdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3efbe0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3efbe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3efbe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EFBE4u;
    {
        const bool branch_taken_0x3efbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFBE4u;
        // 0x3efbe8: 0xa6032b34  sh          $v1, 0x2B34($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11060), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efbe4) {
            ctx->pc = 0x3EFC08u;
            goto label_3efc08;
        }
    }
    ctx->pc = 0x3EFBECu;
label_3efbec:
    // 0x3efbec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3efbecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3efbf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3efbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3efbf4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3efbf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3efbf8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3efbf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3efbfc: 0x0  nop
    ctx->pc = 0x3efbfcu;
    // NOP
    // 0x3efc00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3efc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3efc04: 0xa6032b34  sh          $v1, 0x2B34($s0)
    ctx->pc = 0x3efc04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11060), (uint16_t)GPR_U32(ctx, 3));
label_3efc08:
    // 0x3efc08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3efc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3efc0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3efc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3efc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efc14: 0xa2032b54  sb          $v1, 0x2B54($s0)
    ctx->pc = 0x3efc14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11092), (uint8_t)GPR_U32(ctx, 3));
    // 0x3efc18: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3efc18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3efc1c: 0xa6032b6c  sh          $v1, 0x2B6C($s0)
    ctx->pc = 0x3efc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11116), (uint16_t)GPR_U32(ctx, 3));
    // 0x3efc20: 0xae002be8  sw          $zero, 0x2BE8($s0)
    ctx->pc = 0x3efc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11240), GPR_U32(ctx, 0));
    // 0x3efc24: 0xa6002b52  sh          $zero, 0x2B52($s0)
    ctx->pc = 0x3efc24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11090), (uint16_t)GPR_U32(ctx, 0));
    // 0x3efc28: 0xa2002be4  sb          $zero, 0x2BE4($s0)
    ctx->pc = 0x3efc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 0));
    // 0x3efc2c: 0xa2002be0  sb          $zero, 0x2BE0($s0)
    ctx->pc = 0x3efc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11232), (uint8_t)GPR_U32(ctx, 0));
    // 0x3efc30: 0xa2002be1  sb          $zero, 0x2BE1($s0)
    ctx->pc = 0x3efc30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 0));
    // 0x3efc34: 0xa2022b56  sb          $v0, 0x2B56($s0)
    ctx->pc = 0x3efc34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 2));
    // 0x3efc38: 0xa6002be2  sh          $zero, 0x2BE2($s0)
    ctx->pc = 0x3efc38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11234), (uint16_t)GPR_U32(ctx, 0));
    // 0x3efc3c: 0xae002b20  sw          $zero, 0x2B20($s0)
    ctx->pc = 0x3efc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 0));
    // 0x3efc40: 0xc0fb60c  jal         func_3ED830
    ctx->pc = 0x3EFC40u;
    SET_GPR_U32(ctx, 31, 0x3EFC48u);
    ctx->pc = 0x3EFC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFC40u;
    // 0x3efc44: 0xae002b24  sw          $zero, 0x2B24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED830u, 0x3EFC40u, 0x3EFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFC48u;
label_3efc48:
    // 0x3efc48: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3efc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3efc4c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3efc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3efc50: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x3efc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3efc54: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3efc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3efc58: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3efc58u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x6600A0u));
    // 0x3efc5c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3efc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3efc60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3efc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efc64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3efc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3efc68: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3efc68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x3efc6c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x3efc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3efc70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3efc70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x6600B0u));
    // 0x3efc74: 0xc053b28  jal         func_14ECA0
    ctx->pc = 0x3EFC74u;
    SET_GPR_U32(ctx, 31, 0x3EFC7Cu);
    ctx->pc = 0x3EFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFC74u;
    // 0x3efc78: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x3EFC74u, 0x3EFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFC7Cu;
label_3efc7c:
    // 0x3efc7c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3efc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3efc80: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3efc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3efc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3efc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efc88: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3efc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3efc8c: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x3efc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3efc90: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3EFC90u;
    SET_GPR_U32(ctx, 31, 0x3EFC98u);
    ctx->pc = 0x3EFC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFC90u;
    // 0x3efc94: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3EFC90u, 0x3EFC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFC98u;
label_3efc98:
    // 0x3efc98: 0xc0fb76c  jal         func_3EDDB0
    ctx->pc = 0x3EFC98u;
    SET_GPR_U32(ctx, 31, 0x3EFCA0u);
    ctx->pc = 0x3EFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFC98u;
    // 0x3efc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDDB0u, 0x3EFC98u, 0x3EFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFCA0u;
label_3efca0:
    // 0x3efca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3efca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3efca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3efca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3efca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EFCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCA8u;
        // 0x3efcac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EFCB0u;
}
