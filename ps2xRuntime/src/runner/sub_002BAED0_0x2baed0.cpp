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

// Function: sub_002BAED0
// Address: 0x2baed0 - 0x2bb028
void sub_002BAED0_0x2baed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAED0_0x2baed0");
#endif

    switch (ctx->pc) {
        case 0x2baf48u: goto label_2baf48;
        case 0x2baf5cu: goto label_2baf5c;
        case 0x2baf84u: goto label_2baf84;
        case 0x2baff8u: goto label_2baff8;
        case 0x2bb00cu: goto label_2bb00c;
        default: break;
    }

    ctx->pc = 0x2baed0u;

    // 0x2baed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2baed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2baed4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2baed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2baed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2baed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2baedc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2baedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2baee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2baee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2baee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2baee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baee8: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2baee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2baeec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BAEECu;
    {
        const bool branch_taken_0x2baeec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEECu;
        // 0x2baef0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baeec) {
            ctx->pc = 0x2BAF50u;
            goto label_2baf50;
        }
    }
    ctx->pc = 0x2BAEF4u;
    // 0x2baef4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2baef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2baef8: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x2baef8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2baefc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2baefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2baf00: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BAF00u;
    {
        const bool branch_taken_0x2baf00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baf00) {
            ctx->pc = 0x2BAF50u;
            goto label_2baf50;
        }
    }
    ctx->pc = 0x2BAF08u;
    // 0x2baf08: 0x92260047  lbu         $a2, 0x47($s1)
    ctx->pc = 0x2baf08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 71)));
    // 0x2baf0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2baf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2baf10: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BAF10u;
    {
        const bool branch_taken_0x2baf10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2baf10) {
            ctx->pc = 0x2BAF38u;
            goto label_2baf38;
        }
    }
    ctx->pc = 0x2BAF18u;
    // 0x2baf18: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2baf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baf1c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2baf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baf20: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2baf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baf24: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2baf24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2baf28: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2baf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2baf2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAF2Cu;
    {
        const bool branch_taken_0x2baf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF2Cu;
        // 0x2baf30: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf2c) {
            ctx->pc = 0x2BAF48u;
            goto label_2baf48;
        }
    }
    ctx->pc = 0x2BAF34u;
    // 0x2baf34: 0x0  nop
    ctx->pc = 0x2baf34u;
    // NOP
label_2baf38:
    // 0x2baf38: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BAF38u;
    {
        const bool branch_taken_0x2baf38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf38) {
            ctx->pc = 0x2BB000u;
            goto label_2bb000;
        }
    }
    ctx->pc = 0x2BAF40u;
    // 0x2baf40: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BAF40u;
    SET_GPR_U32(ctx, 31, 0x2BAF48u);
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BAF40u, 0x2BAF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF48u;
label_2baf48:
    // 0x2baf48: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2BAF48u;
    {
        const bool branch_taken_0x2baf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf48) {
            ctx->pc = 0x2BB010u;
            goto label_2bb010;
        }
    }
    ctx->pc = 0x2BAF50u;
label_2baf50:
    // 0x2baf50: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x2baf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2baf54: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BAF54u;
    SET_GPR_U32(ctx, 31, 0x2BAF5Cu);
    ctx->pc = 0x2BAF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF54u;
    // 0x2baf58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BAF54u, 0x2BAF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF5Cu;
label_2baf5c:
    // 0x2baf5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAF5Cu;
    {
        const bool branch_taken_0x2baf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baf5c) {
            ctx->pc = 0x2BAF70u;
            goto label_2baf70;
        }
    }
    ctx->pc = 0x2BAF64u;
    // 0x2baf64: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2BAF64u;
    {
        const bool branch_taken_0x2baf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF64u;
        // 0x2baf68: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf64) {
            ctx->pc = 0x2BB000u;
            goto label_2bb000;
        }
    }
    ctx->pc = 0x2BAF6Cu;
    // 0x2baf6c: 0x0  nop
    ctx->pc = 0x2baf6cu;
    // NOP
label_2baf70:
    // 0x2baf70: 0x9232005e  lbu         $s2, 0x5E($s1)
    ctx->pc = 0x2baf70u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2baf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2baf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2baf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf7c: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2BAF7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAF84u);
    ctx->pc = 0x2BAF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF7Cu;
    // 0x2baf80: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2BAF7Cu, 0x2BAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF84u;
label_2baf84:
    // 0x2baf84: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2baf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2baf88: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2baf88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2baf8c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BAF8Cu;
    {
        const bool branch_taken_0x2baf8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf8c) {
            ctx->pc = 0x2BAFB0u;
            goto label_2bafb0;
        }
    }
    ctx->pc = 0x2BAF94u;
    // 0x2baf94: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x2baf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baf98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2baf98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2baf9c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BAF9Cu;
    {
        const bool branch_taken_0x2baf9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baf9c) {
            ctx->pc = 0x2BAFC0u;
            goto label_2bafc0;
        }
    }
    ctx->pc = 0x2BAFA4u;
    // 0x2bafa4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BAFA4u;
    {
        const bool branch_taken_0x2bafa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bafa4) {
            ctx->pc = 0x2BB010u;
            goto label_2bb010;
        }
    }
    ctx->pc = 0x2BAFACu;
    // 0x2bafac: 0x0  nop
    ctx->pc = 0x2bafacu;
    // NOP
label_2bafb0:
    // 0x2bafb0: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x2bafb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bafb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bafb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bafb8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2BAFB8u;
    {
        const bool branch_taken_0x2bafb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bafb8) {
            ctx->pc = 0x2BB010u;
            goto label_2bb010;
        }
    }
    ctx->pc = 0x2BAFC0u;
label_2bafc0:
    // 0x2bafc0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bafc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bafc4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BAFC4u;
    {
        const bool branch_taken_0x2bafc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bafc4) {
            ctx->pc = 0x2BAFE8u;
            goto label_2bafe8;
        }
    }
    ctx->pc = 0x2BAFCCu;
    // 0x2bafcc: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2bafccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bafd0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2bafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bafd4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2bafd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bafd8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2bafd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2bafdc: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2bafdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2bafe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAFE0u;
    {
        const bool branch_taken_0x2bafe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFE0u;
        // 0x2bafe4: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bafe0) {
            ctx->pc = 0x2BAFF8u;
            goto label_2baff8;
        }
    }
    ctx->pc = 0x2BAFE8u;
label_2bafe8:
    // 0x2bafe8: 0x92260046  lbu         $a2, 0x46($s1)
    ctx->pc = 0x2bafe8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x2bafec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bafecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baff0: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BAFF0u;
    SET_GPR_U32(ctx, 31, 0x2BAFF8u);
    ctx->pc = 0x2BAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFF0u;
    // 0x2baff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BAFF0u, 0x2BAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFF8u;
label_2baff8:
    // 0x2baff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAFF8u;
    {
        const bool branch_taken_0x2baff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baff8) {
            ctx->pc = 0x2BB010u;
            goto label_2bb010;
        }
    }
    ctx->pc = 0x2BB000u;
label_2bb000:
    // 0x2bb000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb004: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BB004u;
    SET_GPR_U32(ctx, 31, 0x2BB00Cu);
    ctx->pc = 0x2BB008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB004u;
    // 0x2bb008: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BB004u, 0x2BB00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB00Cu;
label_2bb00c:
    // 0x2bb00c: 0x0  nop
    ctx->pc = 0x2bb00cu;
    // NOP
label_2bb010:
    // 0x2bb010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bb010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb01c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb020: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB020u;
        // 0x2bb024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB028u;
}
