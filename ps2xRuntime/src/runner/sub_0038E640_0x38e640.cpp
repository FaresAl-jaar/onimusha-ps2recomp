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

// Function: sub_0038E640
// Address: 0x38e640 - 0x38e994
void sub_0038E640_0x38e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E640_0x38e640");
#endif

    switch (ctx->pc) {
        case 0x38e690u: goto label_38e690;
        case 0x38e69cu: goto label_38e69c;
        case 0x38e6e8u: goto label_38e6e8;
        case 0x38e6fcu: goto label_38e6fc;
        case 0x38e704u: goto label_38e704;
        case 0x38e718u: goto label_38e718;
        case 0x38e7a4u: goto label_38e7a4;
        case 0x38e7bcu: goto label_38e7bc;
        case 0x38e7c8u: goto label_38e7c8;
        case 0x38e818u: goto label_38e818;
        case 0x38e840u: goto label_38e840;
        case 0x38e890u: goto label_38e890;
        case 0x38e8a4u: goto label_38e8a4;
        case 0x38e8acu: goto label_38e8ac;
        case 0x38e8c0u: goto label_38e8c0;
        case 0x38e958u: goto label_38e958;
        case 0x38e970u: goto label_38e970;
        default: break;
    }

    ctx->pc = 0x38e640u;

    // 0x38e640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38e644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38e648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38e64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38e650: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x38e650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x38e654: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x38e654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x38e658: 0x102000c9  beqz        $at, . + 4 + (0xC9 << 2)
    ctx->pc = 0x38E658u;
    {
        const bool branch_taken_0x38e658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E658u;
        // 0x38e65c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e658) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E660u;
    // 0x38e660: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x38e660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x38e664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38e664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38e668: 0x24842180  addiu       $a0, $a0, 0x2180
    ctx->pc = 0x38e668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8576));
    // 0x38e66c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38e670: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38e670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38e674: 0x600008  jr          $v1
    ctx->pc = 0x38E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38E680u: goto label_38e680;
            case 0x38E6E0u: goto label_38e6e0;
            case 0x38E810u: goto label_38e810;
            case 0x38E888u: goto label_38e888;
            case 0x38E948u: goto label_38e948;
            case 0x38E970u: goto label_38e970;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E674u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38E67Cu;
    // 0x38e67c: 0x0  nop
    ctx->pc = 0x38e67cu;
    // NOP
label_38e680:
    // 0x38e680: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38e684: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x38e688: 0xc0e40a0  jal         func_390280
    ctx->pc = 0x38E688u;
    SET_GPR_U32(ctx, 31, 0x38E690u);
    ctx->pc = 0x38E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E688u;
    // 0x38e68c: 0x24440530  addiu       $a0, $v0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390280u, 0x38E688u, 0x38E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E690u;
label_38e690:
    // 0x38e690: 0xae022b44  sw          $v0, 0x2B44($s0)
    ctx->pc = 0x38e690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11076), GPR_U32(ctx, 2));
    // 0x38e694: 0xc0c0890  jal         func_302240
    ctx->pc = 0x38E694u;
    SET_GPR_U32(ctx, 31, 0x38E69Cu);
    ctx->pc = 0x38E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E694u;
    // 0x38e698: 0x8e042b44  lw          $a0, 0x2B44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x38E694u, 0x38E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E69Cu;
label_38e69c:
    // 0x38e69c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E69Cu;
    {
        const bool branch_taken_0x38e69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E69Cu;
        // 0x38e6a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e69c) {
            ctx->pc = 0x38E6B0u;
            goto label_38e6b0;
        }
    }
    ctx->pc = 0x38E6A4u;
    // 0x38e6a4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x38E6A4u;
    {
        const bool branch_taken_0x38e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6A4u;
        // 0x38e6a8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6a4) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E6ACu;
    // 0x38e6ac: 0x0  nop
    ctx->pc = 0x38e6acu;
    // NOP
label_38e6b0:
    // 0x38e6b0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38e6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e6b4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38e6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e6b8: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x38e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x38e6bc: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x38e6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38e6c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38e6c4: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x38e6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38e6c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38e6cc: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x38e6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38e6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e6d4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x38e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x38e6d8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x38e6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x38e6dc: 0x0  nop
    ctx->pc = 0x38e6dcu;
    // NOP
label_38e6e0:
    // 0x38e6e0: 0xc0c0890  jal         func_302240
    ctx->pc = 0x38E6E0u;
    SET_GPR_U32(ctx, 31, 0x38E6E8u);
    ctx->pc = 0x38E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6E0u;
    // 0x38e6e4: 0x8e042b44  lw          $a0, 0x2B44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x38E6E0u, 0x38E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6E8u;
label_38e6e8:
    // 0x38e6e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38E6E8u;
    {
        const bool branch_taken_0x38e6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6E8u;
        // 0x38e6ec: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6e8) {
            ctx->pc = 0x38E720u;
            goto label_38e720;
        }
    }
    ctx->pc = 0x38E6F0u;
    // 0x38e6f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38e6f4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x38E6F4u;
    SET_GPR_U32(ctx, 31, 0x38E6FCu);
    ctx->pc = 0x38E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6F4u;
    // 0x38e6f8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x38E6F4u, 0x38E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6FCu;
label_38e6fc:
    // 0x38e6fc: 0xc096e44  jal         func_25B910
    ctx->pc = 0x38E6FCu;
    SET_GPR_U32(ctx, 31, 0x38E704u);
    ctx->pc = 0x38E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6FCu;
    // 0x38e700: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x38E6FCu, 0x38E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E704u;
label_38e704:
    // 0x38e704: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x38e704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38e708: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x38e708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38e70c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x38e70cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x38e710: 0xc097498  jal         func_25D260
    ctx->pc = 0x38E710u;
    SET_GPR_U32(ctx, 31, 0x38E718u);
    ctx->pc = 0x38E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E710u;
    // 0x38e714: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x38E710u, 0x38E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E718u;
label_38e718:
    // 0x38e718: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x38e718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x38e71c: 0x0  nop
    ctx->pc = 0x38e71cu;
    // NOP
label_38e720:
    // 0x38e720: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x38e720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x38e724: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38e728: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38e728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38e72c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x38e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x38e730: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x38e730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x38e734: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38e734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38e738: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38e738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38e73c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38e73cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38e740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38e740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38e744: 0x0  nop
    ctx->pc = 0x38e744u;
    // NOP
    // 0x38e748: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38e748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38e74c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38e74cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38e750: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38E750u;
    {
        const bool branch_taken_0x38e750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E750u;
        // 0x38e754: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e750) {
            ctx->pc = 0x38E768u;
            goto label_38e768;
        }
    }
    ctx->pc = 0x38E758u;
    // 0x38e758: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e75c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e760: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38E760u;
    {
        const bool branch_taken_0x38e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e760) {
            ctx->pc = 0x38E780u;
            goto label_38e780;
        }
    }
    ctx->pc = 0x38E768u;
label_38e768:
    // 0x38e768: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38e768u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38e76c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e770: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e774: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e778: 0x0  nop
    ctx->pc = 0x38e778u;
    // NOP
    // 0x38e77c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38e77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38e780:
    // 0x38e780: 0x14a40013  bne         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38E780u;
    {
        const bool branch_taken_0x38e780 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x38e780) {
            ctx->pc = 0x38E7D0u;
            goto label_38e7d0;
        }
    }
    ctx->pc = 0x38E788u;
    // 0x38e788: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x38e788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x38e78c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x38e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38e790: 0x2442c790  addiu       $v0, $v0, -0x3870
    ctx->pc = 0x38e790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952848));
    // 0x38e794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e798: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38e798u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65C790u));
    // 0x38e79c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x38E79Cu;
    SET_GPR_U32(ctx, 31, 0x38E7A4u);
    ctx->pc = 0x38E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E79Cu;
    // 0x38e7a0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x38E79Cu, 0x38E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E7A4u;
label_38e7a4:
    // 0x38e7a4: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x38e7a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x38e7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38e7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e7ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e7b0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x38e7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x38e7b4: 0xc0aa220  jal         func_2A8880
    ctx->pc = 0x38E7B4u;
    SET_GPR_U32(ctx, 31, 0x38E7BCu);
    ctx->pc = 0x38E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E7B4u;
    // 0x38e7b8: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8880u, 0x38E7B4u, 0x38E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E7BCu;
label_38e7bc:
    // 0x38e7bc: 0x8e042958  lw          $a0, 0x2958($s0)
    ctx->pc = 0x38e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10584)));
    // 0x38e7c0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x38E7C0u;
    SET_GPR_U32(ctx, 31, 0x38E7C8u);
    ctx->pc = 0x38E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E7C0u;
    // 0x38e7c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x38E7C0u, 0x38E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E7C8u;
label_38e7c8:
    // 0x38e7c8: 0xae112958  sw          $s1, 0x2958($s0)
    ctx->pc = 0x38e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10584), GPR_U32(ctx, 17));
    // 0x38e7cc: 0x0  nop
    ctx->pc = 0x38e7ccu;
    // NOP
label_38e7d0:
    // 0x38e7d0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x38e7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x38e7d4: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x38E7D4u;
    {
        const bool branch_taken_0x38e7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e7d4) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E7DCu;
    // 0x38e7dc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38e7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e7e0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x38e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x38e7e4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38e7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e7e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x38e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38e7ec: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x38e7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x38e7f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e7f4: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x38e7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x38e7f8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x38e7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x38e7fc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x38e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x38e800: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38e804: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x38E804u;
    {
        const bool branch_taken_0x38e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E804u;
        // 0x38e808: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e804) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E80Cu;
    // 0x38e80c: 0x0  nop
    ctx->pc = 0x38e80cu;
    // NOP
label_38e810:
    // 0x38e810: 0xc0c0890  jal         func_302240
    ctx->pc = 0x38E810u;
    SET_GPR_U32(ctx, 31, 0x38E818u);
    ctx->pc = 0x38E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E810u;
    // 0x38e814: 0x8e042b44  lw          $a0, 0x2B44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x38E810u, 0x38E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E818u;
label_38e818:
    // 0x38e818: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38e818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e81c: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x38E81Cu;
    {
        const bool branch_taken_0x38e81c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e81c) {
            ctx->pc = 0x38E850u;
            goto label_38e850;
        }
    }
    ctx->pc = 0x38E824u;
    // 0x38e824: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x38e824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x38e828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e82c: 0x920a2b3c  lbu         $t2, 0x2B3C($s0)
    ctx->pc = 0x38e82cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x38e830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e834: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x38e834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x38e838: 0xc0bc748  jal         func_2F1D20
    ctx->pc = 0x38E838u;
    SET_GPR_U32(ctx, 31, 0x38E840u);
    ctx->pc = 0x38E83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E838u;
    // 0x38e83c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1D20u, 0x38E838u, 0x38E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E840u;
label_38e840:
    // 0x38e840: 0xae022b48  sw          $v0, 0x2B48($s0)
    ctx->pc = 0x38e840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11080), GPR_U32(ctx, 2));
    // 0x38e844: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38e848: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38E848u;
    {
        const bool branch_taken_0x38e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E848u;
        // 0x38e84c: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e848) {
            ctx->pc = 0x38E880u;
            goto label_38e880;
        }
    }
    ctx->pc = 0x38E850u;
label_38e850:
    // 0x38e850: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38e850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e854: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38e854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e858: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x38e858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x38e85c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x38e85cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x38e860: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x38e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38e864: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x38e864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x38e868: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e86c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x38e86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x38e870: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e874: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x38e874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x38e878: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x38E878u;
    {
        const bool branch_taken_0x38e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E878u;
        // 0x38e87c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e878) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E880u;
label_38e880:
    // 0x38e880: 0xa2002b3d  sb          $zero, 0x2B3D($s0)
    ctx->pc = 0x38e880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11069), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e884: 0x0  nop
    ctx->pc = 0x38e884u;
    // NOP
label_38e888:
    // 0x38e888: 0xc0c0890  jal         func_302240
    ctx->pc = 0x38E888u;
    SET_GPR_U32(ctx, 31, 0x38E890u);
    ctx->pc = 0x38E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E888u;
    // 0x38e88c: 0x8e042b44  lw          $a0, 0x2B44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x38E888u, 0x38E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E890u;
label_38e890:
    // 0x38e890: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38E890u;
    {
        const bool branch_taken_0x38e890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E890u;
        // 0x38e894: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e890) {
            ctx->pc = 0x38E8C8u;
            goto label_38e8c8;
        }
    }
    ctx->pc = 0x38E898u;
    // 0x38e898: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38e898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38e89c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x38E89Cu;
    SET_GPR_U32(ctx, 31, 0x38E8A4u);
    ctx->pc = 0x38E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E89Cu;
    // 0x38e8a0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x38E89Cu, 0x38E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8A4u;
label_38e8a4:
    // 0x38e8a4: 0xc096e44  jal         func_25B910
    ctx->pc = 0x38E8A4u;
    SET_GPR_U32(ctx, 31, 0x38E8ACu);
    ctx->pc = 0x38E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8A4u;
    // 0x38e8a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x38E8A4u, 0x38E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8ACu;
label_38e8ac:
    // 0x38e8ac: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x38e8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38e8b0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x38e8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38e8b4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x38e8b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x38e8b8: 0xc097498  jal         func_25D260
    ctx->pc = 0x38E8B8u;
    SET_GPR_U32(ctx, 31, 0x38E8C0u);
    ctx->pc = 0x38E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8B8u;
    // 0x38e8bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x38E8B8u, 0x38E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8C0u;
label_38e8c0:
    // 0x38e8c0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x38e8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x38e8c4: 0x0  nop
    ctx->pc = 0x38e8c4u;
    // NOP
label_38e8c8:
    // 0x38e8c8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x38e8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x38e8cc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x38E8CCu;
    {
        const bool branch_taken_0x38e8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e8cc) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E8D4u;
    // 0x38e8d4: 0x82032b3d  lb          $v1, 0x2B3D($s0)
    ctx->pc = 0x38e8d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11069)));
    // 0x38e8d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38e8dc: 0xa2032b3d  sb          $v1, 0x2B3D($s0)
    ctx->pc = 0x38e8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11069), (uint8_t)GPR_U32(ctx, 3));
    // 0x38e8e0: 0x82032b3d  lb          $v1, 0x2B3D($s0)
    ctx->pc = 0x38e8e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11069)));
    // 0x38e8e4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x38e8e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x38e8e8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x38E8E8u;
    {
        const bool branch_taken_0x38e8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e8e8) {
            ctx->pc = 0x38E920u;
            goto label_38e920;
        }
    }
    ctx->pc = 0x38E8F0u;
    // 0x38e8f0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38e8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e8f4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x38e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x38e8f8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38e8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e8fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x38e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38e900: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x38e900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x38e904: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e908: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x38e908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x38e90c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x38e90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x38e910: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x38e910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x38e914: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e918: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x38E918u;
    {
        const bool branch_taken_0x38e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E918u;
        // 0x38e91c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e918) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E920u;
label_38e920:
    // 0x38e920: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38e920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e924: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38e924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e928: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x38e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x38e92c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x38e92cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x38e930: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x38e930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38e934: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x38e934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x38e938: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e93c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x38e93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x38e940: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38E940u;
    {
        const bool branch_taken_0x38e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E940u;
        // 0x38e944: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e940) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E948u;
label_38e948:
    // 0x38e948: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x38e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38e94c: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x38e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x38e950: 0xc0c0890  jal         func_302240
    ctx->pc = 0x38E950u;
    SET_GPR_U32(ctx, 31, 0x38E958u);
    ctx->pc = 0x38E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E950u;
    // 0x38e954: 0x8e042b48  lw          $a0, 0x2B48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x38E950u, 0x38E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E958u;
label_38e958:
    // 0x38e958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E958u;
    {
        const bool branch_taken_0x38e958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E958u;
        // 0x38e95c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e958) {
            ctx->pc = 0x38E968u;
            goto label_38e968;
        }
    }
    ctx->pc = 0x38E960u;
    // 0x38e960: 0xa043053a  sb          $v1, 0x53A($v0)
    ctx->pc = 0x38e960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1338), (uint8_t)GPR_U32(ctx, 3));
    // 0x38e964: 0x0  nop
    ctx->pc = 0x38e964u;
    // NOP
label_38e968:
    // 0x38e968: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x38E968u;
    SET_GPR_U32(ctx, 31, 0x38E970u);
    ctx->pc = 0x38E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E968u;
    // 0x38e96c: 0x8e042958  lw          $a0, 0x2958($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x38E968u, 0x38E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E970u;
label_38e970:
    // 0x38e970: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x38e970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x38e974: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38E974u;
    {
        const bool branch_taken_0x38e974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E974u;
        // 0x38e978: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e974) {
            ctx->pc = 0x38E980u;
            goto label_38e980;
        }
    }
    ctx->pc = 0x38E97Cu;
    // 0x38e97c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_38e980:
    // 0x38e980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38e980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e98c: 0x3e00008  jr          $ra
    ctx->pc = 0x38E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E98Cu;
        // 0x38e990: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E994u;
}
