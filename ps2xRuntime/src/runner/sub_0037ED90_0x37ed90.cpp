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

// Function: sub_0037ED90
// Address: 0x37ed90 - 0x37f2dc
void sub_0037ED90_0x37ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037ED90_0x37ed90");
#endif

    switch (ctx->pc) {
        case 0x37edf0u: goto label_37edf0;
        case 0x37ee00u: goto label_37ee00;
        case 0x37ee68u: goto label_37ee68;
        case 0x37eeb0u: goto label_37eeb0;
        case 0x37ef60u: goto label_37ef60;
        case 0x37ef68u: goto label_37ef68;
        case 0x37ef78u: goto label_37ef78;
        case 0x37f00cu: goto label_37f00c;
        case 0x37f024u: goto label_37f024;
        case 0x37f088u: goto label_37f088;
        case 0x37f098u: goto label_37f098;
        case 0x37f0ccu: goto label_37f0cc;
        case 0x37f11cu: goto label_37f11c;
        case 0x37f188u: goto label_37f188;
        case 0x37f1c0u: goto label_37f1c0;
        case 0x37f1fcu: goto label_37f1fc;
        case 0x37f208u: goto label_37f208;
        case 0x37f240u: goto label_37f240;
        case 0x37f26cu: goto label_37f26c;
        case 0x37f298u: goto label_37f298;
        case 0x37f2acu: goto label_37f2ac;
        case 0x37f2b4u: goto label_37f2b4;
        default: break;
    }

    ctx->pc = 0x37ed90u;

    // 0x37ed90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37ed94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37ed98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37ed9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37eda0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37eda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37eda4: 0x8c902b80  lw          $s0, 0x2B80($a0)
    ctx->pc = 0x37eda4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x37eda8: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x37eda8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x37edac: 0x10200146  beqz        $at, . + 4 + (0x146 << 2)
    ctx->pc = 0x37EDACu;
    {
        const bool branch_taken_0x37edac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EDACu;
        // 0x37edb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37edac) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37EDB4u;
    // 0x37edb4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x37edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x37edb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37edbc: 0x24a51e10  addiu       $a1, $a1, 0x1E10
    ctx->pc = 0x37edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7696));
    // 0x37edc0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37edc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37edc8: 0x600008  jr          $v1
    ctx->pc = 0x37EDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37EDD0u: goto label_37edd0;
            case 0x37EE78u: goto label_37ee78;
            case 0x37EEE8u: goto label_37eee8;
            case 0x37F048u: goto label_37f048;
            case 0x37F260u: goto label_37f260;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EDC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37EDD0u;
label_37edd0:
    // 0x37edd0: 0xa620082a  sh          $zero, 0x82A($s1)
    ctx->pc = 0x37edd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x37edd4: 0x92222b78  lbu         $v0, 0x2B78($s1)
    ctx->pc = 0x37edd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37edd8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x37edd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x37eddc: 0xa2222b78  sb          $v0, 0x2B78($s1)
    ctx->pc = 0x37eddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ede0: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x37ede0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37ede4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x37ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x37ede8: 0xc0e007c  jal         func_3801F0
    ctx->pc = 0x37EDE8u;
    SET_GPR_U32(ctx, 31, 0x37EDF0u);
    ctx->pc = 0x37EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDE8u;
    // 0x37edec: 0xa622082a  sh          $v0, 0x82A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3801F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3801F0u, 0x37EDE8u, 0x37EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EDF0u;
label_37edf0:
    // 0x37edf0: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x37edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x37edf4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37edf8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37EDF8u;
    SET_GPR_U32(ctx, 31, 0x37EE00u);
    ctx->pc = 0x37EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDF8u;
    // 0x37edfc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37EDF8u, 0x37EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EE00u;
label_37ee00:
    // 0x37ee00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37EE00u;
    {
        const bool branch_taken_0x37ee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ee00) {
            ctx->pc = 0x37EE20u;
            goto label_37ee20;
        }
    }
    ctx->pc = 0x37EE08u;
    // 0x37ee08: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x37ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37ee0c: 0x26232b50  addiu       $v1, $s1, 0x2B50
    ctx->pc = 0x37ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37ee10: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37ee10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ee14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37EE14u;
    {
        const bool branch_taken_0x37ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE14u;
        // 0x37ee18: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee14) {
            ctx->pc = 0x37EE38u;
            goto label_37ee38;
        }
    }
    ctx->pc = 0x37EE1Cu;
    // 0x37ee1c: 0x0  nop
    ctx->pc = 0x37ee1cu;
    // NOP
label_37ee20:
    // 0x37ee20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37ee20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee24: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x37ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37ee28: 0x26232b50  addiu       $v1, $s1, 0x2B50
    ctx->pc = 0x37ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37ee2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37ee2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ee30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x37ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x37ee34: 0x0  nop
    ctx->pc = 0x37ee34u;
    // NOP
label_37ee38:
    // 0x37ee38: 0x3c02c58c  lui         $v0, 0xC58C
    ctx->pc = 0x37ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50572 << 16));
    // 0x37ee3c: 0xc6212b54  lwc1        $f1, 0x2B54($s1)
    ctx->pc = 0x37ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37ee40: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x37ee40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x37ee44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x37ee44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ee48: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x37ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x37ee4c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x37ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x37ee50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37ee50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37ee54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37ee58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37ee5c: 0xe6202b54  swc1        $f0, 0x2B54($s1)
    ctx->pc = 0x37ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11092), bits); }
    // 0x37ee60: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37EE60u;
    SET_GPR_U32(ctx, 31, 0x37EE68u);
    ctx->pc = 0x37EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE60u;
    // 0x37ee64: 0xae232b70  sw          $v1, 0x2B70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37EE60u, 0x37EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EE68u;
label_37ee68:
    // 0x37ee68: 0x92220821  lbu         $v0, 0x821($s1)
    ctx->pc = 0x37ee68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37ee6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ee70: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37ee70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ee74: 0x0  nop
    ctx->pc = 0x37ee74u;
    // NOP
label_37ee78:
    // 0x37ee78: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37ee7c: 0xc6212b54  lwc1        $f1, 0x2B54($s1)
    ctx->pc = 0x37ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37ee80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ee80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ee84: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x37ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37ee88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37ee88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37ee8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x37ee8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37ee90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x37EE90u;
    {
        const bool branch_taken_0x37ee90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37ee90) {
            ctx->pc = 0x37EEA8u;
            goto label_37eea8;
        }
    }
    ctx->pc = 0x37EE98u;
    // 0x37ee98: 0x92222b78  lbu         $v0, 0x2B78($s1)
    ctx->pc = 0x37ee98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37ee9c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x37ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x37eea0: 0xa2222b78  sb          $v0, 0x2B78($s1)
    ctx->pc = 0x37eea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37eea4: 0x0  nop
    ctx->pc = 0x37eea4u;
    // NOP
label_37eea8:
    // 0x37eea8: 0xc0dfe30  jal         func_37F8C0
    ctx->pc = 0x37EEA8u;
    SET_GPR_U32(ctx, 31, 0x37EEB0u);
    ctx->pc = 0x37EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EEA8u;
    // 0x37eeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F8C0u, 0x37EEA8u, 0x37EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EEB0u;
label_37eeb0:
    // 0x37eeb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37EEB0u;
    {
        const bool branch_taken_0x37eeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37eeb0) {
            ctx->pc = 0x37EED8u;
            goto label_37eed8;
        }
    }
    ctx->pc = 0x37EEB8u;
    // 0x37eeb8: 0xc6222b54  lwc1        $f2, 0x2B54($s1)
    ctx->pc = 0x37eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37eebc: 0xc6212b70  lwc1        $f1, 0x2B70($s1)
    ctx->pc = 0x37eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37eec0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x37eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37eec4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x37eec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37eec8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37eec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37eecc: 0x450000fe  bc1f        . + 4 + (0xFE << 2)
    ctx->pc = 0x37EECCu;
    {
        const bool branch_taken_0x37eecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37eecc) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37EED4u;
    // 0x37eed4: 0x0  nop
    ctx->pc = 0x37eed4u;
    // NOP
label_37eed8:
    // 0x37eed8: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x37eed8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37eedc: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37eedcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37eee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37eee4: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x37eee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_37eee8:
    // 0x37eee8: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x37eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x37eeec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37eef0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37eef4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37eef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37eef8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37eef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37eefc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37eefcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ef00: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37ef04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ef04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ef08: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37ef08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37ef0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37ef0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37ef10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37ef10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37ef14: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37EF14u;
    {
        const bool branch_taken_0x37ef14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37ef14) {
            ctx->pc = 0x37EF2Cu;
            goto label_37ef2c;
        }
    }
    ctx->pc = 0x37EF1Cu;
    // 0x37ef1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ef1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37ef20: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37ef20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37ef24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37EF24u;
    {
        const bool branch_taken_0x37ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EF24u;
        // 0x37ef28: 0x96240826  lhu         $a0, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ef24) {
            ctx->pc = 0x37EF48u;
            goto label_37ef48;
        }
    }
    ctx->pc = 0x37EF2Cu;
label_37ef2c:
    // 0x37ef2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37ef2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37ef30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37ef34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ef34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37ef38: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37ef38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37ef3c: 0x0  nop
    ctx->pc = 0x37ef3cu;
    // NOP
    // 0x37ef40: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37ef40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37ef44: 0x96240826  lhu         $a0, 0x826($s1)
    ctx->pc = 0x37ef44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_37ef48:
    // 0x37ef48: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x37ef48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37ef4c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x37EF4Cu;
    {
        const bool branch_taken_0x37ef4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ef4c) {
            ctx->pc = 0x37F038u;
            goto label_37f038;
        }
    }
    ctx->pc = 0x37EF54u;
    // 0x37ef54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef58: 0xc0df834  jal         func_37E0D0
    ctx->pc = 0x37EF58u;
    SET_GPR_U32(ctx, 31, 0x37EF60u);
    ctx->pc = 0x37EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EF58u;
    // 0x37ef5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E0D0u, 0x37EF58u, 0x37EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EF60u;
label_37ef60:
    // 0x37ef60: 0xc0e007c  jal         func_3801F0
    ctx->pc = 0x37EF60u;
    SET_GPR_U32(ctx, 31, 0x37EF68u);
    ctx->pc = 0x37EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EF60u;
    // 0x37ef64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3801F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3801F0u, 0x37EF60u, 0x37EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EF68u;
label_37ef68:
    // 0x37ef68: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x37ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x37ef6c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37ef70: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37EF70u;
    SET_GPR_U32(ctx, 31, 0x37EF78u);
    ctx->pc = 0x37EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EF70u;
    // 0x37ef74: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37EF70u, 0x37EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EF78u;
label_37ef78:
    // 0x37ef78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37EF78u;
    {
        const bool branch_taken_0x37ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ef78) {
            ctx->pc = 0x37EFB0u;
            goto label_37efb0;
        }
    }
    ctx->pc = 0x37EF80u;
    // 0x37ef80: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x37ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37ef84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37ef84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef88: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x37ef88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37ef8c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x37ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37ef90: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x37ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37ef94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37ef94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ef98: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x37ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x37ef9c: 0x26232b50  addiu       $v1, $s1, 0x2B50
    ctx->pc = 0x37ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37efa0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x37efa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37efa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37EFA4u;
    {
        const bool branch_taken_0x37efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EFA4u;
        // 0x37efa8: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37efa4) {
            ctx->pc = 0x37EFC8u;
            goto label_37efc8;
        }
    }
    ctx->pc = 0x37EFACu;
    // 0x37efac: 0x0  nop
    ctx->pc = 0x37efacu;
    // NOP
label_37efb0:
    // 0x37efb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37efb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37efb4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x37efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37efb8: 0x26232b50  addiu       $v1, $s1, 0x2B50
    ctx->pc = 0x37efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37efbc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37efbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37efc0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x37efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x37efc4: 0x0  nop
    ctx->pc = 0x37efc4u;
    // NOP
label_37efc8:
    // 0x37efc8: 0x3c03c57a  lui         $v1, 0xC57A
    ctx->pc = 0x37efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50554 << 16));
    // 0x37efcc: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x37efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37efd0: 0x3c0245cb  lui         $v0, 0x45CB
    ctx->pc = 0x37efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17867 << 16));
    // 0x37efd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37efd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37efd8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x37efd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x37efdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37efdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37efe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37efe4: 0x24020c00  addiu       $v0, $zero, 0xC00
    ctx->pc = 0x37efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x37efe8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x37efe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37efec: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x37efecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x37eff0: 0xc6212b54  lwc1        $f1, 0x2B54($s1)
    ctx->pc = 0x37eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37eff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37eff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37eff8: 0xe6202b54  swc1        $f0, 0x2B54($s1)
    ctx->pc = 0x37eff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11092), bits); }
    // 0x37effc: 0xa62200c0  sh          $v0, 0xC0($s1)
    ctx->pc = 0x37effcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x37f000: 0xa62000c2  sh          $zero, 0xC2($s1)
    ctx->pc = 0x37f000u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x37f004: 0xc0e049c  jal         func_381270
    ctx->pc = 0x37F004u;
    SET_GPR_U32(ctx, 31, 0x37F00Cu);
    ctx->pc = 0x37F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F004u;
    // 0x37f008: 0xa62000c4  sh          $zero, 0xC4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381270u, 0x37F004u, 0x37F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F00Cu;
label_37f00c:
    // 0x37f00c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x37f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x37f010: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x37f010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x37f014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37f014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37f018: 0xae232b70  sw          $v1, 0x2B70($s1)
    ctx->pc = 0x37f018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11120), GPR_U32(ctx, 3));
    // 0x37f01c: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37F01Cu;
    SET_GPR_U32(ctx, 31, 0x37F024u);
    ctx->pc = 0x37F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F01Cu;
    // 0x37f020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37F01Cu, 0x37F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F024u;
label_37f024:
    // 0x37f024: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37f024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37f02c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37F02Cu;
    {
        const bool branch_taken_0x37f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F02Cu;
        // 0x37f030: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f02c) {
            ctx->pc = 0x37F048u;
            goto label_37f048;
        }
    }
    ctx->pc = 0x37F034u;
    // 0x37f034: 0x0  nop
    ctx->pc = 0x37f034u;
    // NOP
label_37f038:
    // 0x37f038: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x37f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37f03c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x37F03Cu;
    {
        const bool branch_taken_0x37f03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F03Cu;
        // 0x37f040: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f03c) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37F044u;
    // 0x37f044: 0x0  nop
    ctx->pc = 0x37f044u;
    // NOP
label_37f048:
    // 0x37f048: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x37f048u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f04c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37f050: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x37F050u;
    {
        const bool branch_taken_0x37f050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f050) {
            ctx->pc = 0x37F0E8u;
            goto label_37f0e8;
        }
    }
    ctx->pc = 0x37F058u;
    // 0x37f058: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37f058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37f05c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37F05Cu;
    {
        const bool branch_taken_0x37f05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f05c) {
            ctx->pc = 0x37F0B8u;
            goto label_37f0b8;
        }
    }
    ctx->pc = 0x37F064u;
    // 0x37f064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37f068: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F068u;
    {
        const bool branch_taken_0x37f068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f068) {
            ctx->pc = 0x37F078u;
            goto label_37f078;
        }
    }
    ctx->pc = 0x37F070u;
    // 0x37f070: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x37F070u;
    {
        const bool branch_taken_0x37f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f070) {
            ctx->pc = 0x37F0E8u;
            goto label_37f0e8;
        }
    }
    ctx->pc = 0x37F078u;
label_37f078:
    // 0x37f078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f07c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f080: 0xc0e01cc  jal         func_380730
    ctx->pc = 0x37F080u;
    SET_GPR_U32(ctx, 31, 0x37F088u);
    ctx->pc = 0x37F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F080u;
    // 0x37f084: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380730u, 0x37F080u, 0x37F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F088u;
label_37f088:
    // 0x37f088: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37F088u;
    {
        const bool branch_taken_0x37f088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f088) {
            ctx->pc = 0x37F0E8u;
            goto label_37f0e8;
        }
    }
    ctx->pc = 0x37F090u;
    // 0x37f090: 0xc0e0250  jal         func_380940
    ctx->pc = 0x37F090u;
    SET_GPR_U32(ctx, 31, 0x37F098u);
    ctx->pc = 0x37F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F090u;
    // 0x37f094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380940u, 0x37F090u, 0x37F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F098u;
label_37f098:
    // 0x37f098: 0x92232b78  lbu         $v1, 0x2B78($s1)
    ctx->pc = 0x37f098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37f09c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37f09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37f0a0: 0xa2232b78  sb          $v1, 0x2B78($s1)
    ctx->pc = 0x37f0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f0a4: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37f0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f0a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37f0ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x37F0ACu;
    {
        const bool branch_taken_0x37f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F0ACu;
        // 0x37f0b0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f0ac) {
            ctx->pc = 0x37F0E8u;
            goto label_37f0e8;
        }
    }
    ctx->pc = 0x37F0B4u;
    // 0x37f0b4: 0x0  nop
    ctx->pc = 0x37f0b4u;
    // NOP
label_37f0b8:
    // 0x37f0b8: 0x96232b9c  lhu         $v1, 0x2B9C($s1)
    ctx->pc = 0x37f0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11164)));
    // 0x37f0bc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x37F0BCu;
    {
        const bool branch_taken_0x37f0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f0bc) {
            ctx->pc = 0x37F0E8u;
            goto label_37f0e8;
        }
    }
    ctx->pc = 0x37F0C4u;
    // 0x37f0c4: 0xc0e02a0  jal         func_380A80
    ctx->pc = 0x37F0C4u;
    SET_GPR_U32(ctx, 31, 0x37F0CCu);
    ctx->pc = 0x37F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F0C4u;
    // 0x37f0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A80u, 0x37F0C4u, 0x37F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F0CCu;
label_37f0cc:
    // 0x37f0cc: 0x92232b78  lbu         $v1, 0x2B78($s1)
    ctx->pc = 0x37f0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37f0d0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x37f0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x37f0d4: 0xa2232b78  sb          $v1, 0x2B78($s1)
    ctx->pc = 0x37f0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f0d8: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37f0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f0dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37f0e0: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x37f0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f0e4: 0x0  nop
    ctx->pc = 0x37f0e4u;
    // NOP
label_37f0e8:
    // 0x37f0e8: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x37f0e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37f0ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37f0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37f0f0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37F0F0u;
    {
        const bool branch_taken_0x37f0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f0f0) {
            ctx->pc = 0x37F128u;
            goto label_37f128;
        }
    }
    ctx->pc = 0x37F0F8u;
    // 0x37f0f8: 0x8e232b80  lw          $v1, 0x2B80($s1)
    ctx->pc = 0x37f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11136)));
    // 0x37f0fc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x37f0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f100: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x37f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f104: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37f104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f108: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x37F108u;
    {
        const bool branch_taken_0x37f108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f108) {
            ctx->pc = 0x37F128u;
            goto label_37f128;
        }
    }
    ctx->pc = 0x37F110u;
    // 0x37f110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f114: 0xc0e02a8  jal         func_380AA0
    ctx->pc = 0x37F114u;
    SET_GPR_U32(ctx, 31, 0x37F11Cu);
    ctx->pc = 0x37F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F114u;
    // 0x37f118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AA0u, 0x37F114u, 0x37F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F11Cu;
label_37f11c:
    // 0x37f11c: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x37f11cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37f120: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x37f120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x37f124: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x37f124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
label_37f128:
    // 0x37f128: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x37f128u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37f12c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x37f12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37f130: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x37F130u;
    {
        const bool branch_taken_0x37f130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f130) {
            ctx->pc = 0x37F198u;
            goto label_37f198;
        }
    }
    ctx->pc = 0x37F138u;
    // 0x37f138: 0x8e242b80  lw          $a0, 0x2B80($s1)
    ctx->pc = 0x37f138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11136)));
    // 0x37f13c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x37f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x37f140: 0xc6212ba4  lwc1        $f1, 0x2BA4($s1)
    ctx->pc = 0x37f140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37f144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f148: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x37f148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37f14c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f14cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37f150: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x37f150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f154: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x37F154u;
    {
        const bool branch_taken_0x37f154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f154) {
            ctx->pc = 0x37F170u;
            goto label_37f170;
        }
    }
    ctx->pc = 0x37F15Cu;
    // 0x37f15c: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37f15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f160: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x37f160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x37f164: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37F164u;
    {
        const bool branch_taken_0x37f164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f164) {
            ctx->pc = 0x37F198u;
            goto label_37f198;
        }
    }
    ctx->pc = 0x37F16Cu;
    // 0x37f16c: 0x0  nop
    ctx->pc = 0x37f16cu;
    // NOP
label_37f170:
    // 0x37f170: 0x92232b78  lbu         $v1, 0x2B78($s1)
    ctx->pc = 0x37f170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37f174: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x37f174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x37f178: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F178u;
    {
        const bool branch_taken_0x37f178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f178) {
            ctx->pc = 0x37F188u;
            goto label_37f188;
        }
    }
    ctx->pc = 0x37F180u;
    // 0x37f180: 0xc0e02b4  jal         func_380AD0
    ctx->pc = 0x37F180u;
    SET_GPR_U32(ctx, 31, 0x37F188u);
    ctx->pc = 0x37F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F180u;
    // 0x37f184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AD0u, 0x37F180u, 0x37F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F188u;
label_37f188:
    // 0x37f188: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x37f188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x37f18c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37f18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37f190: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x37f190u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x37f194: 0x0  nop
    ctx->pc = 0x37f194u;
    // NOP
label_37f198:
    // 0x37f198: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37f198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37f19c: 0xa2232bbd  sb          $v1, 0x2BBD($s1)
    ctx->pc = 0x37f19cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11197), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f1a0: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x37f1a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f1a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37f1a8: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x37F1A8u;
    {
        const bool branch_taken_0x37f1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f1a8) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37F1B0u;
    // 0x37f1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f1b8: 0xc0dfde8  jal         func_37F7A0
    ctx->pc = 0x37F1B8u;
    SET_GPR_U32(ctx, 31, 0x37F1C0u);
    ctx->pc = 0x37F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F1B8u;
    // 0x37f1bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7A0u, 0x37F1B8u, 0x37F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F1C0u;
label_37f1c0:
    // 0x37f1c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F1C0u;
    {
        const bool branch_taken_0x37f1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f1c0) {
            ctx->pc = 0x37F210u;
            goto label_37f210;
        }
    }
    ctx->pc = 0x37F1C8u;
    // 0x37f1c8: 0xc6222b54  lwc1        $f2, 0x2B54($s1)
    ctx->pc = 0x37f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37f1cc: 0xc6212b70  lwc1        $f1, 0x2B70($s1)
    ctx->pc = 0x37f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f1d0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x37f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f1d4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x37f1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x37f1d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37f1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f1dc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x37F1DCu;
    {
        const bool branch_taken_0x37f1dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f1dc) {
            ctx->pc = 0x37F210u;
            goto label_37f210;
        }
    }
    ctx->pc = 0x37F1E4u;
    // 0x37f1e4: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x37f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x37f1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37f1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37f1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f1f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x37f1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37f1f4: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x37F1F4u;
    SET_GPR_U32(ctx, 31, 0x37F1FCu);
    ctx->pc = 0x37F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F1F4u;
    // 0x37f1f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x37F1F4u, 0x37F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F1FCu;
label_37f1fc:
    // 0x37f1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f200: 0xc0dfebc  jal         func_37FAF0
    ctx->pc = 0x37F200u;
    SET_GPR_U32(ctx, 31, 0x37F208u);
    ctx->pc = 0x37F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F200u;
    // 0x37f204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FAF0u, 0x37F200u, 0x37F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F208u;
label_37f208:
    // 0x37f208: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x37F208u;
    {
        const bool branch_taken_0x37f208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f208) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37F210u;
label_37f210:
    // 0x37f210: 0x92232b7a  lbu         $v1, 0x2B7A($s1)
    ctx->pc = 0x37f210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11130)));
    // 0x37f214: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37F214u;
    {
        const bool branch_taken_0x37f214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f214) {
            ctx->pc = 0x37F238u;
            goto label_37f238;
        }
    }
    ctx->pc = 0x37F21Cu;
    // 0x37f21c: 0x92242b78  lbu         $a0, 0x2B78($s1)
    ctx->pc = 0x37f21cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37f220: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x37f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x37f224: 0x308400df  andi        $a0, $a0, 0xDF
    ctx->pc = 0x37f224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)223);
    // 0x37f228: 0xa2242b78  sb          $a0, 0x2B78($s1)
    ctx->pc = 0x37f228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 4));
    // 0x37f22c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x37F22Cu;
    {
        const bool branch_taken_0x37f22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F22Cu;
        // 0x37f230: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f22c) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37F234u;
    // 0x37f234: 0x0  nop
    ctx->pc = 0x37f234u;
    // NOP
label_37f238:
    // 0x37f238: 0xc0e0188  jal         func_380620
    ctx->pc = 0x37F238u;
    SET_GPR_U32(ctx, 31, 0x37F240u);
    ctx->pc = 0x37F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F238u;
    // 0x37f23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380620u, 0x37F238u, 0x37F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F240u;
label_37f240:
    // 0x37f240: 0x92232b78  lbu         $v1, 0x2B78($s1)
    ctx->pc = 0x37f240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37f244: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37f248: 0xa2232b78  sb          $v1, 0x2B78($s1)
    ctx->pc = 0x37f248u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f24c: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37f24cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f250: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37f254: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x37F254u;
    {
        const bool branch_taken_0x37f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F254u;
        // 0x37f258: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f254) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37F25Cu;
    // 0x37f25c: 0x0  nop
    ctx->pc = 0x37f25cu;
    // NOP
label_37f260:
    // 0x37f260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37f260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37f264: 0xc0dfd24  jal         func_37F490
    ctx->pc = 0x37F264u;
    SET_GPR_U32(ctx, 31, 0x37F26Cu);
    ctx->pc = 0x37F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F264u;
    // 0x37f268: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F490u, 0x37F264u, 0x37F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F26Cu;
label_37f26c:
    // 0x37f26c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x37f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37f270: 0xc6212b70  lwc1        $f1, 0x2B70($s1)
    ctx->pc = 0x37f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f274: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x37f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f278: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x37f278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37f27c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37f27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f280: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x37F280u;
    {
        const bool branch_taken_0x37f280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f280) {
            ctx->pc = 0x37F2C8u;
            goto label_37f2c8;
        }
    }
    ctx->pc = 0x37F288u;
    // 0x37f288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37f288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37f28c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37f28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37f290: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37F290u;
    SET_GPR_U32(ctx, 31, 0x37F298u);
    ctx->pc = 0x37F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F290u;
    // 0x37f294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37F290u, 0x37F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F298u;
label_37f298:
    // 0x37f298: 0x92222b78  lbu         $v0, 0x2B78($s1)
    ctx->pc = 0x37f298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37f29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37f29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2a0: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x37f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x37f2a4: 0xc0e0224  jal         func_380890
    ctx->pc = 0x37F2A4u;
    SET_GPR_U32(ctx, 31, 0x37F2ACu);
    ctx->pc = 0x37F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2A4u;
    // 0x37f2a8: 0xa2222b78  sb          $v0, 0x2B78($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380890u, 0x37F2A4u, 0x37F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2ACu;
label_37f2ac:
    // 0x37f2ac: 0xc0e01ec  jal         func_3807B0
    ctx->pc = 0x37F2ACu;
    SET_GPR_U32(ctx, 31, 0x37F2B4u);
    ctx->pc = 0x37F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2ACu;
    // 0x37f2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807B0u, 0x37F2ACu, 0x37F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2B4u;
label_37f2b4:
    // 0x37f2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f2b8: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37f2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f2bc: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x37f2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37f2c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37f2c4: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x37f2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_37f2c8:
    // 0x37f2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37f2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37f2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37f2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x37F2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F2D4u;
        // 0x37f2d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F2DCu;
}
