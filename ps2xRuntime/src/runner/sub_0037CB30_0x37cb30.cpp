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

// Function: sub_0037CB30
// Address: 0x37cb30 - 0x37ccb4
void sub_0037CB30_0x37cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CB30_0x37cb30");
#endif

    switch (ctx->pc) {
        case 0x37cb80u: goto label_37cb80;
        case 0x37cbb8u: goto label_37cbb8;
        case 0x37cc08u: goto label_37cc08;
        case 0x37cc20u: goto label_37cc20;
        case 0x37cc30u: goto label_37cc30;
        case 0x37cc54u: goto label_37cc54;
        case 0x37cc88u: goto label_37cc88;
        case 0x37cc90u: goto label_37cc90;
        case 0x37cc98u: goto label_37cc98;
        default: break;
    }

    ctx->pc = 0x37cb30u;

    // 0x37cb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37cb34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37cb38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37cb3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cb40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37cb44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37cb48: 0x8c902b80  lw          $s0, 0x2B80($a0)
    ctx->pc = 0x37cb48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x37cb4c: 0xa0852bbd  sb          $a1, 0x2BBD($a0)
    ctx->pc = 0x37cb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11197), (uint8_t)GPR_U32(ctx, 5));
    // 0x37cb50: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x37cb50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37cb54: 0x10a3003a  beq         $a1, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x37CB54u;
    {
        const bool branch_taken_0x37cb54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB54u;
        // 0x37cb58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cb54) {
            ctx->pc = 0x37CC40u;
            goto label_37cc40;
        }
    }
    ctx->pc = 0x37CB5Cu;
    // 0x37cb5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cb60: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x37CB60u;
    {
        const bool branch_taken_0x37cb60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cb60) {
            ctx->pc = 0x37CBF8u;
            goto label_37cbf8;
        }
    }
    ctx->pc = 0x37CB68u;
    // 0x37cb68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37CB68u;
    {
        const bool branch_taken_0x37cb68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb68) {
            ctx->pc = 0x37CB78u;
            goto label_37cb78;
        }
    }
    ctx->pc = 0x37CB70u;
    // 0x37cb70: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x37CB70u;
    {
        const bool branch_taken_0x37cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb70) {
            ctx->pc = 0x37CCA0u;
            goto label_37cca0;
        }
    }
    ctx->pc = 0x37CB78u;
label_37cb78:
    // 0x37cb78: 0xc0e00c4  jal         func_380310
    ctx->pc = 0x37CB78u;
    SET_GPR_U32(ctx, 31, 0x37CB80u);
    ctx->pc = 0x380310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380310u, 0x37CB78u, 0x37CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB80u;
label_37cb80:
    // 0x37cb80: 0x82232b8e  lb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37cb80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11150)));
    // 0x37cb84: 0x26252b50  addiu       $a1, $s1, 0x2B50
    ctx->pc = 0x37cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37cb88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37cb8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37cb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37cb94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37cb94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37cb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cb9c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x37cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x37cba0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x37cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x37cba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37cba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cba8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37cbac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37cbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37cbb0: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37CBB0u;
    SET_GPR_U32(ctx, 31, 0x37CBB8u);
    ctx->pc = 0x37CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBB0u;
    // 0x37cbb4: 0xe6202b70  swc1        $f0, 0x2B70($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37CBB0u, 0x37CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBB8u;
label_37cbb8:
    // 0x37cbb8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x37cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37cbbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37cbc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37cbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37cbc4: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x37cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x37cbc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37cbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cbcc: 0x0  nop
    ctx->pc = 0x37cbccu;
    // NOP
    // 0x37cbd0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x37cbd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x37cbd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37cbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37cbd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37cbd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37cbdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37cbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x37cbe0: 0x0  nop
    ctx->pc = 0x37cbe0u;
    // NOP
    // 0x37cbe4: 0xa6222b74  sh          $v0, 0x2B74($s1)
    ctx->pc = 0x37cbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11124), (uint16_t)GPR_U32(ctx, 2));
    // 0x37cbe8: 0x92220821  lbu         $v0, 0x821($s1)
    ctx->pc = 0x37cbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37cbec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37cbf0: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37cbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37cbf4: 0x0  nop
    ctx->pc = 0x37cbf4u;
    // NOP
label_37cbf8:
    // 0x37cbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cbfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37cbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc00: 0xc0e01cc  jal         func_380730
    ctx->pc = 0x37CC00u;
    SET_GPR_U32(ctx, 31, 0x37CC08u);
    ctx->pc = 0x37CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC00u;
    // 0x37cc04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380730u, 0x37CC00u, 0x37CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC08u;
label_37cc08:
    // 0x37cc08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37CC08u;
    {
        const bool branch_taken_0x37cc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cc08) {
            ctx->pc = 0x37CC28u;
            goto label_37cc28;
        }
    }
    ctx->pc = 0x37CC10u;
    // 0x37cc10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc18: 0xc0e0250  jal         func_380940
    ctx->pc = 0x37CC18u;
    SET_GPR_U32(ctx, 31, 0x37CC20u);
    ctx->pc = 0x37CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC18u;
    // 0x37cc1c: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380940u, 0x37CC18u, 0x37CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC20u;
label_37cc20:
    // 0x37cc20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x37CC20u;
    {
        const bool branch_taken_0x37cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cc20) {
            ctx->pc = 0x37CCA0u;
            goto label_37cca0;
        }
    }
    ctx->pc = 0x37CC28u;
label_37cc28:
    // 0x37cc28: 0xc0dfe30  jal         func_37F8C0
    ctx->pc = 0x37CC28u;
    SET_GPR_U32(ctx, 31, 0x37CC30u);
    ctx->pc = 0x37CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC28u;
    // 0x37cc2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F8C0u, 0x37CC28u, 0x37CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC30u;
label_37cc30:
    // 0x37cc30: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x37CC30u;
    {
        const bool branch_taken_0x37cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC30u;
        // 0x37cc34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cc30) {
            ctx->pc = 0x37CCA0u;
            goto label_37cca0;
        }
    }
    ctx->pc = 0x37CC38u;
    // 0x37cc38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x37CC38u;
    {
        const bool branch_taken_0x37cc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC38u;
        // 0x37cc3c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cc38) {
            ctx->pc = 0x37CCA0u;
            goto label_37cca0;
        }
    }
    ctx->pc = 0x37CC40u;
label_37cc40:
    // 0x37cc40: 0x96232b9c  lhu         $v1, 0x2B9C($s1)
    ctx->pc = 0x37cc40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11164)));
    // 0x37cc44: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37CC44u;
    {
        const bool branch_taken_0x37cc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37cc44) {
            ctx->pc = 0x37CCA0u;
            goto label_37cca0;
        }
    }
    ctx->pc = 0x37CC4Cu;
    // 0x37cc4c: 0xc0e02a0  jal         func_380A80
    ctx->pc = 0x37CC4Cu;
    SET_GPR_U32(ctx, 31, 0x37CC54u);
    ctx->pc = 0x380A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A80u, 0x37CC4Cu, 0x37CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC54u;
label_37cc54:
    // 0x37cc54: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x37cc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x37cc58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37cc5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37cc60: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x37cc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37cc64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37cc68: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37cc68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37cc6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37cc6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37cc70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37cc74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc78: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37cc7c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x37cc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37cc80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37CC80u;
    SET_GPR_U32(ctx, 31, 0x37CC88u);
    ctx->pc = 0x37CC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC80u;
    // 0x37cc84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37CC80u, 0x37CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC88u;
label_37cc88:
    // 0x37cc88: 0xc0e0240  jal         func_380900
    ctx->pc = 0x37CC88u;
    SET_GPR_U32(ctx, 31, 0x37CC90u);
    ctx->pc = 0x37CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC88u;
    // 0x37cc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380900u, 0x37CC88u, 0x37CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC90u;
label_37cc90:
    // 0x37cc90: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x37CC90u;
    SET_GPR_U32(ctx, 31, 0x37CC98u);
    ctx->pc = 0x37CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC90u;
    // 0x37cc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x37CC90u, 0x37CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC98u;
label_37cc98:
    // 0x37cc98: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x37cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x37cc9c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37cc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_37cca0:
    // 0x37cca0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37cca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37cca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37cca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37cca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ccac: 0x3e00008  jr          $ra
    ctx->pc = 0x37CCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCACu;
        // 0x37ccb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CCB4u;
}
