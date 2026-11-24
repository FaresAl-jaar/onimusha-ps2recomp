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

// Function: sub_00372EE0
// Address: 0x372ee0 - 0x373088
void sub_00372EE0_0x372ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372EE0_0x372ee0");
#endif

    switch (ctx->pc) {
        case 0x372f54u: goto label_372f54;
        case 0x372f98u: goto label_372f98;
        case 0x372fc8u: goto label_372fc8;
        case 0x373018u: goto label_373018;
        case 0x373028u: goto label_373028;
        case 0x373038u: goto label_373038;
        case 0x373048u: goto label_373048;
        case 0x373058u: goto label_373058;
        case 0x373068u: goto label_373068;
        case 0x373078u: goto label_373078;
        default: break;
    }

    ctx->pc = 0x372ee0u;

    // 0x372ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x372ee4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x372ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x372ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372eec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x372eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372ef4: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x372ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x372ef8: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x372ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x372efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f00: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x372f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x372f04: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x372f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x372f08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x372f08u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372f0c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x372f0cu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372f10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x372f10u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f14: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x372f14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x372f18: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x372f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x372f1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x372f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x372f20: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x372f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372f24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x372f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372f28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x372f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f2c: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x372f2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x372f30: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x372f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x372f34: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x372f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x372f38: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x372f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372f3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x372f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372f40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x372f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f44: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x372f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x372f48: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x372f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x372f4c: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x372F4Cu;
    SET_GPR_U32(ctx, 31, 0x372F54u);
    ctx->pc = 0x372F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F4Cu;
    // 0x372f50: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x372F4Cu, 0x372F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F54u;
label_372f54:
    // 0x372f54: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372f58: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372f5c: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x372f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x372f60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x372f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x372f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372f68: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x372f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x372f6c: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x372f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x372f70: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x372f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x372f74: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x372F74u;
    {
        const bool branch_taken_0x372f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F74u;
        // 0x372f78: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f74) {
            ctx->pc = 0x372FC8u;
            goto label_372fc8;
        }
    }
    ctx->pc = 0x372F7Cu;
    // 0x372f7c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x372f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x372f80: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x372f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x372f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x372f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f90: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x372F90u;
    SET_GPR_U32(ctx, 31, 0x372F98u);
    ctx->pc = 0x372F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F90u;
    // 0x372f94: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x372F90u, 0x372F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F98u;
label_372f98:
    // 0x372f98: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372f98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372f9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372fa0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x372fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x372fa4: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x372fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x372fa8: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x372fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x372fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x372fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x372fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372fb8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x372fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x372fbc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x372fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x372fc0: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x372FC0u;
    SET_GPR_U32(ctx, 31, 0x372FC8u);
    ctx->pc = 0x372FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372FC0u;
    // 0x372fc4: 0x22fbe  dsrl32      $a1, $v0, 30 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x372FC0u, 0x372FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372FC8u;
label_372fc8:
    // 0x372fc8: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372fcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x372fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x372fd0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x372FD0u;
    {
        const bool branch_taken_0x372fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x372FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FD0u;
        // 0x372fd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372fd0) {
            ctx->pc = 0x373060u;
            goto label_373060;
        }
    }
    ctx->pc = 0x372FD8u;
    // 0x372fd8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x372FD8u;
    {
        const bool branch_taken_0x372fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372fd8) {
            ctx->pc = 0x373050u;
            goto label_373050;
        }
    }
    ctx->pc = 0x372FE0u;
    // 0x372fe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x372fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372fe4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x372FE4u;
    {
        const bool branch_taken_0x372fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x372FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FE4u;
        // 0x372fe8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372fe4) {
            ctx->pc = 0x373040u;
            goto label_373040;
        }
    }
    ctx->pc = 0x372FECu;
    // 0x372fec: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x372FECu;
    {
        const bool branch_taken_0x372fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372fec) {
            ctx->pc = 0x373030u;
            goto label_373030;
        }
    }
    ctx->pc = 0x372FF4u;
    // 0x372ff4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x372ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x372ff8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x372FF8u;
    {
        const bool branch_taken_0x372ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x372FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FF8u;
        // 0x372ffc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ff8) {
            ctx->pc = 0x373020u;
            goto label_373020;
        }
    }
    ctx->pc = 0x373000u;
    // 0x373000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373000u;
    {
        const bool branch_taken_0x373000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x373000) {
            ctx->pc = 0x373010u;
            goto label_373010;
        }
    }
    ctx->pc = 0x373008u;
    // 0x373008: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x373008u;
    {
        const bool branch_taken_0x373008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373008) {
            ctx->pc = 0x373070u;
            goto label_373070;
        }
    }
    ctx->pc = 0x373010u;
label_373010:
    // 0x373010: 0xc0daa04  jal         func_36A810
    ctx->pc = 0x373010u;
    SET_GPR_U32(ctx, 31, 0x373018u);
    ctx->pc = 0x373014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373010u;
    // 0x373014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A810u, 0x373010u, 0x373018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373018u;
label_373018:
    // 0x373018: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x373018u;
    {
        const bool branch_taken_0x373018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373018) {
            ctx->pc = 0x373078u;
            goto label_373078;
        }
    }
    ctx->pc = 0x373020u;
label_373020:
    // 0x373020: 0xc0e5d64  jal         func_397590
    ctx->pc = 0x373020u;
    SET_GPR_U32(ctx, 31, 0x373028u);
    ctx->pc = 0x373024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373020u;
    // 0x373024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397590u, 0x373020u, 0x373028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373028u;
label_373028:
    // 0x373028: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x373028u;
    {
        const bool branch_taken_0x373028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373028) {
            ctx->pc = 0x373078u;
            goto label_373078;
        }
    }
    ctx->pc = 0x373030u;
label_373030:
    // 0x373030: 0xc0d996c  jal         func_3665B0
    ctx->pc = 0x373030u;
    SET_GPR_U32(ctx, 31, 0x373038u);
    ctx->pc = 0x373034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373030u;
    // 0x373034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3665B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3665B0u, 0x373030u, 0x373038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373038u;
label_373038:
    // 0x373038: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x373038u;
    {
        const bool branch_taken_0x373038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373038) {
            ctx->pc = 0x373078u;
            goto label_373078;
        }
    }
    ctx->pc = 0x373040u;
label_373040:
    // 0x373040: 0xc0fd8a8  jal         func_3F62A0
    ctx->pc = 0x373040u;
    SET_GPR_U32(ctx, 31, 0x373048u);
    ctx->pc = 0x373044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373040u;
    // 0x373044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F62A0u, 0x373040u, 0x373048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373048u;
label_373048:
    // 0x373048: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x373048u;
    {
        const bool branch_taken_0x373048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373048) {
            ctx->pc = 0x373078u;
            goto label_373078;
        }
    }
    ctx->pc = 0x373050u;
label_373050:
    // 0x373050: 0xc0dba94  jal         func_36EA50
    ctx->pc = 0x373050u;
    SET_GPR_U32(ctx, 31, 0x373058u);
    ctx->pc = 0x373054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373050u;
    // 0x373054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EA50u, 0x373050u, 0x373058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373058u;
label_373058:
    // 0x373058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x373058u;
    {
        const bool branch_taken_0x373058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373058) {
            ctx->pc = 0x373078u;
            goto label_373078;
        }
    }
    ctx->pc = 0x373060u;
label_373060:
    // 0x373060: 0xc0dc180  jal         func_370600
    ctx->pc = 0x373060u;
    SET_GPR_U32(ctx, 31, 0x373068u);
    ctx->pc = 0x373064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373060u;
    // 0x373064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370600u, 0x373060u, 0x373068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373068u;
label_373068:
    // 0x373068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x373068u;
    {
        const bool branch_taken_0x373068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373068) {
            ctx->pc = 0x373078u;
            goto label_373078;
        }
    }
    ctx->pc = 0x373070u;
label_373070:
    // 0x373070: 0xc0dba94  jal         func_36EA50
    ctx->pc = 0x373070u;
    SET_GPR_U32(ctx, 31, 0x373078u);
    ctx->pc = 0x373074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373070u;
    // 0x373074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EA50u, 0x373070u, 0x373078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373078u;
label_373078:
    // 0x373078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37307c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37307cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373080: 0x3e00008  jr          $ra
    ctx->pc = 0x373080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373080u;
        // 0x373084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373088u;
}
